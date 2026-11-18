// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 317

// StaticClass @ 14e304070

UClass * __cdecl UInterchangeBaseNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeBaseNode",
               &Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseNode,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeBaseNode>,
               InternalVTableHelperCtorCaller<UInterchangeBaseNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton;
}

// GetAttribute<int> @ 14e394840

bool __thiscall
UInterchangeBaseNode::GetAttribute<int>(UInterchangeBaseNode *this,FString *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<int,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Int32)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<int,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAttribute<float> @ 14e394d40

bool __thiscall
UInterchangeBaseNode::GetAttribute<float>
          (UInterchangeBaseNode *this,FString *param_1,float *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<float,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Float)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<float,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAttribute<double> @ 14e395070

bool __thiscall
UInterchangeBaseNode::GetAttribute<double>
          (UInterchangeBaseNode *this,FString *param_1,double *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<double,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<double,void>::TAttributeHandle<double,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Double)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<double,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAttribute<FString> @ 14e39a360

bool __thiscall
UInterchangeBaseNode::GetAttribute<FString>
          (UInterchangeBaseNode *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::
    TAttributeHandle<FString,void>(&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == String)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FString,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAttribute<bool> @ 14e39aa90

bool __thiscall
UInterchangeBaseNode::GetAttribute<bool>(UInterchangeBaseNode *this,FString *param_1,bool *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<bool,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Bool)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<bool,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAttributeChecked<signed_char> @ 14e39adc0

schar __thiscall
UInterchangeBaseNode::GetAttributeChecked<signed_char>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  schar sVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  schar local_res8 [8];
  FString local_58;
  FString local_48;
  TAttributeHandle<signed_char,void> local_38;
  
  local_res8[0] = '\0';
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      sVar4 = (*pcVar1)();
      return sVar4;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      sVar4 = (*pcVar1)();
      return sVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<signed_char,void>::
  TAttributeHandle<signed_char,void>(&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object)
  ;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39aec8:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      sVar4 = (*pcVar1)();
      return sVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e39aec8;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar5 != Int8) goto LAB_14e39aec8;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<signed_char,void>
                      (local_38.AttributeStorage,&local_38.Key,local_res8);
    if (EVar6 == Operation_Success) goto LAB_14e39af30;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    sVar4 = (*pcVar1)();
    return sVar4;
  }
LAB_14e39af30:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// GetAttributeChecked<unsigned_char> @ 14e39af60

uchar __thiscall
UInterchangeBaseNode::GetAttributeChecked<unsigned_char>
          (UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uchar uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  uchar local_res8 [8];
  FString local_58;
  FString local_48;
  TAttributeHandle<unsigned_char,void> local_38;
  
  local_res8[0] = '\0';
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
  TAttributeHandle<unsigned_char,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39b068:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e39b068;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar5 != UInt8) goto LAB_14e39b068;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<unsigned_char,void>
                      (local_38.AttributeStorage,&local_38.Key,local_res8);
    if (EVar6 == Operation_Success) goto LAB_14e39b0d0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
LAB_14e39b0d0:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// GetAttributeChecked<short> @ 14e39b100

short __thiscall
UInterchangeBaseNode::GetAttributeChecked<short>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  short local_res8 [4];
  FString local_58;
  FString local_48;
  TAttributeHandle<short,void> local_38;
  
  local_res8[0] = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      sVar4 = (*pcVar1)();
      return sVar4;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      sVar4 = (*pcVar1)();
      return sVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<short,void>::TAttributeHandle<short,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39b209:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      sVar4 = (*pcVar1)();
      return sVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e39b209;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar5 != Int16) goto LAB_14e39b209;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<short,void>
                      (local_38.AttributeStorage,&local_38.Key,local_res8);
    if (EVar6 == Operation_Success) goto LAB_14e39b271;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    sVar4 = (*pcVar1)();
    return sVar4;
  }
LAB_14e39b271:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// GetAttributeChecked<unsigned_short> @ 14e39b2a0

ushort __thiscall
UInterchangeBaseNode::GetAttributeChecked<unsigned_short>
          (UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  ushort local_res8 [4];
  FString local_58;
  FString local_48;
  TAttributeHandle<unsigned_short,void> local_38;
  
  local_res8[0] = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_short,void>::
  TAttributeHandle<unsigned_short,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39b3a9:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e39b3a9;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar5 != UInt16) goto LAB_14e39b3a9;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<unsigned_short,void>
                      (local_38.AttributeStorage,&local_38.Key,local_res8);
    if (EVar6 == Operation_Success) goto LAB_14e39b411;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
LAB_14e39b411:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// GetAttributeChecked<int> @ 14e39b440

int __thiscall
UInterchangeBaseNode::GetAttributeChecked<int>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<int,void> local_38;
  
  local_res8[0] = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39b548:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e39b548;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar5 != Int32) goto LAB_14e39b548;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<int,void>
                      (local_38.AttributeStorage,&local_38.Key,local_res8);
    if (EVar6 == Operation_Success) goto LAB_14e39b5b0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
LAB_14e39b5b0:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// GetAttributeChecked<unsigned_int> @ 14e39b5e0

uint __thiscall
UInterchangeBaseNode::GetAttributeChecked<unsigned_int>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  uint local_res8 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<unsigned_int,void> local_38;
  
  local_res8[0] = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_int,void>::
  TAttributeHandle<unsigned_int,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39b6e8:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e39b6e8;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar5 != UInt32) goto LAB_14e39b6e8;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<unsigned_int,void>
                      (local_38.AttributeStorage,&local_38.Key,local_res8);
    if (EVar6 == Operation_Success) goto LAB_14e39b750;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
LAB_14e39b750:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// GetAttributeChecked<float> @ 14e39b780

float __thiscall
UInterchangeBaseNode::GetAttributeChecked<float>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  EAttributeStorageResult EVar5;
  float fVar6;
  float local_res8 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<float,void> local_38;
  
  local_res8[0] = 0.0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39b88b:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e39b88b;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar4 != Float) goto LAB_14e39b88b;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar5 = UE::Interchange::FAttributeStorage::GetAttribute<float,void>
                      (local_38.AttributeStorage,&local_38.Key,local_res8);
    if (EVar5 == Operation_Success) goto LAB_14e39b8f3;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    fVar6 = (float)(*pcVar1)();
    return fVar6;
  }
LAB_14e39b8f3:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// GetAttributeChecked<double> @ 14e39b930

double __thiscall
UInterchangeBaseNode::GetAttributeChecked<double>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  EAttributeStorageResult EVar5;
  double dVar6;
  double local_res8;
  FString local_58;
  FString local_48;
  TAttributeHandle<double,void> local_38;
  
  local_res8 = 0.0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar6 = (double)(*pcVar1)();
      return dVar6;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar6 = (double)(*pcVar1)();
      return dVar6;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<double,void>::TAttributeHandle<double,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39ba3c:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar6 = (double)(*pcVar1)();
      return dVar6;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e39ba3c;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar4 != Double) goto LAB_14e39ba3c;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar5 = UE::Interchange::FAttributeStorage::GetAttribute<double,void>
                      (local_38.AttributeStorage,&local_38.Key,&local_res8);
    if (EVar5 == Operation_Success) goto LAB_14e39baa4;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    dVar6 = (double)(*pcVar1)();
    return dVar6;
  }
LAB_14e39baa4:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8;
}

// GetAttributeChecked<UE::Math::TBox2<float>_> @ 14e39bae0

TBox2<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBox2<float>_>
          (UInterchangeBaseNode *this,TBox2<float> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TBox2<float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TBox2<float>,void> local_28;
  
  (__return_storage_ptr__->Min).field0_0x0 = (TVector2<float>_u_0)0x0;
  (__return_storage_ptr__->Max).field0_0x0 = (TVector2<float>_u_0)0x0;
  *(undefined4 *)&__return_storage_ptr__->bIsValid = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox2<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox2<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox2<float>,void>::
  TAttributeHandle<UE::Math::TBox2<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39bc05:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox2<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39bc05;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Box2f) goto LAB_14e39bc05;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TBox2<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39bc6e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TBox2<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39bc6e:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TBox2<double>_> @ 14e39bcb0

TBox2<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBox2<double>_>
          (UInterchangeBaseNode *this,TBox2<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TBox2<double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TBox2<double>,void> local_28;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&__return_storage_ptr__->bIsValid = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox2<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox2<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox2<double>,void>::
  TAttributeHandle<UE::Math::TBox2<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39bdda:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox2<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39bdda;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Box2D) goto LAB_14e39bdda;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TBox2<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39be43;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TBox2<double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39be43:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TBox<float>_> @ 14e39be80

TBox<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBox<float>_>
          (UInterchangeBaseNode *this,TBox<float> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TBox<float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TBox<float>,void> local_28;
  
  __return_storage_ptr__->IsValid = '\0';
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<float>,void>::
  TAttributeHandle<UE::Math::TBox<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39bf9e:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39bf9e;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Box3f) goto LAB_14e39bf9e;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TBox<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39c007;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TBox<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39c007:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TBox<double>_> @ 14e39c040

TBox<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBox<double>_>
          (UInterchangeBaseNode *this,TBox<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TBox<double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TBox<double>,void> local_28;
  
  __return_storage_ptr__->IsValid = '\0';
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<double>,void>::
  TAttributeHandle<UE::Math::TBox<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39c15e:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBox<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39c15e;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Box3d) goto LAB_14e39c15e;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TBox<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39c1c7;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TBox<double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39c1c7:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TBoxSphereBounds<float,float>_> @ 14e39c200

TBoxSphereBounds<float,float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBoxSphereBounds<float,float>_>
          (UInterchangeBaseNode *this,TBoxSphereBounds<float,float> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TBoxSphereBounds<float,float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void> local_28;
  
  *(undefined8 *)&(__return_storage_ptr__->Origin).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->BoxExtent).field0_0x0 + 4) = 0;
  __return_storage_ptr__->SphereRadius = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<float,float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<float,float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void>
  ::TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39c329:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<float,float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39c329;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != BoxSphereBounds3f) goto LAB_14e39c329;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GetAttribute<UE::Math::TBoxSphereBounds<float,float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39c392;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TBoxSphereBounds<float,float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39c392:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TBoxSphereBounds<double,double>_> @ 14e39c3d0

TBoxSphereBounds<double,double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBoxSphereBounds<double,double>_>
          (UInterchangeBaseNode *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TBoxSphereBounds<double,double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void> local_28;
  
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void>::
  TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39c4fe:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39c4fe;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != BoxSphereBounds3d) goto LAB_14e39c4fe;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GetAttribute<UE::Math::TBoxSphereBounds<double,double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39c567;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39c567:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TIntPoint<int>_> @ 14e39c5a0

TIntPoint<int> __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TIntPoint<int>_>
          (UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TIntPoint<int> TVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TIntPoint<int>,void> local_28;
  
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
      return (TIntPoint<int>)TVar5.field0_0x0;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
      return (TIntPoint<int>)TVar5.field0_0x0;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntPoint<int>,void>::
  TAttributeHandle<UE::Math::TIntPoint<int>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39c6bf:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
      return (TIntPoint<int>)TVar5.field0_0x0;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39c6bf;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != IntPoint) goto LAB_14e39c6bf;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TIntPoint<int>,void>
                      (local_28.AttributeStorage,&local_28.Key,(TIntPoint<int> *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e39c728;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
    return (TIntPoint<int>)TVar5.field0_0x0;
  }
LAB_14e39c728:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetAttributeChecked<UE::Math::TIntRect<int>_> @ 14e39c760

TIntRect<int> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TIntRect<int>_>
          (UInterchangeBaseNode *this,TIntRect<int> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TIntRect<int> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TIntRect<int>,void> local_28;
  
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TIntRect<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TIntRect<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntRect<int>,void>::
  TAttributeHandle<UE::Math::TIntRect<int>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39c881:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TIntRect<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39c881;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != IntRect) goto LAB_14e39c881;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TIntRect<int>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39c8ea;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TIntRect<int> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39c8ea:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TIntVector3<int>_> @ 14e39c920

TIntVector3<int> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TIntVector3<int>_>
          (UInterchangeBaseNode *this,TIntVector3<int> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TIntVector3<int> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TIntVector3<int>,void> local_28;
  
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TIntVector3<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TIntVector3<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntVector3<int>,void>::
  TAttributeHandle<UE::Math::TIntVector3<int>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39ca42:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TIntVector3<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39ca42;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != IntVector) goto LAB_14e39ca42;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TIntVector3<int>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39caab;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TIntVector3<int> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39caab:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TMatrix<float>_> @ 14e39cae0

TMatrix<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TMatrix<float>_>
          (UInterchangeBaseNode *this,TMatrix<float> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TMatrix<float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TMatrix<float>,void> local_28;
  
  *(float *)((longlong)(__return_storage_ptr__->M + 0) + 0) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 0) + 4) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 0) + 8) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 0) + 0xc) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 1) + 0) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 1) + 4) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 1) + 8) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 1) + 0xc) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 2) + 0) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 2) + 4) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 2) + 8) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 2) + 0xc) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 3) + 0) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 3) + 4) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 3) + 8) = 0.0;
  *(float *)((longlong)(__return_storage_ptr__->M + 3) + 0xc) = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TMatrix<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TMatrix<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<float>,void>::
  TAttributeHandle<UE::Math::TMatrix<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39cc0c:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TMatrix<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39cc0c;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Matrix44f) goto LAB_14e39cc0c;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TMatrix<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39cc75;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TMatrix<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39cc75:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TMatrix<double>_> @ 14e39ccb0

TMatrix<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TMatrix<double>_>
          (UInterchangeBaseNode *this,TMatrix<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TMatrix<double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TMatrix<double>,void> local_28;
  
  __return_storage_ptr__->M[0][0] = 0.0;
  __return_storage_ptr__->M[0][1] = 0.0;
  __return_storage_ptr__->M[0][2] = 0.0;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][0] = 0.0;
  __return_storage_ptr__->M[1][1] = 0.0;
  __return_storage_ptr__->M[1][2] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][0] = 0.0;
  __return_storage_ptr__->M[2][1] = 0.0;
  __return_storage_ptr__->M[2][2] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = 0.0;
  __return_storage_ptr__->M[3][3] = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TMatrix<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TMatrix<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>::
  TAttributeHandle<UE::Math::TMatrix<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39cdec:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TMatrix<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39cdec;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Matrix44d) goto LAB_14e39cdec;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TMatrix<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39ce55;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TMatrix<double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39ce55:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TPlane<float>_> @ 14e39ce90

TPlane<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TPlane<float>_>
          (UInterchangeBaseNode *this,TPlane<float> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TPlane<float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TPlane<float>,void> local_28;
  
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->W = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPlane<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPlane<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TPlane<float>,void>::
  TAttributeHandle<UE::Math::TPlane<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39cfb0:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPlane<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39cfb0;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Plane4f) goto LAB_14e39cfb0;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TPlane<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39d019;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TPlane<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39d019:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TPlane<double>_> @ 14e39d050

TPlane<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TPlane<double>_>
          (UInterchangeBaseNode *this,TPlane<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TPlane<double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TPlane<double>,void> local_28;
  
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->W = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPlane<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPlane<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TPlane<double>,void>::
  TAttributeHandle<UE::Math::TPlane<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39d174:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TPlane<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39d174;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Plane4d) goto LAB_14e39d174;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TPlane<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39d1dd;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TPlane<double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39d1dd:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TQuat<float>_> @ 14e39d210

TQuat<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TQuat<float>_>
          (UInterchangeBaseNode *this,TQuat<float> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TQuat<float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TQuat<float>,void> local_28;
  
  __return_storage_ptr__->X = 0.0;
  __return_storage_ptr__->Y = 0.0;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->W = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TQuat<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TQuat<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TQuat<float>,void>::
  TAttributeHandle<UE::Math::TQuat<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39d330:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TQuat<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39d330;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Quat4f) goto LAB_14e39d330;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TQuat<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39d399;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TQuat<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39d399:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TQuat<double>_> @ 14e39d3d0

TQuat<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TQuat<double>_>
          (UInterchangeBaseNode *this,TQuat<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TQuat<double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TQuat<double>,void> local_28;
  
  __return_storage_ptr__->X = 0.0;
  __return_storage_ptr__->Y = 0.0;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->W = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TQuat<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TQuat<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TQuat<double>,void>::
  TAttributeHandle<UE::Math::TQuat<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39d4f4:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TQuat<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39d4f4;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Quat4d) goto LAB_14e39d4f4;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TQuat<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39d55d;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TQuat<double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39d55d:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TRotator<float>_> @ 14e39d590

TRotator<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TRotator<float>_>
          (UInterchangeBaseNode *this,TRotator<float> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TRotator<float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TRotator<float>,void> local_28;
  
  __return_storage_ptr__->Pitch = 0.0;
  __return_storage_ptr__->Yaw = 0.0;
  __return_storage_ptr__->Roll = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TRotator<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TRotator<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TRotator<float>,void>::
  TAttributeHandle<UE::Math::TRotator<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39d6b2:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TRotator<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39d6b2;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Rotator3f) goto LAB_14e39d6b2;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TRotator<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39d71b;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TRotator<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39d71b:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TRotator<double>_> @ 14e39d750

