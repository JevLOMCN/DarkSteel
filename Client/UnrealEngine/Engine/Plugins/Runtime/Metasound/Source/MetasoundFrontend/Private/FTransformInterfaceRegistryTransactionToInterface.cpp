// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Transform @ 14ae8c670

void __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FTransformInterfaceRegistryTransactionToInterface::
Transform(FTransformInterfaceRegistryTransactionToInterface *this,
         TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
         *param_1)

{
  byte bVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  IInterfaceRegistry *pIVar5;
  longlong lVar6;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  void *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  undefined8 local_20;
  
  bVar1 = param_1->TypeIndex;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  lStack_30 = 1;
  local_28 = 0;
  local_20 = 0;
  if (4 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5349767403691573129>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                       ,0x77,"InValue.IsType<FInterfaceRegistryTransaction>()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (param_1->TypeIndex != '\x03') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = FInterfaceRegistryTransaction::GetInterfaceRegistryKey
                       ((FInterfaceRegistryTransaction *)param_1);
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = (pFVar4->Data).ArrayNum;
    lVar6 = (longlong)local_80;
    _Src = (pFVar4->Data).AllocatorInstance.Data;
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_80,0,&local_88,local_80,&local_7c);
      memcpy(local_88.Data,_Src,lVar6 * 2);
    }
    pIVar5 = IInterfaceRegistry::Get();
    (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,&local_88,&local_78);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  bVar1 = param_1->TypeIndex;
  if (4 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])();
  param_1->_padding_ = (longlong)local_78;
  *(undefined4 *)&param_1->_padding_ = (undefined4)local_70;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_70._4_4_;
  param_1->_padding_ = local_68;
  *(undefined4 *)&param_1->_padding_ = (undefined4)local_60;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_60._4_4_;
  param_1->_padding_ = local_58;
  *(undefined4 *)&param_1->_padding_ = (undefined4)local_50;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_50._4_4_;
  param_1->_padding_ = local_48;
  param_1->_padding_ = lStack_40;
  local_78 = (void *)0x0;
  param_1->_padding_ = local_38;
  param_1->_padding_ = lStack_30;
  param_1->_padding_ = local_28;
  *(undefined4 *)&param_1->_padding_ = (undefined4)local_20;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_20._4_4_;
  param_1->TypeIndex = '\x04';
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_28 = 0;
  local_20 = 0;
  DestructItems<FMetasoundFrontendClassInput,int>((FMetasoundFrontendClassInput *)0x0,0);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

