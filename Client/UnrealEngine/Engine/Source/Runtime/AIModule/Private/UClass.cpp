// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// GetDefaultObject<UBlackboardKeyType> @ 146eb3ab0

UBlackboardKeyType * __thiscall UClass::GetDefaultObject<UBlackboardKeyType>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UBlackboardKeyType *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UBlackboardKeyType *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = UBlackboardKeyType::StaticClass();
  lVar2 = pUVar6->_padding_;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UBlackboardKeyType *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

// GetDefaultObject<UEnvQueryItemType> @ 146eb3b30

UEnvQueryItemType * __thiscall UClass::GetDefaultObject<UEnvQueryItemType>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UEnvQueryItemType *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UEnvQueryItemType *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = Z_Construct_UClass_UEnvQueryItemType_NoRegister();
  lVar2 = pUVar6->_padding_;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UEnvQueryItemType *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

// GetDefaultObject<UEnvQueryItemType_ActorBase> @ 146f1aca0

UEnvQueryItemType_ActorBase * __thiscall
UClass::GetDefaultObject<UEnvQueryItemType_ActorBase>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UEnvQueryItemType_ActorBase *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UEnvQueryItemType_ActorBase *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = UEnvQueryItemType_ActorBase::StaticClass();
  lVar2 = *(longlong *)&pUVar6->field_0x10;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UEnvQueryItemType_ActorBase *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

// GetDefaultObject<UEnvQueryItemType_VectorBase> @ 146f1ad20

UEnvQueryItemType_VectorBase * __thiscall
UClass::GetDefaultObject<UEnvQueryItemType_VectorBase>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UEnvQueryItemType_VectorBase *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UEnvQueryItemType_VectorBase *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = UEnvQueryItemType_VectorBase::StaticClass();
  lVar2 = *(longlong *)&pUVar6->field_0x10;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UEnvQueryItemType_VectorBase *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