TRotator<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TRotator<double>_>
          (UInterchangeBaseNode *this,TRotator<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TRotator<double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TRotator<double>,void> local_28;
  
  __return_storage_ptr__->Pitch = 0.0;
  __return_storage_ptr__->Yaw = 0.0;
  __return_storage_ptr__->Roll = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TRotator<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TRotator<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TRotator<double>,void>::
  TAttributeHandle<UE::Math::TRotator<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39d876:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TRotator<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39d876;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Rotator3d) goto LAB_14e39d876;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TRotator<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39d8df;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TRotator<double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39d8df:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TSphere<float>_> @ 14e39d920

TSphere<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TSphere<float>_>
          (UInterchangeBaseNode *this,TSphere<float> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TSphere<float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TSphere<float>,void> local_28;
  
  *(undefined8 *)&(__return_storage_ptr__->Center).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Center).field0_0x0 + 8) = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSphere<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSphere<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TSphere<float>,void>::
  TAttributeHandle<UE::Math::TSphere<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39da40:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSphere<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39da40;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Sphere3f) goto LAB_14e39da40;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TSphere<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39daa9;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSphere<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39daa9:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TSphere<double>_> @ 14e39dae0

TSphere<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TSphere<double>_>
          (UInterchangeBaseNode *this,TSphere<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TSphere<double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TSphere<double>,void> local_28;
  
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->W = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSphere<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSphere<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TSphere<double>,void>::
  TAttributeHandle<UE::Math::TSphere<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39dc04:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSphere<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39dc04;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Sphere3d) goto LAB_14e39dc04;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TSphere<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39dc6d;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSphere<double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39dc6d:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TTransform<float>_> @ 14e39dca0

TTransform<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TTransform<float>_>
          (UInterchangeBaseNode *this,TTransform<float> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TTransform<float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TTransform<float>,void> local_28;
  
  __return_storage_ptr__->Rotation = GlobalVectorConstants::Float0001;
  __return_storage_ptr__->Translation = GlobalVectorConstants::FloatZero;
  __return_storage_ptr__->Scale3D = GlobalVectorConstants::Float1110;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTransform<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTransform<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<float>,void>::
  TAttributeHandle<UE::Math::TTransform<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39ddda:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTransform<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39ddda;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Transform3f) goto LAB_14e39ddda;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TTransform<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39de43;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TTransform<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39de43:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TTransform<double>_> @ 14e39de80

TTransform<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TTransform<double>_>
          (UInterchangeBaseNode *this,TTransform<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  bool bVar6;
  EAttributeTypes EVar7;
  TTransform<double> *pTVar8;
  EAttributeStorageResult EVar9;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TTransform<double>,void> local_28;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar4;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar5 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TTransform<double> *)(*pcVar1)();
      return pTVar8;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TTransform<double> *)(*pcVar1)();
      return pTVar8;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<double>,void>::
  TAttributeHandle<UE::Math::TTransform<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39dfe1:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TTransform<double> *)(*pcVar1)();
      return pTVar8;
    }
  }
  else {
    bVar6 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar6) goto LAB_14e39dfe1;
    EVar7 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar7 != Transform3d) goto LAB_14e39dfe1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar9 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TTransform<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar9 == Operation_Success) goto LAB_14e39e04a;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TTransform<double> *)(*pcVar1)();
    return pTVar8;
  }
LAB_14e39e04a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TVector2<float>_> @ 14e39e080

TVector2<float> __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector2<float>_>
          (UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TVector2<float> TVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TVector2<float>,void> local_28;
  
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar5.field0_0x0;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar5.field0_0x0;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<float>,void>::
  TAttributeHandle<UE::Math::TVector2<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39e19f:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar5.field0_0x0;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39e19f;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector2f) goto LAB_14e39e19f;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TVector2<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,(TVector2<float> *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e39e208;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
    return (TVector2<float>)TVar5.field0_0x0;
  }
LAB_14e39e208:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetAttributeChecked<UE::Math::TVector2<double>_> @ 14e39e240

TVector2<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector2<double>_>
          (UInterchangeBaseNode *this,TVector2<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TVector2<double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TVector2<double>,void> local_28;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<double>,void>::
  TAttributeHandle<UE::Math::TVector2<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39e360:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39e360;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector2d) goto LAB_14e39e360;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TVector2<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39e3c9;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TVector2<double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39e3c9:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TVector4<float>_> @ 14e39e400

TVector4<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector4<float>_>
          (UInterchangeBaseNode *this,TVector4<float> *__return_storage_ptr__,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  EAttributeTypes EVar5;
  TVector4<float> *pTVar6;
  EAttributeStorageResult EVar7;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TVector4<float>,void> local_28;
  
  lVar1 = this->_padding_;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  pcVar2 = *(code **)(lVar1 + 0x2c0);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  cVar3 = (*pcVar2)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector4<float> *)(*pcVar2)();
      return pTVar6;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector4<float> *)(*pcVar2)();
      return pTVar6;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector4<float>,void>::
  TAttributeHandle<UE::Math::TVector4<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39e528:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector4<float> *)(*pcVar2)();
      return pTVar6;
    }
  }
  else {
    bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar4) goto LAB_14e39e528;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar5 != Vector4f) goto LAB_14e39e528;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TVector4<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar7 == Operation_Success) goto LAB_14e39e591;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TVector4<float> *)(*pcVar2)();
    return pTVar6;
  }
LAB_14e39e591:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TVector4<double>_> @ 14e39e5d0

TVector4<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector4<double>_>
          (UInterchangeBaseNode *this,TVector4<double> *__return_storage_ptr__,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  EAttributeTypes EVar5;
  TVector4<double> *pTVar6;
  EAttributeStorageResult EVar7;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TVector4<double>,void> local_28;
  
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  lVar1 = this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  pcVar2 = *(code **)(lVar1 + 0x2c0);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  cVar3 = (*pcVar2)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector4<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector4<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector4<double>,void>::
  TAttributeHandle<UE::Math::TVector4<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39e703:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector4<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  else {
    bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar4) goto LAB_14e39e703;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar5 != Vector4d) goto LAB_14e39e703;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TVector4<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar7 == Operation_Success) goto LAB_14e39e76c;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TVector4<double> *)(*pcVar2)();
    return pTVar6;
  }
LAB_14e39e76c:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TVector<float>_> @ 14e39e7a0

TVector<float> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector<float>_>
          (UInterchangeBaseNode *this,TVector<float> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TVector<float> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TVector<float>,void> local_28;
  
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<float>,void>::
  TAttributeHandle<UE::Math::TVector<float>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39e8c2:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39e8c2;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector3f) goto LAB_14e39e8c2;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TVector<float>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39e92b;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TVector<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39e92b:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<UE::Math::TVector<double>_> @ 14e39e960

TVector<double> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector<double>_>
          (UInterchangeBaseNode *this,TVector<double> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TVector<double> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TVector<double>,void> local_28;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>::
  TAttributeHandle<UE::Math::TVector<double>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39ea86:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39ea86;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector3d) goto LAB_14e39ea86;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TVector<double>,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39eaef;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TVector<double> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e39eaef:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<FColor> @ 14e39eb30

FColor __thiscall
UInterchangeBaseNode::GetAttributeChecked<FColor>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FColor_u_0 FVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FColor,void> local_28;
  
  *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar4._s_0;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar4._s_0;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FColor,void>::TAttributeHandle<FColor,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39ec4e:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar4._s_0;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39ec4e;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar5 != Color) goto LAB_14e39ec4e;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FColor,void>
                      (local_28.AttributeStorage,&local_28.Key,(FColor *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e39ecb7;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    FVar4.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar4._s_0;
  }
LAB_14e39ecb7:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (FColor)SUB84(param_1,0);
}

// GetAttributeChecked<FDateTime> @ 14e39ecf0

FDateTime __thiscall
UInterchangeBaseNode::GetAttributeChecked<FDateTime>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FDateTime FVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FDateTime,void> local_28;
  
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5.Ticks = (*pcVar1)();
      return (FDateTime)FVar5.Ticks;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5.Ticks = (*pcVar1)();
      return (FDateTime)FVar5.Ticks;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FDateTime,void>::
  TAttributeHandle<FDateTime,void>(&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39ee0d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5.Ticks = (*pcVar1)();
      return (FDateTime)FVar5.Ticks;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39ee0d;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != DateTime) goto LAB_14e39ee0d;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FDateTime,void>
                      (local_28.AttributeStorage,&local_28.Key,(FDateTime *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e39ee76;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    FVar5.Ticks = (*pcVar1)();
    return (FDateTime)FVar5.Ticks;
  }
LAB_14e39ee76:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (FDateTime)(long64)param_1;
}

// GetAttributeChecked<FFrameNumber> @ 14e39eeb0

FFrameNumber __thiscall
UInterchangeBaseNode::GetAttributeChecked<FFrameNumber>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FFrameNumber,void> local_28;
  
  *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return (FFrameNumber)iVar4;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return (FFrameNumber)iVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameNumber,void>::
  TAttributeHandle<FFrameNumber,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39efcd:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return (FFrameNumber)iVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39efcd;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar5 != FrameNumber) goto LAB_14e39efcd;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FFrameNumber,void>
                      (local_28.AttributeStorage,&local_28.Key,(FFrameNumber *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e39f036;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return (FFrameNumber)iVar4;
  }
LAB_14e39f036:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (FFrameNumber)(int)param_1;
}

// GetAttributeChecked<FFrameRate> @ 14e39f070

FFrameRate __thiscall
UInterchangeBaseNode::GetAttributeChecked<FFrameRate>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FFrameRate FVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FFrameRate,void> local_28;
  
  *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = 60000;
  *(undefined4 *)((longlong)&(param_1->Data).AllocatorInstance.Data + 4) = 1;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FFrameRate)(*pcVar1)();
      return FVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FFrameRate)(*pcVar1)();
      return FVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameRate,void>::
  TAttributeHandle<FFrameRate,void>(&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39f197:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FFrameRate)(*pcVar1)();
      return FVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39f197;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != FrameRate) goto LAB_14e39f197;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FFrameRate,void>
                      (local_28.AttributeStorage,&local_28.Key,(FFrameRate *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e39f200;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    FVar5 = (FFrameRate)(*pcVar1)();
    return FVar5;
  }
LAB_14e39f200:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (FFrameRate)param_1;
}

// GetAttributeChecked<FFrameTime> @ 14e39f240

FFrameTime __thiscall
UInterchangeBaseNode::GetAttributeChecked<FFrameTime>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FFrameTime FVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FFrameTime,void> local_28;
  
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FFrameTime)(*pcVar1)();
      return FVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FFrameTime)(*pcVar1)();
      return FVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameTime,void>::
  TAttributeHandle<FFrameTime,void>(&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39f35d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FFrameTime)(*pcVar1)();
      return FVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39f35d;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != FrameTime) goto LAB_14e39f35d;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FFrameTime,void>
                      (local_28.AttributeStorage,&local_28.Key,(FFrameTime *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e39f3c6;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    FVar5 = (FFrameTime)(*pcVar1)();
    return FVar5;
  }
LAB_14e39f3c6:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (FFrameTime)param_1;
}

// GetAttributeChecked<FGuid> @ 14e39f400

FGuid * __thiscall
UInterchangeBaseNode::GetAttributeChecked<FGuid>
          (UInterchangeBaseNode *this,FGuid *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FGuid *pFVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<FGuid,void> local_28;
  
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FGuid *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FGuid *)(*pcVar1)();
      return pFVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FGuid,void>::TAttributeHandle<FGuid,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39f521:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FGuid *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39f521;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Guid) goto LAB_14e39f521;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FGuid,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39f58a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FGuid *)(*pcVar1)();
    return pFVar5;
  }
LAB_14e39f58a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<FLinearColor> @ 14e39f5c0

FLinearColor * __thiscall
UInterchangeBaseNode::GetAttributeChecked<FLinearColor>
          (UInterchangeBaseNode *this,FLinearColor *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FLinearColor *pFVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<FLinearColor,void> local_28;
  
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar1)();
      return pFVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::
  TAttributeHandle<FLinearColor,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39f6e0:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39f6e0;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != LinearColor) goto LAB_14e39f6e0;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FLinearColor,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39f749;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLinearColor *)(*pcVar1)();
    return pFVar5;
  }
LAB_14e39f749:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<FOrientedBox> @ 14e39f780

FOrientedBox * __thiscall
UInterchangeBaseNode::GetAttributeChecked<FOrientedBox>
          (UInterchangeBaseNode *this,FOrientedBox *__return_storage_ptr__,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  EAttributeTypes EVar5;
  FOrientedBox *pFVar6;
  EAttributeStorageResult EVar7;
  FString local_48;
  FString local_38;
  TAttributeHandle<FOrientedBox,void> local_28;
  
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z = 1.0;
  __return_storage_ptr__->ExtentX = 1.0;
  __return_storage_ptr__->ExtentY = 1.0;
  __return_storage_ptr__->ExtentZ = 1.0;
  lVar1 = this->_padding_;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = 0.0;
  pcVar2 = *(code **)(lVar1 + 0x2c0);
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Y = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  cVar3 = (*pcVar2)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FOrientedBox *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FOrientedBox *)(*pcVar2)();
      return pFVar6;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FOrientedBox,void>::
  TAttributeHandle<FOrientedBox,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39f8df:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FOrientedBox *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar4) goto LAB_14e39f8df;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar5 != OrientedBox) goto LAB_14e39f8df;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<FOrientedBox,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar7 == Operation_Success) goto LAB_14e39f948;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FOrientedBox *)(*pcVar2)();
    return pFVar6;
  }
LAB_14e39f948:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<FRandomStream> @ 14e39f980

FRandomStream __thiscall
UInterchangeBaseNode::GetAttributeChecked<FRandomStream>
          (UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FRandomStream FVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FRandomStream,void> local_28;
  
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FRandomStream)(*pcVar1)();
      return FVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FRandomStream)(*pcVar1)();
      return FVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FRandomStream,void>::
  TAttributeHandle<FRandomStream,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39fa9d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FRandomStream)(*pcVar1)();
      return FVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39fa9d;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != RandomStream) goto LAB_14e39fa9d;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FRandomStream,void>
                      (local_28.AttributeStorage,&local_28.Key,(FRandomStream *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e39fb06;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    FVar5 = (FRandomStream)(*pcVar1)();
    return FVar5;
  }
LAB_14e39fb06:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (FRandomStream)param_1;
}

// GetAttributeChecked<FSoftObjectPath> @ 14e39fb40

FSoftObjectPath * __thiscall
UInterchangeBaseNode::GetAttributeChecked<FSoftObjectPath>
          (UInterchangeBaseNode *this,FSoftObjectPath *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FSoftObjectPath *pFVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<FSoftObjectPath,void> local_28;
  
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FSoftObjectPath *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FSoftObjectPath *)(*pcVar1)();
      return pFVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FSoftObjectPath,void>::
  TAttributeHandle<FSoftObjectPath,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39fc69:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FSoftObjectPath *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39fc69;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != SoftObjectPath) goto LAB_14e39fc69;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FSoftObjectPath,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e39fcd2;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FSoftObjectPath *)(*pcVar1)();
    return pFVar5;
  }
LAB_14e39fcd2:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<FTimespan> @ 14e39fd10

FTimespan __thiscall
UInterchangeBaseNode::GetAttributeChecked<FTimespan>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FTimespan FVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FTimespan,void> local_28;
  
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5.Ticks = (*pcVar1)();
      return (FTimespan)FVar5.Ticks;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5.Ticks = (*pcVar1)();
      return (FTimespan)FVar5.Ticks;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FTimespan,void>::
  TAttributeHandle<FTimespan,void>(&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e39fe2d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5.Ticks = (*pcVar1)();
      return (FTimespan)FVar5.Ticks;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e39fe2d;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Timespan) goto LAB_14e39fe2d;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FTimespan,void>
                      (local_28.AttributeStorage,&local_28.Key,(FTimespan *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e39fe96;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    FVar5.Ticks = (*pcVar1)();
    return (FTimespan)FVar5.Ticks;
  }
LAB_14e39fe96:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (FTimespan)(long64)param_1;
}

// GetAttributeChecked<FTwoVectors> @ 14e39fed0

