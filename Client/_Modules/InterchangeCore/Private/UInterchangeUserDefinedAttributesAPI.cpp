// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 156

// StaticClass @ 14e323080

UClass * __cdecl UInterchangeUserDefinedAttributesAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeUserDefinedAttributesAPI",
               &Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.InnerSingleton,
               StaticRegisterNativesUInterchangeUserDefinedAttributesAPI,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeUserDefinedAttributesAPI>,
               InternalVTableHelperCtorCaller<UInterchangeUserDefinedAttributesAPI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.InnerSingleton;
}

// CreateUserDefinedAttribute<signed_char> @ 14e368990

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<signed_char>
          (UInterchangeBaseNode *param_1,FString *param_2,schar *param_3,TOptional<FString> *param_4
          ,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<signed_char,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<signed_char>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<unsigned_char> @ 14e368b40

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<unsigned_char>
          (UInterchangeBaseNode *param_1,FString *param_2,uchar *param_3,TOptional<FString> *param_4
          ,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<unsigned_char,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<unsigned_char>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<short> @ 14e368cf0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<short>
          (UInterchangeBaseNode *param_1,FString *param_2,short *param_3,TOptional<FString> *param_4
          ,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<short,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<short>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<unsigned_short> @ 14e368ea0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<unsigned_short>
          (UInterchangeBaseNode *param_1,FString *param_2,ushort *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<unsigned_short,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<unsigned_short>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<int> @ 14e369050

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<int>
          (UInterchangeBaseNode *param_1,FString *param_2,int *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<int,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<int>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<unsigned_int> @ 14e369200

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<unsigned_int>
          (UInterchangeBaseNode *param_1,FString *param_2,uint *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<unsigned_int,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<unsigned_int>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<float> @ 14e3693b0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<float>
          (UInterchangeBaseNode *param_1,FString *param_2,float *param_3,TOptional<FString> *param_4
          ,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<float,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<float>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<double> @ 14e369560

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<double>
          (UInterchangeBaseNode *param_1,FString *param_2,double *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<double,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<double>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TBox2<float>_> @ 14e369710

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TBox2<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBox2<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TBox2<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TBox2<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TBox2<double>_> @ 14e3698c0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TBox2<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBox2<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TBox2<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TBox2<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TBox<float>_> @ 14e369a70

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TBox<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBox<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TBox<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TBox<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TBox<double>_> @ 14e369c20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TBox<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBox<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TBox<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TBox<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TBoxSphereBounds<float,float>_> @ 14e369dd0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<UE::Math::TBoxSphereBounds<float,float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBoxSphereBounds<float,float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TBoxSphereBounds<float,float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TBoxSphereBounds<float,float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TBoxSphereBounds<double,double>_> @ 14e369f80

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<UE::Math::TBoxSphereBounds<double,double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TBoxSphereBounds<double,double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TBoxSphereBounds<double,double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TBoxSphereBounds<double,double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TIntPoint<int>_> @ 14e36a130

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TIntPoint<int>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TIntPoint<int> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TIntPoint<int>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TIntPoint<int>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TIntRect<int>_> @ 14e36a2e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TIntRect<int>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TIntRect<int> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TIntRect<int>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TIntRect<int>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TIntVector3<int>_> @ 14e36a490

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TIntVector3<int>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TIntVector3<int> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TIntVector3<int>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TIntVector3<int>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TMatrix<float>_> @ 14e36a640

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TMatrix<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TMatrix<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TMatrix<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TMatrix<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TMatrix<double>_> @ 14e36a7f0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TMatrix<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TMatrix<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TMatrix<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TMatrix<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TPlane<float>_> @ 14e36a9a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TPlane<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TPlane<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TPlane<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TPlane<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TPlane<double>_> @ 14e36ab50

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TPlane<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TPlane<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TPlane<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TPlane<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TQuat<float>_> @ 14e36ad00

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TQuat<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TQuat<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TQuat<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TQuat<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TQuat<double>_> @ 14e36aeb0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TQuat<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TQuat<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TQuat<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TQuat<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TRotator<float>_> @ 14e36b060

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TRotator<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TRotator<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TRotator<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TRotator<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TRotator<double>_> @ 14e36b210

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TRotator<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TRotator<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TRotator<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TRotator<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TSphere<float>_> @ 14e36b3c0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TSphere<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TSphere<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TSphere<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TSphere<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TSphere<double>_> @ 14e36b570

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TSphere<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TSphere<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TSphere<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TSphere<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TTransform<float>_> @ 14e36b720

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TTransform<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TTransform<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TTransform<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TTransform<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TTransform<double>_> @ 14e36b8d0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TTransform<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TTransform<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TTransform<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TTransform<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TVector2<float>_> @ 14e36ba80

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TVector2<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector2<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TVector2<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector2<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TVector2<double>_> @ 14e36bc30

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TVector2<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector2<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TVector2<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector2<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TVector4<float>_> @ 14e36bde0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TVector4<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector4<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TVector4<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector4<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TVector4<double>_> @ 14e36bf90

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TVector4<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector4<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TVector4<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector4<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TVector<float>_> @ 14e36c140

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TVector<float>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector<float> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TVector<float>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector<float>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<UE::Math::TVector<double>_> @ 14e36c2f0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<UE::Math::TVector<double>_>
          (UInterchangeBaseNode *param_1,FString *param_2,TVector<double> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<UE::Math::TVector<double>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector<double>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FColor> @ 14e36c4a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FColor>
          (UInterchangeBaseNode *param_1,FString *param_2,FColor *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FColor,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FColor>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FDateTime> @ 14e36c650

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FDateTime>
          (UInterchangeBaseNode *param_1,FString *param_2,FDateTime *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FDateTime,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FDateTime>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FFrameNumber> @ 14e36c800

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FFrameNumber>
          (UInterchangeBaseNode *param_1,FString *param_2,FFrameNumber *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FFrameNumber,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FFrameNumber>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FFrameRate> @ 14e36c9b0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FFrameRate>
          (UInterchangeBaseNode *param_1,FString *param_2,FFrameRate *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FFrameRate,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FFrameRate>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FFrameTime> @ 14e36cb60

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FFrameTime>
          (UInterchangeBaseNode *param_1,FString *param_2,FFrameTime *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FFrameTime,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FFrameTime>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FGuid> @ 14e36cd10

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FGuid>
          (UInterchangeBaseNode *param_1,FString *param_2,FGuid *param_3,TOptional<FString> *param_4
          ,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FGuid,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FGuid>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FLinearColor> @ 14e36cec0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FLinearColor>
          (UInterchangeBaseNode *param_1,FString *param_2,FLinearColor *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FLinearColor,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FLinearColor>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FOrientedBox> @ 14e36d070

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FOrientedBox>
          (UInterchangeBaseNode *param_1,FString *param_2,FOrientedBox *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FOrientedBox,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FOrientedBox>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FRandomStream> @ 14e36d220

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FRandomStream>
          (UInterchangeBaseNode *param_1,FString *param_2,FRandomStream *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FRandomStream,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FRandomStream>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FSoftObjectPath> @ 14e36d3d0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FSoftObjectPath>
          (UInterchangeBaseNode *param_1,FString *param_2,FSoftObjectPath *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FSoftObjectPath,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FSoftObjectPath>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FTimespan> @ 14e36d580

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FTimespan>
          (UInterchangeBaseNode *param_1,FString *param_2,FTimespan *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FTimespan,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FTimespan>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FTwoVectors> @ 14e36d730

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FTwoVectors>
          (UInterchangeBaseNode *param_1,FString *param_2,FTwoVectors *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FTwoVectors,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FTwoVectors>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FVector2DHalf> @ 14e36d8e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FVector2DHalf>
          (UInterchangeBaseNode *param_1,FString *param_2,FVector2DHalf *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FVector2DHalf,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FVector2DHalf>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e36da90

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 14e36dc40

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<short,TSizedDefaultAllocator<32>_>_> @ 14e36ddf0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<short,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<short,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<short,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<short,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14e36dfa0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e36e150

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<int,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14e36e300

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e36e4b0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<float,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e36e660

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<double,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<double,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<double,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_> @ 14e36e810

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_> @ 14e36e9c0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_> @ 14e36eb70

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e36ed20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_> @ 14e36eed0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>,void>
  local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_> @ 14e36f080

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>,void>
  local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14e36f230

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> @ 14e36f3e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e36f590

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 14e36f740

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_> @ 14e36f8f0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_> @ 14e36faa0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_> @ 14e36fc50

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14e36fe00

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14e36ffb0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_> @ 14e370160

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14e370310

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_> @ 14e3704c0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e370670

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 14e370820

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e3709d0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14e370b80

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14e370d30

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14e370ee0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e371090

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e371240

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e3713f0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::
      RegisterAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14e3715a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FColor,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_> @ 14e371750

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FDateTime,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FDateTime,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 14e371900

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_> @ 14e371ab0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FFrameRate,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FFrameRate,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_> @ 14e371c60

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FFrameTime,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FFrameTime,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14e371e10

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FGuid,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e371fc0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_> @ 14e372170

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_> @ 14e372320

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FRandomStream,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FRandomStream,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 14e3724d0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_> @ 14e372680

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FTimespan,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FTimespan,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_> @ 14e372830

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_> @ 14e3729e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_> @ 14e372b90

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FFloat16,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e372d40

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FName,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e372ef0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<FString,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14e3730a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<__int64,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14e373250

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e373400

bool __cdecl
UInterchangeUserDefinedAttributesAPI::
CreateUserDefinedAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (UInterchangeBaseNode *param_1,FString *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3,TOptional<FString> *param_4,bool param_5
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<TArray<bool,TSizedDefaultAllocator<32>_>,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_>
                (param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FFloat16> @ 14e3735b0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FFloat16>
          (UInterchangeBaseNode *param_1,FString *param_2,FFloat16 *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FFloat16,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FFloat16>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FName> @ 14e373760

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FName>
          (UInterchangeBaseNode *param_1,FString *param_2,FName *param_3,TOptional<FString> *param_4
          ,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FName,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FName>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<FString> @ 14e373910

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<FString>
          (UInterchangeBaseNode *param_1,FString *param_2,FString *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FString,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FString>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<__int64> @ 14e373ac0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<__int64>
          (UInterchangeBaseNode *param_1,FString *param_2,long64 *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<__int64,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<__int64>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<unsigned___int64> @ 14e373c70

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<unsigned___int64>
          (UInterchangeBaseNode *param_1,FString *param_2,ulong64 *param_3,
          TOptional<FString> *param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<unsigned___int64,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<unsigned___int64>(param_1,&local_38,&local_88,param_3)
      ;
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute<bool> @ 14e373e20

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute<bool>
          (UInterchangeBaseNode *param_1,FString *param_2,bool *param_3,TOptional<FString> *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<bool,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_88,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_98,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<bool>(param_1,&local_38,&local_88,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>
                  (param_1,&local_20,&local_98,(FString *)param_4);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetUserDefinedAttribute<int> @ 14e3a93e0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<int>
          (UInterchangeBaseNode *param_1,FString *param_2,int *param_3,TOptional<FString> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  undefined8 _Src;
  longlong lVar8;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1 == (UInterchangeBaseNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterchangeNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                         ,0xa8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar4) {
    return false;
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iStack_70;
  local_48.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,&local_48,local_res8[0],false);
  bVar4 = UInterchangeBaseNode::GetAttribute<int>(param_1,&local_58,param_3);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_14e3a9601;
  }
  if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
    pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
    (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = 0;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iStack_60;
  local_38.DataPtr = (wchar_t *)local_68;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_88,&local_38,local_res8[0],true);
  cVar6 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar6 == '\0') {
LAB_14e3a95f1:
    bVar4 = true;
  }
  else {
    local_98.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    bVar4 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_88,&local_98.TypedValue);
    if (bVar4) {
      _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
      if (&local_98 != &param_4->field0_0x0) {
        pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
        lVar8 = (longlong)local_98.TypedValue.Data.ArrayNum;
        (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
        if (local_98.TypedValue.Data.ArrayNum == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                     local_98.TypedValue.Data.ArrayNum,piVar7);
          memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,lVar8 * 2
                );
        }
        if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if ((FScriptContainerElement *)_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)_Src);
      }
      goto LAB_14e3a95f1;
    }
    if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_14e3a9601:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetUserDefinedAttribute<float> @ 14e3a9650

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<float>
          (UInterchangeBaseNode *param_1,FString *param_2,float *param_3,TOptional<FString> *param_4
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  undefined8 _Src;
  longlong lVar8;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1 == (UInterchangeBaseNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterchangeNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                         ,0xa8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar4) {
    return false;
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iStack_70;
  local_48.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,&local_48,local_res8[0],false);
  bVar4 = UInterchangeBaseNode::GetAttribute<float>(param_1,&local_58,param_3);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_14e3a9871;
  }
  if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
    pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
    (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = 0;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iStack_60;
  local_38.DataPtr = (wchar_t *)local_68;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_88,&local_38,local_res8[0],true);
  cVar6 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar6 == '\0') {
LAB_14e3a9861:
    bVar4 = true;
  }
  else {
    local_98.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    bVar4 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_88,&local_98.TypedValue);
    if (bVar4) {
      _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
      if (&local_98 != &param_4->field0_0x0) {
        pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
        lVar8 = (longlong)local_98.TypedValue.Data.ArrayNum;
        (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
        if (local_98.TypedValue.Data.ArrayNum == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                     local_98.TypedValue.Data.ArrayNum,piVar7);
          memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,lVar8 * 2
                );
        }
        if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if ((FScriptContainerElement *)_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)_Src);
      }
      goto LAB_14e3a9861;
    }
    if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_14e3a9871:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetUserDefinedAttribute<double> @ 14e3a98c0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<double>
          (UInterchangeBaseNode *param_1,FString *param_2,double *param_3,
          TOptional<FString> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  undefined8 _Src;
  longlong lVar8;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1 == (UInterchangeBaseNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterchangeNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                         ,0xa8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar4) {
    return false;
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iStack_70;
  local_48.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,&local_48,local_res8[0],false);
  bVar4 = UInterchangeBaseNode::GetAttribute<double>(param_1,&local_58,param_3);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_14e3a9ae1;
  }
  if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
    pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
    (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = 0;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iStack_60;
  local_38.DataPtr = (wchar_t *)local_68;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_88,&local_38,local_res8[0],true);
  cVar6 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar6 == '\0') {
LAB_14e3a9ad1:
    bVar4 = true;
  }
  else {
    local_98.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    bVar4 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_88,&local_98.TypedValue);
    if (bVar4) {
      _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
      if (&local_98 != &param_4->field0_0x0) {
        pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
        lVar8 = (longlong)local_98.TypedValue.Data.ArrayNum;
        (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
        if (local_98.TypedValue.Data.ArrayNum == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                     local_98.TypedValue.Data.ArrayNum,piVar7);
          memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,lVar8 * 2
                );
        }
        if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if ((FScriptContainerElement *)_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)_Src);
      }
      goto LAB_14e3a9ad1;
    }
    if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_14e3a9ae1:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetUserDefinedAttribute<FString> @ 14e3a9b30

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FString>
          (UInterchangeBaseNode *param_1,FString *param_2,FString *param_3,
          TOptional<FString> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  undefined8 _Src;
  longlong lVar8;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1 == (UInterchangeBaseNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterchangeNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                         ,0xa8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar4) {
    return false;
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iStack_70;
  local_48.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,&local_48,local_res8[0],false);
  bVar4 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_58,param_3);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_14e3a9d51;
  }
  if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
    pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
    (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = 0;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iStack_60;
  local_38.DataPtr = (wchar_t *)local_68;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_88,&local_38,local_res8[0],true);
  cVar6 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar6 == '\0') {
LAB_14e3a9d41:
    bVar4 = true;
  }
  else {
    local_98.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    bVar4 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_88,&local_98.TypedValue);
    if (bVar4) {
      _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
      if (&local_98 != &param_4->field0_0x0) {
        pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
        lVar8 = (longlong)local_98.TypedValue.Data.ArrayNum;
        (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
        if (local_98.TypedValue.Data.ArrayNum == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                     local_98.TypedValue.Data.ArrayNum,piVar7);
          memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,lVar8 * 2
                );
        }
        if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if ((FScriptContainerElement *)_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)_Src);
      }
      goto LAB_14e3a9d41;
    }
    if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_14e3a9d51:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetUserDefinedAttribute<bool> @ 14e3a9da0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<bool>
          (UInterchangeBaseNode *param_1,FString *param_2,bool *param_3,TOptional<FString> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  undefined8 _Src;
  longlong lVar8;
  bool local_res8 [8];
  TOptional<FString>_u_0 local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1 == (UInterchangeBaseNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterchangeNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                         ,0xa8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = HasAttribute(param_1,param_2,false,local_res8);
  if (!bVar4) {
    return false;
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iStack_70;
  local_48.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,&local_48,local_res8[0],false);
  bVar4 = UInterchangeBaseNode::GetAttribute<bool>(param_1,&local_58,param_3);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_14e3a9fc1;
  }
  if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
    pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = 0xffffffff;
    (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = 0;
  }
  piVar7 = (int *)((longlong)&param_4->field0_0x0 + 0xc);
  local_68 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_60 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_60 = 0;
  }
  local_38._12_4_ = uStack_5c;
  local_38.Size = iStack_60;
  local_38.DataPtr = (wchar_t *)local_68;
  MakeUserDefinedPropertyKey((FAttributeKey *)&local_88,&local_38,local_res8[0],true);
  cVar6 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
  if (cVar6 == '\0') {
LAB_14e3a9fb1:
    bVar4 = true;
  }
  else {
    local_98.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    bVar4 = UInterchangeBaseNode::GetAttribute<FString>(param_1,&local_88,&local_98.TypedValue);
    if (bVar4) {
      _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
      if (&local_98 != &param_4->field0_0x0) {
        pFVar2 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        _Src = local_98.TypedValue.Data.AllocatorInstance.Data;
        lVar8 = (longlong)local_98.TypedValue.Data.ArrayNum;
        (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(int *)((longlong)&param_4->field0_0x0 + 8) = local_98.TypedValue.Data.ArrayNum;
        if (local_98.TypedValue.Data.ArrayNum == 0) {
          *piVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_98.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)param_4,
                     local_98.TypedValue.Data.ArrayNum,piVar7);
          memcpy((param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,(void *)_Src,lVar8 * 2
                );
        }
        if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if ((FScriptContainerElement *)_Src != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)_Src);
      }
      goto LAB_14e3a9fb1;
    }
    if (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_14e3a9fc1:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// UInterchangeUserDefinedAttributesAPI @ 14e402390

UInterchangeUserDefinedAttributesAPI * __thiscall
UInterchangeUserDefinedAttributesAPI::UInterchangeUserDefinedAttributesAPI
          (UInterchangeUserDefinedAttributesAPI *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeUserDefinedAttributesAPI__6B_;
  return this;
}

// UInterchangeUserDefinedAttributesAPI @ 14e4023c0

UInterchangeUserDefinedAttributesAPI * __thiscall
UInterchangeUserDefinedAttributesAPI::UInterchangeUserDefinedAttributesAPI
          (UInterchangeUserDefinedAttributesAPI *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeUserDefinedAttributesAPI__6B_;
  return this;
}

// ~UInterchangeUserDefinedAttributesAPI @ 14e4051c0

void __thiscall
UInterchangeUserDefinedAttributesAPI::~UInterchangeUserDefinedAttributesAPI
          (UInterchangeUserDefinedAttributesAPI *this)

{
  *(undefined ***)this = &___7UInterchangeUserDefinedAttributesAPI__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddApplyAndFillDelegatesToFactory @ 14e40cce0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UInterchangeUserDefinedAttributesAPI::AddApplyAndFillDelegatesToFactory
          (UInterchangeFactoryBaseNode *param_1,UClass *param_2)

{
  undefined1 *lpCriticalSection;
  TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
  *this;
  void *_Src;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  FString *pFVar5;
  FName *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FString local_408;
  FString local_3f8;
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_3e8;
  int local_3d8;
  int local_3d4;
  FName local_3d0;
  FName local_3c8;
  FName local_3c0;
  FName local_3b8;
  FName local_3b0;
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  FName local_380;
  FName local_378;
  FName local_370;
  FName local_368;
  FName local_360;
  FName local_358;
  FName local_350;
  FName local_348;
  FName local_340;
  FName local_338;
  FName local_330;
  FName local_328;
  FName local_320;
  FName local_318;
  FName local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  
  local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3e8.ArrayNum = 0;
  local_3e8.ArrayMax = 0;
  if ((param_1->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this = (TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
          *)param_1->_padding_;
  lpCriticalSection = &this[1].Pairs.Elements.field_0x28;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>(this,&local_3e8);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = local_3e8.ArrayNum;
  iVar11 = 0;
  local_res20 = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
    local_res20 = iVar11;
  }
  local_3d8 = UserDefinedAttributeValuePostKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeValuePostKey.Data.ArrayNum == 0) {
    local_3d8 = iVar11;
  }
  local_3d4 = UserDefinedAttributeDelegateKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeDelegateKey.Data.ArrayNum == 0) {
    local_3d4 = iVar11;
  }
  pFVar13 = local_3e8.AllocatorInstance.Data + (longlong)local_3e8.ArrayNum * 0x10;
  FVar10.Data = local_3e8.AllocatorInstance.Data;
  do {
    if (local_3e8.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar10.Data == pFVar13) {
      DestructItems<UE::Interchange::FAttributeKey,int>
                ((FAttributeKey *)local_3e8.AllocatorInstance.Data,local_3e8.ArrayNum);
      if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.AllocatorInstance.Data);
      }
      return;
    }
    local_3f8.Data.ArrayNum = *(int *)(FVar10.Data + 8);
    lVar9 = (longlong)local_3f8.Data.ArrayNum;
    local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    _Src = *(void **)FVar10.Data;
    if (local_3f8.Data.ArrayNum == 0) {
      local_3f8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3f8.Data.ArrayNum,0,(ForAnyElementType *)&local_3f8,
                 local_3f8.Data.ArrayNum,&local_3f8.Data.ArrayMax);
      memcpy(local_3f8.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
    }
    pwVar7 = L"";
    if (UserDefinedAttributeBaseKey.Data.ArrayNum != 0) {
      pwVar7 = (wchar_t *)UserDefinedAttributeBaseKey.Data.AllocatorInstance.Data;
    }
    iVar11 = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
    if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    bVar3 = ::FString::StartsWith(&local_3f8,pwVar7,iVar11,IgnoreCase);
    if (!bVar3) goto LAB_14e40e5bd;
    iVar11 = UserDefinedAttributeValuePostKey.Data.ArrayNum + -1;
    FVar8 = UserDefinedAttributeValuePostKey.Data.AllocatorInstance;
    if (UserDefinedAttributeValuePostKey.Data.ArrayNum == 0) {
      iVar11 = 0;
      FVar8.Data = (FScriptContainerElement *)L"";
    }
    bVar3 = ::FString::EndsWith(&local_3f8,(wchar_t *)FVar8.Data,iVar11,IgnoreCase);
    if (!bVar3) goto LAB_14e40e5bd;
    pFVar5 = ::FString::RightChop(&local_3f8,&local_58,local_res20);
    iVar11 = (pFVar5->Data).ArrayNum;
    iVar12 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar12 = 0;
    }
    if (iVar12 - local_3d8 < iVar12) {
      iVar12 = iVar12 - local_3d8;
    }
    iVar11 = 0;
    if (0 < iVar12) {
      iVar11 = iVar12;
    }
    ::FString::RemoveAt(pFVar5,iVar11,local_3d8,No);
    local_408.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_408.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_408.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pwVar7 = L"";
    if (UserDefinedAttributeDelegateKey.Data.ArrayNum != 0) {
      pwVar7 = (wchar_t *)UserDefinedAttributeDelegateKey.Data.AllocatorInstance.Data;
    }
    iVar11 = UserDefinedAttributeDelegateKey.Data.ArrayNum + -1;
    if (UserDefinedAttributeDelegateKey.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    bVar3 = ::FString::StartsWith(&local_408,pwVar7,iVar11,IgnoreCase);
    if (!bVar3) goto LAB_14e40e5ae;
    pFVar5 = ::FString::RightChop(&local_408,&local_48,local_3d4);
    if (&local_408 != pFVar5) {
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      local_408.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_408.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_408.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    uVar4 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1,FVar10.Data);
    switch(uVar4) {
    case 1:
      pFVar6 = &local_70;
      goto LAB_14e40d000;
    case 2:
      pFVar6 = &local_1a0;
      goto LAB_14e40dbe6;
    case 3:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_198,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 4:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_68,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FColor>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 5:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_60,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FDateTime>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 6:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_3d0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<double>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 7:
      pFVar6 = &local_3c8;
LAB_14e40d000:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(pFVar6,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 8:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_3c0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 9:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_3b8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FGuid>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 10:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_3b0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<signed_char>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0xb:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_3a8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<short>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0xc:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_3a0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<int>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0xd:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_398,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<__int64>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0xe:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_390,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TIntRect<int>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0xf:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_388,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FLinearColor>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x10:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_380,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FName>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x11:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_378,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FRandomStream>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x12:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_370,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FString>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x13:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_368,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FTimespan>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x14:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_360,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FTwoVectors>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x15:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_358,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_char>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x16:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_350,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_short>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x17:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_348,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned_int>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x18:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_340,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<unsigned___int64>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x19:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_338,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TVector2<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x1a:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_330,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TIntPoint<int>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x1b:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_328,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TIntVector3<int>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x1c:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_320,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FVector2DHalf>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x1d:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_318,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FFloat16>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x1e:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_310,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FOrientedBox>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x1f:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_308,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FFrameNumber>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x20:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_300,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FFrameRate>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x21:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2f8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FFrameTime>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x22:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2f0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FSoftObjectPath>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x23:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2e8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TMatrix<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x24:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2e0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TMatrix<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x25:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2d8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TPlane<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x26:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2d0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TPlane<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x27:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2c8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TQuat<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x28:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2c0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TQuat<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x29:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2b8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TRotator<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x2a:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2b0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TRotator<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x2b:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2a8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TTransform<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x2c:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_2a0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TTransform<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x2d:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_298,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TVector<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x2e:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_290,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TVector<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x2f:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_288,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TVector2<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x30:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_280,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TVector4<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x31:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_278,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TVector4<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x32:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_270,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TBox2<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x33:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_268,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TBox2<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x34:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_260,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TBox<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x35:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_258,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TBox<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x36:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_250,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<UE::Math::TBoxSphereBounds<float,float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x37:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_248,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<UE::Math::TBoxSphereBounds<double,double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x38:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_240,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TSphere<float>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x39:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_238,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<UE::Math::TSphere<double>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x3a:
      pFVar6 = &local_230;
      goto LAB_14e40daa2;
    case 0x3b:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_228,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FColor,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x3c:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_220,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x3d:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_218,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<double,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x3e:
      pFVar6 = &local_210;
LAB_14e40daa2:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(pFVar6,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<bool,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x3f:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_208,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<float,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x40:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_200,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x41:
      pFVar6 = &local_1f8;
LAB_14e40dbe6:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(pFVar6,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x42:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1f0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<short,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x43:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1e8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<int,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x44:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1e0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<__int64,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x45:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1d8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x46:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1d0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x47:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1c8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FName,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x48:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1c0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x49:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1b8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FString,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x4a:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1b0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x4b:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_1a8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x4c:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_190,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x4d:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_188,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x4e:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_180,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x4f:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_178,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x50:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_170,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x51:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_168,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x52:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_160,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x53:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_158,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x54:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_150,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x55:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_148,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x56:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_140,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x57:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_138,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x58:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_130,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x59:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_128,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x5a:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_120,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x5b:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_118,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x5c:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_110,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x5d:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_108,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x5e:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_100,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x5f:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_f8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x60:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_f0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x61:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_e8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x62:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_e0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 99:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_d8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 100:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x65:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_c8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x66:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_c0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x67:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_b8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x68:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_b0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x69:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_a8,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x6a:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_a0,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x6b:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_98,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x6c:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_90,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x6d:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_88,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x6e:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_80,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    case 0x6f:
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar8.Data = local_408.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_78,(wchar_t *)FVar8.Data);
      UInterchangeFactoryBaseNode::
      AddApplyAndFillDelegates<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                (param_1,(FString *)FVar10.Data,param_2,*pFVar6);
      break;
    default:
      `UInterchangeUserDefinedAttributesAPI::AddApplyAndFillDelegatesToFactory'::__l14::<lambda_1>::
      operator()(local_res18);
    }
LAB_14e40e5ae:
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
LAB_14e40e5bd:
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    FVar10.Data = FVar10.Data + 0x10;
  } while( true );
}

// CreateUserDefinedAttribute_Boolean @ 14e429bf0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Boolean
          (UInterchangeBaseNode *param_1,FString *param_2,bool *param_3,FString *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FString local_a8;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<bool,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  local_a8.Data.ArrayMax = -1;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  if ((1 < (param_4->Data).ArrayNum) && (param_4 != &local_a8)) {
    ::FString::FString(&local_a8,param_4);
    if (local_a8.Data.ArrayMax == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_98,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_88,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<bool>(param_1,&local_38,&local_98,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.ArrayMax != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>(param_1,&local_20,&local_88,&local_a8);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
      }
      if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
      goto LAB_14e429dcb;
    }
    if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      bVar3 = false;
      goto LAB_14e429dcb;
    }
  }
  else if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
LAB_14e429dcb:
  if ((local_a8.Data.ArrayMax != -1) &&
     (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute_Double @ 14e429e10

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Double
          (UInterchangeBaseNode *param_1,FString *param_2,double *param_3,FString *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FString local_a8;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<double,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  local_a8.Data.ArrayMax = -1;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  if ((1 < (param_4->Data).ArrayNum) && (param_4 != &local_a8)) {
    ::FString::FString(&local_a8,param_4);
    if (local_a8.Data.ArrayMax == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_98,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_88,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<double>(param_1,&local_38,&local_98,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.ArrayMax != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>(param_1,&local_20,&local_88,&local_a8);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
      }
      if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
      goto LAB_14e429feb;
    }
    if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      bVar3 = false;
      goto LAB_14e429feb;
    }
  }
  else if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
LAB_14e429feb:
  if ((local_a8.Data.ArrayMax != -1) &&
     (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute_FString @ 14e42a030

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_FString
          (UInterchangeBaseNode *param_1,FString *param_2,FString *param_3,FString *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FString local_a8;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<FString,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  local_a8.Data.ArrayMax = -1;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  if ((1 < (param_4->Data).ArrayNum) && (param_4 != &local_a8)) {
    ::FString::FString(&local_a8,param_4);
    if (local_a8.Data.ArrayMax == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_98,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_88,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<FString>(param_1,&local_38,&local_98,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.ArrayMax != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>(param_1,&local_20,&local_88,&local_a8);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
      }
      if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
      goto LAB_14e42a20b;
    }
    if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      bVar3 = false;
      goto LAB_14e42a20b;
    }
  }
  else if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
LAB_14e42a20b:
  if ((local_a8.Data.ArrayMax != -1) &&
     (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute_Float @ 14e42a250

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Float
          (UInterchangeBaseNode *param_1,FString *param_2,float *param_3,FString *param_4,
          bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FString local_a8;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<float,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  local_a8.Data.ArrayMax = -1;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  if ((1 < (param_4->Data).ArrayNum) && (param_4 != &local_a8)) {
    ::FString::FString(&local_a8,param_4);
    if (local_a8.Data.ArrayMax == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_98,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_88,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<float>(param_1,&local_38,&local_98,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.ArrayMax != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>(param_1,&local_20,&local_88,&local_a8);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
      }
      if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
      goto LAB_14e42a42b;
    }
    if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      bVar3 = false;
      goto LAB_14e42a42b;
    }
  }
  else if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
LAB_14e42a42b:
  if ((local_a8.Data.ArrayMax != -1) &&
     (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CreateUserDefinedAttribute_Int32 @ 14e42a470

bool __cdecl
UInterchangeUserDefinedAttributesAPI::CreateUserDefinedAttribute_Int32
          (UInterchangeBaseNode *param_1,FString *param_2,int *param_3,FString *param_4,bool param_5
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FString local_a8;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TAttributeHandle<int,void> local_38;
  TAttributeHandle<FString,void> local_20;
  
  local_a8.Data.ArrayMax = -1;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  if ((1 < (param_4->Data).ArrayNum) && (param_4 != &local_a8)) {
    ::FString::FString(&local_a8,param_4);
    if (local_a8.Data.ArrayMax == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_78 = (param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_78;
  MakeUserDefinedPropertyKey(&local_98,&local_58,param_5,false);
  cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_98);
  if (cVar5 == '\0') {
    local_68 = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    iStack_60 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_60 = 0;
    }
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    MakeUserDefinedPropertyKey(&local_88,&local_48,param_5,true);
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_88);
    if (cVar5 == '\0') {
      UInterchangeBaseNode::RegisterAttribute<int>(param_1,&local_38,&local_98,param_3);
      if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.ArrayMax != -1) {
        UInterchangeBaseNode::RegisterAttribute<FString>(param_1,&local_20,&local_88,&local_a8);
        if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
      }
      if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
      goto LAB_14e42a64b;
    }
    if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
    }
    if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
      bVar3 = false;
      goto LAB_14e42a64b;
    }
  }
  else if (local_98.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Key.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
LAB_14e42a64b:
  if ((local_a8.Data.ArrayMax != -1) &&
     (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// DuplicateAllUserDefinedAttribute @ 14e42bef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
          (UInterchangeBaseNode *param_1,UInterchangeBaseNode *param_2,bool param_3)

{
  FAttributeStorage *this;
  void *_Src;
  code *pcVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FFloat16 FVar6;
  undefined4 uVar7;
  FColor FVar8;
  FVector2DHalf FVar9;
  FFrameNumber FVar10;
  ulonglong uVar11;
  FString *pFVar12;
  undefined4 extraout_var_00;
  FDateTime FVar13;
  EAttributeStorageResult EVar14;
  FGuid *pFVar15;
  TIntRect<int> *pTVar16;
  FLinearColor *pFVar17;
  FName FVar18;
  FRandomStream FVar19;
  FTimespan FVar20;
  FTwoVectors *pFVar21;
  TVector2<double> *pTVar22;
  TIntPoint<int> TVar23;
  TIntVector3<int> *pTVar24;
  undefined4 extraout_var_01;
  undefined6 extraout_var;
  FOrientedBox *pFVar25;
  undefined4 extraout_var_02;
  FFrameRate FVar26;
  FFrameTime FVar27;
  FSoftObjectPath *pFVar28;
  TMatrix<float> *pTVar29;
  TMatrix<double> *pTVar30;
  TPlane<float> *pTVar31;
  TPlane<double> *pTVar32;
  TQuat<float> *pTVar33;
  TQuat<double> *pTVar34;
  TRotator<float> *pTVar35;
  TRotator<double> *pTVar36;
  TTransform<float> *pTVar37;
  TTransform<double> *pTVar38;
  TVector<float> *pTVar39;
  TVector<double> *pTVar40;
  TVector2<float> TVar41;
  TVector4<float> *pTVar42;
  TVector4<double> *pTVar43;
  TBox2<float> *pTVar44;
  TBox2<double> *pTVar45;
  TBox<float> *pTVar46;
  TBox<double> *pTVar47;
  TBoxSphereBounds<float,float> *pTVar48;
  TBoxSphereBounds<double,double> *pTVar49;
  TSphere<float> *pTVar50;
  TSphere<double> *pTVar51;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar52;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar53;
  TArray<FDateTime,TSizedDefaultAllocator<32>_> *pTVar54;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar55;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar56;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar57;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar58;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar59;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar60;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar61;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar62;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar63;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar64;
  TArray<FRandomStream,TSizedDefaultAllocator<32>_> *pTVar65;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar66;
  TArray<FTimespan,TSizedDefaultAllocator<32>_> *pTVar67;
  TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *pTVar68;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar69;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar70;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar71;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar72;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar73;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar74;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar75;
  TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> *pTVar76;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> *pTVar77;
  TArray<FOrientedBox,TSizedDefaultAllocator<32>_> *pTVar78;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar79;
  TArray<FFrameRate,TSizedDefaultAllocator<32>_> *pTVar80;
  TArray<FFrameTime,TSizedDefaultAllocator<32>_> *pTVar81;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar82;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *pTVar83;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar84;
  TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *pTVar85;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *pTVar86;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar87;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar88;
  TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *pTVar89;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar90;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *pTVar91;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar92;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar93;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar94;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar95;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar96;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar97;
  TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *pTVar98;
  TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *pTVar99;
  TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *pTVar100;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar101;
  TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *pTVar102;
  TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *pTVar103;
  TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> *pTVar104;
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *pTVar105;
  ForAnyElementType FVar106;
  int iVar107;
  wchar_t *pwVar108;
  longlong lVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  ForAnyElementType FVar113;
  undefined1 auStackY_14a8 [32];
  FString local_1468;
  TOptional<FString>_u_0 local_1458;
  char local_1448;
  bool local_1447;
  uchar local_1446;
  schar local_1445;
  uchar local_1444 [4];
  FString local_1440;
  short local_1430;
  ushort local_142e;
  int local_142c;
  int local_1428;
  FString local_1420;
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_1410;
  FString local_1400;
  uint local_13f0;
  uint local_13ec;
  FString local_13e8;
  FString local_13d8;
  FString local_13c8;
  FString local_13b8;
  FString local_13a8;
  FAttributeKey local_1398;
  FAttributeKey local_1388;
  FAttributeKey local_1378;
  FAttributeKey local_1368;
  FAttributeKey local_1358;
  FAttributeKey local_1348;
  FAttributeKey local_1338;
  FAttributeKey local_1328;
  FAttributeKey local_1318;
  FAttributeKey local_1308;
  FAttributeKey local_12f8;
  FAttributeKey local_12e8;
  FAttributeKey local_12d8;
  FAttributeKey local_12c8;
  FAttributeKey local_12b8;
  FAttributeKey local_12a8;
  FAttributeKey local_1298;
  FAttributeKey local_1288;
  FAttributeKey local_1278;
  FAttributeKey local_1268;
  FAttributeKey local_1258;
  FAttributeKey local_1248;
  FAttributeKey local_1238;
  FAttributeKey local_1228;
  FAttributeKey local_1218;
  FAttributeKey local_1208;
  FAttributeKey local_11f8;
  FAttributeKey local_11e8;
  FAttributeKey local_11d8;
  FAttributeKey local_11c8;
  FAttributeKey local_11b8;
  FAttributeKey local_11a8;
  FAttributeKey local_1198;
  TAttributeHandle<unsigned_char,void> local_1188;
  TAttributeHandle<float,void> local_1170;
  TAttributeHandle<bool,void> local_1158;
  undefined1 local_1140 [8];
  double local_1138;
  long64 local_1130;
  ulong64 local_1128;
  FScriptContainerElement *local_1120;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1118;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_1108;
  FString local_10f8;
  FString local_10e8;
  FScriptContainerElement *local_10d8;
  int iStack_10d0;
  undefined4 uStack_10cc;
  FScriptContainerElement *local_10c8;
  int iStack_10c0;
  undefined4 uStack_10bc;
  FScriptContainerElement *local_10b8;
  int iStack_10b0;
  undefined4 uStack_10ac;
  FScriptContainerElement *local_10a8;
  int iStack_10a0;
  undefined4 uStack_109c;
  FScriptContainerElement *local_1098;
  int iStack_1090;
  undefined4 uStack_108c;
  FScriptContainerElement *local_1088;
  int iStack_1080;
  undefined4 uStack_107c;
  FScriptContainerElement *local_1078;
  int iStack_1070;
  undefined4 uStack_106c;
  FScriptContainerElement *local_1068;
  int iStack_1060;
  undefined4 uStack_105c;
  FString local_1058;
  FScriptContainerElement *local_1048;
  int iStack_1040;
  undefined4 uStack_103c;
  FScriptContainerElement *local_1038;
  int iStack_1030;
  undefined4 uStack_102c;
  FScriptContainerElement *local_1028;
  int iStack_1020;
  undefined4 uStack_101c;
  FScriptContainerElement *local_1018;
  int iStack_1010;
  undefined4 uStack_100c;
  FScriptContainerElement *local_1008;
  int iStack_1000;
  undefined4 uStack_ffc;
  FScriptContainerElement *local_ff8;
  int iStack_ff0;
  undefined4 uStack_fec;
  FScriptContainerElement *local_fe8;
  int iStack_fe0;
  undefined4 uStack_fdc;
  FScriptContainerElement *local_fd8;
  int iStack_fd0;
  undefined4 uStack_fcc;
  FScriptContainerElement *local_fc8;
  int iStack_fc0;
  undefined4 uStack_fbc;
  FScriptContainerElement *local_fb8;
  int iStack_fb0;
  undefined4 uStack_fac;
  FScriptContainerElement *local_fa8;
  int iStack_fa0;
  undefined4 uStack_f9c;
  FScriptContainerElement *local_f98;
  int iStack_f90;
  undefined4 uStack_f8c;
  FScriptContainerElement *local_f88;
  int iStack_f80;
  undefined4 uStack_f7c;
  FScriptContainerElement *local_f78;
  int iStack_f70;
  undefined4 uStack_f6c;
  FScriptContainerElement *local_f68;
  int iStack_f60;
  undefined4 uStack_f5c;
  FScriptContainerElement *local_f58;
  int iStack_f50;
  undefined4 uStack_f4c;
  FScriptContainerElement *local_f48;
  int iStack_f40;
  undefined4 uStack_f3c;
  FScriptContainerElement *local_f38;
  int iStack_f30;
  undefined4 uStack_f2c;
  FScriptContainerElement *local_f28;
  int iStack_f20;
  undefined4 uStack_f1c;
  FScriptContainerElement *local_f18;
  int iStack_f10;
  undefined4 uStack_f0c;
  FScriptContainerElement *local_f08;
  int iStack_f00;
  undefined4 uStack_efc;
  FScriptContainerElement *local_ef8;
  int iStack_ef0;
  undefined4 uStack_eec;
  FScriptContainerElement *local_ee8;
  int iStack_ee0;
  undefined4 uStack_edc;
  FScriptContainerElement *local_ed8;
  int iStack_ed0;
  undefined4 uStack_ecc;
  FScriptContainerElement *local_ec8;
  int iStack_ec0;
  undefined4 uStack_ebc;
  FScriptContainerElement *local_eb8;
  int iStack_eb0;
  undefined4 uStack_eac;
  FScriptContainerElement *local_ea8;
  int iStack_ea0;
  undefined4 uStack_e9c;
  FScriptContainerElement *local_e98;
  int iStack_e90;
  undefined4 uStack_e8c;
  FScriptContainerElement *local_e88;
  int iStack_e80;
  undefined4 uStack_e7c;
  undefined1 local_e78 [16];
  undefined1 local_e68 [16];
  undefined1 local_e58 [16];
  undefined1 local_e48 [16];
  FString local_e38;
  FString local_e28;
  FString local_e18;
  TStringView<wchar_t> local_e08;
  TStringView<wchar_t> local_df8;
  TStringView<wchar_t> local_de8;
  FString local_dd8;
  TStringView<wchar_t> local_dc8;
  TStringView<wchar_t> local_db8;
  FString local_da8;
  TStringView<wchar_t> local_d98;
  TStringView<wchar_t> local_d88;
  FString local_d78;
  TStringView<wchar_t> local_d68;
  TStringView<wchar_t> local_d58;
  TStringView<wchar_t> local_d48;
  TStringView<wchar_t> local_d38;
  TStringView<wchar_t> local_d28;
  TStringView<wchar_t> local_d18;
  TStringView<wchar_t> local_d08;
  TStringView<wchar_t> local_cf8;
  TStringView<wchar_t> local_ce8;
  TStringView<wchar_t> local_cd8;
  TStringView<wchar_t> local_cc8;
  TStringView<wchar_t> local_cb8;
  TStringView<wchar_t> local_ca8;
  TStringView<wchar_t> local_c98;
  TStringView<wchar_t> local_c88;
  TStringView<wchar_t> local_c78;
  FString local_c68;
  TStringView<wchar_t> local_c58;
  TStringView<wchar_t> local_c48;
  TStringView<wchar_t> local_c38;
  TStringView<wchar_t> local_c28;
  TStringView<wchar_t> local_c18;
  TStringView<wchar_t> local_c08;
  TStringView<wchar_t> local_bf8;
  TStringView<wchar_t> local_be8;
  TStringView<wchar_t> local_bd8;
  TStringView<wchar_t> local_bc8;
  TStringView<wchar_t> local_bb8;
  TStringView<wchar_t> local_ba8;
  TStringView<wchar_t> local_b98;
  TStringView<wchar_t> local_b88;
  TArray<bool,TSizedDefaultAllocator<32>_> local_b78;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_b68;
  TArray<FDateTime,TSizedDefaultAllocator<32>_> local_b58;
  TArray<double,TSizedDefaultAllocator<32>_> local_b48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_b38;
  TArray<float,TSizedDefaultAllocator<32>_> local_b28;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_b18;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_b08;
  TArray<short,TSizedDefaultAllocator<32>_> local_af8;
  TArray<int,TSizedDefaultAllocator<32>_> local_ae8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_ad8;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_ac8;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_ab8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_aa8;
  TArray<FRandomStream,TSizedDefaultAllocator<32>_> local_a98;
  TArray<FTimespan,TSizedDefaultAllocator<32>_> local_a88;
  TArray<FTwoVectors,TSizedDefaultAllocator<32>_> local_a78;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_a68;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_a58;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_a48;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_a38;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_a28;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> local_a18;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_a08;
  TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> local_9f8;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> local_9e8;
  TArray<FOrientedBox,TSizedDefaultAllocator<32>_> local_9d8;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_9c8;
  TArray<FFrameRate,TSizedDefaultAllocator<32>_> local_9b8;
  TArray<FFrameTime,TSizedDefaultAllocator<32>_> local_9a8;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_998;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_988;
  TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> local_978;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> local_968;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> local_958;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_948;
  TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> local_938;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_928;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> local_918;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_908;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_8f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_8e8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_8d8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_8c8;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_8b8;
  TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> local_8a8;
  TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> local_898;
  TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> local_888;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> local_878;
  TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> local_868;
  TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> local_858;
  TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> local_848;
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> local_838;
  TAttributeHandle<FString,void> local_828;
  TAttributeHandle<FString,void> local_810;
  TAttributeHandle<__int64,void> local_7f8;
  TAttributeHandle<FString,void> local_7e0;
  TAttributeHandle<UE::Math::TIntRect<int>,void> local_7c8;
  TAttributeHandle<FString,void> local_7b0;
  TAttributeHandle<FLinearColor,void> local_798;
  TAttributeHandle<FString,void> local_780;
  TAttributeHandle<FString,void> local_768;
  TAttributeHandle<FName,void> local_750;
  TAttributeHandle<FString,void> local_738;
  TAttributeHandle<FTimespan,void> local_720;
  TVector<float> local_708;
  TRotator<float> local_6fc;
  TIntVector3<int> local_6f0;
  TAttributeHandle<FString,void> local_6e0;
  TAttributeHandle<FRandomStream,void> local_6c8;
  TAttributeHandle<FString,void> local_6b0;
  TAttributeHandle<FGuid,void> local_698;
  TAttributeHandle<FString,void> local_680;
  TAttributeHandle<signed_char,void> local_668;
  TAttributeHandle<FString,void> local_650;
  TAttributeHandle<short,void> local_638;
  TAttributeHandle<FString,void> local_620;
  TAttributeHandle<FTwoVectors,void> local_608;
  TAttributeHandle<FString,void> local_5f0;
  TAttributeHandle<unsigned_short,void> local_5d8;
  TAttributeHandle<FString,void> local_5c0;
  TAttributeHandle<unsigned_int,void> local_5a8;
  TAttributeHandle<FString,void> local_590;
  TAttributeHandle<unsigned___int64,void> local_578;
  TAttributeHandle<FString,void> local_560;
  TAttributeHandle<UE::Math::TVector2<double>,void> local_548;
  TAttributeHandle<FString,void> local_530;
  TAttributeHandle<UE::Math::TIntPoint<int>,void> local_518;
  TAttributeHandle<FString,void> local_500;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_4e8;
  TIntRect<int> local_4d0;
  FLinearColor local_4c0;
  TVector2<double> local_4b0;
  TPlane<float> local_498;
  TVector4<float> local_488;
  TSphere<float> local_478;
  TQuat<float> local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FGuid local_428;
  FSoftObjectPath local_418;
  TBox2<float> local_3f8;
  TRotator<double> local_3e0;
  TVector<double> local_3c8;
  TBoxSphereBounds<float,float> local_3b0;
  TPlane<double> local_388;
  TQuat<double> local_368;
  TVector4<double> local_348;
  TSphere<double> local_328;
  TBox2<double> local_308;
  FTwoVectors local_2e0;
  TBoxSphereBounds<double,double> local_2b0;
  FOrientedBox local_278;
  TBox<float> local_200;
  TTransform<float> local_1d8;
  TBox<double> local_1a8;
  TMatrix<float> local_168;
  TTransform<double> local_128;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_14a8;
  local_1448 = param_3;
  if ((param_1 == (UInterchangeBaseNode *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterchangeSourceNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeUserDefinedAttribute.cpp"
                         ,200,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == (UInterchangeBaseNode *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterchangeDestinationNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeUserDefinedAttribute.cpp"
                         ,0xc9,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_1410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1410.ArrayNum = 0;
  local_1410.ArrayMax = 0;
  if (((param_1->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this = (param_1->Attributes).Object;
  lpCriticalSection = &this->StorageMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
              *)this,&local_1410);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_1400.Data.AllocatorInstance.Data._4_4_ = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
    local_1400.Data.AllocatorInstance.Data._4_4_ = 0;
  }
  local_1428 = UserDefinedAttributeValuePostKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeValuePostKey.Data.ArrayNum == 0) {
    local_1428 = 0;
  }
  local_142c = UserDefinedAttributeDelegateKey.Data.ArrayNum + -1;
  uVar11 = (ulonglong)local_1410.ArrayNum;
  if (UserDefinedAttributeDelegateKey.Data.ArrayNum == 0) {
    local_142c = 0;
  }
  local_13ec = local_1410.ArrayNum;
  local_1120 = local_1410.AllocatorInstance.Data + uVar11 * 0x10;
  FVar113.Data = local_1410.AllocatorInstance.Data;
  iVar111 = local_1428;
  iVar112 = local_142c;
  do {
    pFVar2 = local_1120;
    if (local_1410.ArrayNum != (int)uVar11) {
      local_1444[2] = 0;
      `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_1444 + 2);
    }
    if (FVar113.Data == pFVar2) {
      DestructItems<UE::Interchange::FAttributeKey,int>
                ((FAttributeKey *)local_1410.AllocatorInstance.Data,local_1410.ArrayNum);
      if (local_1410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1410.AllocatorInstance.Data);
      }
      return;
    }
    local_1420.Data.ArrayNum = *(int *)(FVar113.Data + 8);
    lVar109 = (longlong)local_1420.Data.ArrayNum;
    _Src = *(void **)FVar113.Data;
    local_1420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1420.Data.ArrayNum == 0) {
      local_1420.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1420.Data.ArrayNum,0,(ForAnyElementType *)&local_1420,
                 local_1420.Data.ArrayNum,&local_1420.Data.ArrayMax);
      memcpy(local_1420.Data.AllocatorInstance.Data,_Src,lVar109 * 2);
    }
    iVar110 = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
    if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
      iVar110 = 0;
    }
    pwVar108 = L"";
    if (UserDefinedAttributeBaseKey.Data.ArrayNum != 0) {
      pwVar108 = (wchar_t *)UserDefinedAttributeBaseKey.Data.AllocatorInstance.Data;
    }
    bVar3 = ::FString::StartsWith(&local_1420,pwVar108,iVar110,IgnoreCase);
    if (!bVar3) goto LAB_14e42fb9b;
    iVar110 = UserDefinedAttributeValuePostKey.Data.ArrayNum + -1;
    FVar106 = UserDefinedAttributeValuePostKey.Data.AllocatorInstance;
    if (UserDefinedAttributeValuePostKey.Data.ArrayNum == 0) {
      iVar110 = 0;
      FVar106.Data = (FScriptContainerElement *)L"";
    }
    bVar3 = ::FString::EndsWith(&local_1420,(wchar_t *)FVar106.Data,iVar110,IgnoreCase);
    if (!bVar3) goto LAB_14e42fb9b;
    bVar3 = false;
    pFVar12 = ::FString::RightChop
                        (&local_1420,&local_e38,local_1400.Data.AllocatorInstance.Data._4_4_);
    iVar107 = (pFVar12->Data).ArrayNum;
    iVar110 = iVar107 + -1;
    if (iVar107 == 0) {
      iVar110 = 0;
    }
    if (iVar110 - iVar111 < iVar110) {
      iVar110 = iVar110 - iVar111;
    }
    iVar107 = 0;
    if (0 < iVar110) {
      iVar107 = iVar110;
    }
    ::FString::RemoveAt(pFVar12,iVar107,iVar111,No);
    local_1440.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1440.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    local_1440.Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
    if (local_e38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e38.Data.AllocatorInstance.Data);
    }
    iVar111 = UserDefinedAttributeDelegateKey.Data.ArrayNum + -1;
    FVar106.Data = UserDefinedAttributeDelegateKey.Data.AllocatorInstance.Data;
    if (UserDefinedAttributeDelegateKey.Data.ArrayNum == 0) {
      iVar111 = 0;
      FVar106.Data = (FScriptContainerElement *)L"";
    }
    bVar4 = ::FString::StartsWith(&local_1440,(wchar_t *)FVar106.Data,iVar111,IgnoreCase);
    if (bVar4) {
      pFVar12 = ::FString::RightChop(&local_1440,&local_e28,iVar112);
      if (&local_1440 != pFVar12) {
        if (local_1440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1440.Data.AllocatorInstance.Data);
        }
        local_1440.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1440.Data.ArrayNum = (pFVar12->Data).ArrayNum;
        local_1440.Data.ArrayMax = (pFVar12->Data).ArrayMax;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
      }
      if (local_e28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e28.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    uVar7 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1,FVar113.Data);
    FVar106.Data = local_1440.Data.AllocatorInstance.Data;
    lVar109 = (longlong)local_1440.Data.ArrayNum;
    local_1468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1468.Data.ArrayNum = local_1440.Data.ArrayNum;
    if (local_1440.Data.ArrayNum == 0) {
      local_1468.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1440.Data.ArrayNum,0,(ForAnyElementType *)&local_1468,
                 local_1440.Data.ArrayNum,&local_1468.Data.ArrayMax);
      memcpy(local_1468.Data.AllocatorInstance.Data,FVar106.Data,lVar109 * 2);
    }
    if (local_1448 != '\0') {
      pFVar12 = UInterchangeBaseNode::GetDisplayLabel(param_1,&local_e18);
      ::FString::ConcatFC(&local_1058,pFVar12,L".");
      ::FString::ConcatFF(&local_13b8,&local_1058,&local_1440);
      if (local_1468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1468.Data.AllocatorInstance.Data);
      }
      local_1468.Data.AllocatorInstance.Data = local_13b8.Data.AllocatorInstance.Data;
      local_1468.Data.ArrayNum = local_13b8.Data.ArrayNum;
      local_1468.Data.ArrayMax = local_13b8.Data.ArrayMax;
      local_13b8.Data.ArrayNum = 0;
      local_13b8.Data.ArrayMax = 0;
      local_13b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1058.Data.AllocatorInstance.Data);
      }
      if (local_e18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e18.Data.AllocatorInstance.Data);
      }
    }
    local_1048 = local_1440.Data.AllocatorInstance.Data;
    iStack_1040 = local_1440.Data.ArrayNum + -1;
    if (local_1440.Data.ArrayNum == 0) {
      iStack_1040 = 0;
    }
    local_e08._12_4_ = uStack_103c;
    local_e08.Size = iStack_1040;
    local_e08.DataPtr = (wchar_t *)local_1440.Data.AllocatorInstance.Data;
    MakeUserDefinedPropertyKey((FAttributeKey *)&local_10f8,&local_e08,bVar3,true);
    local_1458.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_1458.TypedValue.Data.ArrayNum = 0;
    local_1458.TypedValue.Data.ArrayMax = -1;
    cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
    if (cVar5 != '\0') {
      local_13a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_13a8.Data.ArrayNum = 0;
      local_13a8.Data.ArrayMax = 0;
      UInterchangeBaseNode::GetStringAttribute(param_1,&local_10f8,&local_13a8);
      if (local_1458.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1458.TypedValue.Data.AllocatorInstance.Data);
      }
      FVar106.Data = local_13a8.Data.AllocatorInstance.Data;
      lVar109 = (longlong)local_13a8.Data.ArrayNum;
      local_1458.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_1458.TypedValue.Data.ArrayNum = local_13a8.Data.ArrayNum;
      if (local_13a8.Data.ArrayNum == 0) {
        local_1458.TypedValue.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_13a8.Data.ArrayNum,0,(ForAnyElementType *)&local_1458.TypedValue,
                   local_13a8.Data.ArrayNum,&local_1458.TypedValue.Data.ArrayMax);
        memcpy((void *)local_1458.TypedValue.Data.AllocatorInstance.Data,FVar106.Data,lVar109 * 2);
      }
      if ((local_1458.TypedValue.Data.ArrayMax == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (FVar106.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar106.Data);
      }
    }
    switch(uVar7) {
    case 1:
      local_1447 = UInterchangeBaseNode::GetAttributeChecked<bool>(param_1,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_1038 = local_1468.Data.AllocatorInstance.Data;
      iStack_1030 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_1030 = 0;
      }
      local_df8._12_4_ = uStack_102c;
      local_df8.Size = iStack_1030;
      local_df8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey((FAttributeKey *)&local_13e8,&local_df8,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_13e8.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_1028 = local_1468.Data.AllocatorInstance.Data;
        iStack_1020 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_1020 = 0;
        }
        local_de8._12_4_ = uStack_101c;
        local_de8.Size = iStack_1020;
        local_de8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_11b8,&local_de8,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          if (((param_2->Attributes).Object == (FAttributeStorage *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          EVar14 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                             ((param_2->Attributes).Object,(FAttributeKey *)&local_13e8,&local_1447,
                              None);
          if ((EVar14 & Operation_Success) == None) {
            ::FString::FString(&local_dd8,&local_13e8);
            pFVar12 = ::FString::FString(&local_458,L"RegisterAttribute");
            UE::Interchange::LogAttributeStorageErrors(EVar14,pFVar12,(FAttributeKey *)&local_dd8);
            local_1158.AttributeStorage = (FAttributeStorage *)0x0;
            local_1158.Key.Key.Data.ArrayNum = 0;
            local_1158.Key.Key.Data.ArrayMax = 0;
            local_1158.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          else {
            if (((param_2->Attributes).Object == (FAttributeStorage *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::
            TAttributeHandle<bool,void>
                      (&local_1158,(FAttributeKey *)&local_13e8,(param_2->Attributes).Object);
          }
          if (local_1158.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1158.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_6e0,&local_11b8,&local_1458.TypedValue),
             local_6e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_6e0.Key.Key.Data.AllocatorInstance.Data);
          }
        }
        FVar106.Data = local_13e8.Data.AllocatorInstance.Data;
        if (local_11b8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11b8.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_13e8.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 2:
      pTVar58 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a68,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar58,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a68.AllocatorInstance.Data);
      }
      break;
    case 3:
      pTVar69 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                          (param_1,&local_4e8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                (param_2,&local_1468,pTVar69,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_4e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.AllocatorInstance.Data);
      }
      break;
    case 4:
      FVar8 = UInterchangeBaseNode::GetAttributeChecked<FColor>(param_1,&local_10e8);
      CreateUserDefinedAttribute<FColor>
                (param_2,&local_1468,(FColor *)CONCAT44(extraout_var_00,FVar8.field0_0x0),
                 (TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 5:
      FVar13 = UInterchangeBaseNode::GetAttributeChecked<FDateTime>(param_1,(FString *)local_e78);
      CreateUserDefinedAttribute<FDateTime>
                (param_2,&local_1468,(FDateTime *)FVar13.Ticks,
                 (TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 6:
      local_1138 = UInterchangeBaseNode::GetAttributeChecked<double>
                             (param_1,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<double>
                (param_2,&local_1468,&local_1138,(TOptional<FString> *)&local_1458.TypedValue,bVar3)
      ;
      break;
    case 7:
      local_1446 = UInterchangeBaseNode::GetAttributeChecked<unsigned_char>
                             (param_1,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_1018 = local_1468.Data.AllocatorInstance.Data;
      iStack_1010 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_1010 = 0;
      }
      local_dc8._12_4_ = uStack_100c;
      local_dc8.Size = iStack_1010;
      local_dc8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey((FAttributeKey *)&local_13d8,&local_dc8,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_13d8.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_1008 = local_1468.Data.AllocatorInstance.Data;
        iStack_1000 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_1000 = 0;
        }
        local_db8._12_4_ = uStack_ffc;
        local_db8.Size = iStack_1000;
        local_db8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_11a8,&local_db8,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          if (((param_2->Attributes).Object == (FAttributeStorage *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          EVar14 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                             ((param_2->Attributes).Object,(FAttributeKey *)&local_13d8,&local_1446,
                              None);
          if ((EVar14 & Operation_Success) == None) {
            ::FString::FString(&local_da8,&local_13d8);
            pFVar12 = ::FString::FString(&local_448,L"RegisterAttribute");
            UE::Interchange::LogAttributeStorageErrors(EVar14,pFVar12,(FAttributeKey *)&local_da8);
            local_1188.AttributeStorage = (FAttributeStorage *)0x0;
            local_1188.Key.Key.Data.ArrayNum = 0;
            local_1188.Key.Key.Data.ArrayMax = 0;
            local_1188.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          else {
            if (((param_2->Attributes).Object == (FAttributeStorage *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
            TAttributeHandle<unsigned_char,void>
                      (&local_1188,(FAttributeKey *)&local_13d8,(param_2->Attributes).Object);
          }
          if (local_1188.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1188.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_828,&local_11a8,&local_1458.TypedValue),
             local_828.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_828.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_11a8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_11a8.Key.Data.AllocatorInstance.Data);
          }
          if (local_13d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_13d8.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_13d8.Data.AllocatorInstance.Data;
        if (local_11a8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11a8.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_13d8.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 8:
      local_1400.Data.ArrayNum =
           (int)UInterchangeBaseNode::GetAttributeChecked<float>(param_1,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_ff8 = local_1468.Data.AllocatorInstance.Data;
      iStack_ff0 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_ff0 = 0;
      }
      local_d98._12_4_ = uStack_fec;
      local_d98.Size = iStack_ff0;
      local_d98.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey((FAttributeKey *)&local_13c8,&local_d98,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_13c8.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_fe8 = local_1468.Data.AllocatorInstance.Data;
        iStack_fe0 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_fe0 = 0;
        }
        local_d88._12_4_ = uStack_fdc;
        local_d88.Size = iStack_fe0;
        local_d88.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1198,&local_d88,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          if (((param_2->Attributes).Object == (FAttributeStorage *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          EVar14 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                             ((param_2->Attributes).Object,(FAttributeKey *)&local_13c8,
                              (float *)&local_1400.Data.ArrayNum,None);
          if ((EVar14 & Operation_Success) == None) {
            ::FString::FString(&local_d78,&local_13c8);
            pFVar12 = ::FString::FString(&local_438,L"RegisterAttribute");
            UE::Interchange::LogAttributeStorageErrors(EVar14,pFVar12,(FAttributeKey *)&local_d78);
            local_1170.AttributeStorage = (FAttributeStorage *)0x0;
            local_1170.Key.Key.Data.ArrayNum = 0;
            local_1170.Key.Key.Data.ArrayMax = 0;
            local_1170.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          else {
            if (((param_2->Attributes).Object == (FAttributeStorage *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::
            TAttributeHandle<float,void>
                      (&local_1170,(FAttributeKey *)&local_13c8,(param_2->Attributes).Object);
          }
          if (local_1170.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1170.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_6b0,&local_1198,&local_1458.TypedValue),
             local_6b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_6b0.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1198.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1198.Key.Data.AllocatorInstance.Data);
          }
          if (local_13c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_13c8.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_13c8.Data.AllocatorInstance.Data;
        if (local_1198.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1198.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_13c8.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 9:
      pFVar15 = UInterchangeBaseNode::GetAttributeChecked<FGuid>
                          (param_1,&local_428,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_fd8 = local_1468.Data.AllocatorInstance.Data;
      iStack_fd0 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_fd0 = 0;
      }
      local_d68._12_4_ = uStack_fcc;
      local_d68.Size = iStack_fd0;
      local_d68.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1368,&local_d68,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1368.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_fc8 = local_1468.Data.AllocatorInstance.Data;
        iStack_fc0 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_fc0 = 0;
        }
        local_d58._12_4_ = uStack_fbc;
        local_d58.Size = iStack_fc0;
        local_d58.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_12a8,&local_d58,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<FGuid>(param_2,&local_698,&local_1368,pFVar15);
          if (local_698.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_698.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_680,&local_12a8,&local_1458.TypedValue),
             local_680.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_680.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_12a8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12a8.Key.Data.AllocatorInstance.Data);
          }
          if (local_1368.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1368.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1368.Key.Data.AllocatorInstance.Data;
        if (local_12a8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_12a8.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1368.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 10:
      local_1445 = UInterchangeBaseNode::GetAttributeChecked<signed_char>
                             (param_1,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_fb8 = local_1468.Data.AllocatorInstance.Data;
      iStack_fb0 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_fb0 = 0;
      }
      local_d48._12_4_ = uStack_fac;
      local_d48.Size = iStack_fb0;
      local_d48.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1358,&local_d48,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1358.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_fa8 = local_1468.Data.AllocatorInstance.Data;
        iStack_fa0 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_fa0 = 0;
        }
        local_d38._12_4_ = uStack_f9c;
        local_d38.Size = iStack_fa0;
        local_d38.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1298,&local_d38,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<signed_char>
                    (param_2,&local_668,&local_1358,&local_1445);
          if (local_668.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_668.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_650,&local_1298,&local_1458.TypedValue),
             local_650.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_650.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1298.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1298.Key.Data.AllocatorInstance.Data);
          }
          if (local_1358.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1358.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1358.Key.Data.AllocatorInstance.Data;
        if (local_1298.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1298.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1358.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0xb:
      local_1430 = UInterchangeBaseNode::GetAttributeChecked<short>(param_1,(FString *)FVar113.Data)
      ;
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_f98 = local_1468.Data.AllocatorInstance.Data;
      iStack_f90 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_f90 = 0;
      }
      local_d28._12_4_ = uStack_f8c;
      local_d28.Size = iStack_f90;
      local_d28.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1348,&local_d28,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1348.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_f88 = local_1468.Data.AllocatorInstance.Data;
        iStack_f80 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_f80 = 0;
        }
        local_d18._12_4_ = uStack_f7c;
        local_d18.Size = iStack_f80;
        local_d18.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1288,&local_d18,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<short>(param_2,&local_638,&local_1348,&local_1430)
          ;
          if (local_638.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_638.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_810,&local_1288,&local_1458.TypedValue),
             local_810.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_810.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1288.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1288.Key.Data.AllocatorInstance.Data);
          }
          if (local_1348.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1348.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1348.Key.Data.AllocatorInstance.Data;
        if (local_1288.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1288.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1348.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0xc:
      local_1400.Data.ArrayMax =
           UInterchangeBaseNode::GetAttributeChecked<int>(param_1,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<int>
                (param_2,&local_1468,&local_1400.Data.ArrayMax,
                 (TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0xd:
      local_1130 = UInterchangeBaseNode::GetAttributeChecked<__int64>
                             (param_1,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_f78 = local_1468.Data.AllocatorInstance.Data;
      iStack_f70 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_f70 = 0;
      }
      local_d08._12_4_ = uStack_f6c;
      local_d08.Size = iStack_f70;
      local_d08.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1338,&local_d08,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1338.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_f68 = local_1468.Data.AllocatorInstance.Data;
        iStack_f60 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_f60 = 0;
        }
        local_cf8._12_4_ = uStack_f5c;
        local_cf8.Size = iStack_f60;
        local_cf8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1278,&local_cf8,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<__int64>
                    (param_2,&local_7f8,&local_1338,&local_1130);
          if (local_7f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7f8.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_7e0,&local_1278,&local_1458.TypedValue),
             local_7e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_7e0.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1278.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1278.Key.Data.AllocatorInstance.Data);
          }
          if (local_1338.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1338.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1338.Key.Data.AllocatorInstance.Data;
        if (local_1278.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1278.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1338.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0xe:
      pTVar16 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TIntRect<int>_>
                          (param_1,&local_4d0,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_f58 = local_1468.Data.AllocatorInstance.Data;
      iStack_f50 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_f50 = 0;
      }
      local_ce8._12_4_ = uStack_f4c;
      local_ce8.Size = iStack_f50;
      local_ce8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1328,&local_ce8,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1328.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_f48 = local_1468.Data.AllocatorInstance.Data;
        iStack_f40 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_f40 = 0;
        }
        local_cd8._12_4_ = uStack_f3c;
        local_cd8.Size = iStack_f40;
        local_cd8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1268,&local_cd8,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<UE::Math::TIntRect<int>_>
                    (param_2,&local_7c8,&local_1328,pTVar16);
          if (local_7c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7c8.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_7b0,&local_1268,&local_1458.TypedValue),
             local_7b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_7b0.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1268.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1268.Key.Data.AllocatorInstance.Data);
          }
          if (local_1328.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1328.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1328.Key.Data.AllocatorInstance.Data;
        if (local_1268.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1268.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1328.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0xf:
      pFVar17 = UInterchangeBaseNode::GetAttributeChecked<FLinearColor>
                          (param_1,&local_4c0,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_f38 = local_1468.Data.AllocatorInstance.Data;
      iStack_f30 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_f30 = 0;
      }
      local_cc8._12_4_ = uStack_f2c;
      local_cc8.Size = iStack_f30;
      local_cc8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1318,&local_cc8,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1318.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_f28 = local_1468.Data.AllocatorInstance.Data;
        iStack_f20 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_f20 = 0;
        }
        local_cb8._12_4_ = uStack_f1c;
        local_cb8.Size = iStack_f20;
        local_cb8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1258,&local_cb8,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<FLinearColor>
                    (param_2,&local_798,&local_1318,pFVar17);
          if (local_798.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_798.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_780,&local_1258,&local_1458.TypedValue),
             local_780.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_780.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1258.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1258.Key.Data.AllocatorInstance.Data);
          }
          if (local_1318.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1318.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1318.Key.Data.AllocatorInstance.Data;
        if (local_1258.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1258.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1318.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0x10:
      FVar18 = UInterchangeBaseNode::GetAttributeChecked<FName>(param_1,(FString *)(local_e78 + 8));
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_f18 = local_1468.Data.AllocatorInstance.Data;
      iStack_f10 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_f10 = 0;
      }
      local_ca8._12_4_ = uStack_f0c;
      local_ca8.Size = iStack_f10;
      local_ca8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1308,&local_ca8,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1308.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_f08 = local_1468.Data.AllocatorInstance.Data;
        iStack_f00 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_f00 = 0;
        }
        local_c98._12_4_ = uStack_efc;
        local_c98.Size = iStack_f00;
        local_c98.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1248,&local_c98,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<FName>
                    (param_2,&local_750,&local_1308,(FName *)FVar18);
          if (local_750.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_750.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_738,&local_1248,&local_1458.TypedValue),
             local_738.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_738.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1248.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1248.Key.Data.AllocatorInstance.Data);
          }
          if (local_1308.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1308.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1308.Key.Data.AllocatorInstance.Data;
        if (local_1248.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1248.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1308.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0x11:
      FVar19 = UInterchangeBaseNode::GetAttributeChecked<FRandomStream>
                         (param_1,(FString *)local_e68);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_ef8 = local_1468.Data.AllocatorInstance.Data;
      iStack_ef0 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_ef0 = 0;
      }
      local_c88._12_4_ = uStack_eec;
      local_c88.Size = iStack_ef0;
      local_c88.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_12f8,&local_c88,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_12f8.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_ee8 = local_1468.Data.AllocatorInstance.Data;
        iStack_ee0 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_ee0 = 0;
        }
        local_c78._12_4_ = uStack_edc;
        local_c78.Size = iStack_ee0;
        local_c78.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1228,&local_c78,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<FRandomStream>
                    (param_2,&local_6c8,&local_12f8,(FRandomStream *)FVar19);
          if (local_6c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6c8.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_768,&local_1228,&local_1458.TypedValue),
             local_768.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_768.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1228.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1228.Key.Data.AllocatorInstance.Data);
          }
          if (local_12f8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12f8.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_12f8.Key.Data.AllocatorInstance.Data;
        if (local_1228.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1228.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_12f8.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0x12:
      pFVar12 = UInterchangeBaseNode::GetAttributeChecked<FString>
                          (param_1,&local_c68,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<FString>
                (param_2,&local_1468,pFVar12,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c68.Data.AllocatorInstance.Data);
      }
      break;
    case 0x13:
      FVar20 = UInterchangeBaseNode::GetAttributeChecked<FTimespan>
                         (param_1,(FString *)(local_e68 + 8));
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_ed8 = local_1468.Data.AllocatorInstance.Data;
      iStack_ed0 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_ed0 = 0;
      }
      local_c58._12_4_ = uStack_ecc;
      local_c58.Size = iStack_ed0;
      local_c58.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_12e8,&local_c58,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_12e8.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_ec8 = local_1468.Data.AllocatorInstance.Data;
        iStack_ec0 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_ec0 = 0;
        }
        local_c48._12_4_ = uStack_ebc;
        local_c48.Size = iStack_ec0;
        local_c48.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1218,&local_c48,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<FTimespan>
                    (param_2,&local_720,&local_12e8,(FTimespan *)FVar20.Ticks);
          if (local_720.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_720.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_620,&local_1218,&local_1458.TypedValue),
             local_620.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_620.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1218.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1218.Key.Data.AllocatorInstance.Data);
          }
          if (local_12e8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12e8.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_12e8.Key.Data.AllocatorInstance.Data;
        if (local_1218.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1218.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_12e8.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0x14:
      pFVar21 = UInterchangeBaseNode::GetAttributeChecked<FTwoVectors>
                          (param_1,&local_2e0,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_eb8 = local_1468.Data.AllocatorInstance.Data;
      iStack_eb0 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_eb0 = 0;
      }
      local_c38._12_4_ = uStack_eac;
      local_c38.Size = iStack_eb0;
      local_c38.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_12d8,&local_c38,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_12d8.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_ea8 = local_1468.Data.AllocatorInstance.Data;
        iStack_ea0 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_ea0 = 0;
        }
        local_c28._12_4_ = uStack_e9c;
        local_c28.Size = iStack_ea0;
        local_c28.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1208,&local_c28,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<FTwoVectors>
                    (param_2,&local_608,&local_12d8,pFVar21);
          if (local_608.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_608.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_5f0,&local_1208,&local_1458.TypedValue),
             local_5f0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_5f0.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1208.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1208.Key.Data.AllocatorInstance.Data);
          }
          if (local_12d8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12d8.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_12d8.Key.Data.AllocatorInstance.Data;
        if (local_1208.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1208.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_12d8.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0x15:
      local_1444[0] =
           UInterchangeBaseNode::GetAttributeChecked<unsigned_char>(param_1,(FString *)FVar113.Data)
      ;
      CreateUserDefinedAttribute<unsigned_char>
                (param_2,&local_1468,local_1444,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x16:
      local_142e = UInterchangeBaseNode::GetAttributeChecked<unsigned_short>
                             (param_1,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_e98 = local_1468.Data.AllocatorInstance.Data;
      iStack_e90 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_e90 = 0;
      }
      local_c18._12_4_ = uStack_e8c;
      local_c18.Size = iStack_e90;
      local_c18.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_12c8,&local_c18,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_12c8.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_e88 = local_1468.Data.AllocatorInstance.Data;
        iStack_e80 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_e80 = 0;
        }
        local_c08._12_4_ = uStack_e7c;
        local_c08.Size = iStack_e80;
        local_c08.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_11f8,&local_c08,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<unsigned_short>
                    (param_2,&local_5d8,&local_12c8,&local_142e);
          if (local_5d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5d8.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_5c0,&local_11f8,&local_1458.TypedValue),
             local_5c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_5c0.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_11f8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_11f8.Key.Data.AllocatorInstance.Data);
          }
          if (local_12c8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12c8.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_12c8.Key.Data.AllocatorInstance.Data;
        if (local_11f8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11f8.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_12c8.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0x17:
      local_13f0 = UInterchangeBaseNode::GetAttributeChecked<unsigned_int>
                             (param_1,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_10d8 = local_1468.Data.AllocatorInstance.Data;
      iStack_10d0 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_10d0 = 0;
      }
      local_bf8._12_4_ = uStack_10cc;
      local_bf8.Size = iStack_10d0;
      local_bf8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_12b8,&local_bf8,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_12b8.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_1068 = local_1468.Data.AllocatorInstance.Data;
        iStack_1060 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_1060 = 0;
        }
        local_be8._12_4_ = uStack_105c;
        local_be8.Size = iStack_1060;
        local_be8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_11e8,&local_be8,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<unsigned_int>
                    (param_2,&local_5a8,&local_12b8,&local_13f0);
          if (local_5a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5a8.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_590,&local_11e8,&local_1458.TypedValue),
             local_590.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_590.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_11e8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_11e8.Key.Data.AllocatorInstance.Data);
          }
          if (local_12b8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_12b8.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_12b8.Key.Data.AllocatorInstance.Data;
        if (local_11e8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11e8.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_12b8.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0x18:
      local_1128 = UInterchangeBaseNode::GetAttributeChecked<unsigned___int64>
                             (param_1,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_10c8 = local_1468.Data.AllocatorInstance.Data;
      iStack_10c0 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_10c0 = 0;
      }
      local_bd8._12_4_ = uStack_10bc;
      local_bd8.Size = iStack_10c0;
      local_bd8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1398,&local_bd8,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1398.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_10b8 = local_1468.Data.AllocatorInstance.Data;
        iStack_10b0 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_10b0 = 0;
        }
        local_bc8._12_4_ = uStack_10ac;
        local_bc8.Size = iStack_10b0;
        local_bc8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_11d8,&local_bc8,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<unsigned___int64>
                    (param_2,&local_578,&local_1398,&local_1128);
          if (local_578.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_578.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_560,&local_11d8,&local_1458.TypedValue),
             local_560.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_560.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_11d8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_11d8.Key.Data.AllocatorInstance.Data);
          }
          if (local_1398.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1398.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1398.Key.Data.AllocatorInstance.Data;
        if (local_11d8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11d8.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1398.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0x19:
      pTVar22 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector2<double>_>
                          (param_1,&local_4b0,(FString *)FVar113.Data);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_10a8 = local_1468.Data.AllocatorInstance.Data;
      iStack_10a0 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_10a0 = 0;
      }
      local_bb8._12_4_ = uStack_109c;
      local_bb8.Size = iStack_10a0;
      local_bb8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1388,&local_bb8,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1388.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_1098 = local_1468.Data.AllocatorInstance.Data;
        iStack_1090 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_1090 = 0;
        }
        local_ba8._12_4_ = uStack_108c;
        local_ba8.Size = iStack_1090;
        local_ba8.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_1238,&local_ba8,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<UE::Math::TVector2<double>_>
                    (param_2,&local_548,&local_1388,pTVar22);
          if (local_548.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_548.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_530,&local_1238,&local_1458.TypedValue),
             local_530.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_530.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_1238.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1238.Key.Data.AllocatorInstance.Data);
          }
          if (local_1388.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1388.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1388.Key.Data.AllocatorInstance.Data;
        if (local_1238.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1238.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1388.Key.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14e42c703;
    case 0x1a:
      TVar23 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TIntPoint<int>_>
                         (param_1,(FString *)local_e58);
      if ((param_2 == (UInterchangeBaseNode *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterchangeNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeUserDefinedAttribute.h"
                             ,0x8f,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_1088 = local_1468.Data.AllocatorInstance.Data;
      iStack_1080 = local_1468.Data.ArrayNum + -1;
      if (local_1468.Data.ArrayNum == 0) {
        iStack_1080 = 0;
      }
      local_b98._12_4_ = uStack_107c;
      local_b98.Size = iStack_1080;
      local_b98.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
      MakeUserDefinedPropertyKey(&local_1378,&local_b98,bVar3,false);
      cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
      FVar106.Data = local_1378.Key.Data.AllocatorInstance.Data;
      if (cVar5 == '\0') {
        local_1078 = local_1468.Data.AllocatorInstance.Data;
        iStack_1070 = local_1468.Data.ArrayNum + -1;
        if (local_1468.Data.ArrayNum == 0) {
          iStack_1070 = 0;
        }
        local_b88._12_4_ = uStack_106c;
        local_b88.Size = iStack_1070;
        local_b88.DataPtr = (wchar_t *)local_1468.Data.AllocatorInstance.Data;
        MakeUserDefinedPropertyKey(&local_11c8,&local_b88,bVar3,true);
        cVar5 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
        if (cVar5 == '\0') {
          UInterchangeBaseNode::RegisterAttribute<UE::Math::TIntPoint<int>_>
                    (param_2,&local_518,&local_1378,(TIntPoint<int> *)TVar23.field0_0x0);
          if (local_518.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_518.Key.Key.Data.AllocatorInstance.Data);
          }
          if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
             (UInterchangeBaseNode::RegisterAttribute<FString>
                        (param_2,&local_500,&local_11c8,&local_1458.TypedValue),
             local_500.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_500.Key.Key.Data.AllocatorInstance.Data);
          }
          if (local_11c8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_11c8.Key.Data.AllocatorInstance.Data);
          }
          if (local_1378.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1378.Key.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar106.Data = local_1378.Key.Data.AllocatorInstance.Data;
        if (local_11c8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11c8.Key.Data.AllocatorInstance.Data);
          FVar106.Data = local_1378.Key.Data.AllocatorInstance.Data;
        }
      }
LAB_14e42c703:
      if (FVar106.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar106.Data);
      }
      break;
    case 0x1b:
      pTVar24 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TIntVector3<int>_>
                          (param_1,&local_6f0,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TIntVector3<int>_>
                (param_2,&local_1468,pTVar24,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x1c:
      FVar9 = UInterchangeBaseNode::GetAttributeChecked<FVector2DHalf>
                        (param_1,(FString *)local_1140);
      CreateUserDefinedAttribute<FVector2DHalf>
                (param_2,&local_1468,(FVector2DHalf *)CONCAT44(extraout_var_01,FVar9),
                 (TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x1d:
      FVar6 = UInterchangeBaseNode::GetAttributeChecked<FFloat16>(param_1,&local_1400);
      CreateUserDefinedAttribute<FFloat16>
                (param_2,&local_1468,(FFloat16 *)CONCAT62(extraout_var,FVar6.Encoded),
                 (TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x1e:
      pFVar25 = UInterchangeBaseNode::GetAttributeChecked<FOrientedBox>
                          (param_1,&local_278,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<FOrientedBox>
                (param_2,&local_1468,pFVar25,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x1f:
      FVar10 = UInterchangeBaseNode::GetAttributeChecked<FFrameNumber>
                         (param_1,(FString *)(local_1140 + 4));
      CreateUserDefinedAttribute<FFrameNumber>
                (param_2,&local_1468,(FFrameNumber *)CONCAT44(extraout_var_02,FVar10.Value),
                 (TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x20:
      FVar26 = UInterchangeBaseNode::GetAttributeChecked<FFrameRate>
                         (param_1,(FString *)(local_e58 + 8));
      CreateUserDefinedAttribute<FFrameRate>
                (param_2,&local_1468,(FFrameRate *)FVar26,
                 (TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x21:
      FVar27 = UInterchangeBaseNode::GetAttributeChecked<FFrameTime>(param_1,(FString *)local_e48);
      CreateUserDefinedAttribute<FFrameTime>
                (param_2,&local_1468,(FFrameTime *)FVar27,
                 (TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x22:
      pFVar28 = UInterchangeBaseNode::GetAttributeChecked<FSoftObjectPath>
                          (param_1,&local_418,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<FSoftObjectPath>
                (param_2,&local_1468,pFVar28,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_418.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.SubPathString.Data.AllocatorInstance.Data);
      }
      break;
    case 0x23:
      pTVar29 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TMatrix<float>_>
                          (param_1,&local_168,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TMatrix<float>_>
                (param_2,&local_1468,pTVar29,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x24:
      pTVar30 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TMatrix<double>_>
                          (param_1,&local_c8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TMatrix<double>_>
                (param_2,&local_1468,pTVar30,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x25:
      pTVar31 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TPlane<float>_>
                          (param_1,&local_498,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TPlane<float>_>
                (param_2,&local_1468,pTVar31,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x26:
      pTVar32 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TPlane<double>_>
                          (param_1,&local_388,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TPlane<double>_>
                (param_2,&local_1468,pTVar32,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x27:
      pTVar33 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TQuat<float>_>
                          (param_1,&local_468,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TQuat<float>_>
                (param_2,&local_1468,pTVar33,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x28:
      pTVar34 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TQuat<double>_>
                          (param_1,&local_368,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TQuat<double>_>
                (param_2,&local_1468,pTVar34,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x29:
      pTVar35 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TRotator<float>_>
                          (param_1,&local_6fc,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TRotator<float>_>
                (param_2,&local_1468,pTVar35,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x2a:
      pTVar36 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TRotator<double>_>
                          (param_1,&local_3e0,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TRotator<double>_>
                (param_2,&local_1468,pTVar36,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x2b:
      pTVar37 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TTransform<float>_>
                          (param_1,&local_1d8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TTransform<float>_>
                (param_2,&local_1468,pTVar37,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x2c:
      pTVar38 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TTransform<double>_>
                          (param_1,&local_128,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TTransform<double>_>
                (param_2,&local_1468,pTVar38,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x2d:
      pTVar39 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector<float>_>
                          (param_1,&local_708,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TVector<float>_>
                (param_2,&local_1468,pTVar39,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x2e:
      pTVar40 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector<double>_>
                          (param_1,&local_3c8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TVector<double>_>
                (param_2,&local_1468,pTVar40,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x2f:
      TVar41 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector2<float>_>
                         (param_1,(FString *)(local_e48 + 8));
      CreateUserDefinedAttribute<UE::Math::TVector2<float>_>
                (param_2,&local_1468,(TVector2<float> *)TVar41.field0_0x0,
                 (TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x30:
      pTVar42 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector4<float>_>
                          (param_1,&local_488,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TVector4<float>_>
                (param_2,&local_1468,pTVar42,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x31:
      pTVar43 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TVector4<double>_>
                          (param_1,&local_348,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TVector4<double>_>
                (param_2,&local_1468,pTVar43,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x32:
      pTVar44 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBox2<float>_>
                          (param_1,&local_3f8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TBox2<float>_>
                (param_2,&local_1468,pTVar44,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x33:
      pTVar45 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBox2<double>_>
                          (param_1,&local_308,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TBox2<double>_>
                (param_2,&local_1468,pTVar45,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x34:
      pTVar46 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBox<float>_>
                          (param_1,&local_200,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TBox<float>_>
                (param_2,&local_1468,pTVar46,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x35:
      pTVar47 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBox<double>_>
                          (param_1,&local_1a8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TBox<double>_>
                (param_2,&local_1468,pTVar47,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x36:
      pTVar48 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TBoxSphereBounds<float,float>_>
                          (param_1,&local_3b0,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TBoxSphereBounds<float,float>_>
                (param_2,&local_1468,pTVar48,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x37:
      pTVar49 = UInterchangeBaseNode::
                GetAttributeChecked<UE::Math::TBoxSphereBounds<double,double>_>
                          (param_1,&local_2b0,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TBoxSphereBounds<double,double>_>
                (param_2,&local_1468,pTVar49,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x38:
      pTVar50 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TSphere<float>_>
                          (param_1,&local_478,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TSphere<float>_>
                (param_2,&local_1468,pTVar50,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x39:
      pTVar51 = UInterchangeBaseNode::GetAttributeChecked<UE::Math::TSphere<double>_>
                          (param_1,&local_328,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<UE::Math::TSphere<double>_>
                (param_2,&local_1468,pTVar51,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      break;
    case 0x3a:
      pTVar52 = UInterchangeBaseNode::GetAttributeChecked<TArray<bool,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_b78,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar52,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_b78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b78.AllocatorInstance.Data);
      }
      break;
    case 0x3b:
      pTVar53 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FColor,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_b68,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar53,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_b68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b68.AllocatorInstance.Data);
      }
      break;
    case 0x3c:
      pTVar54 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_b58,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar54,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_b58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b58.AllocatorInstance.Data);
      }
      break;
    case 0x3d:
      pTVar55 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<double,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_b48,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<double,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar55,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_b48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b48.AllocatorInstance.Data);
      }
      break;
    case 0x3e:
      pTVar58 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_b38,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar58,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_b38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b38.AllocatorInstance.Data);
      }
      break;
    case 0x3f:
      pTVar56 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<float,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_b28,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar56,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_b28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b28.AllocatorInstance.Data);
      }
      break;
    case 0x40:
      pTVar57 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_b18,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar57,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_b18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b18.AllocatorInstance.Data);
      }
      break;
    case 0x41:
      pTVar58 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_b08,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar58,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_b08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b08.AllocatorInstance.Data);
      }
      break;
    case 0x42:
      pTVar59 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<short,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_af8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<short,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar59,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_af8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_af8.AllocatorInstance.Data);
      }
      break;
    case 0x43:
      pTVar60 = UInterchangeBaseNode::GetAttributeChecked<TArray<int,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_ae8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar60,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_ae8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ae8.AllocatorInstance.Data);
      }
      break;
    case 0x44:
      pTVar61 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<__int64,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_ad8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar61,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_ad8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ad8.AllocatorInstance.Data);
      }
      break;
    case 0x45:
      pTVar62 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_ac8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar62,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_ac8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ac8.AllocatorInstance.Data);
      }
      break;
    case 0x46:
      pTVar63 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_ab8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar63,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_ab8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ab8.AllocatorInstance.Data);
      }
      break;
    case 0x47:
      pTVar64 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FName,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_aa8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar64,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_aa8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_aa8.AllocatorInstance.Data);
      }
      break;
    case 0x48:
      pTVar65 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a98,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar65,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a98.AllocatorInstance.Data);
      }
      break;
    case 0x49:
      pTVar66 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FString,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_1118,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar66,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      DestructItems<FString,int>((FString *)local_1118.AllocatorInstance.Data,local_1118.ArrayNum);
      if (local_1118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1118.AllocatorInstance.Data);
      }
      break;
    case 0x4a:
      pTVar67 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a88,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar67,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a88.AllocatorInstance.Data);
      }
      break;
    case 0x4b:
      pTVar68 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a78,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar68,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a78.AllocatorInstance.Data);
      }
      break;
    case 0x4c:
      pTVar70 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a58,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar70,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a58.AllocatorInstance.Data);
      }
      break;
    case 0x4d:
      pTVar71 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a48,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar71,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a48.AllocatorInstance.Data);
      }
      break;
    case 0x4e:
      pTVar72 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a38,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar72,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a38.AllocatorInstance.Data);
      }
      break;
    case 0x4f:
      pTVar73 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a28,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar73,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a28.AllocatorInstance.Data);
      }
      break;
    case 0x50:
      pTVar74 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a18,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar74,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a18.AllocatorInstance.Data);
      }
      break;
    case 0x51:
      pTVar75 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_a08,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar75,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_a08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a08.AllocatorInstance.Data);
      }
      break;
    case 0x52:
      pTVar76 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_9f8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar76,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_9f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9f8.AllocatorInstance.Data);
      }
      break;
    case 0x53:
      pTVar77 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_9e8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar77,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_9e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9e8.AllocatorInstance.Data);
      }
      break;
    case 0x54:
      pTVar78 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_9d8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar78,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_9d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9d8.AllocatorInstance.Data);
      }
      break;
    case 0x55:
      pTVar79 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_9c8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar79,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_9c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9c8.AllocatorInstance.Data);
      }
      break;
    case 0x56:
      pTVar80 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_9b8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar80,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_9b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.AllocatorInstance.Data);
      }
      break;
    case 0x57:
      pTVar81 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_9a8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar81,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_9a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9a8.AllocatorInstance.Data);
      }
      break;
    case 0x58:
      pTVar82 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_1108,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar82,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      DestructItems<FSoftObjectPath,int>
                ((FSoftObjectPath *)local_1108.AllocatorInstance.Data,local_1108.ArrayNum);
      if ((FSoftObjectPath *)local_1108.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_1108.AllocatorInstance.Data);
      }
      break;
    case 0x59:
      pTVar83 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_998,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar83,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_998.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_998.AllocatorInstance.Data);
      }
      break;
    case 0x5a:
      pTVar84 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_988,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar84,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_988.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.AllocatorInstance.Data);
      }
      break;
    case 0x5b:
      pTVar85 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_978,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar85,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_978.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.AllocatorInstance.Data);
      }
      break;
    case 0x5c:
      pTVar86 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_968,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar86,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_968.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.AllocatorInstance.Data);
      }
      break;
    case 0x5d:
      pTVar87 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_958,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar87,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_958.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_958.AllocatorInstance.Data);
      }
      break;
    case 0x5e:
      pTVar88 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_948,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar88,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_948.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_948.AllocatorInstance.Data);
      }
      break;
    case 0x5f:
      pTVar89 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_938,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar89,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_938.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.AllocatorInstance.Data);
      }
      break;
    case 0x60:
      pTVar90 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_928,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar90,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_928.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_928.AllocatorInstance.Data);
      }
      break;
    case 0x61:
      pTVar91 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_918,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar91,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_918.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_918.AllocatorInstance.Data);
      }
      break;
    case 0x62:
      pTVar92 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_908,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar92,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_908.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_908.AllocatorInstance.Data);
      }
      break;
    case 99:
      pTVar93 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_8f8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar93,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_8f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8f8.AllocatorInstance.Data);
      }
      break;
    case 100:
      pTVar94 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_8e8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar94,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_8e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8e8.AllocatorInstance.Data);
      }
      break;
    case 0x65:
      pTVar95 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_8d8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar95,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_8d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8d8.AllocatorInstance.Data);
      }
      break;
    case 0x66:
      pTVar96 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_8c8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar96,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_8c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.AllocatorInstance.Data);
      }
      break;
    case 0x67:
      pTVar97 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_8b8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar97,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_8b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b8.AllocatorInstance.Data);
      }
      break;
    case 0x68:
      pTVar98 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_8a8,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar98,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_8a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a8.AllocatorInstance.Data);
      }
      break;
    case 0x69:
      pTVar99 = UInterchangeBaseNode::
                GetAttributeChecked<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
                          (param_1,&local_898,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar99,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_898.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_898.AllocatorInstance.Data);
      }
      break;
    case 0x6a:
      pTVar100 = UInterchangeBaseNode::
                 GetAttributeChecked<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
                           (param_1,&local_888,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar100,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_888.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_888.AllocatorInstance.Data);
      }
      break;
    case 0x6b:
      pTVar101 = UInterchangeBaseNode::
                 GetAttributeChecked<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                           (param_1,&local_878,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar101,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_878.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_878.AllocatorInstance.Data);
      }
      break;
    case 0x6c:
      pTVar102 = UInterchangeBaseNode::
                 GetAttributeChecked<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
                           (param_1,&local_868,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar102,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_868.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_868.AllocatorInstance.Data);
      }
      break;
    case 0x6d:
      pTVar103 = UInterchangeBaseNode::
                 GetAttributeChecked<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
                           (param_1,&local_858,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar103,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_858.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_858.AllocatorInstance.Data);
      }
      break;
    case 0x6e:
      pTVar104 = UInterchangeBaseNode::
                 GetAttributeChecked<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
                           (param_1,&local_848,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar104,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_848.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_848.AllocatorInstance.Data);
      }
      break;
    case 0x6f:
      pTVar105 = UInterchangeBaseNode::
                 GetAttributeChecked<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                           (param_1,&local_838,(FString *)FVar113.Data);
      CreateUserDefinedAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_1468,pTVar105,(TOptional<FString> *)&local_1458.TypedValue,bVar3);
      if (local_838.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_838.AllocatorInstance.Data);
      }
      break;
    default:
      local_1444[1] = 0;
      `UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute'::__l34::<lambda_1>::
      operator()(local_1444 + 1);
    }
    if ((local_1458.TypedValue.Data.ArrayMax != -1) &&
       (local_1458.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_1458.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_10f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10f8.Data.AllocatorInstance.Data);
    }
    if (local_1468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1468.Data.AllocatorInstance.Data);
    }
    iVar111 = local_1428;
    iVar112 = local_142c;
    if (local_1440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1440.Data.AllocatorInstance.Data);
      iVar111 = local_1428;
      iVar112 = local_142c;
    }
LAB_14e42fb9b:
    if (local_1420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1420.Data.AllocatorInstance.Data);
    }
    FVar113.Data = FVar113.Data + 0x10;
    uVar11 = (ulonglong)local_13ec;
  } while( true );
}

// GetPrivateStaticClass @ 14e442420

UClass * __cdecl UInterchangeUserDefinedAttributesAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeUserDefinedAttributesAPI",
               &Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.InnerSingleton,
               StaticRegisterNativesUInterchangeUserDefinedAttributesAPI,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeUserDefinedAttributesAPI>,
               InternalVTableHelperCtorCaller<UInterchangeUserDefinedAttributesAPI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeUserDefinedAttributesAPI.InnerSingleton;
}

// GetUserDefinedAttributeInfos @ 14e4443f0

TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> * __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttributeInfos
          (TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,UInterchangeBaseNode *param_1)

{
  FAttributeStorage *this;
  code *pcVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement FVar17;
  ForAnyElementType this_00;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  int local_88;
  int local_84;
  uint local_80;
  FScriptContainerElement *local_78;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  if ((param_1 == (UInterchangeBaseNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterchangeNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeUserDefinedAttribute.cpp"
                         ,0x95,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar9 = (TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
    ;
    return pTVar9;
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  if (((param_1->Attributes).Object == (FAttributeStorage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar9 = (TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
    ;
    return pTVar9;
  }
  this = (param_1->Attributes).Object;
  lpCriticalSection = &this->StorageMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
              *)this,&local_a8);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res20 = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
    local_res20 = 0;
  }
  local_88 = UserDefinedAttributeValuePostKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeValuePostKey.Data.ArrayNum == 0) {
    local_88 = 0;
  }
  uVar10 = (ulonglong)local_a8.ArrayNum;
  local_84 = UserDefinedAttributeDelegateKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeDelegateKey.Data.ArrayNum == 0) {
    local_84 = 0;
  }
  local_80 = local_a8.ArrayNum;
  pFVar12 = local_a8.AllocatorInstance.Data + uVar10 * 0x10;
  this_00.Data = local_a8.AllocatorInstance.Data;
  local_78 = pFVar12;
  iVar15 = local_res20;
  do {
    if (local_a8.ArrayNum != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (this_00.Data == pFVar12) {
      DestructItems<UE::Interchange::FAttributeKey,int>
                ((FAttributeKey *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pwVar11 = L"";
    if (UserDefinedAttributeBaseKey.Data.ArrayNum != 0) {
      pwVar11 = (wchar_t *)UserDefinedAttributeBaseKey.Data.AllocatorInstance.Data;
    }
    iVar7 = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
    if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    bVar4 = ::FString::StartsWith((FString *)this_00.Data,pwVar11,iVar7,IgnoreCase);
    if (bVar4) {
      iVar7 = UserDefinedAttributeValuePostKey.Data.ArrayNum + -1;
      FVar16 = UserDefinedAttributeValuePostKey.Data.AllocatorInstance;
      if (UserDefinedAttributeValuePostKey.Data.ArrayNum == 0) {
        iVar7 = 0;
        FVar16.Data = (FScriptContainerElement *)L"";
      }
      bVar4 = ::FString::EndsWith((FString *)this_00.Data,(wchar_t *)FVar16.Data,iVar7,IgnoreCase);
      if (bVar4) {
        FVar17 = (FScriptContainerElement)0x0;
        iVar7 = *(int *)(this_00.Data + 8) + -1;
        pwVar11 = (wchar_t *)(*(longlong *)this_00.Data + (longlong)iVar15 * 2);
        if (*(int *)(this_00.Data + 8) == 0) {
          iVar7 = 0;
        }
        iVar15 = (iVar7 - local_88) - iVar15;
        iVar7 = UserDefinedAttributeDelegateKey.Data.ArrayNum + -1;
        if (UserDefinedAttributeDelegateKey.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        iVar6 = iVar15;
        if (iVar7 < iVar15) {
          iVar6 = iVar7;
        }
        iVar13 = 0;
        if (0 < iVar6) {
          iVar13 = iVar6;
        }
        local_68 = pwVar11;
        iStack_60 = iVar15;
        if (((iVar7 == iVar13) &&
            (((iVar7 == 0 || (iVar13 == 0)) ||
             (iVar6 = FGenericPlatformStricmp::Strnicmp
                                ((wchar_t *)
                                 UserDefinedAttributeDelegateKey.Data.AllocatorInstance.Data,pwVar11
                                 ,(longlong)iVar13), iVar6 == 0)))) && (iVar7 == iVar13)) {
          FVar17 = (FScriptContainerElement)0x1;
          iVar15 = iVar15 - local_84;
          pwVar11 = pwVar11 + local_84;
          local_68 = pwVar11;
          iStack_60 = iVar15;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
        DefaultConstructItems<FInterchangeUserDefinedAttributeInfo,int>(pFVar12,1);
        uVar8 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1,this_00.Data);
        *(undefined4 *)&pFVar12[0x10].field_0x0 = uVar8;
        ::FString::AssignRange((FString *)pFVar12,pwVar11,iVar15);
        local_48._12_4_ = uStack_5c;
        local_48.Size = iStack_60;
        local_48.DataPtr = local_68;
        pFVar12[0x28] = FVar17;
        MakeUserDefinedPropertyKey((FAttributeKey *)&local_58,&local_48,(bool)FVar17,true);
        cVar5 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_58);
        if (cVar5 != '\0') {
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Data.ArrayNum = 0;
          local_98.Data.ArrayMax = 0;
          UInterchangeBaseNode::GetStringAttribute(param_1,&local_58,&local_98);
          pFVar2 = pFVar12 + 0x18;
          FVar16.Data = local_98.Data.AllocatorInstance.Data;
          if ((FScriptContainerElement *)&local_98 != pFVar2) {
                    /* WARNING: Load size is inaccurate */
            if (*pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(*pFVar2);
            }
            FVar16.Data = local_98.Data.AllocatorInstance.Data;
            lVar14 = (longlong)local_98.Data.ArrayNum;
            pFVar3 = pFVar12 + 0x24;
            *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
            *(int *)&pFVar12[0x20].field_0x0 = local_98.Data.ArrayNum;
            if (local_98.Data.ArrayNum == 0) {
              *(int *)pFVar3 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,
                         local_98.Data.ArrayNum,(int *)pFVar3);
                    /* WARNING: Load size is inaccurate */
              memcpy(*pFVar2,FVar16.Data,lVar14 * 2);
            }
            if ((*(int *)pFVar3 == -1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  ), bVar4)) {
              pcVar1 = (code *)swi(3);
              pTVar9 = (TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *)
                       (*pcVar1)();
              return pTVar9;
            }
          }
          if (FVar16.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar16.Data);
          }
        }
        pFVar12 = local_78;
        iVar15 = local_res20;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
          pFVar12 = local_78;
          iVar15 = local_res20;
        }
      }
    }
    uVar10 = (ulonglong)local_80;
    this_00.Data = this_00.Data + 0x10;
  } while( true );
}

// GetUserDefinedAttributeInfos @ 14e4447e0

void __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttributeInfos
          (UInterchangeBaseNode *param_1,
          TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeUserDefinedAttribute.cpp"
                       ,0xc2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = GetUserDefinedAttributeInfos(&local_18,param_1);
  if (param_2 != pTVar4) {
    DestructItems<FInterchangeUserDefinedAttributeInfo,int>
              ((FInterchangeUserDefinedAttributeInfo *)(param_2->AllocatorInstance).Data,
               param_2->ArrayNum);
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayNum = pTVar4->ArrayNum;
    param_2->ArrayMax = pTVar4->ArrayMax;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
  }
  DestructItems<FInterchangeUserDefinedAttributeInfo,int>
            ((FInterchangeUserDefinedAttributeInfo *)local_18.AllocatorInstance.Data,
             local_18.ArrayNum);
  if ((FInterchangeUserDefinedAttributeInfo *)local_18.AllocatorInstance.Data !=
      (FInterchangeUserDefinedAttributeInfo *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetUserDefinedAttribute_Boolean @ 14e4448a0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Boolean
          (UInterchangeBaseNode *param_1,FString *param_2,bool *param_3,FString *param_4)

{
  bool bVar1;
  int iVar2;
  TOptional<FString>_u_0 local_18;
  
  local_18.TypedValue.Data.ArrayMax = -1;
  local_18.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_18.TypedValue.Data.ArrayNum = 0;
  bVar1 = GetUserDefinedAttribute<bool>
                    (param_1,param_2,param_3,(TOptional<FString> *)&local_18.TypedValue);
  if (local_18.TypedValue.Data.ArrayMax != -1) {
    iVar2 = local_18.TypedValue.Data.ArrayNum + -1;
    if (local_18.TypedValue.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AssignRange(param_4,(wchar_t *)local_18.TypedValue.Data.AllocatorInstance.Data,iVar2)
    ;
    if ((local_18.TypedValue.Data.ArrayMax != -1) &&
       (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  return bVar1;
}

// GetUserDefinedAttribute_Double @ 14e444930

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Double
          (UInterchangeBaseNode *param_1,FString *param_2,double *param_3,FString *param_4)

{
  bool bVar1;
  int iVar2;
  TOptional<FString>_u_0 local_18;
  
  local_18.TypedValue.Data.ArrayMax = -1;
  local_18.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_18.TypedValue.Data.ArrayNum = 0;
  bVar1 = GetUserDefinedAttribute<double>
                    (param_1,param_2,param_3,(TOptional<FString> *)&local_18.TypedValue);
  if (local_18.TypedValue.Data.ArrayMax != -1) {
    iVar2 = local_18.TypedValue.Data.ArrayNum + -1;
    if (local_18.TypedValue.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AssignRange(param_4,(wchar_t *)local_18.TypedValue.Data.AllocatorInstance.Data,iVar2)
    ;
    if ((local_18.TypedValue.Data.ArrayMax != -1) &&
       (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  return bVar1;
}

// GetUserDefinedAttribute_FString @ 14e4449c0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_FString
          (UInterchangeBaseNode *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  int iVar2;
  TOptional<FString>_u_0 local_18;
  
  local_18.TypedValue.Data.ArrayMax = -1;
  local_18.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_18.TypedValue.Data.ArrayNum = 0;
  bVar1 = GetUserDefinedAttribute<FString>
                    (param_1,param_2,param_3,(TOptional<FString> *)&local_18.TypedValue);
  if (local_18.TypedValue.Data.ArrayMax != -1) {
    iVar2 = local_18.TypedValue.Data.ArrayNum + -1;
    if (local_18.TypedValue.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AssignRange(param_4,(wchar_t *)local_18.TypedValue.Data.AllocatorInstance.Data,iVar2)
    ;
    if ((local_18.TypedValue.Data.ArrayMax != -1) &&
       (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  return bVar1;
}

// GetUserDefinedAttribute_Float @ 14e444a50

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Float
          (UInterchangeBaseNode *param_1,FString *param_2,float *param_3,FString *param_4)

{
  bool bVar1;
  int iVar2;
  TOptional<FString>_u_0 local_18;
  
  local_18.TypedValue.Data.ArrayMax = -1;
  local_18.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_18.TypedValue.Data.ArrayNum = 0;
  bVar1 = GetUserDefinedAttribute<float>
                    (param_1,param_2,param_3,(TOptional<FString> *)&local_18.TypedValue);
  if (local_18.TypedValue.Data.ArrayMax != -1) {
    iVar2 = local_18.TypedValue.Data.ArrayNum + -1;
    if (local_18.TypedValue.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AssignRange(param_4,(wchar_t *)local_18.TypedValue.Data.AllocatorInstance.Data,iVar2)
    ;
    if ((local_18.TypedValue.Data.ArrayMax != -1) &&
       (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  return bVar1;
}

// GetUserDefinedAttribute_Int32 @ 14e444ae0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute_Int32
          (UInterchangeBaseNode *param_1,FString *param_2,int *param_3,FString *param_4)

{
  bool bVar1;
  int iVar2;
  TOptional<FString>_u_0 local_18;
  
  local_18.TypedValue.Data.ArrayMax = -1;
  local_18.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_18.TypedValue.Data.ArrayNum = 0;
  bVar1 = GetUserDefinedAttribute<int>
                    (param_1,param_2,param_3,(TOptional<FString> *)&local_18.TypedValue);
  if (local_18.TypedValue.Data.ArrayMax != -1) {
    iVar2 = local_18.TypedValue.Data.ArrayNum + -1;
    if (local_18.TypedValue.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AssignRange(param_4,(wchar_t *)local_18.TypedValue.Data.AllocatorInstance.Data,iVar2)
    ;
    if ((local_18.TypedValue.Data.ArrayMax != -1) &&
       (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  return bVar1;
}

// HasAttribute @ 14e445cf0

bool __cdecl
UInterchangeUserDefinedAttributesAPI::HasAttribute
          (UInterchangeBaseNode *param_1,FString *param_2,bool param_3,bool *param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  TStringView<wchar_t> local_38;
  FAttributeKey local_28;
  FAttributeKey local_18;
  
  local_38.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  local_38.Size = iVar4;
  MakeUserDefinedPropertyKey(&local_18,&local_38,true,param_3);
  local_38.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar4 = (param_2->Data).ArrayNum;
  local_38.Size = iVar4 + -1;
  if (iVar4 == 0) {
    local_38.Size = 0;
  }
  MakeUserDefinedPropertyKey(&local_28,&local_38,false,param_3);
  *param_4 = true;
  cVar2 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_18);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_28);
    if (cVar2 == '\0') {
      bVar3 = false;
      goto LAB_14e445dbf;
    }
    *param_4 = false;
  }
  bVar3 = true;
LAB_14e445dbf:
  if (local_28.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Key.Data.AllocatorInstance.Data);
  }
  if (local_18.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Key.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// MakeUserDefinedPropertyKey @ 14e44e430

FAttributeKey * __cdecl
UInterchangeUserDefinedAttributesAPI::MakeUserDefinedPropertyKey
          (FAttributeKey *__return_storage_ptr__,FString *param_1,bool param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  MakeUserDefinedPropertyKey(__return_storage_ptr__,&local_18,param_2,param_3);
  return __return_storage_ptr__;
}

// MakeUserDefinedPropertyKey @ 14e44e480

FAttributeKey * __cdecl
UInterchangeUserDefinedAttributesAPI::MakeUserDefinedPropertyKey
          (FAttributeKey *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool param_2,
          bool param_3)

{
  wchar_t *pwVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  TStringBuilderBase<wchar_t> local_58;
  
  FVar6.Data = UserDefinedAttributeBaseKey.Data.AllocatorInstance.Data;
  local_58.End = (wchar_t *)0x0;
  iVar4 = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
  local_58.bIsDynamic = false;
  local_58.bIsExternal = false;
  if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  local_58.Base = (wchar_t *)0x0;
  local_58.CurPos = (wchar_t *)0x0;
  uVar3 = (longlong)iVar4 * 2;
  if (uVar3 != 0) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,(longlong)iVar4);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar6.Data,uVar3);
    local_58.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3);
  }
  FVar6.Data = UserDefinedAttributeDelegateKey.Data.AllocatorInstance.Data;
  if (param_2) {
    iVar4 = UserDefinedAttributeDelegateKey.Data.ArrayNum + -1;
    if (UserDefinedAttributeDelegateKey.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    uVar3 = (ulong64)iVar4;
    if (local_58.End < local_58.CurPos + uVar3) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,uVar3);
    }
    if (iVar4 != 0) {
      pvVar2 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar6.Data,uVar3 * 2);
      local_58.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
    }
  }
  pwVar1 = param_1->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_1->Size;
  uVar3 = (ulong64)iVar4;
  if (local_58.End < local_58.CurPos + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_58.CurPos,pwVar1,uVar3 * 2);
    local_58.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  FVar6.Data = UserDefinedAttributeValuePostKey.Data.AllocatorInstance.Data;
  iVar4 = UserDefinedAttributeValuePostKey.Data.ArrayNum;
  if (param_3) {
    FVar6.Data = UserDefinedAttributePayLoadPostKey.Data.AllocatorInstance.Data;
    iVar4 = UserDefinedAttributePayLoadPostKey.Data.ArrayNum;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  uVar3 = (ulong64)iVar5;
  if (local_58.End < local_58.CurPos + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,uVar3);
  }
  if (iVar5 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar6.Data,uVar3 * 2);
    local_58.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  ::FString::AssignRange
            (&__return_storage_ptr__->Key,local_58.Base,
             (int)((longlong)local_58.CurPos - (longlong)local_58.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  return __return_storage_ptr__;
}

// MakeUserDefinedPropertyPayloadKey @ 14e44e660

FAttributeKey * __cdecl
UInterchangeUserDefinedAttributesAPI::MakeUserDefinedPropertyPayloadKey
          (FAttributeKey *__return_storage_ptr__,FString *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  MakeUserDefinedPropertyKey(__return_storage_ptr__,&local_18,param_2,true);
  return __return_storage_ptr__;
}

// MakeUserDefinedPropertyPayloadKey @ 14e44e6b0

FAttributeKey * __cdecl
UInterchangeUserDefinedAttributesAPI::MakeUserDefinedPropertyPayloadKey
          (FAttributeKey *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  MakeUserDefinedPropertyKey(__return_storage_ptr__,&local_18,param_2,true);
  return __return_storage_ptr__;
}

// MakeUserDefinedPropertyValueKey @ 14e44e6e0

FAttributeKey * __cdecl
UInterchangeUserDefinedAttributesAPI::MakeUserDefinedPropertyValueKey
          (FAttributeKey *__return_storage_ptr__,FString *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  MakeUserDefinedPropertyKey(__return_storage_ptr__,&local_18,param_2,false);
  return __return_storage_ptr__;
}

// MakeUserDefinedPropertyValueKey @ 14e44e730

FAttributeKey * __cdecl
UInterchangeUserDefinedAttributesAPI::MakeUserDefinedPropertyValueKey
          (FAttributeKey *__return_storage_ptr__,TStringView<wchar_t> *param_1,bool param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  MakeUserDefinedPropertyKey(__return_storage_ptr__,&local_18,param_2,false);
  return __return_storage_ptr__;
}

// RemoveUserDefinedAttribute @ 14e455850

bool __cdecl
UInterchangeUserDefinedAttributesAPI::RemoveUserDefinedAttribute
          (UInterchangeBaseNode *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  bool local_res18 [16];
  FString local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  bVar2 = HasAttribute(param_1,param_2,false,local_res18);
  if (bVar2) {
    local_28.Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    local_28.Data.ArrayNum = iVar1 + -1;
    if (iVar1 == 0) {
      local_28.Data.ArrayNum = 0;
    }
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    local_18.Size = local_28.Data.ArrayNum;
    MakeUserDefinedPropertyKey((FAttributeKey *)&local_28,&local_18,local_res18[0],false);
    bVar2 = UInterchangeBaseNode::RemoveAttribute(param_1,&local_28);
    if (!bVar2) {
LAB_14e455936:
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return false;
    }
    local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar1 = (param_2->Data).ArrayNum;
    local_18.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_18.Size = 0;
    }
    MakeUserDefinedPropertyKey((FAttributeKey *)&local_38,&local_18,local_res18[0],true);
    cVar3 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_38);
    if (cVar3 != '\0') {
      bVar2 = UInterchangeBaseNode::RemoveAttribute(param_1,&local_38);
      if (!bVar2) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        goto LAB_14e455936;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// StaticRegisterNativesUInterchangeUserDefinedAttributesAPI @ 14e460140

void __cdecl
UInterchangeUserDefinedAttributesAPI::StaticRegisterNativesUInterchangeUserDefinedAttributesAPI
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateUserDefinedAttribute_Boolean @ 14e469c90

void __cdecl
UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Boolean
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  int local_res18 [2];
  UInterchangeBaseNode *local_res20;
  FString local_48;
  FString local_38;
  
  local_res20 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CreateUserDefinedAttribute_Boolean
                    (local_res20,&local_38,pbVar3,&local_48,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateUserDefinedAttribute_Double @ 14e469e50

void __cdecl
UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Double
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  double *pdVar3;
  int local_res10 [2];
  double local_res18;
  UInterchangeBaseNode *local_res20;
  FString local_48;
  FString local_38;
  
  local_res20 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_res18 = 0.0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pdVar3 = &local_res18;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CreateUserDefinedAttribute_Double
                    (local_res20,&local_38,pdVar3,&local_48,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateUserDefinedAttribute_FString @ 14e46a010

void __cdecl
UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_FString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  UInterchangeBaseNode *local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res18[0] = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CreateUserDefinedAttribute_FString
                    (local_res18[0],&local_28,&local_38,&local_48,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateUserDefinedAttribute_Float @ 14e46a1e0

void __cdecl
UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Float
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  int local_res18 [2];
  UInterchangeBaseNode *local_res20;
  FString local_48;
  FString local_38;
  
  local_res20 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CreateUserDefinedAttribute_Float
                    (local_res20,&local_38,pfVar3,&local_48,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateUserDefinedAttribute_Int32 @ 14e46a3a0

void __cdecl
UInterchangeUserDefinedAttributesAPI::execCreateUserDefinedAttribute_Int32
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_res10 [2];
  int local_res18 [2];
  UInterchangeBaseNode *local_res20;
  FString local_48;
  FString local_38;
  
  local_res20 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CreateUserDefinedAttribute_Int32
                    (local_res20,&local_38,piVar3,&local_48,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execDuplicateAllUserDefinedAttribute @ 14e46a670

void __cdecl
UInterchangeUserDefinedAttributesAPI::execDuplicateAllUserDefinedAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [4];
  UInterchangeBaseNode *local_res20;
  UInterchangeBaseNode *local_18 [2];
  
  local_18[0] = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DuplicateAllUserDefinedAttribute(local_18[0],local_res20,local_res10[0] != 0);
  return;
}

// execGetUserDefinedAttributeInfos @ 14e46e920

void __cdecl
UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttributeInfos
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UInterchangeBaseNode *pUVar4;
  bool bVar5;
  TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  UInterchangeBaseNode *local_res10;
  TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> local_28;
  TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
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
  pUVar4 = local_res10;
  pTVar7 = &local_28;
  if ((TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (TArray<FInterchangeUserDefinedAttributeInfo,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UInterchangeBaseNode *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterchangeNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeUserDefinedAttribute.cpp"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = GetUserDefinedAttributeInfos(&local_18,pUVar4);
  if (pTVar7 != pTVar6) {
    DestructItems<FInterchangeUserDefinedAttributeInfo,int>
              ((FInterchangeUserDefinedAttributeInfo *)(pTVar7->AllocatorInstance).Data,
               pTVar7->ArrayNum);
    pFVar2 = (pTVar7->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar7->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar7->ArrayNum = pTVar6->ArrayNum;
    pTVar7->ArrayMax = pTVar6->ArrayMax;
    pTVar6->ArrayNum = 0;
    pTVar6->ArrayMax = 0;
  }
  DestructItems<FInterchangeUserDefinedAttributeInfo,int>
            ((FInterchangeUserDefinedAttributeInfo *)local_18.AllocatorInstance.Data,
             local_18.ArrayNum);
  if ((FInterchangeUserDefinedAttributeInfo *)local_18.AllocatorInstance.Data !=
      (FInterchangeUserDefinedAttributeInfo *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  DestructItems<FInterchangeUserDefinedAttributeInfo,int>
            ((FInterchangeUserDefinedAttributeInfo *)local_28.AllocatorInstance.Data,
             local_28.ArrayNum);
  if ((FInterchangeUserDefinedAttributeInfo *)local_28.AllocatorInstance.Data !=
      (FInterchangeUserDefinedAttributeInfo *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetUserDefinedAttribute_Boolean @ 14e46eab0

void __cdecl
UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Boolean
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *this;
  bool *pbVar3;
  int iVar4;
  bool local_res10 [8];
  UInterchangeBaseNode *local_res18 [2];
  TOptional<FString>_u_0 local_58;
  FString local_48;
  FString local_38;
  
  local_res18[0] = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
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
  local_58.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_58.TypedValue.Data.ArrayNum = 0;
  this = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  local_58.TypedValue.Data.ArrayMax = -1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetUserDefinedAttribute<bool>
                    (local_res18[0],&local_38,pbVar3,(TOptional<FString> *)&local_58.TypedValue);
  if (local_58.TypedValue.Data.ArrayMax != -1) {
    iVar4 = local_58.TypedValue.Data.ArrayNum + -1;
    if (local_58.TypedValue.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(this,(wchar_t *)local_58.TypedValue.Data.AllocatorInstance.Data,iVar4);
    if ((local_58.TypedValue.Data.ArrayMax != -1) &&
       (local_58.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_58.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetUserDefinedAttribute_Double @ 14e46eca0

void __cdecl
UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Double
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *this;
  double *pdVar3;
  int iVar4;
  double local_res10;
  UInterchangeBaseNode *local_res18 [2];
  TOptional<FString>_u_0 local_58;
  FString local_48;
  FString local_38;
  
  local_res18[0] = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pdVar3 = &local_res10;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
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
  local_58.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_58.TypedValue.Data.ArrayNum = 0;
  this = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  local_58.TypedValue.Data.ArrayMax = -1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetUserDefinedAttribute<double>
                    (local_res18[0],&local_38,pdVar3,(TOptional<FString> *)&local_58.TypedValue);
  if (local_58.TypedValue.Data.ArrayMax != -1) {
    iVar4 = local_58.TypedValue.Data.ArrayNum + -1;
    if (local_58.TypedValue.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(this,(wchar_t *)local_58.TypedValue.Data.AllocatorInstance.Data,iVar4);
    if ((local_58.TypedValue.Data.ArrayMax != -1) &&
       (local_58.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_58.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetUserDefinedAttribute_FString @ 14e46ee90

void __cdecl
UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_FString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *this;
  FString *pFVar3;
  int iVar4;
  UInterchangeBaseNode *local_res10;
  TOptional<FString>_u_0 local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res10 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
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
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar3 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
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
  local_58.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_58.TypedValue.Data.ArrayNum = 0;
  this = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  local_58.TypedValue.Data.ArrayMax = -1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetUserDefinedAttribute<FString>
                    (local_res10,&local_28,pFVar3,(TOptional<FString> *)&local_58.TypedValue);
  if (local_58.TypedValue.Data.ArrayMax != -1) {
    iVar4 = local_58.TypedValue.Data.ArrayNum + -1;
    if (local_58.TypedValue.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(this,(wchar_t *)local_58.TypedValue.Data.AllocatorInstance.Data,iVar4);
    if ((local_58.TypedValue.Data.ArrayMax != -1) &&
       (local_58.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_58.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetUserDefinedAttribute_Float @ 14e46f0a0

void __cdecl
UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Float
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *this;
  float *pfVar3;
  int iVar4;
  float local_res10 [2];
  UInterchangeBaseNode *local_res18 [2];
  TOptional<FString>_u_0 local_58;
  FString local_48;
  FString local_38;
  
  local_res18[0] = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
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
  local_58.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_58.TypedValue.Data.ArrayNum = 0;
  this = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  local_58.TypedValue.Data.ArrayMax = -1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetUserDefinedAttribute<float>
                    (local_res18[0],&local_38,pfVar3,(TOptional<FString> *)&local_58.TypedValue);
  if (local_58.TypedValue.Data.ArrayMax != -1) {
    iVar4 = local_58.TypedValue.Data.ArrayNum + -1;
    if (local_58.TypedValue.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(this,(wchar_t *)local_58.TypedValue.Data.AllocatorInstance.Data,iVar4);
    if ((local_58.TypedValue.Data.ArrayMax != -1) &&
       (local_58.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_58.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetUserDefinedAttribute_Int32 @ 14e46f290

void __cdecl
UInterchangeUserDefinedAttributesAPI::execGetUserDefinedAttribute_Int32
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *this;
  int *piVar3;
  int iVar4;
  int local_res10 [2];
  UInterchangeBaseNode *local_res18 [2];
  TOptional<FString>_u_0 local_58;
  FString local_48;
  FString local_38;
  
  local_res18[0] = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
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
  local_58.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_58.TypedValue.Data.ArrayNum = 0;
  this = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  local_58.TypedValue.Data.ArrayMax = -1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetUserDefinedAttribute<int>
                    (local_res18[0],&local_38,piVar3,(TOptional<FString> *)&local_58.TypedValue);
  if (local_58.TypedValue.Data.ArrayMax != -1) {
    iVar4 = local_58.TypedValue.Data.ArrayNum + -1;
    if (local_58.TypedValue.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(this,(wchar_t *)local_58.TypedValue.Data.AllocatorInstance.Data,iVar4);
    if ((local_58.TypedValue.Data.ArrayMax != -1) &&
       (local_58.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_58.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  *(bool *)param_3 = bVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveUserDefinedAttribute @ 14e470230

void __cdecl
UInterchangeUserDefinedAttributesAPI::execRemoveUserDefinedAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeBaseNode *this;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  void *pvVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ulong64 uVar10;
  int iVar11;
  int iVar12;
  UInterchangeBaseNode *local_res10;
  undefined1 *local_res18;
  FScriptContainerElement *local_88;
  undefined8 local_80;
  FString local_78;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  TStringBuilderBase<wchar_t> local_58;
  
  local_res10 = (UInterchangeBaseNode *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_88 = (FScriptContainerElement *)0x0;
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
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = (undefined1  [8])local_88;
  iVar11 = 0;
  iVar8 = (int)local_80 + -1;
  if ((int)local_80 == 0) {
    iVar8 = iVar11;
  }
  uStack_60 = (wchar_t *)CONCAT44(uStack_60._4_4_,iVar8);
  local_58.Base = (wchar_t *)local_88;
  local_58.CurPos = uStack_60;
  MakeUserDefinedPropertyKey
            ((FAttributeKey *)&local_78,(TStringView<wchar_t> *)&local_58,true,false);
  pFVar2 = local_88;
  FVar9 = UserDefinedAttributeBaseKey.Data.AllocatorInstance;
  local_58.Base = (wchar_t *)0x0;
  local_58.CurPos = (wchar_t *)0x0;
  local_58.End = (wchar_t *)0x0;
  iVar8 = (int)local_80 + -1;
  if ((int)local_80 == 0) {
    iVar8 = iVar11;
  }
  local_58.bIsDynamic = false;
  local_58.bIsExternal = false;
  iVar12 = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
    iVar12 = iVar11;
  }
  uVar10 = (longlong)iVar12 * 2;
  if (uVar10 != 0) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,(longlong)iVar12);
  }
  if (iVar12 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar9.Data,uVar10);
    local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10);
  }
  uVar10 = (ulong64)iVar8;
  if (local_58.End < local_58.CurPos + uVar10) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,uVar10);
  }
  if (iVar8 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,pFVar2,uVar10 * 2);
    local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
  }
  FVar9.Data = UserDefinedAttributeValuePostKey.Data.AllocatorInstance.Data;
  iVar8 = UserDefinedAttributeValuePostKey.Data.ArrayNum + -1;
  if (UserDefinedAttributeValuePostKey.Data.ArrayNum == 0) {
    iVar8 = iVar11;
  }
  uVar10 = (ulong64)iVar8;
  if (local_58.End < local_58.CurPos + uVar10) {
    TStringBuilderBase<wchar_t>::Extend(&local_58,uVar10);
  }
  if (iVar8 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar9.Data,uVar10 * 2);
    local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
  }
  local_68 = (undefined1  [8])0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  ::FString::AssignRange
            ((FString *)local_68,local_58.Base,
             (int)((longlong)local_58.CurPos - (longlong)local_58.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
  bVar6 = true;
  cVar3 = (**(code **)(this->_padding_ + 0x2c0))(this,&local_78);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(this->_padding_ + 0x2c0))(this,local_68);
    if (cVar3 != '\0') {
      bVar6 = false;
      goto LAB_14e47045b;
    }
    FVar9.Data = local_78.Data.AllocatorInstance.Data;
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
      FVar9.Data = local_78.Data.AllocatorInstance.Data;
    }
LAB_14e4707e2:
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar9.Data);
    }
    uVar5 = 1;
  }
  else {
LAB_14e47045b:
    if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar2 = local_88;
    FVar9.Data = UserDefinedAttributeBaseKey.Data.AllocatorInstance.Data;
    local_58.Base = (wchar_t *)0x0;
    local_58.CurPos = (wchar_t *)0x0;
    iVar8 = (int)local_80 + -1;
    local_58.End = (wchar_t *)0x0;
    if ((int)local_80 == 0) {
      iVar8 = 0;
    }
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    iVar11 = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
    if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    uVar10 = (longlong)iVar11 * 2;
    if (uVar10 != 0) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,(longlong)iVar11);
    }
    if (iVar11 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar9.Data,uVar10);
      local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10);
    }
    FVar9.Data = UserDefinedAttributeDelegateKey.Data.AllocatorInstance.Data;
    if (bVar6) {
      iVar11 = UserDefinedAttributeDelegateKey.Data.ArrayNum + -1;
      if (UserDefinedAttributeDelegateKey.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      uVar10 = (ulong64)iVar11;
      if (local_58.End < local_58.CurPos + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_58,uVar10);
      }
      if (iVar11 != 0) {
        pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar9.Data,uVar10 * 2);
        local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
      }
    }
    uVar10 = (ulong64)iVar8;
    if (local_58.End < local_58.CurPos + uVar10) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,uVar10);
    }
    if (iVar8 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,pFVar2,uVar10 * 2);
      local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
    }
    FVar9.Data = UserDefinedAttributeValuePostKey.Data.AllocatorInstance.Data;
    iVar8 = UserDefinedAttributeValuePostKey.Data.ArrayNum + -1;
    if (UserDefinedAttributeValuePostKey.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar10 = (ulong64)iVar8;
    if (local_58.End < local_58.CurPos + uVar10) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,uVar10);
    }
    if (iVar8 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar9.Data,uVar10 * 2);
      local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
    }
    local_68 = (undefined1  [8])0x0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    ::FString::AssignRange
              ((FString *)local_68,local_58.Base,
               (int)((longlong)local_58.CurPos - (longlong)local_58.Base >> 1));
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
    bVar4 = UInterchangeBaseNode::RemoveAttribute(this,(FString *)local_68);
    pFVar2 = local_88;
    FVar9 = UserDefinedAttributeBaseKey.Data.AllocatorInstance;
    if (bVar4) {
      local_58.End = (wchar_t *)0x0;
      local_58.bIsDynamic = false;
      local_58.bIsExternal = false;
      iVar8 = (int)local_80 + -1;
      if ((int)local_80 == 0) {
        iVar8 = 0;
      }
      local_58.Base = (wchar_t *)0x0;
      local_58.CurPos = (wchar_t *)0x0;
      iVar11 = UserDefinedAttributeBaseKey.Data.ArrayNum + -1;
      if (UserDefinedAttributeBaseKey.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      uVar10 = (longlong)iVar11 * 2;
      if (uVar10 != 0) {
        TStringBuilderBase<wchar_t>::Extend(&local_58,(longlong)iVar11);
      }
      if (iVar11 != 0) {
        pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar9.Data,uVar10);
        local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10);
      }
      FVar9.Data = UserDefinedAttributeDelegateKey.Data.AllocatorInstance.Data;
      if (bVar6) {
        iVar11 = UserDefinedAttributeDelegateKey.Data.ArrayNum + -1;
        if (UserDefinedAttributeDelegateKey.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        uVar10 = (ulong64)iVar11;
        if (local_58.End < local_58.CurPos + uVar10) {
          TStringBuilderBase<wchar_t>::Extend(&local_58,uVar10);
        }
        if (iVar11 != 0) {
          pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar9.Data,uVar10 * 2);
          local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
        }
      }
      uVar10 = (ulong64)iVar8;
      if (local_58.End < local_58.CurPos + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_58,uVar10);
      }
      if (iVar8 != 0) {
        pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,pFVar2,uVar10 * 2);
        local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
      }
      FVar9.Data = UserDefinedAttributePayLoadPostKey.Data.AllocatorInstance.Data;
      iVar8 = UserDefinedAttributePayLoadPostKey.Data.ArrayNum + -1;
      if (UserDefinedAttributePayLoadPostKey.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      uVar10 = (ulong64)iVar8;
      if (local_58.End < local_58.CurPos + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_58,uVar10);
      }
      if (iVar8 != 0) {
        pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar9.Data,uVar10 * 2);
        local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
      }
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      ::FString::AssignRange
                (&local_78,local_58.Base,
                 (int)((longlong)local_58.CurPos - (longlong)local_58.Base >> 1));
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
      cVar3 = (**(code **)(this->_padding_ + 0x2c0))(this,&local_78);
      if ((cVar3 == '\0') || (bVar6 = UInterchangeBaseNode::RemoveAttribute(this,&local_78), bVar6))
      {
        FVar9.Data = (FScriptContainerElement *)local_68;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
          FVar9.Data = (FScriptContainerElement *)local_68;
        }
        goto LAB_14e4707e2;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_68);
        uVar5 = 0;
        goto LAB_14e4707ee;
      }
    }
    else if (local_68 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_68);
    }
    uVar5 = 0;
  }
LAB_14e4707ee:
  *local_res18 = uVar5;
  if (local_88 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// operator() @ 150596920

bool __thiscall
`UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute'::__l34::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5411926597055808061>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5411926597055808061>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150596960

bool __thiscall
`UInterchangeUserDefinedAttributesAPI::AddApplyAndFillDelegatesToFactory'::__l14::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5411926597055808428>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5411926597055808428>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

