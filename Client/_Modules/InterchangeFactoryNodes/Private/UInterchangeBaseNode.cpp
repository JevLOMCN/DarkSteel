// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 8

// SetAttribute<TEnumAsByte<enum_EBlendMode>_> @ 14e52ca20

bool __thiscall
UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_EBlendMode>_>
          (UInterchangeBaseNode *this,FString *param_1,TEnumAsByte<EBlendMode> *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  EAttributeStorageResult EVar4;
  TAttributeHandle<unsigned_char,void> *pTVar5;
  FString *pFVar6;
  longlong lVar7;
  uchar local_res8 [8];
  FString local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<unsigned_char,void> local_48;
  TAttributeHandle<unsigned_char,void> local_30;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::operator=(&local_78,param_1);
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
  local_res8[0] = param_2->Value;
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((this->Attributes).Object,(FAttributeKey *)&local_78,local_res8,None);
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  if ((EVar4 & Operation_Success) == None) {
    lVar7 = (longlong)local_78.Data.ArrayNum;
    local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Key.Data.ArrayNum = local_78.Data.ArrayNum;
    if (local_78.Data.ArrayNum == 0) {
      local_68.Key.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_78.Data.ArrayNum,
                 &local_68.Key.Data.ArrayMax);
      memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src.Data,lVar7 * 2);
    }
    pFVar6 = ::FString::FString(&local_58,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar6,&local_68);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48);
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
                       ((this->Attributes).Object,&local_30,(FAttributeKey *)&local_78);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48,&pTVar5->Key,pTVar5->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                    (&local_48);
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetAttribute<TEnumAsByte<enum_EMaterialShadingModel>_> @ 14e52cbd0

bool __thiscall
UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_EMaterialShadingModel>_>
          (UInterchangeBaseNode *this,FString *param_1,TEnumAsByte<EMaterialShadingModel> *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  EAttributeStorageResult EVar4;
  TAttributeHandle<unsigned_char,void> *pTVar5;
  FString *pFVar6;
  longlong lVar7;
  uchar local_res8 [8];
  FString local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<unsigned_char,void> local_48;
  TAttributeHandle<unsigned_char,void> local_30;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::operator=(&local_78,param_1);
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
  local_res8[0] = param_2->Value;
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((this->Attributes).Object,(FAttributeKey *)&local_78,local_res8,None);
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  if ((EVar4 & Operation_Success) == None) {
    lVar7 = (longlong)local_78.Data.ArrayNum;
    local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Key.Data.ArrayNum = local_78.Data.ArrayNum;
    if (local_78.Data.ArrayNum == 0) {
      local_68.Key.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_78.Data.ArrayNum,
                 &local_68.Key.Data.ArrayMax);
      memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src.Data,lVar7 * 2);
    }
    pFVar6 = ::FString::FString(&local_58,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar6,&local_68);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48);
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
                       ((this->Attributes).Object,&local_30,(FAttributeKey *)&local_78);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48,&pTVar5->Key,pTVar5->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                    (&local_48);
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetAttribute<TEnumAsByte<enum_ERefractionMode>_> @ 14e52cd80

bool __thiscall
UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_ERefractionMode>_>
          (UInterchangeBaseNode *this,FString *param_1,TEnumAsByte<ERefractionMode> *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  EAttributeStorageResult EVar4;
  TAttributeHandle<unsigned_char,void> *pTVar5;
  FString *pFVar6;
  longlong lVar7;
  uchar local_res8 [8];
  FString local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<unsigned_char,void> local_48;
  TAttributeHandle<unsigned_char,void> local_30;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::operator=(&local_78,param_1);
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
  local_res8[0] = param_2->Value;
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((this->Attributes).Object,(FAttributeKey *)&local_78,local_res8,None);
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  if ((EVar4 & Operation_Success) == None) {
    lVar7 = (longlong)local_78.Data.ArrayNum;
    local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Key.Data.ArrayNum = local_78.Data.ArrayNum;
    if (local_78.Data.ArrayNum == 0) {
      local_68.Key.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_78.Data.ArrayNum,
                 &local_68.Key.Data.ArrayMax);
      memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src.Data,lVar7 * 2);
    }
    pFVar6 = ::FString::FString(&local_58,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar6,&local_68);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48);
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
                       ((this->Attributes).Object,&local_30,(FAttributeKey *)&local_78);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48,&pTVar5->Key,pTVar5->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                    (&local_48);
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetAttribute<TEnumAsByte<enum_ETranslucencyLightingMode>_> @ 14e52cf30