FTwoVectors * __thiscall
UInterchangeBaseNode::GetAttributeChecked<FTwoVectors>
          (UInterchangeBaseNode *this,FTwoVectors *__return_storage_ptr__,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  EAttributeTypes EVar5;
  FTwoVectors *pFVar6;
  EAttributeStorageResult EVar7;
  FString local_48;
  FString local_38;
  TAttributeHandle<FTwoVectors,void> local_28;
  
  lVar1 = this->_padding_;
  (__return_storage_ptr__->v1).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->v1).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->v1).field0_0x0._s_0.Z = 0.0;
  pcVar2 = *(code **)(lVar1 + 0x2c0);
  (__return_storage_ptr__->v2).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->v2).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->v2).field0_0x0._s_0.Z = 0.0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  cVar3 = (*pcVar2)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTwoVectors *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTwoVectors *)(*pcVar2)();
      return pFVar6;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FTwoVectors,void>::
  TAttributeHandle<FTwoVectors,void>(&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object)
  ;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a0001:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTwoVectors *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar4) goto LAB_14e3a0001;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar5 != TwoVectors) goto LAB_14e3a0001;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<FTwoVectors,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar7 == Operation_Success) goto LAB_14e3a006a;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FTwoVectors *)(*pcVar2)();
    return pFVar6;
  }
LAB_14e3a006a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<FVector2DHalf> @ 14e3a00a0

FVector2DHalf __thiscall
UInterchangeBaseNode::GetAttributeChecked<FVector2DHalf>
          (UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FVector2DHalf FVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FVector2DHalf,void> local_28;
  
  *(undefined4 *)&(param_1->Data).AllocatorInstance.Data = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FVector2DHalf)(*pcVar1)();
      return FVar4;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FVector2DHalf)(*pcVar1)();
      return FVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FVector2DHalf,void>::
  TAttributeHandle<FVector2DHalf,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a01bd:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FVector2DHalf)(*pcVar1)();
      return FVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a01bd;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar5 != Vector2DHalf) goto LAB_14e3a01bd;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FVector2DHalf,void>
                      (local_28.AttributeStorage,&local_28.Key,(FVector2DHalf *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e3a0226;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FVector2DHalf)(*pcVar1)();
    return FVar4;
  }
LAB_14e3a0226:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return SUB84(param_1,0);
}

// GetAttributeChecked<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e3a0260

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a0381:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a0381;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != ByteArray) goto LAB_14e3a0381;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a03ea;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a03ea:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 14e3a0420

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (UInterchangeBaseNode *this,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *__return_storage_ptr__,FString *param_1
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void>::
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a0545:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a0545;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != ByteArray64) goto LAB_14e3a0545;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a05ae;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a05ae:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<short,TSizedDefaultAllocator<32>_>_> @ 14e3a05f0

TArray<short,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<short,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<short,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<short,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<short,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a0711:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<short,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a0711;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Int16Array) goto LAB_14e3a0711;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<short,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a077a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<short,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a077a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14e3a07b0

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a08d1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a08d1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != UInt16Array) goto LAB_14e3a08d1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a093a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a093a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e3a0970

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<int,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void>
  ::TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a0a91:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a0a91;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Int32Array) goto LAB_14e3a0a91;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a0afa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a0afa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14e3a0b30

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a0c51:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a0c51;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != UInt32Array) goto LAB_14e3a0c51;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a0cba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a0cba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e3a0cf0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<float,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a0e11:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a0e11;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != FloatArray) goto LAB_14e3a0e11;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a0e7a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a0e7a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e3a0eb0

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<double,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a0fd1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a0fd1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != DoubleArray) goto LAB_14e3a0fd1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<double,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a103a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a103a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a1070

TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a1191:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a1191;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Box2fArray) goto LAB_14e3a1191;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a11fa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a11fa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a1230

TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a1351:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a1351;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Box2DArray) goto LAB_14e3a1351;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a13ba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a13ba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a13f0

TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a1511:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a1511;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Box3fArray) goto LAB_14e3a1511;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a157a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a157a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a15b0

TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a16d1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a16d1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Box3dArray) goto LAB_14e3a16d1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a173a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a173a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_> @ 14e3a1770

TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
  local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
  ::
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a1891:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a1891;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != BoxSphereBounds3fArray) goto LAB_14e3a1891;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a18fa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *)
             (*pcVar1)();
    return pTVar5;
  }
LAB_14e3a18fa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_> @ 14e3a1930

TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
  local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
  ::
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a1a51:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a1a51;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != BoxSphereBounds3dArray) goto LAB_14e3a1a51;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a1aba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *)
             (*pcVar1)();
    return pTVar5;
  }
LAB_14e3a1aba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14e3a1af0

TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a1c11:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a1c11;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != IntPointArray) goto LAB_14e3a1c11;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a1c7a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a1c7a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> @ 14e3a1cb0

TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a1dd1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a1dd1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != IntRectArray) goto LAB_14e3a1dd1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a1e3a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a1e3a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e3a1e70

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a1f91:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a1f91;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != IntVectorArray) goto LAB_14e3a1f91;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a1ffa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a1ffa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a2030

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a2151:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a2151;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Matrix44fArray) goto LAB_14e3a2151;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a21ba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a21ba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a21f0

TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a2311:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a2311;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Matrix44dArray) goto LAB_14e3a2311;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a237a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a237a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a23b0

TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a24d1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a24d1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Plane4fArray) goto LAB_14e3a24d1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a253a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a253a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a2570

TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a2691:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a2691;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Plane4dArray) goto LAB_14e3a2691;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a26fa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a26fa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a2730

TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a2851:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a2851;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Quat4fArray) goto LAB_14e3a2851;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a28ba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a28ba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a28f0

TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a2a11:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a2a11;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Quat4dArray) goto LAB_14e3a2a11;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a2a7a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a2a7a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a2ab0

TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a2bd1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a2bd1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Rotator3fArray) goto LAB_14e3a2bd1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a2c3a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a2c3a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a2c70

TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a2d91:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a2d91;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Rotator3dArray) goto LAB_14e3a2d91;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a2dfa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a2dfa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a2e30

TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a2f51:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a2f51;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Sphere3fArray) goto LAB_14e3a2f51;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a2fba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a2fba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a2ff0

TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a3111:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a3111;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Sphere3dArray) goto LAB_14e3a3111;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a317a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a317a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a31b0

TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a32d1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a32d1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Transform3fArray) goto LAB_14e3a32d1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a333a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a333a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a3370

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a3491:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a3491;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Transform3dArray) goto LAB_14e3a3491;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a34fa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a34fa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a3530

TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a3651:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a3651;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector2fArray) goto LAB_14e3a3651;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a36ba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a36ba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a36f0

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a3811:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a3811;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector2dArray) goto LAB_14e3a3811;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a387a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a387a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a38b0

TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a39d1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a39d1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector4fArray) goto LAB_14e3a39d1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a3a3a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a3a3a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a3a70

TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a3b91:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a3b91;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector4dArray) goto LAB_14e3a3b91;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a3bfa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a3bfa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e3a3c30

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a3d51:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a3d51;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector3fArray) goto LAB_14e3a3d51;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a3dba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a3dba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e3a3df0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::
GetAttributeChecked<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a3f11:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a3f11;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector3dArray) goto LAB_14e3a3f11;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a3f7a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a3f7a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14e3a3fb0

TArray<FColor,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a40d1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a40d1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != ColorArray) goto LAB_14e3a40d1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a413a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a413a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FDateTime,TSizedDefaultAllocator<32>_>_> @ 14e3a4170

TArray<FDateTime,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FDateTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FDateTime,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FDateTime,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FDateTime,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a4291:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FDateTime,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a4291;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != DateTimeArray) goto LAB_14e3a4291;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a42fa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FDateTime,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a42fa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 14e3a4330

TArray<FFrameNumber,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a4451:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a4451;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != FrameNumberArray) goto LAB_14e3a4451;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a44ba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a44ba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_> @ 14e3a44f0

TArray<FFrameRate,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FFrameRate,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FFrameRate,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFrameRate,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFrameRate,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a4611:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFrameRate,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a4611;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != FrameRateArray) goto LAB_14e3a4611;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a467a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FFrameRate,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a467a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_> @ 14e3a46b0

TArray<FFrameTime,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FFrameTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FFrameTime,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFrameTime,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFrameTime,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a47d1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFrameTime,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a47d1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != FrameTimeArray) goto LAB_14e3a47d1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a483a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FFrameTime,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a483a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14e3a4870

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a4991:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a4991;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != GuidArray) goto LAB_14e3a4991;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a49fa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a49fa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e3a4a30

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a4b51:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a4b51;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != LinearColorArray) goto LAB_14e3a4b51;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a4bba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a4bba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_> @ 14e3a4bf0

TArray<FOrientedBox,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a4d11:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a4d11;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != OrientedBoxArray) goto LAB_14e3a4d11;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a4d7a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a4d7a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_> @ 14e3a4db0

TArray<FRandomStream,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FRandomStream,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FRandomStream,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FRandomStream,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FRandomStream,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a4ed1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FRandomStream,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a4ed1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != RandomStreamArray) goto LAB_14e3a4ed1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a4f3a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FRandomStream,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a4f3a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 14e3a4f70

TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a5091:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a5091;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != SoftObjectPathArray) goto LAB_14e3a5091;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a50fa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a50fa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FTimespan,TSizedDefaultAllocator<32>_>_> @ 14e3a5130

TArray<FTimespan,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FTimespan,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FTimespan,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FTimespan,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FTimespan,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a5251:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FTimespan,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a5251;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != TimespanArray) goto LAB_14e3a5251;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a52ba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FTimespan,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a52ba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_> @ 14e3a52f0

TArray<FTwoVectors,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a5411:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a5411;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != TwoVectorsArray) goto LAB_14e3a5411;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a547a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a547a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_> @ 14e3a54b0

TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a55d1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a55d1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Vector2DHalfArray) goto LAB_14e3a55d1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a563a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a563a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FFloat16,TSizedDefaultAllocator<32>_>_> @ 14e3a5670

TArray<FFloat16,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FFloat16,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFloat16,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFloat16,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a5791:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FFloat16,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a5791;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Float16Array) goto LAB_14e3a5791;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a57fa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FFloat16,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a57fa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e3a5830

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a5951:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a5951;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != NameArray) goto LAB_14e3a5951;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a59ba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a59ba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e3a59f0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a5b11:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a5b11;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != StringArray) goto LAB_14e3a5b11;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a5b7a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a5b7a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14e3a5bb0

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a5cd1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a5cd1;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Int64Array) goto LAB_14e3a5cd1;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a5d3a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a5d3a:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14e3a5d70

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a5e91:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a5e91;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != UInt64Array) goto LAB_14e3a5e91;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a5efa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a5efa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e3a5f30

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNode::GetAttributeChecked<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  UE::Interchange::FAttributeStorage::
  TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void>::
  TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a6051:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a6051;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != BoolArray) goto LAB_14e3a6051;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::
            GenericArrayGetAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a60ba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14e3a60ba:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<FFloat16> @ 14e3a60f0

FFloat16 __thiscall
UInterchangeBaseNode::GetAttributeChecked<FFloat16>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FFloat16,void> local_28;
  
  *(undefined2 *)&(param_1->Data).AllocatorInstance.Data = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (FFloat16)uVar4;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (FFloat16)uVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FFloat16,void>::
  TAttributeHandle<FFloat16,void>(&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a620e:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (FFloat16)uVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a620e;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar5 != Float16) goto LAB_14e3a620e;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FFloat16,void>
                      (local_28.AttributeStorage,&local_28.Key,(FFloat16 *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e3a6277;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (FFloat16)uVar4;
  }
LAB_14e3a6277:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (FFloat16)(ushort)param_1;
}

// GetAttributeChecked<FName> @ 14e3a62b0

FName __thiscall
UInterchangeBaseNode::GetAttributeChecked<FName>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FName FVar5;
  EAttributeStorageResult EVar6;
  FString *in_R8;
  FString local_48;
  FString local_38;
  TAttributeHandle<FName,void> local_28;
  
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,in_R8);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FName)(*pcVar1)();
      return FVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,in_R8);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FName)(*pcVar1)();
      return FVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FName,void>::TAttributeHandle<FName,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a63cd:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FName)(*pcVar1)();
      return FVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a63cd;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != Name) goto LAB_14e3a63cd;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FName,void>
                      (local_28.AttributeStorage,&local_28.Key,(FName *)param_1);
    if (EVar6 == Operation_Success) goto LAB_14e3a6436;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    FVar5 = (FName)(*pcVar1)();
    return FVar5;
  }
LAB_14e3a6436:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GetAttributeChecked<FString> @ 14e3a6470

FString * __thiscall
UInterchangeBaseNode::GetAttributeChecked<FString>
          (UInterchangeBaseNode *this,FString *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FString *pFVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a6591:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e3a6591;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar4 != String) goto LAB_14e3a6591;
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FString,void>
                      (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
    if (EVar6 == Operation_Success) goto LAB_14e3a65fa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
LAB_14e3a65fa:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeChecked<__int64> @ 14e3a6630

long64 __thiscall
UInterchangeBaseNode::GetAttributeChecked<__int64>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  long64 lVar5;
  EAttributeStorageResult EVar6;
  long64 local_res8;
  FString local_58;
  FString local_48;
  TAttributeHandle<__int64,void> local_38;
  
  local_res8 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      lVar5 = (*pcVar1)();
      return lVar5;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      lVar5 = (*pcVar1)();
      return lVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<__int64,void>::TAttributeHandle<__int64,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a6738:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      lVar5 = (*pcVar1)();
      return lVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e3a6738;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar4 != Int64) goto LAB_14e3a6738;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<__int64,void>
                      (local_38.AttributeStorage,&local_38.Key,&local_res8);
    if (EVar6 == Operation_Success) goto LAB_14e3a67a0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
LAB_14e3a67a0:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8;
}

// GetAttributeChecked<unsigned___int64> @ 14e3a67d0

ulong64 __thiscall
UInterchangeBaseNode::GetAttributeChecked<unsigned___int64>
          (UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  ulong64 uVar5;
  EAttributeStorageResult EVar6;
  ulong64 local_res8;
  FString local_58;
  FString local_48;
  TAttributeHandle<unsigned___int64,void> local_38;
  
  local_res8 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned___int64,void>::
  TAttributeHandle<unsigned___int64,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a68d8:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e3a68d8;
    EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar4 != UInt64) goto LAB_14e3a68d8;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<unsigned___int64,void>
                      (local_38.AttributeStorage,&local_38.Key,&local_res8);
    if (EVar6 == Operation_Success) goto LAB_14e3a6940;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
LAB_14e3a6940:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8;
}

// GetAttributeChecked<bool> @ 14e3a6970

bool __thiscall
UInterchangeBaseNode::GetAttributeChecked<bool>(UInterchangeBaseNode *this,FString *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  TAttributeHandle<bool,void> local_38;
  
  local_res8[0] = false;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_58,param_1);
  cVar2 = (*pcVar1)(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(UE::Interchange::FAttributeKey(NodeAttributeKey))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x197,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::operator=(&local_48,param_1);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
            (&local_38,(FAttributeKey *)&local_48,(this->Attributes).Object);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e3a6a78:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                       ,0x199,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (!bVar3) goto LAB_14e3a6a78;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_38.AttributeStorage,&local_38.Key);
    if (EVar5 != Bool) goto LAB_14e3a6a78;
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<bool,void>
                      (local_38.AttributeStorage,&local_38.Key,local_res8);
    if (EVar6 == Operation_Success) goto LAB_14e3a6ae0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handle.Get(Value) == UE::Interchange::EAttributeStorageResult::Operation_Success"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNode.h"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
LAB_14e3a6ae0:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// RegisterAttribute<signed_char> @ 14e3b8110

