// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 5

// GetAttribute<unsigned_char> @ 14e7396c0

bool __thiscall
UInterchangeBaseNode::GetAttribute<unsigned_char>
          (UInterchangeBaseNode *this,FString *param_1,uchar *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  TAttributeHandle<unsigned_char,void> local_28;
  
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
    UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
              ((this->Attributes).Object,&local_28,(FAttributeKey *)&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_28);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&local_28,param_2);
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar5 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar5 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAttribute<UE::Math::TVector2<float>_> @ 14e739800

bool __thiscall
UInterchangeBaseNode::GetAttribute<UE::Math::TVector2<float>_>
          (UInterchangeBaseNode *this,FString *param_1,TVector2<float> *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeStorageResult EVar5;
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
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TVector2<float>,void>
              ((this->Attributes).Object,&local_28,(FAttributeKey *)&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<float>,void>::
            IsValid(&local_28);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector2<float>,void>::
              Get(&local_28,param_2);
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar5 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar5 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAttribute<UE::Math::TVector<double>_> @ 14e739940

bool __thiscall
UInterchangeBaseNode::GetAttribute<UE::Math::TVector<double>_>
          (UInterchangeBaseNode *this,FString *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeStorageResult EVar5;
  FString local_48;
  FString local_38;
  TAttributeHandle<UE::Math::TVector<double>,void> local_28;
  
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
    UE::Interchange::FAttributeStorage::GetAttributeHandle<UE::Math::TVector<double>,void>
              ((this->Attributes).Object,&local_28,(FAttributeKey *)&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>::
            IsValid(&local_28);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TVector<double>,void>::
              Get(&local_28,param_2);
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar5 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar5 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetAttribute<FLinearColor> @ 14e739a80

bool __thiscall
UInterchangeBaseNode::GetAttribute<FLinearColor>
          (UInterchangeBaseNode *this,FString *param_1,FLinearColor *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  EAttributeStorageResult EVar5;
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
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FLinearColor,void>
              ((this->Attributes).Object,&local_28,(FAttributeKey *)&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::IsValid
                      (&local_28);
    if (bVar3) {
      EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::Get
                        (&local_28,param_2);
      if (local_28.Key.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return EVar5 == Operation_Success;
      }
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
      return EVar5 == Operation_Success;
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// SetAttribute<enum_UInterchangeGenericMaterialPipeline::EMaterialInputType> @ 14e7628e0

bool __thiscall
UInterchangeBaseNode::SetAttribute<enum_UInterchangeGenericMaterialPipeline::EMaterialInputType>
          (UInterchangeBaseNode *this,FString *param_1,EMaterialInputType *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  EAttributeStorageResult EVar4;
  TAttributeHandle<unsigned_char,void> *pTVar5;
  FString *pFVar6;
  longlong lVar7;
  FString local_68;
  FAttributeKey local_58;
  FString local_48;
  TAttributeHandle<unsigned_char,void> local_38;
  TAttributeHandle<unsigned_char,void> local_20;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FString::operator=(&local_68,param_1);
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
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((this->Attributes).Object,(FAttributeKey *)&local_68,param_2,None);
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  if ((EVar4 & Operation_Success) == None) {
    lVar7 = (longlong)local_68.Data.ArrayNum;
    local_58.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Key.Data.ArrayNum = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      local_58.Key.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_68.Data.ArrayNum,
                 &local_58.Key.Data.ArrayMax);
      memcpy(local_58.Key.Data.AllocatorInstance.Data,_Src.Data,lVar7 * 2);
    }
    pFVar6 = ::FString::FString(&local_48,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar6,&local_58);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_38);
  }
  else {
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
    pTVar5 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       ((this->Attributes).Object,&local_20,(FAttributeKey *)&local_68);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_38,&pTVar5->Key,pTVar5->AttributeStorage);
    if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                    (&local_38);
  if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