bool __thiscall
UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_ETranslucencyLightingMode>_>
          (UInterchangeBaseNode *this,FString *param_1,
          TEnumAsByte<ETranslucencyLightingMode> *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  EAttributeStorageResult EVar4;
  TAttributeHandle<unsigned_char,void> *pTVar5;
  FString *pFVar6;
  longlong lVar7;
  uchar local_res8 [8];
  FString local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<unsigned_char,void> local_48;
  TAttributeHandle<unsigned_char,void> local_30;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::operator=(&local_78,param_1);
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
  local_res8[0] = param_2->Value;
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((this->Attributes).Object,(FAttributeKey *)&local_78,local_res8,None);
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  if ((EVar4 & Operation_Success) == None) {
    lVar7 = (longlong)local_78.Data.ArrayNum;
    local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Key.Data.ArrayNum = local_78.Data.ArrayNum;
    if (local_78.Data.ArrayNum == 0) {
      local_68.Key.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_78.Data.ArrayNum,
                 &local_68.Key.Data.ArrayMax);
      memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src.Data,lVar7 * 2);
    }
    pFVar6 = ::FString::FString(&local_58,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar6,&local_68);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48);
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
                       ((this->Attributes).Object,&local_30,(FAttributeKey *)&local_78);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48,&pTVar5->Key,pTVar5->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                    (&local_48);
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetAttribute<TEnumAsByte<enum_TextureAddress>_> @ 14e52d0e0

bool __thiscall
UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_TextureAddress>_>
          (UInterchangeBaseNode *this,FString *param_1,TEnumAsByte<TextureAddress> *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  EAttributeStorageResult EVar4;
  TAttributeHandle<unsigned_char,void> *pTVar5;
  FString *pFVar6;
  longlong lVar7;
  uchar local_res8 [8];
  FString local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<unsigned_char,void> local_48;
  TAttributeHandle<unsigned_char,void> local_30;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::operator=(&local_78,param_1);
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
  local_res8[0] = param_2->Value;
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((this->Attributes).Object,(FAttributeKey *)&local_78,local_res8,None);
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  if ((EVar4 & Operation_Success) == None) {
    lVar7 = (longlong)local_78.Data.ArrayNum;
    local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Key.Data.ArrayNum = local_78.Data.ArrayNum;
    if (local_78.Data.ArrayNum == 0) {
      local_68.Key.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_78.Data.ArrayNum,
                 &local_68.Key.Data.ArrayMax);
      memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src.Data,lVar7 * 2);
    }
    pFVar6 = ::FString::FString(&local_58,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar6,&local_68);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48);
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
                       ((this->Attributes).Object,&local_30,(FAttributeKey *)&local_78);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48,&pTVar5->Key,pTVar5->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                    (&local_48);
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetAttribute<TEnumAsByte<enum_ECameraProjectionMode::Type>_> @ 14e52d290

bool __thiscall
UInterchangeBaseNode::SetAttribute<TEnumAsByte<enum_ECameraProjectionMode::Type>_>
          (UInterchangeBaseNode *this,FString *param_1,
          TEnumAsByte<ECameraProjectionMode::Type> *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  EAttributeStorageResult EVar4;
  TAttributeHandle<unsigned_char,void> *pTVar5;
  FString *pFVar6;
  longlong lVar7;
  uchar local_res8 [8];
  FString local_78;
  FAttributeKey local_68;
  FString local_58;
  TAttributeHandle<unsigned_char,void> local_48;
  TAttributeHandle<unsigned_char,void> local_30;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::operator=(&local_78,param_1);
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
  local_res8[0] = param_2->Value;
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((this->Attributes).Object,(FAttributeKey *)&local_78,local_res8,None);
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  if ((EVar4 & Operation_Success) == None) {
    lVar7 = (longlong)local_78.Data.ArrayNum;
    local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Key.Data.ArrayNum = local_78.Data.ArrayNum;
    if (local_78.Data.ArrayNum == 0) {
      local_68.Key.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_78.Data.ArrayNum,
                 &local_68.Key.Data.ArrayMax);
      memcpy(local_68.Key.Data.AllocatorInstance.Data,_Src.Data,lVar7 * 2);
    }
    pFVar6 = ::FString::FString(&local_58,L"RegisterAttribute");
    UE::Interchange::LogAttributeStorageErrors(EVar4,pFVar6,&local_68);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48);
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
                       ((this->Attributes).Object,&local_30,(FAttributeKey *)&local_78);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48,&pTVar5->Key,pTVar5->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                    (&local_48);
  if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetAttribute<enum_ECameraFocusMethod> @ 14e52d440

bool __thiscall
UInterchangeBaseNode::SetAttribute<enum_ECameraFocusMethod>
          (UInterchangeBaseNode *this,FString *param_1,ECameraFocusMethod *param_2)

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

// SetAttribute<enum_ELightUnits> @ 14e52d600

bool __thiscall
UInterchangeBaseNode::SetAttribute<enum_ELightUnits>
          (UInterchangeBaseNode *this,FString *param_1,ELightUnits *param_2)

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

