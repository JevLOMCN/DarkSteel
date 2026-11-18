// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 38

// StaticClass @ 14e476b00

UClass * __cdecl UInterchangeShaderPortsAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeShaderPortsAPI",
               &Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.InnerSingleton,
               StaticRegisterNativesUInterchangeShaderPortsAPI,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInterchangeShaderPortsAPI>,
               InternalVTableHelperCtorCaller<UInterchangeShaderPortsAPI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.InnerSingleton;
}

// UInterchangeShaderPortsAPI @ 14e4888b0

UInterchangeShaderPortsAPI * __thiscall
UInterchangeShaderPortsAPI::UInterchangeShaderPortsAPI
          (UInterchangeShaderPortsAPI *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeShaderPortsAPI__6B_;
  return this;
}

// UInterchangeShaderPortsAPI @ 14e4888e0

UInterchangeShaderPortsAPI * __thiscall
UInterchangeShaderPortsAPI::UInterchangeShaderPortsAPI
          (UInterchangeShaderPortsAPI *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeShaderPortsAPI__6B_;
  return this;
}

// ~UInterchangeShaderPortsAPI @ 14e48b400

void __thiscall
UInterchangeShaderPortsAPI::~UInterchangeShaderPortsAPI(UInterchangeShaderPortsAPI *this)

{
  *(undefined ***)this = &___7UInterchangeShaderPortsAPI__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConnectDefaultOuputToInput @ 14e48e030

bool __cdecl
UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput
          (UInterchangeBaseNode *param_1,FString *param_2,FString *param_3)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = MakeInputConnectionKey(&local_18,param_2);
  bVar1 = UInterchangeBaseNode::AddStringAttribute(param_1,pFVar2,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ConnectOuputToInputByIndex @ 14e48e080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UInterchangeShaderPortsAPI::ConnectOuputToInputByIndex
          (UInterchangeBaseNode *param_1,FString *param_2,FString *param_3,int param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  void *pvVar6;
  size_t sVar7;
  FString *pFVar8;
  ulong64 uVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined1 auStack_1a8 [32];
  FString local_188;
  FString local_178;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  local_168.Base = local_148;
  local_168.CurPos = local_148;
  local_168.End = (wchar_t *)local_48;
  iVar1 = (param_3->Data).ArrayNum;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  iVar11 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar11 = 0;
  }
  uVar9 = (ulong64)iVar11;
  if (local_48 < local_148 + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar9);
  }
  if (iVar11 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_168.CurPos,pFVar2,uVar9 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
  }
  pwVar10 = local_168.CurPos;
  pwVar3 = InputSeparator;
  iVar11 = 0;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar7 = wcslen(InputSeparator);
    iVar11 = (int)sVar7;
  }
  uVar9 = (ulong64)iVar11;
  if (local_168.End < pwVar10 + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar9);
    pwVar10 = local_168.CurPos;
  }
  if (iVar11 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(pwVar10,pwVar3,uVar9 * 2);
    pwVar10 = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    local_168.CurPos = pwVar10;
  }
  pwVar3 = OutputByIndex;
  iVar11 = 0;
  if (OutputByIndex != (wchar_t *)0x0) {
    sVar7 = wcslen(OutputByIndex);
    iVar11 = (int)sVar7;
  }
  uVar9 = (ulong64)iVar11;
  if (local_168.End < pwVar10 + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar9);
    pwVar10 = local_168.CurPos;
  }
  if (iVar11 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(pwVar10,pwVar3,uVar9 * 2);
    pwVar10 = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
    local_168.CurPos = pwVar10;
  }
  pwVar3 = InputSeparator;
  iVar11 = 0;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar7 = wcslen(InputSeparator);
    iVar11 = (int)sVar7;
  }
  uVar9 = (ulong64)iVar11;
  if (local_168.End < pwVar10 + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar9);
    pwVar10 = local_168.CurPos;
  }
  if (iVar11 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(pwVar10,pwVar3,uVar9 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
  }
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_188,param_4);
  FVar4.Data = local_188.Data.AllocatorInstance.Data;
  iVar11 = local_188.Data.ArrayNum + -1;
  if (local_188.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  uVar9 = (ulong64)iVar11;
  if (local_168.End < local_168.CurPos + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,uVar9);
  }
  if (iVar11 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_168.CurPos,FVar4.Data,uVar9 * 2);
    local_168.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  *local_168.CurPos = L'\0';
  ::FString::FString(&local_188,local_168.Base);
  pFVar8 = MakeInputConnectionKey(&local_178,param_2);
  bVar5 = UInterchangeBaseNode::AddStringAttribute(param_1,pFVar8,&local_188);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return bVar5;
}

