// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 5

// ~IMessageBus @ 142d3f140

void __thiscall IMessageBus::~IMessageBus(IMessageBus *this)

{
  *this = (IMessageBus)&___7IMessageBus__6B_;
  return;
}

// Intercept @ 142d4a4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMessageBus::Intercept(IMessageBus *this,TSharedRef<IMessageInterceptor,1> *param_1,FName *param_2)

{
  int iVar1;
  code *pcVar2;
  FString *pFVar3;
  UClass *pUVar4;
  TStringView<wchar_t> local_38;
  FTopLevelAssetPath local_28;
  FString local_18;
  
  pcVar2 = *(code **)((longlong)*this + 0x10);
  pFVar3 = ::FName::ToString(param_2,&local_18);
  local_38.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  pUVar4 = Z_Construct_UClass_UStruct_NoRegister();
  UClass::TryConvertShortTypeNameToPathName(&local_28,pUVar4,&local_38,NoLogging,(wchar_t *)0x0);
  (*pcVar2)(this,param_1,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Subscribe @ 142d4ea90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageSubscription,1> * __thiscall
IMessageBus::Subscribe
          (IMessageBus *this,TSharedPtr<IMessageSubscription,1> *__return_storage_ptr__,
          TSharedRef<IMessageReceiver,1> *param_1,FName *param_2,TRange<EMessageScope> *param_3)

{
  int iVar1;
  code *pcVar2;
  FString *pFVar3;
  UClass *pUVar4;
  TStringView<wchar_t> local_38;
  FTopLevelAssetPath local_28;
  FString local_18;
  
  pcVar2 = *(code **)((longlong)*this + 0x40);
  pFVar3 = ::FName::ToString(param_2,&local_18);
  local_38.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  pUVar4 = Z_Construct_UClass_UStruct_NoRegister();
  UClass::TryConvertShortTypeNameToPathName(&local_28,pUVar4,&local_38,NoLogging,(wchar_t *)0x0);
  (*pcVar2)(this,__return_storage_ptr__,param_1,&local_28,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Unintercept @ 142d510e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMessageBus::Unintercept
          (IMessageBus *this,TSharedRef<IMessageInterceptor,1> *param_1,FName *param_2)

{
  int iVar1;
  code *pcVar2;
  FString *pFVar3;
  UClass *pUVar4;
  TStringView<wchar_t> local_38;
  FTopLevelAssetPath local_28;
  FString local_18;
  
  pcVar2 = *(code **)((longlong)*this + 0x50);
  pFVar3 = ::FName::ToString(param_2,&local_18);
  local_38.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  pUVar4 = Z_Construct_UClass_UStruct_NoRegister();
  UClass::TryConvertShortTypeNameToPathName(&local_28,pUVar4,&local_38,NoLogging,(wchar_t *)0x0);
  (*pcVar2)(this,param_1,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Unsubscribe @ 142d514a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMessageBus::Unsubscribe(IMessageBus *this,TSharedRef<IMessageReceiver,1> *param_1,FName *param_2)

{
  int iVar1;
  code *pcVar2;
  FString *pFVar3;
  UClass *pUVar4;
  TStringView<wchar_t> local_38;
  FTopLevelAssetPath local_28;
  FString local_18;
  
  pcVar2 = *(code **)((longlong)*this + 0x68);
  pFVar3 = ::FName::ToString(param_2,&local_18);
  local_38.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  pUVar4 = Z_Construct_UClass_UStruct_NoRegister();
  UClass::TryConvertShortTypeNameToPathName(&local_28,pUVar4,&local_38,NoLogging,(wchar_t *)0x0);
  (*pcVar2)(this,param_1,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