TAttributeHandle<signed_char,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<signed_char>
          (UInterchangeBaseNode *this,TAttributeHandle<signed_char,void> *__return_storage_ptr__,
          FAttributeKey *param_1,schar *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<signed_char,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<signed_char,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<signed_char,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<signed_char,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<signed_char,void>::
    TAttributeHandle<signed_char,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<unsigned_char> @ 14e3b83f0

TAttributeHandle<unsigned_char,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<unsigned_char>
          (UInterchangeBaseNode *this,TAttributeHandle<unsigned_char,void> *__return_storage_ptr__,
          FAttributeKey *param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<unsigned_char,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<unsigned_char,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<unsigned_char,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<short> @ 14e3b86d0

TAttributeHandle<short,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<short>
          (UInterchangeBaseNode *this,TAttributeHandle<short,void> *__return_storage_ptr__,
          FAttributeKey *param_1,short *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<short,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<short,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<short,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<short,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<short,void>::TAttributeHandle<short,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<unsigned_short> @ 14e3b89b0

TAttributeHandle<unsigned_short,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<unsigned_short>
          (UInterchangeBaseNode *this,TAttributeHandle<unsigned_short,void> *__return_storage_ptr__,
          FAttributeKey *param_1,ushort *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<unsigned_short,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<unsigned_short,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_short,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<unsigned_short,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_short,void>::
    TAttributeHandle<unsigned_short,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<int> @ 14e3b8c90

TAttributeHandle<int,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<int>
          (UInterchangeBaseNode *this,TAttributeHandle<int,void> *__return_storage_ptr__,
          FAttributeKey *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<int,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<int,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<int,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<unsigned_int> @ 14e3b8f70

TAttributeHandle<unsigned_int,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<unsigned_int>
          (UInterchangeBaseNode *this,TAttributeHandle<unsigned_int,void> *__return_storage_ptr__,
          FAttributeKey *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<unsigned_int,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<unsigned_int,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_int,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<unsigned_int,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_int,void>::
    TAttributeHandle<unsigned_int,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<float> @ 14e3b9250

TAttributeHandle<float,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<float>
          (UInterchangeBaseNode *this,TAttributeHandle<float,void> *__return_storage_ptr__,
          FAttributeKey *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<float,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<float,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<float,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<double> @ 14e3b9530

TAttributeHandle<double,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<double>
          (UInterchangeBaseNode *this,TAttributeHandle<double,void> *__return_storage_ptr__,
          FAttributeKey *param_1,double *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<double,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<double,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<double,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<double,void>::TAttributeHandle<double,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TBox2<float>_> @ 14e3b9810

TAttributeHandle<UE::Math::TBox2<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TBox2<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TBox2<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TBox2<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TBox2<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TBox2<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TBox2<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TBox2<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox2<float>,void>::
    TAttributeHandle<UE::Math::TBox2<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TBox2<double>_> @ 14e3b9b00

TAttributeHandle<UE::Math::TBox2<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TBox2<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TBox2<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TBox2<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TBox2<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TBox2<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TBox2<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TBox2<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox2<double>,void>::
    TAttributeHandle<UE::Math::TBox2<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TBox<float>_> @ 14e3b9df0

TAttributeHandle<UE::Math::TBox<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TBox<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TBox<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TBox<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TBox<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TBox<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TBox<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TBox<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<float>,void>::
    TAttributeHandle<UE::Math::TBox<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TBox<double>_> @ 14e3ba0e0

TAttributeHandle<UE::Math::TBox<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TBox<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TBox<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TBox<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TBox<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TBox<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TBox<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TBox<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TBox<double>,void>::
    TAttributeHandle<UE::Math::TBox<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TBoxSphereBounds<float,float>_> @ 14e3ba3d0

TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TBoxSphereBounds<float,float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TBoxSphereBounds<float,float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<UE::Math::TBoxSphereBounds<float,float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void>::
    TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TBoxSphereBounds<double,double>_> @ 14e3ba6c0

TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TBoxSphereBounds<double,double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TBoxSphereBounds<double,double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<UE::Math::TBoxSphereBounds<double,double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void>::
    TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TIntPoint<int>_> @ 14e3ba9b0

TAttributeHandle<UE::Math::TIntPoint<int>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TIntPoint<int>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TIntPoint<int>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TIntPoint<int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TIntPoint<int>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TIntPoint<int>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TIntPoint<int>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TIntPoint<int>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntPoint<int>,void>::
    TAttributeHandle<UE::Math::TIntPoint<int>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TIntRect<int>_> @ 14e3bac90

TAttributeHandle<UE::Math::TIntRect<int>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TIntRect<int>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TIntRect<int>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TIntRect<int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TIntRect<int>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TIntRect<int>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TIntRect<int>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TIntRect<int>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntRect<int>,void>::
    TAttributeHandle<UE::Math::TIntRect<int>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TIntVector3<int>_> @ 14e3baf70

TAttributeHandle<UE::Math::TIntVector3<int>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TIntVector3<int>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TIntVector3<int>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TIntVector3<int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TIntVector3<int>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TIntVector3<int>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TIntVector3<int>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TIntVector3<int>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TIntVector3<int>,void>::
    TAttributeHandle<UE::Math::TIntVector3<int>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TMatrix<float>_> @ 14e3bb250

TAttributeHandle<UE::Math::TMatrix<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TMatrix<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TMatrix<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TMatrix<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TMatrix<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TMatrix<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TMatrix<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TMatrix<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<float>,void>::
    TAttributeHandle<UE::Math::TMatrix<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TMatrix<double>_> @ 14e3bb540

TAttributeHandle<UE::Math::TMatrix<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TMatrix<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TMatrix<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TMatrix<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TMatrix<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TMatrix<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TMatrix<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TMatrix<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>::
    TAttributeHandle<UE::Math::TMatrix<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TPlane<float>_> @ 14e3bb840

TAttributeHandle<UE::Math::TPlane<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TPlane<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TPlane<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TPlane<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TPlane<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TPlane<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TPlane<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TPlane<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TPlane<float>,void>::
    TAttributeHandle<UE::Math::TPlane<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TPlane<double>_> @ 14e3bbb20

TAttributeHandle<UE::Math::TPlane<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TPlane<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TPlane<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TPlane<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TPlane<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TPlane<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TPlane<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TPlane<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TPlane<double>,void>::
    TAttributeHandle<UE::Math::TPlane<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TQuat<float>_> @ 14e3bbe00

TAttributeHandle<UE::Math::TQuat<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TQuat<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TQuat<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TQuat<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TQuat<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TQuat<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TQuat<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TQuat<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TQuat<float>,void>::
    TAttributeHandle<UE::Math::TQuat<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TQuat<double>_> @ 14e3bc0e0

TAttributeHandle<UE::Math::TQuat<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TQuat<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TQuat<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TQuat<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TQuat<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TQuat<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TQuat<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TQuat<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TQuat<double>,void>::
    TAttributeHandle<UE::Math::TQuat<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TRotator<float>_> @ 14e3bc3c0

TAttributeHandle<UE::Math::TRotator<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TRotator<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TRotator<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TRotator<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TRotator<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TRotator<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TRotator<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TRotator<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TRotator<float>,void>::
    TAttributeHandle<UE::Math::TRotator<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TRotator<double>_> @ 14e3bc6a0

TAttributeHandle<UE::Math::TRotator<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TRotator<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TRotator<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TRotator<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TRotator<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TRotator<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TRotator<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TRotator<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TRotator<double>,void>::
    TAttributeHandle<UE::Math::TRotator<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TSphere<float>_> @ 14e3bc990

TAttributeHandle<UE::Math::TSphere<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TSphere<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TSphere<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TSphere<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TSphere<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TSphere<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TSphere<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TSphere<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TSphere<float>,void>::
    TAttributeHandle<UE::Math::TSphere<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TSphere<double>_> @ 14e3bcc70

TAttributeHandle<UE::Math::TSphere<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TSphere<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TSphere<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TSphere<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TSphere<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TSphere<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TSphere<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TSphere<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TSphere<double>,void>::
    TAttributeHandle<UE::Math::TSphere<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TTransform<float>_> @ 14e3bcf50

TAttributeHandle<UE::Math::TTransform<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TTransform<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TTransform<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TTransform<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TTransform<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TTransform<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TTransform<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<float>,void>::
    TAttributeHandle<UE::Math::TTransform<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TTransform<double>_> @ 14e3bd240

TAttributeHandle<UE::Math::TTransform<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TTransform<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TTransform<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TTransform<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TTransform<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TTransform<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TTransform<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TTransform<double>,void>::
    TAttributeHandle<UE::Math::TTransform<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TVector2<float>_> @ 14e3bd540

TAttributeHandle<UE::Math::TVector2<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector2<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TVector2<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TVector2<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TVector2<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TVector2<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TVector2<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TVector2<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<float>,void>::
    TAttributeHandle<UE::Math::TVector2<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TVector2<double>_> @ 14e3bd820

TAttributeHandle<UE::Math::TVector2<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector2<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TVector2<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TVector2<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TVector2<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TVector2<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TVector2<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TVector2<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<double>,void>::
    TAttributeHandle<UE::Math::TVector2<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TVector4<float>_> @ 14e3bdb00

TAttributeHandle<UE::Math::TVector4<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector4<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TVector4<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TVector4<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TVector4<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TVector4<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TVector4<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TVector4<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector4<float>,void>::
    TAttributeHandle<UE::Math::TVector4<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TVector4<double>_> @ 14e3bdde0

TAttributeHandle<UE::Math::TVector4<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector4<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TVector4<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TVector4<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TVector4<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TVector4<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TVector4<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TVector4<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector4<double>,void>::
    TAttributeHandle<UE::Math::TVector4<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TVector<float>_> @ 14e3be0c0

TAttributeHandle<UE::Math::TVector<float>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector<float>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TVector<float>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TVector<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TVector<float>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TVector<float>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TVector<float>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TVector<float>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<float>,void>::
    TAttributeHandle<UE::Math::TVector<float>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<UE::Math::TVector<double>_> @ 14e3be3a0

TAttributeHandle<UE::Math::TVector<double>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector<double>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<UE::Math::TVector<double>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<UE::Math::TVector<double>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<UE::Math::TVector<double>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TVector<double>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<UE::Math::TVector<double>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>::
    TAttributeHandle<UE::Math::TVector<double>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FColor> @ 14e3be690

TAttributeHandle<FColor,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FColor>
          (UInterchangeBaseNode *this,TAttributeHandle<FColor,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FColor *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FColor,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FColor,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FColor,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FColor,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FColor,void>::TAttributeHandle<FColor,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FDateTime> @ 14e3be970

TAttributeHandle<FDateTime,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FDateTime>
          (UInterchangeBaseNode *this,TAttributeHandle<FDateTime,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FDateTime *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FDateTime,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FDateTime,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FDateTime,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FDateTime,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FDateTime,void>::
    TAttributeHandle<FDateTime,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FFrameNumber> @ 14e3bec50

TAttributeHandle<FFrameNumber,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FFrameNumber>
          (UInterchangeBaseNode *this,TAttributeHandle<FFrameNumber,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FFrameNumber *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FFrameNumber,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FFrameNumber,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FFrameNumber,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FFrameNumber,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameNumber,void>::
    TAttributeHandle<FFrameNumber,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FFrameRate> @ 14e3bef30

TAttributeHandle<FFrameRate,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FFrameRate>
          (UInterchangeBaseNode *this,TAttributeHandle<FFrameRate,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FFrameRate *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FFrameRate,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FFrameRate,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FFrameRate,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FFrameRate,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameRate,void>::
    TAttributeHandle<FFrameRate,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FFrameTime> @ 14e3bf210

TAttributeHandle<FFrameTime,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FFrameTime>
          (UInterchangeBaseNode *this,TAttributeHandle<FFrameTime,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FFrameTime *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FFrameTime,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FFrameTime,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FFrameTime,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FFrameTime,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FFrameTime,void>::
    TAttributeHandle<FFrameTime,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FGuid> @ 14e3bf4f0

TAttributeHandle<FGuid,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FGuid>
          (UInterchangeBaseNode *this,TAttributeHandle<FGuid,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FGuid,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FGuid,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FGuid,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FGuid,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FGuid,void>::TAttributeHandle<FGuid,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FLinearColor> @ 14e3bf7d0

TAttributeHandle<FLinearColor,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FLinearColor>
          (UInterchangeBaseNode *this,TAttributeHandle<FLinearColor,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FLinearColor *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FLinearColor,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FLinearColor,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FLinearColor,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FLinearColor,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::
    TAttributeHandle<FLinearColor,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FOrientedBox> @ 14e3bfab0

TAttributeHandle<FOrientedBox,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FOrientedBox>
          (UInterchangeBaseNode *this,TAttributeHandle<FOrientedBox,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FOrientedBox *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FOrientedBox,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FOrientedBox,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FOrientedBox,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FOrientedBox,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FOrientedBox,void>::
    TAttributeHandle<FOrientedBox,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FRandomStream> @ 14e3bfdb0

TAttributeHandle<FRandomStream,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FRandomStream>
          (UInterchangeBaseNode *this,TAttributeHandle<FRandomStream,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FRandomStream *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FRandomStream,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FRandomStream,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FRandomStream,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FRandomStream,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FRandomStream,void>::
    TAttributeHandle<FRandomStream,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FSoftObjectPath> @ 14e3c0090

TAttributeHandle<FSoftObjectPath,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FSoftObjectPath>
          (UInterchangeBaseNode *this,TAttributeHandle<FSoftObjectPath,void> *__return_storage_ptr__
          ,FAttributeKey *param_1,FSoftObjectPath *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FSoftObjectPath,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FSoftObjectPath,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FSoftObjectPath,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FSoftObjectPath,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FSoftObjectPath,void>::
    TAttributeHandle<FSoftObjectPath,void>(__return_storage_ptr__,param_1,(this->Attributes).Object)
    ;
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FTimespan> @ 14e3c03a0

TAttributeHandle<FTimespan,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FTimespan>
          (UInterchangeBaseNode *this,TAttributeHandle<FTimespan,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FTimespan *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FTimespan,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FTimespan,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FTimespan,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FTimespan,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FTimespan,void>::
    TAttributeHandle<FTimespan,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FTwoVectors> @ 14e3c0680

TAttributeHandle<FTwoVectors,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FTwoVectors>
          (UInterchangeBaseNode *this,TAttributeHandle<FTwoVectors,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FTwoVectors *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FTwoVectors,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FTwoVectors,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FTwoVectors,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FTwoVectors,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FTwoVectors,void>::
    TAttributeHandle<FTwoVectors,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FVector2DHalf> @ 14e3c0970

TAttributeHandle<FVector2DHalf,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FVector2DHalf>
          (UInterchangeBaseNode *this,TAttributeHandle<FVector2DHalf,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FVector2DHalf *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FVector2DHalf,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FVector2DHalf,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FVector2DHalf,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FVector2DHalf,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FVector2DHalf,void>::
    TAttributeHandle<FVector2DHalf,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e3c0e90

TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 14e3c11d0

TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void>::
    TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<short,TSizedDefaultAllocator<32>_>_> @ 14e3c1510

TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<short,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TArray<short,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<short,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14e3c1850

TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e3c1b90

TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<int,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14e3c1ed0

TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e3c2210

TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<float,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e3c2550

TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<double,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<double,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c2890

TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c2bd0

TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void> *
               )(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c2f10

TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void> *
                 )(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c3250

TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_> @ 14e3c3590

TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void> *
__thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
  *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
    ::
    TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_> @ 14e3c38d0

TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
* __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
  *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
    ::
    TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14e3c3c10

TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> @ 14e3c3f50

TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void> *
               )(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e3c4290

TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c45d0

TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c4910

TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c4c50

TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void> *
               )(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c4f90

TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c52d0

TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c5610

TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void> *
               )(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c5950

TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c5c90

TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c5fd0

TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c6310

TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c6650

TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c6990

TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c6cd0

TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c7010

TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c7350

TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c7690

TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e3c79d0

TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e3c7d10

TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::
RegisterAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14e3c8050

TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TArray<FColor,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_> @ 14e3c8390

TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FDateTime,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)()
        ;
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 14e3c86d0

TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_> @ 14e3c8a10

TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FFrameRate,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_> @ 14e3c8d50

TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FFrameTime,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14e3c9090

TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e3c93d0

TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_> @ 14e3c9710

TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_> @ 14e3c9a50

TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FRandomStream,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 14e3c9d90

TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_> @ 14e3ca1e0

TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FTimespan,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)()
        ;
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_> @ 14e3ca520

TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_> @ 14e3ca860

TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_> @ 14e3cabb0

TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e3caef0

TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FName,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e3cb340

TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__
          ,FAttributeKey *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<FString,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14e3cb780

TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__
          ,FAttributeKey *param_1,TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14e3cbac0

TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void>
          *__return_storage_ptr__,FAttributeKey *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void> *)
                 (*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e3cbe00

TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *this,
          TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void> *__return_storage_ptr__,
          FAttributeKey *param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::
          RegisterAttribute<TArray<bool,TSizedDefaultAllocator<32>_>,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::
    TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void>::
    TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FFloat16> @ 14e3cc1a0

TAttributeHandle<FFloat16,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FFloat16>
          (UInterchangeBaseNode *this,TAttributeHandle<FFloat16,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FFloat16 *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FFloat16,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FFloat16,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FFloat16,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FFloat16,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FFloat16,void>::
    TAttributeHandle<FFloat16,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FName> @ 14e3cc480

TAttributeHandle<FName,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FName>
          (UInterchangeBaseNode *this,TAttributeHandle<FName,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FName,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FName,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FName,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FName,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FName,void>::TAttributeHandle<FName,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<FString> @ 14e3cc790

TAttributeHandle<FString,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<FString>
          (UInterchangeBaseNode *this,TAttributeHandle<FString,void> *__return_storage_ptr__,
          FAttributeKey *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<FString,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<FString,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<FString,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::
    TAttributeHandle<FString,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<__int64> @ 14e3cca90

TAttributeHandle<__int64,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<__int64>
          (UInterchangeBaseNode *this,TAttributeHandle<__int64,void> *__return_storage_ptr__,
          FAttributeKey *param_1,long64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<__int64,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<__int64,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<__int64,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<__int64,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<__int64,void>::
    TAttributeHandle<__int64,void>(__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<unsigned___int64> @ 14e3ccd70

TAttributeHandle<unsigned___int64,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<unsigned___int64>
          (UInterchangeBaseNode *this,
          TAttributeHandle<unsigned___int64,void> *__return_storage_ptr__,FAttributeKey *param_1,
          ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<unsigned___int64,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<unsigned___int64,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned___int64,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<unsigned___int64,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned___int64,void>::
    TAttributeHandle<unsigned___int64,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// RegisterAttribute<bool> @ 14e3cd050

TAttributeHandle<bool,void> * __thiscall
UInterchangeBaseNode::RegisterAttribute<bool>
          (UInterchangeBaseNode *this,TAttributeHandle<bool,void> *__return_storage_ptr__,
          FAttributeKey *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttributeHandle<bool,void> *pTVar3;
  EAttributeStorageResult EVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAttributeHandle<bool,void> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((this->Attributes).Object,param_1,param_2,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_28,&param_1->Key);
    pFVar5 = ::FString::FString(&local_18,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar5,(FAttributeKey *)&local_28);
    __return_storage_ptr__->AttributeStorage = (FAttributeStorage *)0x0;
    (__return_storage_ptr__->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Key).Key.Data.ArrayNum = 0;
    (__return_storage_ptr__->Key).Key.Data.ArrayMax = 0;
  }
  else {
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAttributeHandle<bool,void> *)(*pcVar1)();
        return pTVar3;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
              (__return_storage_ptr__,param_1,(this->Attributes).Object);
  }
  return __return_storage_ptr__;
}

// SetAttribute<FString> @ 14e3e0560

bool __thiscall
UInterchangeBaseNode::SetAttribute<FString>
          (UInterchangeBaseNode *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<FString>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == String) {
        bVar1 = true;
        goto LAB_14e3e05dc;
      }
    }
  }
  bVar1 = false;
LAB_14e3e05dc:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SetAttribute<bool> @ 14e3e0ab0

bool __thiscall
UInterchangeBaseNode::SetAttribute<bool>(UInterchangeBaseNode *this,FString *param_1,bool *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<bool,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<bool>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == Bool) {
        bVar1 = true;
        goto LAB_14e3e0b2d;
      }
    }
  }
  bVar1 = false;
LAB_14e3e0b2d:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// UInterchangeBaseNode @ 14e400ab0

UInterchangeBaseNode * __thiscall
UInterchangeBaseNode::UInterchangeBaseNode(UInterchangeBaseNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeBaseNode__6B_;
  (this->Attributes).Object = (FAttributeStorage *)0x0;
  (this->Attributes).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsInitialized = false;
  (this->TargetNodes).Attributes.Object = (FAttributeStorage *)0x0;
  (this->TargetNodes).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TargetNodes).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetNodes).KeyCount.Key.Data.ArrayNum = 0;
  (this->TargetNodes).KeyCount.Key.Data.ArrayMax = 0;
  return this;
}

// UInterchangeBaseNode @ 14e400b00

UInterchangeBaseNode * __thiscall
UInterchangeBaseNode::UInterchangeBaseNode(UInterchangeBaseNode *this)

{
  TSharedPtr<UE::Interchange::FAttributeStorage,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::Interchange::FAttributeStorage,1> *pTVar4;
  FString *pFVar5;
  UInterchangeBaseNode *pUVar6;
  EAttributeStorageResult EVar7;
  bool local_res8 [8];
  uchar local_res10 [8];
  TSharedPtr<UE::Interchange::FAttributeStorage,1> local_b8;
  TAttributeHandle<bool,void> local_a8;
  TAttributeHandle<unsigned_char,void> local_90;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UInterchangeBaseNode__6B_;
  pTVar1 = &this->Attributes;
  pTVar1->Object = (FAttributeStorage *)0x0;
  (this->Attributes).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TargetNodes).Attributes.Object = (FAttributeStorage *)0x0;
  (this->TargetNodes).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TargetNodes).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetNodes).KeyCount.Key.Data.ArrayNum = 0;
  (this->TargetNodes).KeyCount.Key.Data.ArrayMax = 0;
  this->bIsInitialized = false;
  pTVar4 = MakeShared<UE::Interchange::FAttributeStorage,1>(&local_78);
  local_b8.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  local_b8.Object = pTVar4->Object;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != &local_b8) {
    pTVar1->Object = local_b8.Object;
    local_b8.Object = (FAttributeStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Attributes).SharedReferenceCount,&local_b8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::AttributeKey.Key.Data.ArrayNum = 0;
      ::AttributeKey.Key.Data.ArrayMax = 0;
      ::FString::operator=(&::AttributeKey.Key,L"__TARGET_ASSET_IDS_");
      atexit(`UE::Interchange::FBaseNodeStaticData::TargetAssetIDsKey'::__l2::
             _dynamic_atexit_destructor_for__AttributeKey__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->TargetNodes,pTVar1,&::AttributeKey.Key);
  local_res8[0] = true;
  pFVar5 = &UE::Interchange::FBaseNodeStaticData::IsEnabledKey()->Key;
  if (pTVar1->Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UInterchangeBaseNode *)(*pcVar2)();
      return pUVar6;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (pTVar1->Object,(FAttributeKey *)pFVar5,local_res8,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_68,pFVar5);
    pFVar5 = ::FString::FString(&local_48,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_68);
    local_a8.AttributeStorage = (FAttributeStorage *)0x0;
    local_a8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Key.Key.Data.ArrayNum = 0;
    local_a8.Key.Key.Data.ArrayMax = 0;
  }
  else {
    if (pTVar1->Object == (FAttributeStorage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UInterchangeBaseNode *)(*pcVar2)();
        return pUVar6;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
              (&local_a8,(FAttributeKey *)pFVar5,pTVar1->Object);
  }
  if (local_a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Key.Key.Data.AllocatorInstance.Data);
  }
  local_res10[0] = '\0';
  pFVar5 = &UE::Interchange::FBaseNodeStaticData::NodeContainerTypeKey()->Key;
  if (pTVar1->Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UInterchangeBaseNode *)(*pcVar2)();
      return pUVar6;
    }
  }
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (pTVar1->Object,(FAttributeKey *)pFVar5,local_res10,None);
  if ((EVar7 & Operation_Success) == None) {
    ::FString::FString(&local_58,pFVar5);
    pFVar5 = ::FString::FString(&local_38,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_58);
    local_90.AttributeStorage = (FAttributeStorage *)0x0;
    local_90.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Key.Key.Data.ArrayNum = 0;
    local_90.Key.Key.Data.ArrayMax = 0;
  }
  else {
    if (pTVar1->Object == (FAttributeStorage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UInterchangeBaseNode *)(*pcVar2)();
        return pUVar6;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_90,(FAttributeKey *)pFVar5,pTVar1->Object);
  }
  if (local_90.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Key.Key.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterchangeBaseNode @ 14e404960

void __thiscall UInterchangeBaseNode::~UInterchangeBaseNode(UInterchangeBaseNode *this)

{
  this->_padding_ = (longlong)&___7UInterchangeBaseNode__6B_;
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>
            (&this->TargetNodes);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Attributes).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// AddBooleanAttribute @ 14e40e7e0

bool __thiscall
UInterchangeBaseNode::AddBooleanAttribute(UInterchangeBaseNode *this,FString *param_1,bool *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<bool,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<bool>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == Bool) {
        bVar1 = true;
        goto LAB_14e40e85d;
      }
    }
  }
  bVar1 = false;
LAB_14e40e85d:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddDoubleAttribute @ 14e40e880

bool __thiscall
UInterchangeBaseNode::AddDoubleAttribute
          (UInterchangeBaseNode *this,FString *param_1,double *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<double,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<double>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == Double) {
        bVar1 = true;
        goto LAB_14e40e8fc;
      }
    }
  }
  bVar1 = false;
LAB_14e40e8fc:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddFloatAttribute @ 14e40e930

bool __thiscall
UInterchangeBaseNode::AddFloatAttribute(UInterchangeBaseNode *this,FString *param_1,float *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<float,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<float>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == Float) {
        bVar1 = true;
        goto LAB_14e40e9ac;
      }
    }
  }
  bVar1 = false;
LAB_14e40e9ac:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddGuidAttribute @ 14e40e9d0

bool __thiscall
UInterchangeBaseNode::AddGuidAttribute(UInterchangeBaseNode *this,FString *param_1,FGuid *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<FGuid,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<FGuid>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == Guid) {
        bVar1 = true;
        goto LAB_14e40ea4c;
      }
    }
  }
  bVar1 = false;
LAB_14e40ea4c:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddInt32Attribute @ 14e40ea70

bool __thiscall
UInterchangeBaseNode::AddInt32Attribute(UInterchangeBaseNode *this,FString *param_1,int *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<int,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<int>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == Int32) {
        bVar1 = true;
        goto LAB_14e40eaec;
      }
    }
  }
  bVar1 = false;
LAB_14e40eaec:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddLinearColorAttribute @ 14e40f850

bool __thiscall
UInterchangeBaseNode::AddLinearColorAttribute
          (UInterchangeBaseNode *this,FString *param_1,FLinearColor *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<FLinearColor,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<FLinearColor>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == LinearColor) {
        bVar1 = true;
        goto LAB_14e40f8cc;
      }
    }
  }
  bVar1 = false;
LAB_14e40f8cc:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddStringAttribute @ 14e40fa50

bool __thiscall
UInterchangeBaseNode::AddStringAttribute
          (UInterchangeBaseNode *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<FString>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == String) {
        bVar1 = true;
        goto LAB_14e40facc;
      }
    }
  }
  bVar1 = false;
LAB_14e40facc:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AddTargetNodeUid @ 14e40faf0

bool __thiscall UInterchangeBaseNode::AddTargetNodeUid(UInterchangeBaseNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->TargetNodes,param_1);
  return bVar1;
}

// AddVector2Attribute @ 14e40fda0

bool __thiscall
UInterchangeBaseNode::AddVector2Attribute
          (UInterchangeBaseNode *this,FString *param_1,TVector2<float> *param_2)

{
  bool bVar1;
  EAttributeTypes EVar2;
  FString local_38;
  TAttributeHandle<UE::Math::TVector2<float>,void> local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::operator=(&local_38,param_1);
  RegisterAttribute<UE::Math::TVector2<float>_>(this,&local_28,(FAttributeKey *)&local_38,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar1 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar1) {
      EVar2 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar2 == Vector2f) {
        bVar1 = true;
        goto LAB_14e40fe1c;
      }
    }
  }
  bVar1 = false;
LAB_14e40fe1c:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AppendAssetRegistryTags @ 14e410150

void __thiscall
UInterchangeBaseNode::AppendAssetRegistryTags
          (UInterchangeBaseNode *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// AppendAssetRegistryTags @ 14e410160

void __thiscall
UInterchangeBaseNode::AppendAssetRegistryTags
          (UInterchangeBaseNode *this,FAssetRegistryTagsContext param_1)

{
  return;
}

// CompareNodeStorage @ 14e4174b0

void __cdecl
UInterchangeBaseNode::CompareNodeStorage
          (UInterchangeBaseNode *param_1,UInterchangeBaseNode *param_2,
          TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_5)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_2->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_2->Attributes).Object;
  if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Interchange::FAttributeStorage::CompareStorage
            ((param_1->Attributes).Object,pFVar1,param_3,param_4,param_5);
  return;
}

// CopyStorage @ 14e418450

void __cdecl
UInterchangeBaseNode::CopyStorage(UInterchangeBaseNode *param_1,UInterchangeBaseNode *param_2)

{
  FAttributeStorage *pFVar1;
  FAttributeStorage *this;
  code *pcVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  bool bVar3;
  
  if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->Attributes).Object;
  if ((param_2->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = (param_2->Attributes).Object;
  lpCriticalSection = &this->StorageMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &pFVar1->StorageMutex;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (this != pFVar1) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&(this->AttributeAllocationTable).field_0x38,
                   (int *)&(this->AttributeAllocationTable).field_0x48,
                   (ForElementType<FSetElementId> *)&(pFVar1->AttributeAllocationTable).field_0x38,
                   *(int *)&(pFVar1->AttributeAllocationTable).field_0x48);
        TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,(TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)pFVar1);
      }
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=
                (&this->AttributeStorage,&pFVar1->AttributeStorage);
      this->FragmentedMemoryCost = pFVar1->FragmentedMemoryCost;
      this->DefragRatio = pFVar1->DefragRatio;
      this->AllocationCount = pFVar1->AllocationCount;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
                    /* WARNING: Could not recover jumptable at 0x00014e41855a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CopyStorageAttributes @ 14e418590

void __cdecl
UInterchangeBaseNode::CopyStorageAttributes
          (FAttributeStorage *param_1,UInterchangeBaseNode *param_2,
          TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Interchange::CopyStorageAttributesInternal<UE::Interchange::FAttributeKey>
            (param_1,(param_2->Attributes).Object,param_3);
  return;
}

// CopyStorageAttributes @ 14e418600

void __cdecl
UInterchangeBaseNode::CopyStorageAttributes
          (UInterchangeBaseNode *param_1,FAttributeStorage *param_2,
          TArray<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Interchange::
  CopyStorageAttributesInternal<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeKey>_>
            ((param_1->Attributes).Object,param_2,param_3);
  return;
}

// CopyStorageAttributes @ 14e418670

void __cdecl
UInterchangeBaseNode::CopyStorageAttributes
          (UInterchangeBaseNode *param_1,FAttributeStorage *param_2,
          TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Interchange::CopyStorageAttributesInternal<UE::Interchange::FAttributeKey>
            ((param_1->Attributes).Object,param_2,param_3);
  return;
}

// CopyStorageAttributes @ 14e4186e0

void __cdecl
UInterchangeBaseNode::CopyStorageAttributes
          (UInterchangeBaseNode *param_1,UInterchangeBaseNode *param_2,
          TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_3)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_2->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_2->Attributes).Object;
  if ((param_1->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Interchange::CopyStorageAttributesInternal<UE::Interchange::FAttributeKey>
            ((param_1->Attributes).Object,pFVar1,param_3);
  return;
}

// GetAssetName @ 14e438810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UInterchangeBaseNode::GetAssetName(UInterchangeBaseNode *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  FAttributeStorage *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  EAttributeTypes EVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  FAttributeKey *pFVar11;
  size_t sVar12;
  wchar_t *pwVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  wchar_t *pwVar17;
  undefined1 auStack_1f8 [32];
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  TAttributeHandle<FString,void> local_1a8;
  FString local_190;
  FString local_180;
  FString local_170;
  FGuid local_158;
  FScriptContainerElement local_148 [128];
  ForAnyElementType local_c8;
  FScriptContainerElement *local_c0;
  int local_b8;
  FMD5 local_a8;
  FGuid local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  GetDisplayLabel(this,__return_storage_ptr__);
  pwVar17 = L"";
  if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar4)();
    return pFVar10;
  }
  pFVar2 = (this->Attributes).Object;
  pFVar11 = UE::Interchange::FBaseNodeStaticData::AssetNameKey();
  bVar6 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar2,pFVar11);
  iVar14 = 0;
  if (bVar6) {
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar4)();
      return pFVar10;
    }
    pFVar2 = (this->Attributes).Object;
    pFVar11 = UE::Interchange::FBaseNodeStaticData::AssetNameKey();
    UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::
    TAttributeHandle<FString,void>(&local_1a8,pFVar11,pFVar2);
    if (((local_1a8.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar6 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_1a8.AttributeStorage,&local_1a8.Key), bVar6)) &&
       (EVar7 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_1a8.AttributeStorage,&local_1a8.Key), EVar7 == String)) {
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      if (local_1a8.AttributeStorage != (FAttributeStorage *)0x0) {
        UE::Interchange::FAttributeStorage::GetAttribute<FString,void>
                  (local_1a8.AttributeStorage,&local_1a8.Key,&local_1c8);
      }
      FVar5.Data = local_1c8.Data.AllocatorInstance.Data;
      iVar15 = local_1c8.Data.ArrayNum + -1;
      if (local_1c8.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AssignRange
                (__return_storage_ptr__,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar15);
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
    }
    if (local_1a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  iVar15 = (__return_storage_ptr__->Data).ArrayNum;
  iVar8 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar8 = 0;
  }
  if (iVar8 < 0x101) {
    return __return_storage_ptr__;
  }
  local_c8.Data = (FScriptContainerElement *)0x0;
  if (iVar15 == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)pwVar13 == (FScriptContainerElement *)0x0) {
      local_c0 = (FScriptContainerElement *)0x0;
      local_b8 = 0;
      goto LAB_14e438a19;
    }
  }
  sVar12 = wcslen(pwVar13);
  local_b8 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar13,(int)sVar12);
  uVar1 = local_b8 + 1;
  uVar16 = uVar1;
  if (uVar1 < 0x81) {
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      uVar16 = 0;
      goto LAB_14e4389dd;
    }
  }
  else {
LAB_14e4389dd:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar16,1);
  }
  local_c0 = local_148;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    local_c0 = local_c8.Data;
  }
  UE::Core::Private::Convert((uchar *)local_c0,uVar1,pwVar13,(int)sVar12 + 1);
LAB_14e438a19:
  FMD5::FMD5(&local_a8);
  FMD5::Update(&local_a8,(uchar *)local_c0,(longlong)local_b8);
  FMD5::Final(&local_a8,(uchar *)&local_48);
  local_158.A = local_48.A;
  local_158.B = local_48.B;
  local_158.C = local_48.C;
  local_158.D = local_48.D;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  FGuid::AppendString(&local_158,&local_1b8,Base36Encoded);
  iVar15 = (__return_storage_ptr__->Data).ArrayNum;
  if (iVar15 == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    iVar14 = iVar15 + -1;
  }
  iVar8 = 0;
  iVar15 = iVar14;
  if (0x73 < iVar14) {
    iVar15 = 0x73;
  }
  iVar9 = iVar8;
  if (0 < iVar15) {
    iVar9 = iVar15;
  }
  ::FString::FString(&local_170,
                     (wchar_t *)((longlong)pwVar13 + ((longlong)iVar14 - (longlong)iVar9) * 2));
  iVar14 = (__return_storage_ptr__->Data).ArrayNum;
  iVar15 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar15 = iVar8;
  }
  if (0x73 < iVar15) {
    iVar15 = 0x73;
  }
  if (0 < iVar15) {
    iVar8 = iVar15;
  }
  if (iVar14 != 0) {
    pwVar17 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_180,pwVar17,iVar8);
  ::FString::ConcatFF(&local_190,&local_180,&local_1b8);
  ::FString::ConcatFF(&local_1d8,&local_190,&local_170);
  if (__return_storage_ptr__ != &local_1d8) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_1d8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_1d8.Data.ArrayMax;
    local_1d8.Data.ArrayNum = 0;
    local_1d8.Data.ArrayMax = 0;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  FMD5::~FMD5(&local_a8);
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return __return_storage_ptr__;
}

// GetAttributeKeys @ 14e4390d0

void __thiscall
UInterchangeBaseNode::GetAttributeKeys
          (UInterchangeBaseNode *this,
          TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar2;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->Attributes).Object;
  lpCriticalSection = &this_00->StorageMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
                *)this_00,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e439145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetAttributeType @ 14e4391d0

EAttributeTypes __thiscall
UInterchangeBaseNode::GetAttributeType(UInterchangeBaseNode *this,FAttributeKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  EAttributeTypes EVar3;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EVar3 = UE::Interchange::FAttributeStorage::GetAttributeType((this->Attributes).Object,param_1);
  return EVar3;
}

// GetBooleanAttribute @ 14e439230

bool __thiscall
UInterchangeBaseNode::GetBooleanAttribute(UInterchangeBaseNode *this,FString *param_1,bool *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<bool,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Bool)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<bool,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetDesiredChildIndex @ 14e43bad0

int __thiscall UInterchangeBaseNode::GetDesiredChildIndex(UInterchangeBaseNode *this)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  int local_res8 [2];
  TAttributeHandle<int,void> local_28;
  
  if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::DesiredChildIndexKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar6);
  if (!bVar3) {
    return -1;
  }
  if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::DesiredChildIndexKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&local_28,pFVar6,pFVar1);
  if (((local_28.AttributeStorage == (FAttributeStorage *)0x0) ||
      (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                         (local_28.AttributeStorage,&local_28.Key), !bVar3)) ||
     (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key), EVar5 != Int32)) {
    local_res8[0] = -1;
  }
  else if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    UE::Interchange::FAttributeStorage::GetAttribute<int,void>
              (local_28.AttributeStorage,&local_28.Key,local_res8);
  }
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return local_res8[0];
}

// GetDisplayLabel @ 14e43bbf0

FString * __thiscall
UInterchangeBaseNode::GetDisplayLabel(UInterchangeBaseNode *this,FString *__return_storage_ptr__)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FAttributeKey *pFVar5;
  TAttributeHandle<FString,void> local_28;
  
  if (this->bIsInitialized == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7113840162991243603>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNode.cpp"
                       ,0x153,"bIsInitialized");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar5 = UE::Interchange::FBaseNodeStaticData::DisplayLabelKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_28,pFVar5,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    UE::Interchange::FAttributeStorage::GetAttribute<FString,void>
              (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
  }
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDoubleAttribute @ 14e43bcc0

bool __thiscall
UInterchangeBaseNode::GetDoubleAttribute
          (UInterchangeBaseNode *this,FString *param_1,double *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<double,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<double,void>::TAttributeHandle<double,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Double)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<double,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetFloatAttribute @ 14e43c220

bool __thiscall
UInterchangeBaseNode::GetFloatAttribute(UInterchangeBaseNode *this,FString *param_1,float *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<float,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Float)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<float,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetGuidAttribute @ 14e43c380

bool __thiscall
UInterchangeBaseNode::GetGuidAttribute(UInterchangeBaseNode *this,FString *param_1,FGuid *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<FGuid,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FGuid,void>::TAttributeHandle<FGuid,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Guid)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FGuid,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetHash @ 14e43c4e0

FGuid * __thiscall
UInterchangeBaseNode::GetHash(UInterchangeBaseNode *this,FGuid *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FGuid *pFVar3;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGuid *)(*pcVar1)();
      return pFVar3;
    }
  }
  UE::Interchange::FAttributeStorage::GetStorageHash
            ((this->Attributes).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetIconName @ 14e43c540

FName __thiscall UInterchangeBaseNode::GetIconName(UInterchangeBaseNode *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetInt32Attribute @ 14e43cc90

bool __thiscall
UInterchangeBaseNode::GetInt32Attribute(UInterchangeBaseNode *this,FString *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<int,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Int32)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<int,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetLinearColorAttribute @ 14e43f910

bool __thiscall
UInterchangeBaseNode::GetLinearColorAttribute
          (UInterchangeBaseNode *this,FString *param_1,FLinearColor *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<FLinearColor,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::
    TAttributeHandle<FLinearColor,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == LinearColor)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FLinearColor,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetNamespace @ 14e43ffc0

bool __thiscall UInterchangeBaseNode::GetNamespace(UInterchangeBaseNode *this,FString *param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<FString,void> local_28;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::NamespaceKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar6);
  if (!bVar3) {
    return false;
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::NamespaceKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar5 == String) {
        if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
          bVar3 = false;
        }
        else {
          EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<FString,void>
                            (local_28.AttributeStorage,&local_28.Key,param_1);
          bVar3 = (bool)((byte)EVar7 & 1);
        }
        goto LAB_14e4400c7;
      }
    }
  }
  bVar3 = false;
LAB_14e4400c7:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetNodeContainerType @ 14e440460

EInterchangeNodeContainerType __thiscall
UInterchangeBaseNode::GetNodeContainerType(UInterchangeBaseNode *this)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  EInterchangeNodeContainerType EVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  EInterchangeNodeContainerType local_res8 [8];
  TAttributeHandle<unsigned_char,void> local_28;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::NodeContainerTypeKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar6);
  if (!bVar3) {
    return None;
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::NodeContainerTypeKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
  TAttributeHandle<unsigned_char,void>(&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar5 == UInt8) {
        local_res8[0] = None;
        EVar4 = None;
        if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
          UE::Interchange::FAttributeStorage::GetAttribute<unsigned_char,void>
                    (local_28.AttributeStorage,&local_28.Key,local_res8);
          EVar4 = local_res8[0];
        }
        goto LAB_14e440557;
      }
    }
  }
  EVar4 = None;
LAB_14e440557:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return EVar4;
}

// GetParentUid @ 14e441420

/* WARNING: Removing unreachable block (ram,0x00014e44156c) */

FString * __thiscall
UInterchangeBaseNode::GetParentUid(UInterchangeBaseNode *this,FString *__return_storage_ptr__)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FString *pFVar5;
  FAttributeKey *pFVar6;
  ForAnyElementType FVar7;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::ParentIDKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar6);
  if (bVar3) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    pFVar1 = (this->Attributes).Object;
    pFVar6 = UE::Interchange::FBaseNodeStaticData::ParentIDKey();
    UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::
    TAttributeHandle<FString,void>(&local_28,pFVar6,pFVar1);
    if (((local_28.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), !bVar3)) ||
       (EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar4 != String)) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      }
    }
    else {
      FVar7.Data = (FScriptContainerElement *)0x0;
      if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
        UE::Interchange::FAttributeStorage::GetAttribute<FString,void>
                  (local_28.AttributeStorage,&local_28.Key,&local_38);
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar7.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e441730

UClass * __cdecl UInterchangeBaseNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeBaseNode",
               &Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseNode,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeBaseNode>,
               InternalVTableHelperCtorCaller<UInterchangeBaseNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton;
}

// GetStringAttribute @ 14e442d70

bool __thiscall
UInterchangeBaseNode::GetStringAttribute
          (UInterchangeBaseNode *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::
    TAttributeHandle<FString,void>(&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == String)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<FString,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetTargetNodeCount @ 14e442f40

int __thiscall UInterchangeBaseNode::GetTargetNodeCount(UInterchangeBaseNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->TargetNodes);
  return iVar1;
}

// GetTargetNodeUids @ 14e442f50

void __thiscall
UInterchangeBaseNode::GetTargetNodeUids
          (UInterchangeBaseNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->TargetNodes,param_1);
  return;
}

// GetTypeName @ 14e443260

FString * __thiscall
UInterchangeBaseNode::GetTypeName(UInterchangeBaseNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BaseNode");
  return __return_storage_ptr__;
}

// GetUniqueID @ 14e444050

FString * __thiscall
UInterchangeBaseNode::GetUniqueID(UInterchangeBaseNode *this,FString *__return_storage_ptr__)

{
  FAttributeStorage *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FAttributeKey *pFVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  if ((this->bIsInitialized == false) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7113840162991243590>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNode.cpp"
                         ,0x146,"bIsInitialized"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::UniqueIDKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    UE::Interchange::FAttributeStorage::GetAttribute<FString,void>
              (local_28.AttributeStorage,&local_28.Key,__return_storage_ptr__);
  }
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar4 = GetNamespace(this,&local_38);
  if (bVar4) {
    ::FString::ConcatFF(&local_48,&local_38,__return_storage_ptr__);
    if (__return_storage_ptr__ != &local_48) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetVector2Attribute @ 14e445b30

bool __thiscall
UInterchangeBaseNode::GetVector2Attribute
          (UInterchangeBaseNode *this,FString *param_1,TVector2<float> *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  EAttributeStorageResult EVar6;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TVector2<float>,void> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_48,param_1);
  cVar2 = (*pcVar1)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (cVar2 != '\0') {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::operator=(&local_38,param_1);
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<float>,void>::
    TAttributeHandle<UE::Math::TVector2<float>,void>
              (&local_28,(FAttributeKey *)&local_38,(this->Attributes).Object);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_28.AttributeStorage != (FAttributeStorage *)0x0) &&
        (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_28.AttributeStorage,&local_28.Key), bVar3)) &&
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key), EVar5 == Vector2f)) {
      if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
        EVar6 = Operation_Error_InvalidStorage;
      }
      else {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TVector2<float>,void>
                          (local_28.AttributeStorage,&local_28.Key,param_2);
      }
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar6 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar6 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// HasAttribute @ 14e445c90

bool __thiscall
UInterchangeBaseNode::HasAttribute(UInterchangeBaseNode *this,FAttributeKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute((this->Attributes).Object,param_1);
  return bVar2;
}

// InitializeNode @ 14e4480e0

void __thiscall
UInterchangeBaseNode::InitializeNode
          (UInterchangeBaseNode *this,FString *param_1,FString *param_2,
          EInterchangeNodeContainerType param_3)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAttributeKey *pFVar4;
  EAttributeStorageResult EVar5;
  FString *pFVar6;
  EInterchangeNodeContainerType local_res20 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar4 = UE::Interchange::FBaseNodeStaticData::UniqueIDKey();
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar1,pFVar4,param_1,NoHash);
  if ((EVar5 & Operation_Success) == None) {
    pFVar6 = &UE::Interchange::FBaseNodeStaticData::UniqueIDKey()->Key;
    ::FString::FString(&local_78,pFVar6);
    pFVar6 = ::FString::FString(&local_48,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar6,(FAttributeKey *)&local_78);
  }
  bVar3 = SetDisplayLabel(this,param_2);
  if (!bVar3) {
    pFVar6 = &UE::Interchange::FBaseNodeStaticData::DisplayLabelKey()->Key;
    ::FString::FString(&local_68,pFVar6);
    pFVar6 = ::FString::FString(&local_38,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar6,(FAttributeKey *)&local_68);
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Attributes).Object;
  local_res20[0] = param_3;
  pFVar4 = UE::Interchange::FBaseNodeStaticData::NodeContainerTypeKey();
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (pFVar1,pFVar4,local_res20,None);
  if ((EVar5 & Operation_Success) == None) {
    pFVar6 = &UE::Interchange::FBaseNodeStaticData::NodeContainerTypeKey()->Key;
    ::FString::FString(&local_58,pFVar6);
    pFVar6 = ::FString::FString(&local_28,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar6,(FAttributeKey *)&local_58);
  }
  this->bIsInitialized = true;
  return;
}

// InvalidNodeUid @ 14e448f80

FString * __cdecl UInterchangeBaseNode::InvalidNodeUid(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsEnabled @ 14e448fa0

bool __thiscall UInterchangeBaseNode::IsEnabled(UInterchangeBaseNode *this)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  bool local_res8 [8];
  TAttributeHandle<bool,void> local_28;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::IsEnabledKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar6);
  if (!bVar3) {
    return false;
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::IsEnabledKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
            (&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar5 == Bool) {
        local_res8[0] = false;
        uVar4 = 0;
        if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
          UE::Interchange::FAttributeStorage::GetAttribute<bool,void>
                    (local_28.AttributeStorage,&local_28.Key,local_res8);
          uVar4 = local_res8[0];
        }
        goto LAB_14e449097;
      }
    }
  }
  uVar4 = 0;
LAB_14e449097:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// RemoveAttribute @ 14e452760

bool __thiscall UInterchangeBaseNode::RemoveAttribute(UInterchangeBaseNode *this,FString *param_1)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FString local_28;
  FString local_18;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (this->Attributes).Object;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::operator=(&local_28,param_1);
  UE::Interchange::FAttributeStorage::UnregisterAttribute(this_00,(FAttributeKey *)&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  ::FString::operator=(&local_18,param_1);
  cVar4 = (*pcVar1)(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return cVar4 == '\0';
}

// RemoveTargetNodeUid @ 14e455840

bool __thiscall
UInterchangeBaseNode::RemoveTargetNodeUid(UInterchangeBaseNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem(&this->TargetNodes,param_1);
  return bVar1;
}

// Serialize @ 14e457570

void __thiscall UInterchangeBaseNode::Serialize(UInterchangeBaseNode *this,FArchive *param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  TAttributeHandle<FString,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  bVar4 = false;
  UE::Interchange::operator<<(param_1,(this->Attributes).Object);
  if ((param_1->field_0x28 & 1) == 0) {
    return;
  }
  if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::UniqueIDKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_20,pFVar6,pFVar1);
  if (((local_20.AttributeStorage == (FAttributeStorage *)0x0) ||
      (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                         (local_20.AttributeStorage,&local_20.Key), !bVar3)) ||
     (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_20.AttributeStorage,&local_20.Key), EVar5 != String)) {
LAB_14e457692:
    this->bIsInitialized = false;
    if (!bVar4) goto LAB_14e4576a9;
  }
  else {
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->Attributes).Object;
    pFVar6 = UE::Interchange::FBaseNodeStaticData::DisplayLabelKey();
    UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::
    TAttributeHandle<FString,void>(&local_38,pFVar6,pFVar1);
    if (((local_38.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_38.AttributeStorage,&local_38.Key), !bVar4)) ||
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_38.AttributeStorage,&local_38.Key), EVar5 != String)) {
      bVar4 = true;
      goto LAB_14e457692;
    }
    this->bIsInitialized = true;
  }
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
LAB_14e4576a9:
  if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 14e4576d0

void __thiscall
UInterchangeBaseNode::Serialize(UInterchangeBaseNode *this,FStructuredArchiveRecord param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EAttributeTypes EVar5;
  FArchive *pFVar6;
  FAttributeKey *pFVar7;
  FSlotBase local_res8;
  TAttributeHandle<FString,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  bVar4 = false;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UE::Interchange::operator<<(pFVar6,(this->Attributes).Object);
  if ((pFVar6->field_0x28 & 1) == 0) {
    return;
  }
  if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Attributes).Object;
  pFVar7 = UE::Interchange::FBaseNodeStaticData::UniqueIDKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_20,pFVar7,pFVar1);
  if (((local_20.AttributeStorage == (FAttributeStorage *)0x0) ||
      (bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                         (local_20.AttributeStorage,&local_20.Key), !bVar3)) ||
     (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_20.AttributeStorage,&local_20.Key), EVar5 != String)) {
LAB_14e457801:
    this->bIsInitialized = false;
    if (!bVar4) goto LAB_14e457818;
  }
  else {
    if (((this->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->Attributes).Object;
    pFVar7 = UE::Interchange::FBaseNodeStaticData::DisplayLabelKey();
    UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::
    TAttributeHandle<FString,void>(&local_38,pFVar7,pFVar1);
    if (((local_38.AttributeStorage == (FAttributeStorage *)0x0) ||
        (bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                           (local_38.AttributeStorage,&local_38.Key), !bVar4)) ||
       (EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_38.AttributeStorage,&local_38.Key), EVar5 != String)) {
      bVar4 = true;
      goto LAB_14e457801;
    }
    this->bIsInitialized = true;
  }
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
LAB_14e457818:
  if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
  }
  return;
}

// SetAssetName @ 14e45aec0

bool __thiscall UInterchangeBaseNode::SetAssetName(UInterchangeBaseNode *this,FString *param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<FString,void> local_28;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::AssetNameKey();
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar1,pFVar6,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    return false;
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::AssetNameKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar5 == String) {
        bVar3 = true;
        goto LAB_14e45af9c;
      }
    }
  }
  bVar3 = false;
LAB_14e45af9c:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetDesiredChildIndex @ 14e45c8f0

bool __thiscall UInterchangeBaseNode::SetDesiredChildIndex(UInterchangeBaseNode *this,int *param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<int,void> local_28;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::DesiredChildIndexKey();
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    (pFVar1,pFVar6,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    return false;
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::DesiredChildIndexKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar5 == Int32) {
        bVar3 = true;
        goto LAB_14e45c9cc;
      }
    }
  }
  bVar3 = false;
LAB_14e45c9cc:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetDisplayLabel @ 14e45ca10

bool __thiscall UInterchangeBaseNode::SetDisplayLabel(UInterchangeBaseNode *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  EAttributeStorageResult EVar7;
  longlong lVar8;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar8 = (longlong)local_38.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  UE::Interchange::SanitizeName(&local_38,false);
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::DisplayLabelKey();
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar1,pFVar6,&local_38,None);
  if ((EVar7 & Operation_Success) == None) {
    bVar3 = false;
    goto LAB_14e45cb63;
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::DisplayLabelKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage == (FAttributeStorage *)0x0) {
LAB_14e45cb4e:
    bVar3 = false;
  }
  else {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (!bVar3) goto LAB_14e45cb4e;
    EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_28.AttributeStorage,&local_28.Key);
    if (EVar5 != String) goto LAB_14e45cb4e;
    bVar3 = true;
  }
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
LAB_14e45cb63:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetEnabled @ 14e45cb90

bool __thiscall UInterchangeBaseNode::SetEnabled(UInterchangeBaseNode *this,bool param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  EAttributeStorageResult EVar7;
  bool local_res10 [24];
  TAttributeHandle<bool,void> local_28;
  
  local_res10[0] = param_1;
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::IsEnabledKey();
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (pFVar1,pFVar6,local_res10,None);
  if ((EVar7 & Operation_Success) == None) {
    return false;
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::IsEnabledKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
            (&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar5 == Bool) {
        bVar3 = true;
        goto LAB_14e45cc6b;
      }
    }
  }
  bVar3 = false;
LAB_14e45cc6b:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetNamespace @ 14e45df30

bool __thiscall UInterchangeBaseNode::SetNamespace(UInterchangeBaseNode *this,FString *param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<FString,void> local_28;
  
  pFVar1 = (this->Attributes).Object;
  if ((param_1->Data).ArrayNum < 2) {
    if (pFVar1 == (FAttributeStorage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->Attributes).Object;
    pFVar6 = UE::Interchange::FBaseNodeStaticData::NamespaceKey();
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar6);
    if (bVar3) {
      if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pFVar1 = (this->Attributes).Object;
      pFVar6 = UE::Interchange::FBaseNodeStaticData::NamespaceKey();
      UE::Interchange::FAttributeStorage::UnregisterAttribute(pFVar1,pFVar6);
    }
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->Attributes).Object;
    pFVar6 = UE::Interchange::FBaseNodeStaticData::NamespaceKey();
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar6);
    return !bVar3;
  }
  if (pFVar1 == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::NamespaceKey();
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar1,pFVar6,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    return false;
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::NamespaceKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar5 == String) {
        bVar3 = true;
        goto LAB_14e45e0ef;
      }
    }
  }
  bVar3 = false;
LAB_14e45e0ef:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetParentUid @ 14e45f5e0

bool __thiscall UInterchangeBaseNode::SetParentUid(UInterchangeBaseNode *this,FString *param_1)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<FString,void> local_28;
  
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::ParentIDKey();
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar1,pFVar6,param_1,None);
  if ((EVar7 & Operation_Success) == None) {
    return false;
  }
  if ((this->Attributes).Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->Attributes).Object;
  pFVar6 = UE::Interchange::FBaseNodeStaticData::ParentIDKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
            (&local_28,pFVar6,pFVar1);
  if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_28.AttributeStorage,&local_28.Key);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_28.AttributeStorage,&local_28.Key);
      if (EVar5 == String) {
        bVar3 = true;
        goto LAB_14e45f6bc;
      }
    }
  }
  bVar3 = false;
LAB_14e45f6bc:
  if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// StaticRegisterNativesUInterchangeBaseNode @ 14e45fe70

void __cdecl UInterchangeBaseNode::StaticRegisterNativesUInterchangeBaseNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x23;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeBaseNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddBooleanAttribute @ 14e4689c0

void __cdecl
UInterchangeBaseNode::execAddBooleanAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  EAttributeTypes EVar3;
  undefined1 uVar4;
  longlong lVar5;
  bool *pbVar6;
  bool local_res10 [8];
  FAttributeKey local_68;
  void *local_58;
  undefined8 local_50;
  TAttributeHandle<bool,void> local_48;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_58;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pbVar6 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar6 = (bool *)param_2->MostRecentPropertyAddress;
  }
  local_68.Key.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_50;
  local_68.Key.Data.ArrayNum = (int)local_50;
  if ((int)local_50 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Key.Data.ArrayMax);
    memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  RegisterAttribute<bool>((UInterchangeBaseNode *)param_1,&local_48,&local_68,pbVar6);
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_48.AttributeStorage,&local_48.Key);
    if (bVar2) {
      EVar3 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_48.AttributeStorage,&local_48.Key);
      if (EVar3 == Bool) {
        uVar4 = 1;
        goto LAB_14e468b2b;
      }
    }
  }
  uVar4 = 0;
LAB_14e468b2b:
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execAddDoubleAttribute @ 14e468b70

void __cdecl
UInterchangeBaseNode::execAddDoubleAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  EAttributeTypes EVar3;
  undefined1 uVar4;
  longlong lVar5;
  double *pdVar6;
  double local_res10;
  FAttributeKey local_68;
  void *local_58;
  undefined8 local_50;
  TAttributeHandle<double,void> local_48;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_res10 = 0.0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  _Src = local_58;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pdVar6 = &local_res10;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_68.Key.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_50;
  local_68.Key.Data.ArrayNum = (int)local_50;
  if ((int)local_50 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Key.Data.ArrayMax);
    memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  RegisterAttribute<double>((UInterchangeBaseNode *)param_1,&local_48,&local_68,pdVar6);
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_48.AttributeStorage,&local_48.Key);
    if (bVar2) {
      EVar3 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_48.AttributeStorage,&local_48.Key);
      if (EVar3 == Double) {
        uVar4 = 1;
        goto LAB_14e468cde;
      }
    }
  }
  uVar4 = 0;
LAB_14e468cde:
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execAddFloatAttribute @ 14e468dd0

void __cdecl
UInterchangeBaseNode::execAddFloatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  EAttributeTypes EVar3;
  undefined1 uVar4;
  longlong lVar5;
  float *pfVar6;
  float local_res10 [2];
  FAttributeKey local_68;
  void *local_58;
  undefined8 local_50;
  TAttributeHandle<float,void> local_48;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_58;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pfVar6 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  }
  local_68.Key.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_50;
  local_68.Key.Data.ArrayNum = (int)local_50;
  if ((int)local_50 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Key.Data.ArrayMax);
    memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  RegisterAttribute<float>((UInterchangeBaseNode *)param_1,&local_48,&local_68,pfVar6);
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_48.AttributeStorage,&local_48.Key);
    if (bVar2) {
      EVar3 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_48.AttributeStorage,&local_48.Key);
      if (EVar3 == Float) {
        uVar4 = 1;
        goto LAB_14e468f3a;
      }
    }
  }
  uVar4 = 0;
LAB_14e468f3a:
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execAddGuidAttribute @ 14e468f80

void __cdecl
UInterchangeBaseNode::execAddGuidAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  EAttributeTypes EVar3;
  undefined1 uVar4;
  longlong lVar5;
  FGuid *pFVar6;
  FAttributeKey local_68;
  void *local_58;
  undefined8 local_50;
  FGuid local_48;
  TAttributeHandle<FGuid,void> local_38;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_58;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = &local_48;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar6 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  local_68.Key.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_50;
  local_68.Key.Data.ArrayNum = (int)local_50;
  if ((int)local_50 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Key.Data.ArrayMax);
    memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  RegisterAttribute<FGuid>((UInterchangeBaseNode *)param_1,&local_38,&local_68,pFVar6);
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (bVar2) {
      EVar3 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_38.AttributeStorage,&local_38.Key);
      if (EVar3 == Guid) {
        uVar4 = 1;
        goto LAB_14e4690f7;
      }
    }
  }
  uVar4 = 0;
LAB_14e4690f7:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execAddInt32Attribute @ 14e469140

void __cdecl
UInterchangeBaseNode::execAddInt32Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  EAttributeTypes EVar3;
  undefined1 uVar4;
  longlong lVar5;
  int *piVar6;
  int local_res10 [2];
  FAttributeKey local_68;
  void *local_58;
  undefined8 local_50;
  TAttributeHandle<int,void> local_48;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_58;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar6 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar6 = (int *)param_2->MostRecentPropertyAddress;
  }
  local_68.Key.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_50;
  local_68.Key.Data.ArrayNum = (int)local_50;
  if ((int)local_50 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Key.Data.ArrayMax);
    memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  RegisterAttribute<int>((UInterchangeBaseNode *)param_1,&local_48,&local_68,piVar6);
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_48.AttributeStorage,&local_48.Key);
    if (bVar2) {
      EVar3 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_48.AttributeStorage,&local_48.Key);
      if (EVar3 == Int32) {
        uVar4 = 1;
        goto LAB_14e4692aa;
      }
    }
  }
  uVar4 = 0;
LAB_14e4692aa:
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execAddLinearColorAttribute @ 14e4692f0

void __cdecl
UInterchangeBaseNode::execAddLinearColorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  EAttributeTypes EVar3;
  undefined1 uVar4;
  longlong lVar5;
  FLinearColor *pFVar6;
  FAttributeKey local_68;
  void *local_58;
  undefined8 local_50;
  FLinearColor local_48;
  TAttributeHandle<FLinearColor,void> local_38;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_58;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = &local_48;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar6 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  local_68.Key.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_50;
  local_68.Key.Data.ArrayNum = (int)local_50;
  if ((int)local_50 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Key.Data.ArrayMax);
    memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  RegisterAttribute<FLinearColor>((UInterchangeBaseNode *)param_1,&local_38,&local_68,pFVar6);
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (bVar2) {
      EVar3 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_38.AttributeStorage,&local_38.Key);
      if (EVar3 == LinearColor) {
        uVar4 = 1;
        goto LAB_14e46945f;
      }
    }
  }
  uVar4 = 0;
LAB_14e46945f:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execAddStringAttribute @ 14e4696c0

void __cdecl
UInterchangeBaseNode::execAddStringAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  EAttributeTypes EVar3;
  undefined1 uVar4;
  longlong lVar5;
  FAttributeKey local_68;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  TAttributeHandle<FString,void> local_38;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_58;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Key.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_50;
  local_68.Key.Data.ArrayNum = (int)local_50;
  if ((int)local_50 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Key.Data.ArrayMax);
    memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  RegisterAttribute<FString>((UInterchangeBaseNode *)param_1,&local_38,&local_68,&local_48);
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (bVar2) {
      EVar3 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_38.AttributeStorage,&local_38.Key);
      if (EVar3 == String) {
        uVar4 = 1;
        goto LAB_14e469826;
      }
    }
  }
  uVar4 = 0;
LAB_14e469826:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execAddTargetNodeUid @ 14e469880

void __cdecl
UInterchangeBaseNode::execAddTargetNodeUid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)&param_1[1].field_0x18,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddVector2Attribute @ 14e469930

void __cdecl
UInterchangeBaseNode::execAddVector2Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  EAttributeTypes EVar3;
  undefined1 uVar4;
  longlong lVar5;
  TVector2<float> *pTVar6;
  TVector2<float> local_res10;
  FAttributeKey local_68;
  void *local_58;
  undefined8 local_50;
  TAttributeHandle<UE::Math::TVector2<float>,void> local_48;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  _Src = local_58;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar6 = &local_res10;
  if ((TVector2<float> *)param_2->MostRecentPropertyAddress != (TVector2<float> *)0x0) {
    pTVar6 = (TVector2<float> *)param_2->MostRecentPropertyAddress;
  }
  local_68.Key.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_50;
  local_68.Key.Data.ArrayNum = (int)local_50;
  if ((int)local_50 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Key.Data.ArrayMax);
    memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  RegisterAttribute<UE::Math::TVector2<float>_>
            ((UInterchangeBaseNode *)param_1,&local_48,&local_68,pTVar6);
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_48.AttributeStorage,&local_48.Key);
    if (bVar2) {
      EVar3 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_48.AttributeStorage,&local_48.Key);
      if (EVar3 == Vector2f) {
        uVar4 = 1;
        goto LAB_14e469a96;
      }
    }
  }
  uVar4 = 0;
LAB_14e469a96:
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetAssetName @ 14e46a8f0

void __cdecl UInterchangeBaseNode::execGetAssetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetBooleanAttribute @ 14e46a980

void __cdecl
UInterchangeBaseNode::execGetBooleanAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  longlong lVar8;
  bool *pbVar9;
  bool local_res8 [8];
  void *local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FAttributeKey local_58;
  TAttributeHandle<bool,void> local_48;
  
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pvVar3 = local_78;
  local_68.Data = (FScriptContainerElement *)0x0;
  pbVar9 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar9 = (bool *)param_2->MostRecentPropertyAddress;
  }
  local_5c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_70;
  local_60 = (int)local_70;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
  if ((int)local_70 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,&local_68,(int)local_70,&local_5c);
    memcpy(local_68.Data,pvVar3,lVar8 * 2);
  }
  cVar4 = (*pcVar2)(param_1,&local_68);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  pvVar3 = local_78;
  if (cVar4 != '\0') {
    lVar8 = (longlong)(int)local_70;
    local_58.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Key.Data.ArrayMax = 0;
    local_58.Key.Data.ArrayNum = (int)local_70;
    if ((int)local_70 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_70,0,(ForAnyElementType *)&local_58,(int)local_70,
                 &local_58.Key.Data.ArrayMax);
      memcpy(local_58.Key.Data.AllocatorInstance.Data,pvVar3,lVar8 * 2);
    }
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
              (&local_48,&local_58,*(FAttributeStorage **)(param_1 + 1));
    if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
    }
    if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
      bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (local_48.AttributeStorage,&local_48.Key);
      if (bVar5) {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_48.AttributeStorage,&local_48.Key);
        if (EVar6 == Bool) {
          if (local_48.AttributeStorage == (FAttributeStorage *)0x0) {
            EVar7 = Operation_Error_InvalidStorage;
          }
          else {
            EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<bool,void>
                              (local_48.AttributeStorage,&local_48.Key,pbVar9);
          }
          bVar5 = EVar7 == Operation_Success;
          if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
          }
          goto LAB_14e46abd6;
        }
      }
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e46abd6:
  *(bool *)param_3 = bVar5;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execGetDesiredChildIndex @ 14e46c1c0

void __cdecl
UInterchangeBaseNode::execGetDesiredChildIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetDesiredChildIndex((UInterchangeBaseNode *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execGetDisplayLabel @ 14e46c200

void __cdecl
UInterchangeBaseNode::execGetDisplayLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetDoubleAttribute @ 14e46c280

void __cdecl
UInterchangeBaseNode::execGetDoubleAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  longlong lVar8;
  double *pdVar9;
  double local_res8;
  void *local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FAttributeKey local_58;
  TAttributeHandle<double,void> local_48;
  
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_res8 = 0.0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pvVar3 = local_78;
  local_68.Data = (FScriptContainerElement *)0x0;
  pdVar9 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar9 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_5c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_70;
  local_60 = (int)local_70;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
  if ((int)local_70 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,&local_68,(int)local_70,&local_5c);
    memcpy(local_68.Data,pvVar3,lVar8 * 2);
  }
  cVar4 = (*pcVar2)(param_1,&local_68);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  pvVar3 = local_78;
  if (cVar4 != '\0') {
    lVar8 = (longlong)(int)local_70;
    local_58.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Key.Data.ArrayMax = 0;
    local_58.Key.Data.ArrayNum = (int)local_70;
    if ((int)local_70 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_70,0,(ForAnyElementType *)&local_58,(int)local_70,
                 &local_58.Key.Data.ArrayMax);
      memcpy(local_58.Key.Data.AllocatorInstance.Data,pvVar3,lVar8 * 2);
    }
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<double,void>::TAttributeHandle<double,void>
              (&local_48,&local_58,*(FAttributeStorage **)(param_1 + 1));
    if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
    }
    if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
      bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (local_48.AttributeStorage,&local_48.Key);
      if (bVar5) {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_48.AttributeStorage,&local_48.Key);
        if (EVar6 == Double) {
          if (local_48.AttributeStorage == (FAttributeStorage *)0x0) {
            EVar7 = Operation_Error_InvalidStorage;
          }
          else {
            EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<double,void>
                              (local_48.AttributeStorage,&local_48.Key,pdVar9);
          }
          bVar5 = EVar7 == Operation_Success;
          if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
          }
          goto LAB_14e46c4da;
        }
      }
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e46c4da:
  *(bool *)param_3 = bVar5;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execGetFloatAttribute @ 14e46cbc0

void __cdecl
UInterchangeBaseNode::execGetFloatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  longlong lVar8;
  float *pfVar9;
  float local_res8 [2];
  void *local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FAttributeKey local_58;
  TAttributeHandle<float,void> local_48;
  
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res8[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pvVar3 = local_78;
  local_68.Data = (FScriptContainerElement *)0x0;
  pfVar9 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar9 = (float *)param_2->MostRecentPropertyAddress;
  }
  local_5c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_70;
  local_60 = (int)local_70;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
  if ((int)local_70 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,&local_68,(int)local_70,&local_5c);
    memcpy(local_68.Data,pvVar3,lVar8 * 2);
  }
  cVar4 = (*pcVar2)(param_1,&local_68);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  pvVar3 = local_78;
  if (cVar4 != '\0') {
    lVar8 = (longlong)(int)local_70;
    local_58.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Key.Data.ArrayMax = 0;
    local_58.Key.Data.ArrayNum = (int)local_70;
    if ((int)local_70 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_70,0,(ForAnyElementType *)&local_58,(int)local_70,
                 &local_58.Key.Data.ArrayMax);
      memcpy(local_58.Key.Data.AllocatorInstance.Data,pvVar3,lVar8 * 2);
    }
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
              (&local_48,&local_58,*(FAttributeStorage **)(param_1 + 1));
    if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
    }
    if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
      bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (local_48.AttributeStorage,&local_48.Key);
      if (bVar5) {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_48.AttributeStorage,&local_48.Key);
        if (EVar6 == Float) {
          if (local_48.AttributeStorage == (FAttributeStorage *)0x0) {
            EVar7 = Operation_Error_InvalidStorage;
          }
          else {
            EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<float,void>
                              (local_48.AttributeStorage,&local_48.Key,pfVar9);
          }
          bVar5 = EVar7 == Operation_Success;
          if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
          }
          goto LAB_14e46ce16;
        }
      }
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e46ce16:
  *(bool *)param_3 = bVar5;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execGetGuidAttribute @ 14e46ce50

void __cdecl
UInterchangeBaseNode::execGetGuidAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  longlong lVar8;
  FGuid *pFVar9;
  void *local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FAttributeKey local_68;
  FGuid local_58;
  TAttributeHandle<FGuid,void> local_48;
  
  local_88 = (void *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_58.A = 0;
  local_58.B = 0;
  local_58.C = 0;
  local_58.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pvVar3 = local_88;
  local_78.Data = (FScriptContainerElement *)0x0;
  pFVar9 = &local_58;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar9 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  local_6c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_80;
  local_70 = (int)local_80;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
  if ((int)local_80 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_80,0,&local_78,(int)local_80,&local_6c);
    memcpy(local_78.Data,pvVar3,lVar8 * 2);
  }
  cVar4 = (*pcVar2)(param_1,&local_78);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  pvVar3 = local_88;
  if (cVar4 != '\0') {
    lVar8 = (longlong)(int)local_80;
    local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Key.Data.ArrayMax = 0;
    local_68.Key.Data.ArrayNum = (int)local_80;
    if ((int)local_80 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_80,0,(ForAnyElementType *)&local_68,(int)local_80,
                 &local_68.Key.Data.ArrayMax);
      memcpy(local_68.Key.Data.AllocatorInstance.Data,pvVar3,lVar8 * 2);
    }
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FGuid,void>::TAttributeHandle<FGuid,void>
              (&local_48,&local_68,*(FAttributeStorage **)(param_1 + 1));
    if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
    }
    if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
      bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (local_48.AttributeStorage,&local_48.Key);
      if (bVar5) {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_48.AttributeStorage,&local_48.Key);
        if (EVar6 == Guid) {
          if (local_48.AttributeStorage == (FAttributeStorage *)0x0) {
            EVar7 = Operation_Error_InvalidStorage;
          }
          else {
            EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<FGuid,void>
                              (local_48.AttributeStorage,&local_48.Key,pFVar9);
          }
          bVar5 = EVar7 == Operation_Success;
          if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
          }
          goto LAB_14e46d0aa;
        }
      }
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e46d0aa:
  *(bool *)param_3 = bVar5;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execGetIconName @ 14e46d0f0

void __cdecl UInterchangeBaseNode::execGetIconName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8);
  *(undefined8 *)param_3 = *puVar1;
  return;
}

// execGetInt32Attribute @ 14e46d130

void __cdecl
UInterchangeBaseNode::execGetInt32Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  longlong lVar8;
  int *piVar9;
  int local_res8 [2];
  void *local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FAttributeKey local_58;
  TAttributeHandle<int,void> local_48;
  
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pvVar3 = local_78;
  local_68.Data = (FScriptContainerElement *)0x0;
  piVar9 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar9 = (int *)param_2->MostRecentPropertyAddress;
  }
  local_5c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_70;
  local_60 = (int)local_70;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
  if ((int)local_70 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,&local_68,(int)local_70,&local_5c);
    memcpy(local_68.Data,pvVar3,lVar8 * 2);
  }
  cVar4 = (*pcVar2)(param_1,&local_68);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  pvVar3 = local_78;
  if (cVar4 != '\0') {
    lVar8 = (longlong)(int)local_70;
    local_58.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Key.Data.ArrayMax = 0;
    local_58.Key.Data.ArrayNum = (int)local_70;
    if ((int)local_70 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_70,0,(ForAnyElementType *)&local_58,(int)local_70,
                 &local_58.Key.Data.ArrayMax);
      memcpy(local_58.Key.Data.AllocatorInstance.Data,pvVar3,lVar8 * 2);
    }
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_48,&local_58,*(FAttributeStorage **)(param_1 + 1));
    if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
    }
    if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
      bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (local_48.AttributeStorage,&local_48.Key);
      if (bVar5) {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_48.AttributeStorage,&local_48.Key);
        if (EVar6 == Int32) {
          if (local_48.AttributeStorage == (FAttributeStorage *)0x0) {
            EVar7 = Operation_Error_InvalidStorage;
          }
          else {
            EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<int,void>
                              (local_48.AttributeStorage,&local_48.Key,piVar9);
          }
          bVar5 = EVar7 == Operation_Success;
          if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
          }
          goto LAB_14e46d386;
        }
      }
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e46d386:
  *(bool *)param_3 = bVar5;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execGetLinearColorAttribute @ 14e46d4d0

void __cdecl
UInterchangeBaseNode::execGetLinearColorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  longlong lVar8;
  FLinearColor *pFVar9;
  void *local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FAttributeKey local_68;
  FLinearColor local_58;
  TAttributeHandle<FLinearColor,void> local_48;
  
  local_88 = (void *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pvVar3 = local_88;
  local_78.Data = (FScriptContainerElement *)0x0;
  pFVar9 = &local_58;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar9 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  local_6c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_80;
  local_70 = (int)local_80;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
  if ((int)local_80 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_80,0,&local_78,(int)local_80,&local_6c);
    memcpy(local_78.Data,pvVar3,lVar8 * 2);
  }
  cVar4 = (*pcVar2)(param_1,&local_78);
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  pvVar3 = local_88;
  if (cVar4 != '\0') {
    lVar8 = (longlong)(int)local_80;
    local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Key.Data.ArrayMax = 0;
    local_68.Key.Data.ArrayNum = (int)local_80;
    if ((int)local_80 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_80,0,(ForAnyElementType *)&local_68,(int)local_80,
                 &local_68.Key.Data.ArrayMax);
      memcpy(local_68.Key.Data.AllocatorInstance.Data,pvVar3,lVar8 * 2);
    }
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::
    TAttributeHandle<FLinearColor,void>(&local_48,&local_68,*(FAttributeStorage **)(param_1 + 1));
    if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
    }
    if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
      bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (local_48.AttributeStorage,&local_48.Key);
      if (bVar5) {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_48.AttributeStorage,&local_48.Key);
        if (EVar6 == LinearColor) {
          if (local_48.AttributeStorage == (FAttributeStorage *)0x0) {
            EVar7 = Operation_Error_InvalidStorage;
          }
          else {
            EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<FLinearColor,void>
                              (local_48.AttributeStorage,&local_48.Key,pFVar9);
          }
          bVar5 = EVar7 == Operation_Success;
          if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
          }
          goto LAB_14e46d722;
        }
      }
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e46d722:
  *(bool *)param_3 = bVar5;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execGetNamespace @ 14e46d760

void __cdecl UInterchangeBaseNode::execGetNamespace(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetNamespace((UInterchangeBaseNode *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetNodeContainerType @ 14e46ddc0

void __cdecl
UInterchangeBaseNode::execGetNodeContainerType(UObject *param_1,FFrame *param_2,void *param_3)

{
  EInterchangeNodeContainerType EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetNodeContainerType((UInterchangeBaseNode *)param_1);
  *(EInterchangeNodeContainerType *)param_3 = EVar1;
  return;
}

// execGetParentUid @ 14e46e000

void __cdecl UInterchangeBaseNode::execGetParentUid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetParentUid((UInterchangeBaseNode *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStringAttribute @ 14e46e3a0

void __cdecl
UInterchangeBaseNode::execGetStringAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetStringAttribute((UInterchangeBaseNode *)param_1,&local_18,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTargetNodeCount @ 14e46e5a0

void __cdecl
UInterchangeBaseNode::execGetTargetNodeCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[1].field_0x18);
  *(int *)param_3 = iVar1;
  return;
}

// execGetTargetNodeUids @ 14e46e5e0

void __cdecl
UInterchangeBaseNode::execGetTargetNodeUids(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            ((TArrayAttributeHelper<FString> *)&param_1[1].field_0x18,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetTypeName @ 14e46e6e0

void __cdecl UInterchangeBaseNode::execGetTypeName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetUniqueID @ 14e46e770

void __cdecl UInterchangeBaseNode::execGetUniqueID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetUniqueID((UInterchangeBaseNode *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetVector2Attribute @ 14e46f480

void __cdecl
UInterchangeBaseNode::execGetVector2Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  EAttributeTypes EVar6;
  EAttributeStorageResult EVar7;
  longlong lVar8;
  TVector2<float> *pTVar9;
  TVector2<float> local_res8;
  void *local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FAttributeKey local_58;
  TAttributeHandle<UE::Math::TVector2<float>,void> local_48;
  
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pvVar3 = local_78;
  local_68.Data = (FScriptContainerElement *)0x0;
  pTVar9 = &local_res8;
  if ((TVector2<float> *)param_2->MostRecentPropertyAddress != (TVector2<float> *)0x0) {
    pTVar9 = (TVector2<float> *)param_2->MostRecentPropertyAddress;
  }
  local_5c = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_70;
  local_60 = (int)local_70;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
  if ((int)local_70 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,&local_68,(int)local_70,&local_5c);
    memcpy(local_68.Data,pvVar3,lVar8 * 2);
  }
  cVar4 = (*pcVar2)(param_1,&local_68);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  pvVar3 = local_78;
  if (cVar4 != '\0') {
    lVar8 = (longlong)(int)local_70;
    local_58.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Key.Data.ArrayMax = 0;
    local_58.Key.Data.ArrayNum = (int)local_70;
    if ((int)local_70 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_70,0,(ForAnyElementType *)&local_58,(int)local_70,
                 &local_58.Key.Data.ArrayMax);
      memcpy(local_58.Key.Data.AllocatorInstance.Data,pvVar3,lVar8 * 2);
    }
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<float>,void>::
    TAttributeHandle<UE::Math::TVector2<float>,void>
              (&local_48,&local_58,*(FAttributeStorage **)(param_1 + 1));
    if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
    }
    if (local_48.AttributeStorage != (FAttributeStorage *)0x0) {
      bVar5 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (local_48.AttributeStorage,&local_48.Key);
      if (bVar5) {
        EVar6 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_48.AttributeStorage,&local_48.Key);
        if (EVar6 == Vector2f) {
          if (local_48.AttributeStorage == (FAttributeStorage *)0x0) {
            EVar7 = Operation_Error_InvalidStorage;
          }
          else {
            EVar7 = UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TVector2<float>,void>
                              (local_48.AttributeStorage,&local_48.Key,pTVar9);
          }
          bVar5 = EVar7 == Operation_Success;
          if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
          }
          goto LAB_14e46f6d2;
        }
      }
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
LAB_14e46f6d2:
  *(bool *)param_3 = bVar5;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execInitializeNode @ 14e46f710

void __cdecl
UInterchangeBaseNode::execInitializeNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EInterchangeNodeContainerType local_res10 [8];
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InitializeNode((UInterchangeBaseNode *)param_1,&local_18,&local_28,local_res10[0]);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsEnabled @ 14e46f9f0

void __cdecl UInterchangeBaseNode::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  EAttributeTypes EVar4;
  FAttributeKey *pFVar5;
  bool local_res8 [8];
  TAttributeHandle<bool,void> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = *(FAttributeStorage **)(param_1 + 1);
  pFVar5 = UE::Interchange::FBaseNodeStaticData::IsEnabledKey();
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar1,pFVar5);
  if (bVar3) {
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = *(FAttributeStorage **)(param_1 + 1);
    pFVar5 = UE::Interchange::FBaseNodeStaticData::IsEnabledKey();
    UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
              (&local_28,pFVar5,pFVar1);
    if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
      bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                        (local_28.AttributeStorage,&local_28.Key);
      if (bVar3) {
        EVar4 = UE::Interchange::FAttributeStorage::GetAttributeType
                          (local_28.AttributeStorage,&local_28.Key);
        if (EVar4 == Bool) {
          local_res8[0] = false;
          if (local_28.AttributeStorage != (FAttributeStorage *)0x0) {
            UE::Interchange::FAttributeStorage::GetAttribute<bool,void>
                      (local_28.AttributeStorage,&local_28.Key,local_res8);
          }
          bVar3 = local_res8[0];
          if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
          }
          *(bool *)param_3 = bVar3;
          return;
        }
      }
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveAttribute @ 14e46fe90

void __cdecl
UInterchangeBaseNode::execRemoveAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveAttribute((UInterchangeBaseNode *)param_1,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveTargetNodeUid @ 14e470180

void __cdecl
UInterchangeBaseNode::execRemoveTargetNodeUid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    ((TArrayAttributeHelper<FString> *)&param_1[1].field_0x18,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetAssetName @ 14e471360

void __cdecl UInterchangeBaseNode::execSetAssetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,&local_18);
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetDisplayLabel @ 14e4735c0

void __cdecl
UInterchangeBaseNode::execSetDisplayLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetDisplayLabel((UInterchangeBaseNode *)param_1,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetEnabled @ 14e473670

void __cdecl UInterchangeBaseNode::execSetEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  EAttributeTypes EVar5;
  FAttributeKey *pFVar6;
  EAttributeStorageResult EVar7;
  undefined1 uVar8;
  bool local_res8 [8];
  int local_res10 [2];
  TAttributeHandle<bool,void> local_38;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FAttributeStorage **)(param_1 + 1);
  pFVar6 = UE::Interchange::FBaseNodeStaticData::IsEnabledKey();
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (pFVar2,pFVar6,local_res8,None);
  if ((EVar7 & Operation_Success) == None) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FAttributeStorage **)(param_1 + 1);
  pFVar6 = UE::Interchange::FBaseNodeStaticData::IsEnabledKey();
  UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
            (&local_38,pFVar6,pFVar2);
  if (local_38.AttributeStorage != (FAttributeStorage *)0x0) {
    bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                      (local_38.AttributeStorage,&local_38.Key);
    if (bVar4) {
      EVar5 = UE::Interchange::FAttributeStorage::GetAttributeType
                        (local_38.AttributeStorage,&local_38.Key);
      if (EVar5 == Bool) {
        uVar8 = 1;
        goto LAB_14e4737ac;
      }
    }
  }
  uVar8 = 0;
LAB_14e4737ac:
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar8;
  return;
}