// ConnectOuputToInputByName @ 14e48e360

bool __cdecl
UInterchangeShaderPortsAPI::ConnectOuputToInputByName
          (UInterchangeBaseNode *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((param_4->Data).ArrayNum < 2) {
    pFVar2 = MakeInputConnectionKey(&local_28,param_2);
    bVar1 = UInterchangeBaseNode::AddStringAttribute(param_1,pFVar2,param_3);
  }
  else {
    ::FString::ConcatFC(&local_28,param_3,InputSeparator);
    ::FString::ConcatFF(&local_38,&local_28,param_4);
    pFVar2 = MakeInputConnectionKey(&local_18,param_2);
    bVar1 = UInterchangeBaseNode::AddStringAttribute(param_1,pFVar2,&local_38);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// DisconnectInput @ 14e48f890

bool __cdecl
UInterchangeShaderPortsAPI::DisconnectInput(UInterchangeBaseNode *param_1,FString *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = MakeInputConnectionKey(&local_18,param_2);
  bVar1 = UInterchangeBaseNode::RemoveAttribute(param_1,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// DisconnectInputFromOutputNode @ 14e48f8d0

bool __cdecl
UInterchangeShaderPortsAPI::DisconnectInputFromOutputNode
          (UInterchangeBaseNode *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  bVar1 = GetInputConnection(param_1,param_2,param_3,param_4);
  if (bVar1) {
    pFVar2 = MakeInputConnectionKey(&local_18,param_2);
    bVar1 = UInterchangeBaseNode::RemoveAttribute(param_1,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return bVar1;
  }
  return false;
}

// GatherInputs @ 14e48fec0

void __cdecl
UInterchangeShaderPortsAPI::GatherInputs
          (UInterchangeBaseNode *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  UInterchangeBaseNode::GetAttributeKeys(param_1,&local_38);
  iVar2 = local_38.ArrayNum;
  pFVar8 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (FVar7.Data == pFVar8) break;
    bVar3 = IsAnInput((FString *)FVar7.Data);
    if (bVar3) {
      pFVar5 = (FScriptContainerElement *)MakeInputName(&local_28,FVar7.Data);
      pFVar6 = (param_2->AllocatorInstance).Data;
      if ((pFVar6 <= pFVar5) && (pFVar5 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar6 = 0;
      *(FScriptContainerElement **)pFVar6 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6 + 8) = *(int *)&pFVar5[8].field_0x0;
      *(int *)(pFVar6 + 0xc) = *(int *)&pFVar5[0xc].field_0x0;
      *(undefined8 *)&pFVar5[8].field_0x0 = 0;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    FVar7.Data = FVar7.Data + 0x10;
  }
  DestructItems<UE::Interchange::FAttributeKey,int>
            ((FAttributeKey *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetInputConnection @ 14e495c00

bool __cdecl
UInterchangeShaderPortsAPI::GetInputConnection
          (UInterchangeBaseNode *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = MakeInputConnectionKey(&local_18,param_2);
  bVar1 = UInterchangeBaseNode::GetStringAttribute(param_1,pFVar2,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    ::FString::FString(&local_18,InputSeparator);
    ::FString::Split(param_3,&local_18,param_3,param_4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// GetInputType @ 14e495cb0

EAttributeTypes __cdecl
UInterchangeShaderPortsAPI::GetInputType
          (UInterchangeBaseNode *param_1,FString *param_2,bool param_3)

{
  code *pcVar1;
  EAttributeTypes EVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x2c8);
  if (param_3) {
    pFVar3 = MakeInputParameterKey(&local_18,param_2);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    if (&local_38 != pFVar3) {
      local_38.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    EVar2 = (*pcVar1)(param_1,&local_38);
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    pFVar3 = MakeInputValueKey(&local_18,param_2);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    if (&local_28 != pFVar3) {
      local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    EVar2 = (*pcVar1)(param_1,&local_28);
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar2;
}

// GetOutputIndexFromName @ 14e496d80

int __cdecl UInterchangeShaderPortsAPI::GetOutputIndexFromName(FString *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  ForAnyElementType _Str;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pwVar1 = OutputByIndex;
  iVar3 = 0;
  if (OutputByIndex != (wchar_t *)0x0) {
    sVar4 = wcslen(OutputByIndex);
    iVar3 = (int)sVar4;
  }
  bVar2 = ::FString::StartsWith(param_1,pwVar1,iVar3,IgnoreCase);
  if (!bVar2) {
    return -1;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::FString(&local_18,InputSeparator);
  ::FString::Split(param_1,&local_18,&local_28,&local_38,IgnoreCase,FromStart);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    _Str.Data = local_38.Data.AllocatorInstance.Data;
  }
  iVar3 = _wtoi((wchar_t *)_Str.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return iVar3;
}

// GetPrivateStaticClass @ 14e499070

UClass * __cdecl UInterchangeShaderPortsAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeShaderPortsAPI",
               &Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.InnerSingleton,
               StaticRegisterNativesUInterchangeShaderPortsAPI,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInterchangeShaderPortsAPI>,
               InternalVTableHelperCtorCaller<UInterchangeShaderPortsAPI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.InnerSingleton;
}

// HasInput @ 14e49b6c0

bool __cdecl UInterchangeShaderPortsAPI::HasInput(UInterchangeBaseNode *param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res18 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GatherInputs(param_1,&local_38);
  iVar2 = local_38.ArrayNum;
  pFVar6 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar5.Data == pFVar6) {
      bVar7 = false;
      goto LAB_14e49b77a;
    }
    pFVar4 = ::FName::ToString(param_2,&local_28);
    iVar3 = *(int *)(FVar5.Data + 8);
    iVar1 = (pFVar4->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) {
        bVar7 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar5.Data,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data)
        ;
        bVar7 = iVar3 == 0;
      }
    }
    else {
      bVar7 = iVar1 + iVar3 == 1;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar7) break;
    FVar5.Data = FVar5.Data + 0x10;
  }
  bVar7 = true;
LAB_14e49b77a:
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar7;
}

// HasParameter @ 14e49b7c0

bool __cdecl UInterchangeShaderPortsAPI::HasParameter(UInterchangeBaseNode *param_1,FName *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  undefined1 uVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FName::ToString(param_2,&local_28);
  MakeInputParameterKey(&local_18,pFVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  pcVar1 = *(code **)(param_1->_padding_ + 0x2c0);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayMax = 0;
  if (local_18.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_18.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  uVar2 = (*pcVar1)(param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// IsAParameter @ 14e49c040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UInterchangeShaderPortsAPI::IsAParameter(FString *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  size_t sVar3;
  void *pvVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_178 [32];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  pwVar1 = InputSeparator;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158.Base = local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.End = (wchar_t *)local_38;
  iVar8 = 0;
  iVar7 = iVar8;
  local_158.CurPos = local_138;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar3 = wcslen(InputSeparator);
    iVar7 = (int)sVar3;
  }
  uVar5 = (ulong64)iVar7;
  pwVar6 = local_138;
  if (local_38 < local_138 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar5);
    pwVar6 = local_158.CurPos;
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(pwVar6,pwVar1,uVar5 * 2);
    pwVar6 = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
    local_158.CurPos = pwVar6;
  }
  pwVar1 = ParameterSuffix;
  if (ParameterSuffix != (wchar_t *)0x0) {
    sVar3 = wcslen(ParameterSuffix);
    iVar8 = (int)sVar3;
  }
  uVar5 = (ulong64)iVar8;
  if (local_158.End < pwVar6 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar5);
    pwVar6 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(pwVar6,pwVar1,uVar5 * 2);
    pwVar6 = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
    local_158.CurPos = pwVar6;
  }
  if (local_158.End < pwVar6 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
    pwVar6 = local_158.CurPos;
  }
  pwVar1 = local_158.Base;
  *pwVar6 = L'\0';
  if (local_158.Base == (wchar_t *)0x0) {
    iVar7 = 0;
  }
  else {
    sVar3 = wcslen(local_158.Base);
    iVar7 = (int)sVar3;
  }
  bVar2 = ::FString::EndsWith(param_1,pwVar1,iVar7,IgnoreCase);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return bVar2;
}

// IsAnInput @ 14e49c1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UInterchangeShaderPortsAPI::IsAnInput(FString *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  size_t sVar3;
  void *pvVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_178 [32];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  pwVar1 = InputPrefix;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158.Base = local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.End = (wchar_t *)local_38;
  iVar8 = 0;
  iVar7 = iVar8;
  local_158.CurPos = local_138;
  if (InputPrefix != (wchar_t *)0x0) {
    sVar3 = wcslen(InputPrefix);
    iVar7 = (int)sVar3;
  }
  uVar5 = (ulong64)iVar7;
  pwVar6 = local_138;
  if (local_38 < local_138 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar5);
    pwVar6 = local_158.CurPos;
  }
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(pwVar6,pwVar1,uVar5 * 2);
    pwVar6 = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
    local_158.CurPos = pwVar6;
  }
  pwVar1 = InputSeparator;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar3 = wcslen(InputSeparator);
    iVar8 = (int)sVar3;
  }
  uVar5 = (ulong64)iVar8;
  if (local_158.End < pwVar6 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar5);
    pwVar6 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(pwVar6,pwVar1,uVar5 * 2);
    pwVar6 = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
    local_158.CurPos = pwVar6;
  }
  if (local_158.End < pwVar6 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
    pwVar6 = local_158.CurPos;
  }
  pwVar1 = local_158.Base;
  *pwVar6 = L'\0';
  if (local_158.Base == (wchar_t *)0x0) {
    iVar7 = 0;
  }
  else {
    sVar3 = wcslen(local_158.Base);
    iVar7 = (int)sVar3;
  }
  bVar2 = ::FString::StartsWith(param_1,pwVar1,iVar7,IgnoreCase);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return bVar2;
}

// MakeInputConnectionKey @ 14e49c8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UInterchangeShaderPortsAPI::MakeInputConnectionKey(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  void *pvVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStack_178 [32];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  pwVar3 = InputPrefix;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158.Base = local_138;
  iVar8 = 0;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.End = (wchar_t *)local_38;
  local_158.CurPos = local_138;
  if (InputPrefix != (wchar_t *)0x0) {
    sVar4 = wcslen(InputPrefix);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  pwVar7 = local_138;
  if (local_38 < local_138 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  pwVar3 = InputSeparator;
  iVar8 = 0;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar4 = wcslen(InputSeparator);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pFVar2,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  pwVar3 = InputSeparator;
  iVar8 = 0;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar4 = wcslen(InputSeparator);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  if (local_158.End < pwVar7 + 7) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,7);
    pwVar7 = local_158.CurPos;
  }
  pvVar5 = FGenericPlatformString::Memcpy(pwVar7,L"Connect",0xe);
  local_158.CurPos = (wchar_t *)((longlong)pvVar5 + 0xe);
  if (local_158.End < (wchar_t *)((longlong)pvVar5 + 0x10U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
  }
  *local_158.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_158.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return __return_storage_ptr__;
}

// MakeInputName @ 14e49cb10

FString * __cdecl
UInterchangeShaderPortsAPI::MakeInputName(FString *__return_storage_ptr__,FString *param_1)

{
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::FString(&local_18,InputSeparator);
  ::FString::Split(param_1,&local_18,&local_28,__return_storage_ptr__,IgnoreCase,FromStart);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,InputSeparator);
  ::FString::Split(__return_storage_ptr__,&local_18,__return_storage_ptr__,&local_28,IgnoreCase,
                   FromStart);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeInputParameterKey @ 14e49cbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UInterchangeShaderPortsAPI::MakeInputParameterKey(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  void *pvVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStack_178 [32];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  pwVar3 = InputPrefix;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158.Base = local_138;
  iVar8 = 0;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.End = (wchar_t *)local_38;
  local_158.CurPos = local_138;
  if (InputPrefix != (wchar_t *)0x0) {
    sVar4 = wcslen(InputPrefix);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  pwVar7 = local_138;
  if (local_38 < local_138 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  pwVar3 = InputSeparator;
  iVar8 = 0;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar4 = wcslen(InputSeparator);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pFVar2,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  pwVar3 = InputSeparator;
  iVar8 = 0;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar4 = wcslen(InputSeparator);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  pwVar3 = ParameterSuffix;
  iVar8 = 0;
  if (ParameterSuffix != (wchar_t *)0x0) {
    sVar4 = wcslen(ParameterSuffix);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  if (local_158.End < pwVar7 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
    pwVar7 = local_158.CurPos;
  }
  *pwVar7 = L'\0';
  ::FString::FString(__return_storage_ptr__,local_158.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return __return_storage_ptr__;
}

// MakeInputValueKey @ 14e49ce70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UInterchangeShaderPortsAPI::MakeInputValueKey(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  void *pvVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 auStack_178 [32];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  pwVar3 = InputPrefix;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158.Base = local_138;
  iVar8 = 0;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.End = (wchar_t *)local_38;
  local_158.CurPos = local_138;
  if (InputPrefix != (wchar_t *)0x0) {
    sVar4 = wcslen(InputPrefix);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  pwVar7 = local_138;
  if (local_38 < local_138 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  pwVar3 = InputSeparator;
  iVar8 = 0;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar4 = wcslen(InputSeparator);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pFVar2,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  pwVar3 = InputSeparator;
  iVar8 = 0;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar4 = wcslen(InputSeparator);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar3,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  if (local_158.End < pwVar7 + 5) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,5);
    pwVar7 = local_158.CurPos;
  }
  pvVar5 = FGenericPlatformString::Memcpy(pwVar7,L"Value",10);
  local_158.CurPos = (wchar_t *)((longlong)pvVar5 + 10);
  if (local_158.End < (wchar_t *)((longlong)pvVar5 + 0xcU)) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
  }
  *local_158.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_158.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeShaderPortsAPI @ 14e4a8980

void __cdecl UInterchangeShaderPortsAPI::StaticRegisterNativesUInterchangeShaderPortsAPI(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConnectDefaultOuputToInput @ 14e4acd30

void __cdecl
UInterchangeShaderPortsAPI::execConnectDefaultOuputToInput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeBaseNode *this;
  bool bVar2;
  FString *pFVar3;
  UInterchangeBaseNode *local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
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
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = MakeInputConnectionKey(&local_18,&local_28);
  bVar2 = UInterchangeBaseNode::AddStringAttribute(this,pFVar3,&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execConnectOuputToInputByIndex @ 14e4ace90

void __cdecl
UInterchangeShaderPortsAPI::execConnectOuputToInputByIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  UInterchangeBaseNode *local_res18;
  FString local_28;
  FString local_18;
  
  local_res18 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
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
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConnectOuputToInputByIndex(local_res18,&local_18,&local_28,local_res10[0]);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConnectOuputToInputByName @ 14e4ad010

void __cdecl
UInterchangeShaderPortsAPI::execConnectOuputToInputByName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeBaseNode *this;
  bool bVar2;
  FString *pFVar3;
  UInterchangeBaseNode *local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
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
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_68.Data.ArrayNum < 2) {
    pFVar3 = MakeInputConnectionKey(&local_28,&local_48);
    bVar2 = UInterchangeBaseNode::AddStringAttribute(this,pFVar3,&local_58);
  }
  else {
    ::FString::ConcatFC(&local_28,&local_58,InputSeparator);
    ::FString::ConcatFF(&local_38,&local_28,&local_68);
    pFVar3 = MakeInputConnectionKey(&local_18,&local_48);
    bVar2 = UInterchangeBaseNode::AddStringAttribute(this,pFVar3,&local_38);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execDisconnectInput @ 14e4ad220

void __cdecl
UInterchangeShaderPortsAPI::execDisconnectInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeBaseNode *this;
  bool bVar2;
  FString *pFVar3;
  UInterchangeBaseNode *local_res10;
  FString local_28;
  FString local_18;
  
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
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = MakeInputConnectionKey(&local_18,&local_28);
  bVar2 = UInterchangeBaseNode::RemoveAttribute(this,pFVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execDisconnectInputFromOutputNode @ 14e4ad330

void __cdecl
UInterchangeShaderPortsAPI::execDisconnectInputFromOutputNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UInterchangeBaseNode *this;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  UInterchangeBaseNode *local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar5 = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  this = local_res10;
  pFVar6 = &local_58;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar6 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = MakeInputConnectionKey(&local_38,&local_68);
  bVar3 = UInterchangeBaseNode::GetStringAttribute(this,pFVar4,pFVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    ::FString::FString(&local_38,InputSeparator);
    ::FString::Split(pFVar5,&local_38,pFVar5,pFVar6);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar5 = MakeInputConnectionKey(&local_38,&local_68);
    bVar3 = UInterchangeBaseNode::RemoveAttribute(this,pFVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  *(bool *)param_3 = bVar3;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// execGatherInputs @ 14e4ad550

void __cdecl
UInterchangeShaderPortsAPI::execGatherInputs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  UInterchangeBaseNode *local_res10 [3];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  GatherInputs(local_res10[0],pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetInputConnection @ 14e4b8270

void __cdecl
UInterchangeShaderPortsAPI::execGetInputConnection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeBaseNode *this;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString *this_00;
  FString *pFVar5;
  UInterchangeBaseNode *local_res10;
  FString local_58;
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
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  this_00 = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this_00 = (FString *)param_2->MostRecentPropertyAddress;
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
  this = local_res10;
  pFVar5 = &local_58;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = MakeInputConnectionKey(&local_28,&local_38);
  bVar2 = UInterchangeBaseNode::GetStringAttribute(this,pFVar4,this_00);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    ::FString::FString(&local_28,InputSeparator);
    ::FString::Split(this_00,&local_28,this_00,pFVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execHasInput @ 14e4ba440

void __cdecl
UInterchangeShaderPortsAPI::execHasInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  FName *this;
  bool bVar8;
  undefined1 local_res10 [8];
  FName local_res18;
  UInterchangeBaseNode *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  local_res20 = (UInterchangeBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  this = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    this = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GatherInputs(local_res20,&local_58);
  iVar3 = local_58.ArrayNum;
  pFVar7 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
  FVar6.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if (local_58.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar6.Data == pFVar7) {
      DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
    pFVar5 = ::FName::ToString(this,&local_48);
    iVar4 = *(int *)(FVar6.Data + 8);
    iVar1 = (pFVar5->Data).ArrayNum;
    if (iVar4 == iVar1) {
      if (iVar4 < 2) {
        bVar8 = true;
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar6.Data,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data)
        ;
        bVar8 = iVar4 == 0;
      }
    }
    else {
      bVar8 = iVar1 + iVar4 == 1;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar8) break;
    FVar6.Data = FVar6.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execHasParameter @ 14e4ba5f0

void __cdecl
UInterchangeShaderPortsAPI::execHasParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  ForAnyElementType _Src;
  undefined1 uVar4;
  FString *pFVar5;
  FName *this;
  FName local_res10;
  longlong *local_res18;
  FString local_38;
  FString local_28;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
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
  plVar3 = local_res18;
  this = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    this = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = ::FName::ToString(this,&local_38);
  MakeInputParameterKey(&local_28,pFVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayMax = 0;
  pcVar2 = *(code **)(*plVar3 + 0x2c0);
  if (local_28.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_28.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
  }
  uVar4 = (*pcVar2)(plVar3,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar4;
  return;
}

// execIsAParameter @ 14e4ba7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeShaderPortsAPI::execIsAParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  size_t sVar4;
  void *pvVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_188 [32];
  FString local_168;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  iVar9 = 0;
  local_158.Base = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar2 = InputSeparator;
  local_158.End = (wchar_t *)local_38;
  iVar8 = iVar9;
  local_158.CurPos = local_138;
  if (InputSeparator != (wchar_t *)0x0) {
    sVar4 = wcslen(InputSeparator);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  pwVar7 = local_138;
  if (local_38 < local_138 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar2,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  pwVar2 = ParameterSuffix;
  iVar8 = iVar9;
  if (ParameterSuffix != (wchar_t *)0x0) {
    sVar4 = wcslen(ParameterSuffix);
    iVar8 = (int)sVar4;
  }
  uVar6 = (ulong64)iVar8;
  if (local_158.End < pwVar7 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar6);
    pwVar7 = local_158.CurPos;
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(pwVar7,pwVar2,uVar6 * 2);
    pwVar7 = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    local_158.CurPos = pwVar7;
  }
  if (local_158.End < pwVar7 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
    pwVar7 = local_158.CurPos;
  }
  pwVar2 = local_158.Base;
  *pwVar7 = L'\0';
  if (local_158.Base != (wchar_t *)0x0) {
    sVar4 = wcslen(local_158.Base);
    iVar9 = (int)sVar4;
  }
  bVar3 = ::FString::EndsWith(&local_168,pwVar2,iVar9,IgnoreCase);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  *(bool *)param_3 = bVar3;
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsAnInput @ 14e4ba9a0

void __cdecl
UInterchangeShaderPortsAPI::execIsAnInput(UObject *param_1,FFrame *param_2,void *param_3)

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
  bVar2 = IsAnInput(&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execMakeInputConnectionKey @ 14e4badf0

void __cdecl
UInterchangeShaderPortsAPI::execMakeInputConnectionKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = MakeInputConnectionKey(&local_18,&local_28);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execMakeInputName @ 14e4baed0

void __cdecl
UInterchangeShaderPortsAPI::execMakeInputName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
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
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::FString(&local_18,InputSeparator);
  ::FString::Split(&local_38,&local_18,&local_28,&local_48,IgnoreCase,FromStart);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,InputSeparator);
  ::FString::Split(&local_48,&local_18,&local_48,&local_28,IgnoreCase,FromStart);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execMakeInputParameterKey @ 14e4bb050

void __cdecl
UInterchangeShaderPortsAPI::execMakeInputParameterKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = MakeInputParameterKey(&local_18,&local_28);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execMakeInputValueKey @ 14e4bb130

void __cdecl
UInterchangeShaderPortsAPI::execMakeInputValueKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = MakeInputValueKey(&local_18,&local_28);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

