// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 76

// CreateExplicitArgs @ 14adab430

TDataReadReference<int> * __cdecl
Metasound::TDataLiteralFactory<int,Metasound::TDataReadReference<int>_>::CreateExplicitArgs
          (TDataReadReference<int> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined8 *puVar4;
  TDataReadReference<int> *pTVar5;
  uint uVar6;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case None:
    goto switchD_14adab465_caseD_0;
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<int> *)(*pcVar1)();
      return pTVar5;
    }
    *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_H_Metasound__6B_;
    puVar4 = ::operator_new(0x18);
    if (puVar4 == (undefined8 *)0x0) {
LAB_14adab5d6:
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
      goto LAB_14adab63e;
    }
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    uVar6 = (uint)(byte)(param_2->Value)._padding_;
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<int> *)(*pcVar1)();
      return pTVar5;
    }
    *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_H_Metasound__6B_;
    puVar4 = ::operator_new(0x18);
    if (puVar4 == (undefined8 *)0x0) goto LAB_14adab5d6;
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    uVar6 = (uint)(param_2->Value)._padding_;
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<int> *)(*pcVar1)();
      return pTVar5;
    }
    *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_H_Metasound__6B_;
    puVar4 = ::operator_new(0x18);
    if (puVar4 == (undefined8 *)0x0) goto LAB_14adab5d6;
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    uVar6 = (uint)*(float *)&(param_2->Value)._padding_;
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<int> *)(*pcVar1)();
      return pTVar5;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<int> *)(*pcVar1)();
      return pTVar5;
    }
    goto switchD_14adab465_caseD_0;
  }
  *(uint *)(puVar4 + 2) = uVar6;
  *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar4;
  *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar4 + 2;
  if ((puVar4 + 2 == (undefined8 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TDataReadReference<int> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14adab63e:
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_H_Metasound__6B_;
  return __return_storage_ptr__;
switchD_14adab465_caseD_0:
  TDataReference<int>::TDataReference<int><>
            ((TDataReference<int> *)__return_storage_ptr__,NewObject);
  goto LAB_14adab63e;
}

// CreateExplicitArgs @ 14adab6a0

TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString *pFVar8;
  FString *pFVar9;
  undefined1 local_res20 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  int local_90 [2];
  FAnalyzerAddress local_88;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    pFVar8 = (FString *)(param_2->Value)._padding_;
    local_a8.Data = (FScriptContainerElement *)0x0;
    pFVar9 = pFVar8 + iVar1;
    local_a0 = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar8 == pFVar9) break;
      Frontend::FAnalyzerAddress::FAnalyzerAddress(&local_88,pFVar8);
      iVar5 = (int)local_a0;
      if ((int)local_a0 == local_a0._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&local_a8,(int *)((longlong)&local_a0 + 4));
      }
      local_a0 = CONCAT44(local_a0._4_4_,iVar5 + 1);
      pFVar7 = local_a8.Data + (longlong)iVar5 * 0x58;
      pFVar8 = pFVar8 + 1;
      *(ulong64 *)(pFVar7 + 8) = local_88.InstanceID;
      *(FName *)(pFVar7 + 0x20) = local_88.OutputName;
      *(FName *)(pFVar7 + 0x28) = local_88.DataType;
      *(FName *)(pFVar7 + 0x30) = local_88.AnalyzerName;
      *(undefined8 *)(pFVar7 + 0x10) = local_88.NodeID._0_8_;
      *(undefined8 *)(pFVar7 + 0x18) = local_88.NodeID._8_8_;
      *(FName *)(pFVar7 + 0x48) = local_88.AnalyzerMemberName;
      pFVar7[0x50] = (FScriptContainerElement)local_88.UseDataTransmissionCenter;
      *(undefined ***)pFVar7 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
      *(undefined8 *)(pFVar7 + 0x38) = local_88.AnalyzerInstanceID._0_8_;
      *(undefined8 *)(pFVar7 + 0x40) = local_88.AnalyzerInstanceID._8_8_;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_a8.Data;
    __return_storage_ptr__->ArrayNum = (int)local_a0;
    __return_storage_ptr__->ArrayMax = local_a0._4_4_;
    return __return_storage_ptr__;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case None:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x06') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)();
    return pTVar6;
  }
  iVar1 = (int)(param_2->Value)._padding_;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,iVar1,&local_98,local_90,local_90 + 1);
  DefaultConstructItems<Metasound::Frontend::FAnalyzerAddress,int>
            (local_98.Data + (longlong)iVar5 * 0x58,iVar1);
  (__return_storage_ptr__->AllocatorInstance).Data = local_98.Data;
  __return_storage_ptr__->ArrayNum = local_90[0];
  __return_storage_ptr__->ArrayMax = local_90[1];
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adab960

TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__cdecl Metasound::
        TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
        ::CreateExplicitArgs
                  (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  undefined1 local_res20 [8];
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_a8;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_98;
  FAnalyzerAddress local_88;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,iVar1,&local_98.AllocatorInstance,&local_98.ArrayNum,
                       &local_98.ArrayMax);
    DefaultConstructItems<Metasound::Frontend::FAnalyzerAddress,int>
              (local_98.AllocatorInstance.Data + (longlong)iVar5 * 0x58,iVar1);
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_98);
    FVar7.Data = local_98.AllocatorInstance.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    pFVar9 = (FString *)(param_2->Value)._padding_;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10 = pFVar9 + iVar1;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar9 == pFVar10) break;
      Frontend::FAnalyzerAddress::FAnalyzerAddress(&local_88,pFVar9);
      iVar5 = local_a8.ArrayNum;
      if (local_a8.ArrayNum == local_a8.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
      }
      local_a8.ArrayNum = iVar5 + 1;
      pFVar8 = local_a8.AllocatorInstance.Data + (longlong)iVar5 * 0x58;
      pFVar9 = pFVar9 + 1;
      *(ulong64 *)(pFVar8 + 8) = local_88.InstanceID;
      *(FName *)(pFVar8 + 0x20) = local_88.OutputName;
      *(FName *)(pFVar8 + 0x28) = local_88.DataType;
      *(FName *)(pFVar8 + 0x30) = local_88.AnalyzerName;
      *(undefined8 *)(pFVar8 + 0x10) = local_88.NodeID._0_8_;
      *(undefined8 *)(pFVar8 + 0x18) = local_88.NodeID._8_8_;
      *(FName *)(pFVar8 + 0x48) = local_88.AnalyzerMemberName;
      pFVar8[0x50] = (FScriptContainerElement)local_88.UseDataTransmissionCenter;
      *(undefined ***)pFVar8 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
      *(undefined8 *)(pFVar8 + 0x38) = local_88.AnalyzerInstanceID._0_8_;
      *(undefined8 *)(pFVar8 + 0x40) = local_88.AnalyzerInstanceID._8_8_;
    }
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_a8);
    FVar7.Data = local_a8.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  if (FVar7.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar7.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adabc30

TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__cdecl Metasound::
        TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
        ::CreateExplicitArgs
                  (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  undefined1 local_res20 [8];
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_a8;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_98;
  FAnalyzerAddress local_88;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,iVar1,&local_98.AllocatorInstance,&local_98.ArrayNum,
                       &local_98.ArrayMax);
    DefaultConstructItems<Metasound::Frontend::FAnalyzerAddress,int>
              (local_98.AllocatorInstance.Data + (longlong)iVar5 * 0x58,iVar1);
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_98);
    FVar7.Data = local_98.AllocatorInstance.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    pFVar9 = (FString *)(param_2->Value)._padding_;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10 = pFVar9 + iVar1;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar9 == pFVar10) break;
      Frontend::FAnalyzerAddress::FAnalyzerAddress(&local_88,pFVar9);
      iVar5 = local_a8.ArrayNum;
      if (local_a8.ArrayNum == local_a8.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
      }
      local_a8.ArrayNum = iVar5 + 1;
      pFVar8 = local_a8.AllocatorInstance.Data + (longlong)iVar5 * 0x58;
      pFVar9 = pFVar9 + 1;
      *(ulong64 *)(pFVar8 + 8) = local_88.InstanceID;
      *(FName *)(pFVar8 + 0x20) = local_88.OutputName;
      *(FName *)(pFVar8 + 0x28) = local_88.DataType;
      *(FName *)(pFVar8 + 0x30) = local_88.AnalyzerName;
      *(undefined8 *)(pFVar8 + 0x10) = local_88.NodeID._0_8_;
      *(undefined8 *)(pFVar8 + 0x18) = local_88.NodeID._8_8_;
      *(FName *)(pFVar8 + 0x48) = local_88.AnalyzerMemberName;
      pFVar8[0x50] = (FScriptContainerElement)local_88.UseDataTransmissionCenter;
      *(undefined ***)pFVar8 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
      *(undefined8 *)(pFVar8 + 0x38) = local_88.AnalyzerInstanceID._0_8_;
      *(undefined8 *)(pFVar8 + 0x40) = local_88.AnalyzerInstanceID._8_8_;
    }
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_a8);
    FVar7.Data = local_a8.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  if (FVar7.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar7.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adabf00

TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__cdecl Metasound::
        TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
        ::CreateExplicitArgs
                  (TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                   *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  undefined1 local_res20 [8];
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_a8;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_98;
  FAnalyzerAddress local_88;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,iVar1,&local_98.AllocatorInstance,&local_98.ArrayNum,
                       &local_98.ArrayMax);
    DefaultConstructItems<Metasound::Frontend::FAnalyzerAddress,int>
              (local_98.AllocatorInstance.Data + (longlong)iVar5 * 0x58,iVar1);
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_98);
    FVar7.Data = local_98.AllocatorInstance.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    pFVar9 = (FString *)(param_2->Value)._padding_;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10 = pFVar9 + iVar1;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar9 == pFVar10) break;
      Frontend::FAnalyzerAddress::FAnalyzerAddress(&local_88,pFVar9);
      iVar5 = local_a8.ArrayNum;
      if (local_a8.ArrayNum == local_a8.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
      }
      local_a8.ArrayNum = iVar5 + 1;
      pFVar8 = local_a8.AllocatorInstance.Data + (longlong)iVar5 * 0x58;
      pFVar9 = pFVar9 + 1;
      *(ulong64 *)(pFVar8 + 8) = local_88.InstanceID;
      *(FName *)(pFVar8 + 0x20) = local_88.OutputName;
      *(FName *)(pFVar8 + 0x28) = local_88.DataType;
      *(FName *)(pFVar8 + 0x30) = local_88.AnalyzerName;
      *(undefined8 *)(pFVar8 + 0x10) = local_88.NodeID._0_8_;
      *(undefined8 *)(pFVar8 + 0x18) = local_88.NodeID._8_8_;
      *(FName *)(pFVar8 + 0x48) = local_88.AnalyzerMemberName;
      pFVar8[0x50] = (FScriptContainerElement)local_88.UseDataTransmissionCenter;
      *(undefined ***)pFVar8 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
      *(undefined8 *)(pFVar8 + 0x38) = local_88.AnalyzerInstanceID._0_8_;
      *(undefined8 *)(pFVar8 + 0x40) = local_88.AnalyzerInstanceID._8_8_;
    }
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_a8);
    FVar7.Data = local_a8.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  if (FVar7.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar7.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adac1d0

TEnum<Metasound::ESharedStateBehaviorType,1> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ESharedStateBehaviorType EVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FLiteral *in_R8;
  FName local_res20;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Boolean:
    if (((in_R8->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar4;
    }
    EVar4 = (ESharedStateBehaviorType)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar4;
    }
    EVar4 = (ESharedStateBehaviorType)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar4;
    }
    EVar4 = (ESharedStateBehaviorType)*(float *)&(in_R8->Value)._padding_;
    break;
  case String:
    pwVar6 = L"";
    if (((in_R8->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>::
    TEnum<enum_Metasound::ESharedStateBehaviorType,1>(param_1,*pFVar5);
    return (TEnum<Metasound::ESharedStateBehaviorType,1>)(ESharedStateBehaviorType)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar4;
    }
  case None:
    EVar4 = SameNodeInComposition;
  }
  TEnum<enum_Metasound::ESharedStateBehaviorType,1>::
  TEnum<enum_Metasound::ESharedStateBehaviorType,1>(param_1,EVar4);
  return (TEnum<Metasound::ESharedStateBehaviorType,1>)(ESharedStateBehaviorType)param_1;
}

// CreateExplicitArgs @ 14adac3c0

TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adac5a0

TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adac780

TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
    TDataReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adac960

FAnalyzerAddress * __cdecl
Metasound::
TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::Frontend::FAnalyzerAddress>_>
::CreateExplicitArgs
          (FAnalyzerAddress *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FAnalyzerAddress *pFVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
      return pFVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    *(undefined4 *)&__return_storage_ptr__->field_0x51 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x55 = 0;
    __return_storage_ptr__->field_0x57 = 0;
    __return_storage_ptr__->_padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
    __return_storage_ptr__->InstanceID = 0xffffffffffffffff;
    (__return_storage_ptr__->NodeID).A = 0;
    (__return_storage_ptr__->NodeID).B = 0;
    (__return_storage_ptr__->NodeID).C = 0;
    (__return_storage_ptr__->NodeID).D = 0;
    (__return_storage_ptr__->OutputName).ComparisonIndex = 0;
    (__return_storage_ptr__->OutputName).Number = 0;
    (__return_storage_ptr__->DataType).ComparisonIndex = 0;
    (__return_storage_ptr__->DataType).Number = 0;
    (__return_storage_ptr__->AnalyzerName).ComparisonIndex = 0;
    (__return_storage_ptr__->AnalyzerName).Number = 0;
    (__return_storage_ptr__->AnalyzerInstanceID).A = 0;
    (__return_storage_ptr__->AnalyzerInstanceID).B = 0;
    (__return_storage_ptr__->AnalyzerInstanceID).C = 0;
    (__return_storage_ptr__->AnalyzerInstanceID).D = 0;
    (__return_storage_ptr__->AnalyzerMemberName).ComparisonIndex = 0;
    (__return_storage_ptr__->AnalyzerMemberName).Number = 0;
    __return_storage_ptr__->UseDataTransmissionCenter = true;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x04') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAnalyzerAddress *)(*pcVar1)();
    return pFVar4;
  }
  Frontend::FAnalyzerAddress::FAnalyzerAddress(__return_storage_ptr__,(FString *)param_2);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adacac0

TDataReadReference<Metasound::Frontend::FAnalyzerAddress> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::Frontend::FAnalyzerAddress>::
    TDataReference<Metasound::Frontend::FAnalyzerAddress><FString_const_&>
              ((TDataReference<Metasound::Frontend::FAnalyzerAddress> *)__return_storage_ptr__,
               NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::Frontend::FAnalyzerAddress>::
    TDataReference<Metasound::Frontend::FAnalyzerAddress><>
              ((TDataReference<Metasound::Frontend::FAnalyzerAddress> *)__return_storage_ptr__,
               NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adacbe0

TDataValueReference<Metasound::Frontend::FAnalyzerAddress> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::TDataValueReference<Metasound::Frontend::FAnalyzerAddress>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::Frontend::FAnalyzerAddress>::
    TDataReference<Metasound::Frontend::FAnalyzerAddress><FString_const_&>
              ((TDataReference<Metasound::Frontend::FAnalyzerAddress> *)__return_storage_ptr__,
               NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::Frontend::FAnalyzerAddress>::
    TDataReference<Metasound::Frontend::FAnalyzerAddress><>
              ((TDataReference<Metasound::Frontend::FAnalyzerAddress> *)__return_storage_ptr__,
               NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adacd00

TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::Frontend::FAnalyzerAddress>::
    TDataReference<Metasound::Frontend::FAnalyzerAddress><FString_const_&>
              ((TDataReference<Metasound::Frontend::FAnalyzerAddress> *)__return_storage_ptr__,
               NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::Frontend::FAnalyzerAddress>::
    TDataReference<Metasound::Frontend::FAnalyzerAddress><>
              ((TDataReference<Metasound::Frontend::FAnalyzerAddress> *)__return_storage_ptr__,
               NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adace20

TDataReadReference<Metasound::FSendAddress> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FSendAddress,Metasound::TDataReadReference<Metasound::FSendAddress>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::FSendAddress> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined8 *puVar4;
  TDataReadReference<Metasound::FSendAddress> *pTVar5;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar5;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar5;
    }
  case None:
    DataFactoryPrivate::
    TDataFactoryInternal<Metasound::FSendAddress,Metasound::TDataReadReference<Metasound::FSendAddress>_>
    ::
    CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::FSendAddress>,0>
              (__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x04') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar1)();
    return pTVar5;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  puVar4 = ::operator_new(0x30);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &
              ___7__TIntrusiveReferenceController_VFSendAddress_Metasound___0A__SharedPointerInternals__6B_
    ;
    FSendAddress::FSendAddress((FSendAddress *)(puVar4 + 2),(FString *)param_2);
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar4;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar4 + 2;
    if ((puVar4 + 2 == (undefined8 *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar5;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14adad000

TDataReadReference<FString> * __cdecl
Metasound::TDataLiteralFactory<FString,Metasound::TDataReadReference<FString>_>::CreateExplicitArgs
          (TDataReadReference<FString> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined8 *puVar4;
  TDataReadReference<FString> *pTVar5;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<FString> *)(*pcVar1)();
      return pTVar5;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<FString> *)(*pcVar1)();
      return pTVar5;
    }
  case None:
    DataFactoryPrivate::TDataFactoryInternal<FString,Metasound::TDataReadReference<FString>_>::
    CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<FString>,0>
              (__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x04') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TDataReadReference<FString> *)(*pcVar1)();
    return pTVar5;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFString___Metasound__6B_;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_VFString___0A__SharedPointerInternals__6B_;
    ::FString::FString((FString *)(puVar4 + 2),(FString *)param_2);
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar4;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar4 + 2;
    if ((puVar4 + 2 == (undefined8 *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TDataReadReference<FString> *)(*pcVar1)();
      return pTVar5;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_VFString___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af521c0

int __cdecl
Metasound::TDataLiteralFactory<int,Metasound::DataFactoryPrivate::TDataTypeCreator<int>_>::
CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  int iVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case None:
    return 0;
  case Boolean:
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    return (int)(param_2->Value)._padding_;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    return (int)*(float *)&(param_2->Value)._padding_;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (!bVar3) {
      return 0;
    }
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  if (((param_2->Value).TypeIndex != '\x01') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  return (int)(byte)(param_2->Value)._padding_;
}

// CreateExplicitArgs @ 14af52320

TDataValueReference<int> * __cdecl
Metasound::TDataLiteralFactory<int,Metasound::TDataValueReference<int>_>::CreateExplicitArgs
          (TDataValueReference<int> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<int> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<int> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<int>::TDataReference<int><bool_const_&>
              ((TDataReference<int> *)__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<int> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<int>::TDataReference<int><int_const_&>
              ((TDataReference<int> *)__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<int> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<int>::TDataReference<int><float_const_&>
              ((TDataReference<int> *)__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<int> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<int> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<int>::TDataReference<int><>
              ((TDataReference<int> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataValueReference_H_Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af524c0

TDataWriteReference<int> * __cdecl
Metasound::TDataLiteralFactory<int,Metasound::TDataWriteReference<int>_>::CreateExplicitArgs
          (TDataWriteReference<int> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<int> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<int> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<int>::TDataReference<int><bool_const_&>
              ((TDataReference<int> *)__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<int> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<int>::TDataReference<int><int_const_&>
              ((TDataReference<int> *)__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<int> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<int>::TDataReference<int><float_const_&>
              ((TDataReference<int> *)__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<int> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<int> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<int>::TDataReference<int><>
              ((TDataReference<int> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference_H_Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af52660

float __cdecl
Metasound::TDataLiteralFactory<float,Metasound::DataFactoryPrivate::TDataTypeCreator<float>_>::
CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  float fVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case None:
    return 0.0;
  case Boolean:
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    return (float)(int)(param_2->Value)._padding_;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    return *(float *)&(param_2->Value)._padding_;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (!bVar3) {
      return 0.0;
    }
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  if (((param_2->Value).TypeIndex != '\x01') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  return (float)(byte)(param_2->Value)._padding_;
}

// CreateExplicitArgs @ 14af527d0

TDataReadReference<float> * __cdecl
Metasound::TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
          (TDataReadReference<float> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<float> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<float>::TDataReference<float><bool_const_&>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<float>::TDataReference<float><int_const_&>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<float>::TDataReference<float><float_const_&>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<float> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<float> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<float>::TDataReference<float><>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_M_Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af52970

TDataValueReference<float> * __cdecl
Metasound::TDataLiteralFactory<float,Metasound::TDataValueReference<float>_>::CreateExplicitArgs
          (TDataValueReference<float> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<float> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<float>::TDataReference<float><bool_const_&>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<float>::TDataReference<float><int_const_&>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<float>::TDataReference<float><float_const_&>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<float> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<float> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<float>::TDataReference<float><>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataValueReference_M_Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af52b10

TDataWriteReference<float> * __cdecl
Metasound::TDataLiteralFactory<float,Metasound::TDataWriteReference<float>_>::CreateExplicitArgs
          (TDataWriteReference<float> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<float> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<float>::TDataReference<float><bool_const_&>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<float>::TDataReference<float><int_const_&>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<float> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<float>::TDataReference<float><float_const_&>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<float> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<float> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<float>::TDataReference<float><>
              ((TDataReference<float> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference_M_Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af52cb0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  ELiteralType EVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  float *pfVar16;
  undefined1 local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [7];
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ForAnyElementType local_40;
  int local_38 [4];
  
  EVar9 = FLiteral::GetType(param_2);
  switch(EVar9) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38[0] = 0;
    local_38[1] = 0;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&local_40,local_38,local_38 + 1);
    memset(local_40.Data + (longlong)iVar12 * 4,0,(longlong)iVar6 << 2);
    (__return_storage_ptr__->AllocatorInstance).Data = local_40.Data;
    __return_storage_ptr__->ArrayNum = local_38[0];
    __return_storage_ptr__->ArrayMax = local_38[1];
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    pbVar14 = (byte *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    pbVar1 = pbVar14 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar11 = (int)local_68;
      }
      if (pbVar14 == pbVar1) break;
      bVar5 = *pbVar14;
      if (iVar11 == local_68._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70,(int *)((longlong)&local_68 + 4));
      }
      iVar12 = iVar11 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar12);
      pbVar14 = pbVar14 + 1;
      *(uint *)(local_70.Data + (longlong)iVar11 * 4) = (uint)bVar5;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_70.Data;
    __return_storage_ptr__->ArrayMax = local_68._4_4_;
    __return_storage_ptr__->ArrayNum = iVar11;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    puVar15 = (undefined4 *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    puVar2 = puVar15 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_78);
        iVar11 = (int)local_58;
      }
      if (puVar15 == puVar2) break;
      uVar7 = *puVar15;
      if (iVar11 == local_58._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60,(int *)((longlong)&local_58 + 4));
      }
      iVar12 = iVar11 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      puVar15 = puVar15 + 1;
      *(undefined4 *)(local_60.Data + (longlong)iVar11 * 4) = uVar7;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
    __return_storage_ptr__->ArrayMax = local_58._4_4_;
    __return_storage_ptr__->ArrayNum = iVar11;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    pfVar16 = (float *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    pfVar3 = pfVar16 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_77);
        iVar11 = (int)local_48;
      }
      if (pfVar16 == pfVar3) break;
      fVar4 = *pfVar16;
      if (iVar11 == local_48._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_50,(int *)((longlong)&local_48 + 4));
      }
      iVar12 = iVar11 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      pfVar16 = pfVar16 + 1;
      *(int *)(local_50.Data + (longlong)iVar11 * 4) = (int)fVar4;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
    __return_storage_ptr__->ArrayMax = local_48._4_4_;
    __return_storage_ptr__->ArrayNum = iVar11;
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
  case None:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af53030

TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  ELiteralType EVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar13;
  ForAnyElementType FVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined1 local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  EVar9 = FLiteral::GetType(param_2);
  switch(EVar9) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&local_40.AllocatorInstance,&local_40.ArrayNum,&local_40.ArrayMax)
    ;
    memset(local_40.AllocatorInstance.Data + (longlong)iVar12 * 4,0,(longlong)iVar6 << 2);
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_40);
    FVar14.Data = local_40.AllocatorInstance.Data;
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    pbVar15 = (byte *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pbVar1 = pbVar15 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar11 = local_70.ArrayNum;
      }
      if (pbVar15 == pbVar1) break;
      bVar5 = *pbVar15;
      if (iVar11 == local_70.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_70.ArrayNum = iVar12;
      pbVar15 = pbVar15 + 1;
      *(uint *)(local_70.AllocatorInstance.Data + (longlong)iVar11 * 4) = (uint)bVar5;
    }
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_70);
    FVar14.Data = local_70.AllocatorInstance.Data;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    puVar16 = (undefined4 *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    puVar2 = puVar16 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_78);
        iVar11 = local_60.ArrayNum;
      }
      if (puVar16 == puVar2) break;
      uVar7 = *puVar16;
      if (iVar11 == local_60.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_60.ArrayNum = iVar12;
      puVar16 = puVar16 + 1;
      *(undefined4 *)(local_60.AllocatorInstance.Data + (longlong)iVar11 * 4) = uVar7;
    }
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_60);
    FVar14.Data = local_60.AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    pfVar17 = (float *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    pfVar3 = pfVar17 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_77);
        iVar11 = local_50.ArrayNum;
      }
      if (pfVar17 == pfVar3) break;
      fVar4 = *pfVar17;
      if (iVar11 == local_50.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_50.ArrayNum = iVar12;
      pfVar17 = pfVar17 + 1;
      *(int *)(local_50.AllocatorInstance.Data + (longlong)iVar11 * 4) = (int)fVar4;
    }
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_50);
    FVar14.Data = local_50.AllocatorInstance.Data;
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case None:
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af533e0

TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  ELiteralType EVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar13;
  ForAnyElementType FVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined1 local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  EVar9 = FLiteral::GetType(param_2);
  switch(EVar9) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&local_40.AllocatorInstance,&local_40.ArrayNum,&local_40.ArrayMax)
    ;
    memset(local_40.AllocatorInstance.Data + (longlong)iVar12 * 4,0,(longlong)iVar6 << 2);
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_40);
    FVar14.Data = local_40.AllocatorInstance.Data;
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    pbVar15 = (byte *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pbVar1 = pbVar15 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar11 = local_70.ArrayNum;
      }
      if (pbVar15 == pbVar1) break;
      bVar5 = *pbVar15;
      if (iVar11 == local_70.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_70.ArrayNum = iVar12;
      pbVar15 = pbVar15 + 1;
      *(uint *)(local_70.AllocatorInstance.Data + (longlong)iVar11 * 4) = (uint)bVar5;
    }
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_70);
    FVar14.Data = local_70.AllocatorInstance.Data;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    puVar16 = (undefined4 *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    puVar2 = puVar16 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_78);
        iVar11 = local_60.ArrayNum;
      }
      if (puVar16 == puVar2) break;
      uVar7 = *puVar16;
      if (iVar11 == local_60.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_60.ArrayNum = iVar12;
      puVar16 = puVar16 + 1;
      *(undefined4 *)(local_60.AllocatorInstance.Data + (longlong)iVar11 * 4) = uVar7;
    }
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_60);
    FVar14.Data = local_60.AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    pfVar17 = (float *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    pfVar3 = pfVar17 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_77);
        iVar11 = local_50.ArrayNum;
      }
      if (pfVar17 == pfVar3) break;
      fVar4 = *pfVar17;
      if (iVar11 == local_50.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_50.ArrayNum = iVar12;
      pfVar17 = pfVar17 + 1;
      *(int *)(local_50.AllocatorInstance.Data + (longlong)iVar11 * 4) = (int)fVar4;
    }
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_50);
    FVar14.Data = local_50.AllocatorInstance.Data;
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case None:
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TDataValueReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af53790

TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  ELiteralType EVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar13;
  ForAnyElementType FVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined1 local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  EVar9 = FLiteral::GetType(param_2);
  switch(EVar9) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&local_40.AllocatorInstance,&local_40.ArrayNum,&local_40.ArrayMax)
    ;
    memset(local_40.AllocatorInstance.Data + (longlong)iVar12 * 4,0,(longlong)iVar6 << 2);
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_40);
    FVar14.Data = local_40.AllocatorInstance.Data;
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    pbVar15 = (byte *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pbVar1 = pbVar15 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar11 = local_70.ArrayNum;
      }
      if (pbVar15 == pbVar1) break;
      bVar5 = *pbVar15;
      if (iVar11 == local_70.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_70.ArrayNum = iVar12;
      pbVar15 = pbVar15 + 1;
      *(uint *)(local_70.AllocatorInstance.Data + (longlong)iVar11 * 4) = (uint)bVar5;
    }
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_70);
    FVar14.Data = local_70.AllocatorInstance.Data;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    puVar16 = (undefined4 *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    puVar2 = puVar16 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_78);
        iVar11 = local_60.ArrayNum;
      }
      if (puVar16 == puVar2) break;
      uVar7 = *puVar16;
      if (iVar11 == local_60.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_60.ArrayNum = iVar12;
      puVar16 = puVar16 + 1;
      *(undefined4 *)(local_60.AllocatorInstance.Data + (longlong)iVar11 * 4) = uVar7;
    }
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_60);
    FVar14.Data = local_60.AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    pfVar17 = (float *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    pfVar3 = pfVar17 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_77);
        iVar11 = local_50.ArrayNum;
      }
      if (pfVar17 == pfVar3) break;
      fVar4 = *pfVar17;
      if (iVar11 == local_50.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_50.ArrayNum = iVar12;
      pfVar17 = pfVar17 + 1;
      *(int *)(local_50.AllocatorInstance.Data + (longlong)iVar11 * 4) = (int)fVar4;
    }
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><TArray<int,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_50);
    FVar14.Data = local_50.AllocatorInstance.Data;
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case None:
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TDataWriteReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af53b40

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ELiteralType EVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  byte *pbVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined1 local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [7];
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ForAnyElementType local_40;
  int local_38 [8];
  
  EVar9 = FLiteral::GetType(param_2);
  switch(EVar9) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38[0] = 0;
    local_38[1] = 0;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&local_40,local_38,local_38 + 1);
    memset(local_40.Data + (longlong)iVar12 * 4,0,(longlong)iVar6 << 2);
    (__return_storage_ptr__->AllocatorInstance).Data = local_40.Data;
    __return_storage_ptr__->ArrayNum = local_38[0];
    __return_storage_ptr__->ArrayMax = local_38[1];
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    pbVar14 = (byte *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    pbVar1 = pbVar14 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar11 = (int)local_68;
      }
      if (pbVar14 == pbVar1) break;
      bVar5 = *pbVar14;
      if (iVar11 == local_68._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70,(int *)((longlong)&local_68 + 4));
      }
      iVar12 = iVar11 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar12);
      pbVar14 = pbVar14 + 1;
      *(float *)(local_70.Data + (longlong)iVar11 * 4) = (float)bVar5;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_70.Data;
    __return_storage_ptr__->ArrayMax = local_68._4_4_;
    __return_storage_ptr__->ArrayNum = iVar11;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    piVar15 = (int *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    piVar2 = piVar15 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_78);
        iVar11 = (int)local_58;
      }
      if (piVar15 == piVar2) break;
      iVar7 = *piVar15;
      if (iVar11 == local_58._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60,(int *)((longlong)&local_58 + 4));
      }
      iVar12 = iVar11 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      piVar15 = piVar15 + 1;
      *(float *)(local_60.Data + (longlong)iVar11 * 4) = (float)iVar7;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
    __return_storage_ptr__->ArrayMax = local_58._4_4_;
    __return_storage_ptr__->ArrayNum = iVar11;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
    puVar16 = (undefined4 *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    puVar3 = puVar16 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_77);
        iVar11 = (int)local_48;
      }
      if (puVar16 == puVar3) break;
      uVar4 = *puVar16;
      if (iVar11 == local_48._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_50,(int *)((longlong)&local_48 + 4));
      }
      iVar12 = iVar11 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      puVar16 = puVar16 + 1;
      *(undefined4 *)(local_50.Data + (longlong)iVar11 * 4) = uVar4;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
    __return_storage_ptr__->ArrayMax = local_48._4_4_;
    __return_storage_ptr__->ArrayNum = iVar11;
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar13;
    }
  case None:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af53ed0

TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ELiteralType EVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar13;
  ForAnyElementType FVar14;
  byte *pbVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined1 local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [7];
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  TArray<float,TSizedDefaultAllocator<32>_> local_60;
  TArray<float,TSizedDefaultAllocator<32>_> local_50;
  TArray<float,TSizedDefaultAllocator<32>_> local_40 [2];
  
  EVar9 = FLiteral::GetType(param_2);
  switch(EVar9) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_40[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40[0].ArrayNum = 0;
    local_40[0].ArrayMax = 0;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&local_40[0].AllocatorInstance,&local_40[0].ArrayNum,
                        &local_40[0].ArrayMax);
    memset(local_40[0].AllocatorInstance.Data + (longlong)iVar12 * 4,0,(longlong)iVar6 << 2);
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,local_40);
    FVar14.Data = local_40[0].AllocatorInstance.Data;
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    pbVar15 = (byte *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pbVar1 = pbVar15 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar11 = local_70.ArrayNum;
      }
      if (pbVar15 == pbVar1) break;
      bVar5 = *pbVar15;
      if (iVar11 == local_70.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_70.ArrayNum = iVar12;
      pbVar15 = pbVar15 + 1;
      *(float *)(local_70.AllocatorInstance.Data + (longlong)iVar11 * 4) = (float)bVar5;
    }
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_70);
    FVar14.Data = local_70.AllocatorInstance.Data;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    piVar16 = (int *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    piVar2 = piVar16 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_78);
        iVar11 = local_60.ArrayNum;
      }
      if (piVar16 == piVar2) break;
      iVar7 = *piVar16;
      if (iVar11 == local_60.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_60.ArrayNum = iVar12;
      piVar16 = piVar16 + 1;
      *(float *)(local_60.AllocatorInstance.Data + (longlong)iVar11 * 4) = (float)iVar7;
    }
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_60);
    FVar14.Data = local_60.AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    puVar17 = (undefined4 *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    puVar3 = puVar17 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_77);
        iVar11 = local_50.ArrayNum;
      }
      if (puVar17 == puVar3) break;
      uVar4 = *puVar17;
      if (iVar11 == local_50.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_50.ArrayNum = iVar12;
      puVar17 = puVar17 + 1;
      *(undefined4 *)(local_50.AllocatorInstance.Data + (longlong)iVar11 * 4) = uVar4;
    }
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_50);
    FVar14.Data = local_50.AllocatorInstance.Data;
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case None:
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af54290

TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ELiteralType EVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar13;
  ForAnyElementType FVar14;
  byte *pbVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined1 local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [7];
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  TArray<float,TSizedDefaultAllocator<32>_> local_60;
  TArray<float,TSizedDefaultAllocator<32>_> local_50;
  TArray<float,TSizedDefaultAllocator<32>_> local_40 [2];
  
  EVar9 = FLiteral::GetType(param_2);
  switch(EVar9) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_40[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40[0].ArrayNum = 0;
    local_40[0].ArrayMax = 0;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&local_40[0].AllocatorInstance,&local_40[0].ArrayNum,
                        &local_40[0].ArrayMax);
    memset(local_40[0].AllocatorInstance.Data + (longlong)iVar12 * 4,0,(longlong)iVar6 << 2);
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,local_40);
    FVar14.Data = local_40[0].AllocatorInstance.Data;
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    pbVar15 = (byte *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pbVar1 = pbVar15 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar11 = local_70.ArrayNum;
      }
      if (pbVar15 == pbVar1) break;
      bVar5 = *pbVar15;
      if (iVar11 == local_70.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_70.ArrayNum = iVar12;
      pbVar15 = pbVar15 + 1;
      *(float *)(local_70.AllocatorInstance.Data + (longlong)iVar11 * 4) = (float)bVar5;
    }
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_70);
    FVar14.Data = local_70.AllocatorInstance.Data;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    piVar16 = (int *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    piVar2 = piVar16 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_78);
        iVar11 = local_60.ArrayNum;
      }
      if (piVar16 == piVar2) break;
      iVar7 = *piVar16;
      if (iVar11 == local_60.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_60.ArrayNum = iVar12;
      piVar16 = piVar16 + 1;
      *(float *)(local_60.AllocatorInstance.Data + (longlong)iVar11 * 4) = (float)iVar7;
    }
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_60);
    FVar14.Data = local_60.AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    puVar17 = (undefined4 *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    puVar3 = puVar17 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_77);
        iVar11 = local_50.ArrayNum;
      }
      if (puVar17 == puVar3) break;
      uVar4 = *puVar17;
      if (iVar11 == local_50.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_50.ArrayNum = iVar12;
      puVar17 = puVar17 + 1;
      *(undefined4 *)(local_50.AllocatorInstance.Data + (longlong)iVar11 * 4) = uVar4;
    }
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_50);
    FVar14.Data = local_50.AllocatorInstance.Data;
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataValueReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case None:
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TDataValueReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af54650

TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ELiteralType EVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar13;
  ForAnyElementType FVar14;
  byte *pbVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined1 local_res20 [8];
  undefined1 local_78;
  undefined1 local_77 [7];
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  TArray<float,TSizedDefaultAllocator<32>_> local_60;
  TArray<float,TSizedDefaultAllocator<32>_> local_50;
  TArray<float,TSizedDefaultAllocator<32>_> local_40 [2];
  
  EVar9 = FLiteral::GetType(param_2);
  switch(EVar9) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_40[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40[0].ArrayNum = 0;
    local_40[0].ArrayMax = 0;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&local_40[0].AllocatorInstance,&local_40[0].ArrayNum,
                        &local_40[0].ArrayMax);
    memset(local_40[0].AllocatorInstance.Data + (longlong)iVar12 * 4,0,(longlong)iVar6 << 2);
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,local_40);
    FVar14.Data = local_40[0].AllocatorInstance.Data;
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    pbVar15 = (byte *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pbVar1 = pbVar15 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar11 = local_70.ArrayNum;
      }
      if (pbVar15 == pbVar1) break;
      bVar5 = *pbVar15;
      if (iVar11 == local_70.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_70.ArrayNum = iVar12;
      pbVar15 = pbVar15 + 1;
      *(float *)(local_70.AllocatorInstance.Data + (longlong)iVar11 * 4) = (float)bVar5;
    }
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_70);
    FVar14.Data = local_70.AllocatorInstance.Data;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    piVar16 = (int *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    piVar2 = piVar16 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_78);
        iVar11 = local_60.ArrayNum;
      }
      if (piVar16 == piVar2) break;
      iVar7 = *piVar16;
      if (iVar11 == local_60.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_60.ArrayNum = iVar12;
      piVar16 = piVar16 + 1;
      *(float *)(local_60.AllocatorInstance.Data + (longlong)iVar11 * 4) = (float)iVar7;
    }
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_60);
    FVar14.Data = local_60.AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
    puVar17 = (undefined4 *)(param_2->Value)._padding_;
    iVar12 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    puVar3 = puVar17 + iVar6;
    while( true ) {
      iVar11 = iVar12;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_77);
        iVar11 = local_50.ArrayNum;
      }
      if (puVar17 == puVar3) break;
      uVar4 = *puVar17;
      if (iVar11 == local_50.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_50.ArrayNum = iVar12;
      puVar17 = puVar17 + 1;
      *(undefined4 *)(local_50.AllocatorInstance.Data + (longlong)iVar11 * 4) = uVar4;
    }
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><TArray<float,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_50);
    FVar14.Data = local_50.AllocatorInstance.Data;
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
  case UObjectProxyArray:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar13 = (TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar8)();
      return pTVar13;
    }
  case None:
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af54a10

TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40 [2];
  FMetasoundParameterStorageWrapper local_38;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40[0] = 0;
    local_40[1] = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_48,local_40,local_40 + 1);
    DefaultConstructItems<FMetasoundParameterStorageWrapper,int>
              (local_48.Data + (longlong)iVar5 * 0x10,iVar1);
    (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
    __return_storage_ptr__->ArrayNum = local_40[0];
    __return_storage_ptr__->ArrayMax = local_40[1];
    local_40[0] = 0;
    local_40[1] = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    DestructItems<FMetasoundParameterStorageWrapper,int>((FMetasoundParameterStorageWrapper *)0x0,0)
    ;
    FVar7.Data = local_48.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    pTVar8 = (TSharedPtr<Audio::IProxyData,1> *)(param_2->Value)._padding_;
    pTVar9 = pTVar8 + iVar1;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pTVar8 == pTVar9) break;
      FMetasoundParameterStorageWrapper::FMetasoundParameterStorageWrapper(&local_38,pTVar8);
      iVar5 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
      *(FMetasoundParameterPackStorage **)(local_58.Data + (longlong)iVar5 * 0x10) =
           local_38.ParameterStoragePtr.Object;
      *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)iVar5 * 0x10 + 8) =
           local_38.ParameterStoragePtr.SharedReferenceCount.ReferenceController;
      if (local_38.ParameterStoragePtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.ParameterStoragePtr.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
    __return_storage_ptr__->ArrayNum = (int)local_50;
    __return_storage_ptr__->ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    DestructItems<FMetasoundParameterStorageWrapper,int>((FMetasoundParameterStorageWrapper *)0x0,0)
    ;
    FVar7.Data = local_58.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (FVar7.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar7.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af54cb0

TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar6
  ;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_48;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_38;
  FMetasoundParameterStorageWrapper local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_38.AllocatorInstance,&local_38.ArrayNum,
                       &local_38.ArrayMax);
    DefaultConstructItems<FMetasoundParameterStorageWrapper,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)local_38.AllocatorInstance.Data,
               local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    pTVar8 = (TSharedPtr<Audio::IProxyData,1> *)(param_2->Value)._padding_;
    pTVar9 = pTVar8 + iVar1;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pTVar8 == pTVar9) break;
      FMetasoundParameterStorageWrapper::FMetasoundParameterStorageWrapper(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FMetasoundParameterPackStorage **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10)
           = local_28.ParameterStoragePtr.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController;
      if (local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af54f50

TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__cdecl Metasound::
        TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
        ::CreateExplicitArgs
                  (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                   *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_48;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_38;
  FMetasoundParameterStorageWrapper local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_38.AllocatorInstance,&local_38.ArrayNum,
                       &local_38.ArrayMax);
    DefaultConstructItems<FMetasoundParameterStorageWrapper,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)local_38.AllocatorInstance.Data,
               local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    pTVar8 = (TSharedPtr<Audio::IProxyData,1> *)(param_2->Value)._padding_;
    pTVar9 = pTVar8 + iVar1;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pTVar8 == pTVar9) break;
      FMetasoundParameterStorageWrapper::FMetasoundParameterStorageWrapper(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FMetasoundParameterPackStorage **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10)
           = local_28.ParameterStoragePtr.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController;
      if (local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af551f0

TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__cdecl Metasound::
        TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
        ::CreateExplicitArgs
                  (TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                   *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_48;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> local_38;
  FMetasoundParameterStorageWrapper local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_38.AllocatorInstance,&local_38.ArrayNum,
                       &local_38.ArrayMax);
    DefaultConstructItems<FMetasoundParameterStorageWrapper,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)local_38.AllocatorInstance.Data,
               local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    pTVar8 = (TSharedPtr<Audio::IProxyData,1> *)(param_2->Value)._padding_;
    pTVar9 = pTVar8 + iVar1;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pTVar8 == pTVar9) break;
      FMetasoundParameterStorageWrapper::FMetasoundParameterStorageWrapper(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FMetasoundParameterPackStorage **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10)
           = local_28.ParameterStoragePtr.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController;
      if (local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.ParameterStoragePtr.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FMetasoundParameterStorageWrapper,int>
              ((FMetasoundParameterStorageWrapper *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af55490

TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_res20 [8];
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  int local_50 [2];
  undefined **local_48;
  FName local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    puVar9 = (undefined8 *)(param_2->Value)._padding_;
    local_68.Data = (FScriptContainerElement *)0x0;
    puVar10 = puVar9 + (longlong)iVar1 * 2;
    local_60 = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar9 == puVar10) break;
      local_48 = &___7FSendAddress_Metasound__6B_;
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)*puVar9;
      }
      ::FName::FName(&local_40,pwVar7);
      local_38 = 0;
      local_30 = 0xffffffffffffffff;
      iVar5 = (int)local_60;
      if ((int)local_60 == local_60._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_68,(int *)((longlong)&local_60 + 4));
      }
      local_60 = CONCAT44(local_60._4_4_,iVar5 + 1);
      pFVar8 = local_68.Data + (longlong)iVar5 * 0x20;
      puVar9 = puVar9 + 2;
      *(undefined ***)pFVar8 = &___7FSendAddress_Metasound__6B_;
      *(FName *)(pFVar8 + 8) = local_40;
      *(undefined8 *)(pFVar8 + 0x10) = local_38;
      *(undefined8 *)(pFVar8 + 0x18) = local_30;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_68.Data;
    __return_storage_ptr__->ArrayNum = (int)local_60;
    __return_storage_ptr__->ArrayMax = local_60._4_4_;
    return __return_storage_ptr__;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x06') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar6;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  iVar1 = (int)(param_2->Value)._padding_;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar1,&local_58,local_50,local_50 + 1);
  DefaultConstructItems<Metasound::FSendAddress,int>(local_58.Data + (longlong)iVar5 * 0x20,iVar1);
  (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
  __return_storage_ptr__->ArrayNum = local_50[0];
  __return_storage_ptr__->ArrayMax = local_50[1];
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af55740

TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res20 [8];
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_68;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_58;
  undefined **local_48;
  FName local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar1,&local_58.AllocatorInstance,&local_58.ArrayNum,
                       &local_58.ArrayMax);
    DefaultConstructItems<Metasound::FSendAddress,int>
              (local_58.AllocatorInstance.Data + (longlong)iVar5 * 0x20,iVar1);
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_58);
    FVar7.Data = local_58.AllocatorInstance.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    puVar10 = (undefined8 *)(param_2->Value)._padding_;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar11 = puVar10 + (longlong)iVar1 * 2;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar10 == puVar11) break;
      local_48 = &___7FSendAddress_Metasound__6B_;
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)*puVar10;
      }
      ::FName::FName(&local_40,pwVar8);
      local_38 = 0;
      local_30 = 0xffffffffffffffff;
      iVar5 = local_68.ArrayNum;
      if (local_68.ArrayNum == local_68.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_68.AllocatorInstance,&local_68.ArrayMax);
      }
      local_68.ArrayNum = iVar5 + 1;
      pFVar9 = local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
      puVar10 = puVar10 + 2;
      *(undefined ***)pFVar9 = &___7FSendAddress_Metasound__6B_;
      *(FName *)(pFVar9 + 8) = local_40;
      *(undefined8 *)(pFVar9 + 0x10) = local_38;
      *(undefined8 *)(pFVar9 + 0x18) = local_30;
    }
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_68);
    FVar7.Data = local_68.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  if (FVar7.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar7.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af55a00

TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res20 [8];
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_68;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_58;
  undefined **local_48;
  FName local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar1,&local_58.AllocatorInstance,&local_58.ArrayNum,
                       &local_58.ArrayMax);
    DefaultConstructItems<Metasound::FSendAddress,int>
              (local_58.AllocatorInstance.Data + (longlong)iVar5 * 0x20,iVar1);
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_58);
    FVar7.Data = local_58.AllocatorInstance.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    puVar10 = (undefined8 *)(param_2->Value)._padding_;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar11 = puVar10 + (longlong)iVar1 * 2;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar10 == puVar11) break;
      local_48 = &___7FSendAddress_Metasound__6B_;
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)*puVar10;
      }
      ::FName::FName(&local_40,pwVar8);
      local_38 = 0;
      local_30 = 0xffffffffffffffff;
      iVar5 = local_68.ArrayNum;
      if (local_68.ArrayNum == local_68.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_68.AllocatorInstance,&local_68.ArrayMax);
      }
      local_68.ArrayNum = iVar5 + 1;
      pFVar9 = local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
      puVar10 = puVar10 + 2;
      *(undefined ***)pFVar9 = &___7FSendAddress_Metasound__6B_;
      *(FName *)(pFVar9 + 8) = local_40;
      *(undefined8 *)(pFVar9 + 0x10) = local_38;
      *(undefined8 *)(pFVar9 + 0x18) = local_30;
    }
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_68);
    FVar7.Data = local_68.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  if (FVar7.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar7.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af55cc0

TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res20 [8];
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_68;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> local_58;
  undefined **local_48;
  FName local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar1,&local_58.AllocatorInstance,&local_58.ArrayNum,
                       &local_58.ArrayMax);
    DefaultConstructItems<Metasound::FSendAddress,int>
              (local_58.AllocatorInstance.Data + (longlong)iVar5 * 0x20,iVar1);
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_58);
    FVar7.Data = local_58.AllocatorInstance.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    puVar10 = (undefined8 *)(param_2->Value)._padding_;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar11 = puVar10 + (longlong)iVar1 * 2;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar10 == puVar11) break;
      local_48 = &___7FSendAddress_Metasound__6B_;
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)*puVar10;
      }
      ::FName::FName(&local_40,pwVar8);
      local_38 = 0;
      local_30 = 0xffffffffffffffff;
      iVar5 = local_68.ArrayNum;
      if (local_68.ArrayNum == local_68.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_68.AllocatorInstance,&local_68.ArrayMax);
      }
      local_68.ArrayNum = iVar5 + 1;
      pFVar9 = local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
      puVar10 = puVar10 + 2;
      *(undefined ***)pFVar9 = &___7FSendAddress_Metasound__6B_;
      *(FName *)(pFVar9 + 8) = local_40;
      *(undefined8 *)(pFVar9 + 0x10) = local_38;
      *(undefined8 *)(pFVar9 + 0x18) = local_30;
    }
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_68);
    FVar7.Data = local_68.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  if (FVar7.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar7.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af55f80

/* WARNING: Removing unreachable block (ram,0x00014af5618a) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res20 [8];
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  int local_50 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50[0] = 0;
    local_50[1] = 0;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_58,local_50,local_50 + 1);
    memset(local_58.Data + (longlong)iVar7 * 0x10,0,(longlong)iVar1 << 4);
    (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
    __return_storage_ptr__->ArrayNum = local_50[0];
    __return_storage_ptr__->ArrayMax = local_50[1];
    local_50[0] = 0;
    local_50[1] = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    DestructItems<FString,int>((FString *)0x0,0);
    FVar8.Data = local_58.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    iVar7 = 0;
    puVar10 = (undefined8 *)(param_2->Value)._padding_;
    puVar11 = puVar10 + (longlong)iVar1 * 2;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar7 = (int)local_60;
      }
      FVar8.Data = local_68.Data;
      if (puVar10 == puVar11) break;
      iVar5 = *(int *)(puVar10 + 1);
      _Src = (void *)*puVar10;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (iVar5 == 0) {
        local_40 = 0;
        iVar5 = iVar7;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,&local_48,iVar5,(int *)((longlong)&local_40 + 4));
        memcpy(local_48.Data,_Src,(longlong)iVar5 * 2);
        iVar5 = (int)local_60;
      }
      if (iVar5 == local_60._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_68,(int *)((longlong)&local_60 + 4));
      }
      iVar7 = iVar5 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar7);
      pFVar9 = local_68.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_48.Data;
      local_48.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pFVar9 + 8) = (undefined4)local_40;
      *(undefined4 *)(pFVar9 + 0xc) = local_40._4_4_;
      local_40 = 0;
      puVar10 = puVar10 + 2;
    }
    local_68.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->AllocatorInstance).Data = FVar8.Data;
    __return_storage_ptr__->ArrayNum = iVar7;
    __return_storage_ptr__->ArrayMax = local_60._4_4_;
    local_60 = 0;
    DestructItems<FString,int>((FString *)0x0,0);
    FVar8.Data = local_68.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af56290

/* WARNING: Removing unreachable block (ram,0x00014af564a0) */

TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    iVar1 = (int)(param_2->Value)._padding_;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_48.AllocatorInstance,&local_48.ArrayNum,
                       &local_48.ArrayMax);
    memset(local_48.AllocatorInstance.Data + (longlong)iVar7 * 0x10,0,(longlong)iVar1 << 4);
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><TArray<FString,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar8.Data = local_48.AllocatorInstance.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    iVar7 = 0;
    puVar10 = (undefined8 *)(param_2->Value)._padding_;
    puVar11 = puVar10 + (longlong)iVar1 * 2;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar7 = local_68.ArrayNum;
      }
      if (puVar10 == puVar11) break;
      iVar5 = *(int *)(puVar10 + 1);
      _Src = (void *)*puVar10;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (iVar5 == 0) {
        local_50 = 0;
        iVar5 = iVar7;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,&local_58,iVar5,(int *)((longlong)&local_50 + 4));
        memcpy(local_58.Data,_Src,(longlong)iVar5 * 2);
        iVar5 = local_68.ArrayNum;
      }
      if (iVar5 == local_68.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
      }
      iVar7 = iVar5 + 1;
      local_68.ArrayNum = iVar7;
      pFVar9 = local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_58.Data;
      local_58.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pFVar9 + 8) = (undefined4)local_50;
      *(undefined4 *)(pFVar9 + 0xc) = local_50._4_4_;
      local_50 = 0;
      puVar10 = puVar10 + 2;
    }
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><TArray<FString,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_68);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    FVar8.Data = local_68.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar8.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar8.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af565d0

/* WARNING: Removing unreachable block (ram,0x00014af567e0) */

TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__
          ,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    iVar1 = (int)(param_2->Value)._padding_;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_48.AllocatorInstance,&local_48.ArrayNum,
                       &local_48.ArrayMax);
    memset(local_48.AllocatorInstance.Data + (longlong)iVar7 * 0x10,0,(longlong)iVar1 << 4);
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><TArray<FString,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar8.Data = local_48.AllocatorInstance.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    iVar7 = 0;
    puVar10 = (undefined8 *)(param_2->Value)._padding_;
    puVar11 = puVar10 + (longlong)iVar1 * 2;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar7 = local_68.ArrayNum;
      }
      if (puVar10 == puVar11) break;
      iVar5 = *(int *)(puVar10 + 1);
      _Src = (void *)*puVar10;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (iVar5 == 0) {
        local_50 = 0;
        iVar5 = iVar7;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,&local_58,iVar5,(int *)((longlong)&local_50 + 4));
        memcpy(local_58.Data,_Src,(longlong)iVar5 * 2);
        iVar5 = local_68.ArrayNum;
      }
      if (iVar5 == local_68.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
      }
      iVar7 = iVar5 + 1;
      local_68.ArrayNum = iVar7;
      pFVar9 = local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_58.Data;
      local_58.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pFVar9 + 8) = (undefined4)local_50;
      *(undefined4 *)(pFVar9 + 0xc) = local_50._4_4_;
      local_50 = 0;
      puVar10 = puVar10 + 2;
    }
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><TArray<FString,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_68);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    FVar8.Data = local_68.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar8.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar8.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af56910

/* WARNING: Removing unreachable block (ram,0x00014af56b20) */

TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__
          ,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    iVar1 = (int)(param_2->Value)._padding_;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_48.AllocatorInstance,&local_48.ArrayNum,
                       &local_48.ArrayMax);
    memset(local_48.AllocatorInstance.Data + (longlong)iVar7 * 0x10,0,(longlong)iVar1 << 4);
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><TArray<FString,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar8.Data = local_48.AllocatorInstance.Data;
    break;
  case StringArray:
    if (((param_2->Value).TypeIndex != '\n') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    iVar7 = 0;
    puVar10 = (undefined8 *)(param_2->Value)._padding_;
    puVar11 = puVar10 + (longlong)iVar1 * 2;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    while( true ) {
      if ((int)(param_2->Value)._padding_ != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar7 = local_68.ArrayNum;
      }
      if (puVar10 == puVar11) break;
      iVar5 = *(int *)(puVar10 + 1);
      _Src = (void *)*puVar10;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (iVar5 == 0) {
        local_50 = 0;
        iVar5 = iVar7;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,&local_58,iVar5,(int *)((longlong)&local_50 + 4));
        memcpy(local_58.Data,_Src,(longlong)iVar5 * 2);
        iVar5 = local_68.ArrayNum;
      }
      if (iVar5 == local_68.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
      }
      iVar7 = iVar5 + 1;
      local_68.ArrayNum = iVar7;
      pFVar9 = local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = local_58.Data;
      local_58.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pFVar9 + 8) = (undefined4)local_50;
      *(undefined4 *)(pFVar9 + 0xc) = local_50._4_4_;
      local_50 = 0;
      puVar10 = puVar10 + 2;
    }
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><TArray<FString,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_68);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    FVar8.Data = local_68.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case UObjectProxyArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar8.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar8.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af56c50

TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  ELiteralType EVar5;
  bool bVar6;
  int iVar7;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  float *pfVar10;
  undefined1 local_res20 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  int local_30 [6];
  
  EVar5 = FLiteral::GetType(param_2);
  switch(EVar5) {
  case NoneArray:
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    pfVar10 = (float *)(param_2->Value)._padding_;
    iVar9 = 0;
    iVar3 = (int)(param_2->Value)._padding_;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    pfVar1 = pfVar10 + iVar3;
    while( true ) {
      iVar7 = iVar9;
      if ((int)(param_2->Value)._padding_ != iVar3) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar7 = (int)local_40;
      }
      if (pfVar10 == pfVar1) break;
      fVar2 = *pfVar10;
      if (iVar7 == local_40._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48,(int *)((longlong)&local_40 + 4));
      }
      iVar9 = iVar7 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar9);
      pfVar10 = pfVar10 + 1;
      *(double *)(local_48.Data + (longlong)iVar7 * 8) = (double)fVar2;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
    __return_storage_ptr__->ArrayMax = local_40._4_4_;
    __return_storage_ptr__->ArrayNum = iVar7;
    return __return_storage_ptr__;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  case None:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x06') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  iVar3 = (int)(param_2->Value)._padding_;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,&local_38,local_30,local_30 + 1);
  DefaultConstructItems<Metasound::FTime,int>(local_38.Data + (longlong)iVar9 * 8,iVar3);
  (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
  __return_storage_ptr__->ArrayNum = local_30[0];
  __return_storage_ptr__->ArrayMax = local_30[1];
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af56ea0

TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  ELiteralType EVar5;
  bool bVar6;
  int iVar7;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar8;
  int iVar9;
  ForAnyElementType FVar10;
  float *pfVar11;
  undefined1 local_res20 [8];
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_38 [2];
  
  EVar5 = FLiteral::GetType(param_2);
  switch(EVar5) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    iVar3 = (int)(param_2->Value)._padding_;
    local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38[0].ArrayNum = 0;
    local_38[0].ArrayMax = 0;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar3,&local_38[0].AllocatorInstance,&local_38[0].ArrayNum,
                       &local_38[0].ArrayMax);
    DefaultConstructItems<Metasound::FTime,int>
              (local_38[0].AllocatorInstance.Data + (longlong)iVar9 * 8,iVar3);
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,local_38);
    FVar10.Data = local_38[0].AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    pfVar11 = (float *)(param_2->Value)._padding_;
    iVar9 = 0;
    iVar3 = (int)(param_2->Value)._padding_;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pfVar1 = pfVar11 + iVar3;
    while( true ) {
      iVar7 = iVar9;
      if ((int)(param_2->Value)._padding_ != iVar3) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar7 = local_48.ArrayNum;
      }
      if (pfVar11 == pfVar1) break;
      fVar2 = *pfVar11;
      if (iVar7 == local_48.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      iVar9 = iVar7 + 1;
      local_48.ArrayNum = iVar9;
      pfVar11 = pfVar11 + 1;
      *(double *)(local_48.AllocatorInstance.Data + (longlong)iVar7 * 8) = (double)fVar2;
    }
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    FVar10.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  case None:
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  if (FVar10.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar10.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af57110

TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  ELiteralType EVar5;
  bool bVar6;
  int iVar7;
  TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar8;
  int iVar9;
  ForAnyElementType FVar10;
  float *pfVar11;
  undefined1 local_res20 [8];
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_38 [2];
  
  EVar5 = FLiteral::GetType(param_2);
  switch(EVar5) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    iVar3 = (int)(param_2->Value)._padding_;
    local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38[0].ArrayNum = 0;
    local_38[0].ArrayMax = 0;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar3,&local_38[0].AllocatorInstance,&local_38[0].ArrayNum,
                       &local_38[0].ArrayMax);
    DefaultConstructItems<Metasound::FTime,int>
              (local_38[0].AllocatorInstance.Data + (longlong)iVar9 * 8,iVar3);
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,local_38);
    FVar10.Data = local_38[0].AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    pfVar11 = (float *)(param_2->Value)._padding_;
    iVar9 = 0;
    iVar3 = (int)(param_2->Value)._padding_;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pfVar1 = pfVar11 + iVar3;
    while( true ) {
      iVar7 = iVar9;
      if ((int)(param_2->Value)._padding_ != iVar3) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar7 = local_48.ArrayNum;
      }
      if (pfVar11 == pfVar1) break;
      fVar2 = *pfVar11;
      if (iVar7 == local_48.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      iVar9 = iVar7 + 1;
      local_48.ArrayNum = iVar9;
      pfVar11 = pfVar11 + 1;
      *(double *)(local_48.AllocatorInstance.Data + (longlong)iVar7 * 8) = (double)fVar2;
    }
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    FVar10.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataValueReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  case None:
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  if (FVar10.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar10.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af57380

TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  ELiteralType EVar5;
  bool bVar6;
  int iVar7;
  TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar8;
  int iVar9;
  ForAnyElementType FVar10;
  float *pfVar11;
  undefined1 local_res20 [8];
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> local_38 [2];
  
  EVar5 = FLiteral::GetType(param_2);
  switch(EVar5) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    iVar3 = (int)(param_2->Value)._padding_;
    local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38[0].ArrayNum = 0;
    local_38[0].ArrayMax = 0;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar3,&local_38[0].AllocatorInstance,&local_38[0].ArrayNum,
                       &local_38[0].ArrayMax);
    DefaultConstructItems<Metasound::FTime,int>
              (local_38[0].AllocatorInstance.Data + (longlong)iVar9 * 8,iVar3);
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,local_38);
    FVar10.Data = local_38[0].AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
    pfVar11 = (float *)(param_2->Value)._padding_;
    iVar9 = 0;
    iVar3 = (int)(param_2->Value)._padding_;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pfVar1 = pfVar11 + iVar3;
    while( true ) {
      iVar7 = iVar9;
      if ((int)(param_2->Value)._padding_ != iVar3) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar7 = local_48.ArrayNum;
      }
      if (pfVar11 == pfVar1) break;
      fVar2 = *pfVar11;
      if (iVar7 == local_48.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      iVar9 = iVar7 + 1;
      local_48.ArrayNum = iVar9;
      pfVar11 = pfVar11 + 1;
      *(double *)(local_48.AllocatorInstance.Data + (longlong)iVar7 * 8) = (double)fVar2;
    }
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    FVar10.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  case None:
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  if (FVar10.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(FVar10.Data);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af575f0

TArray<bool,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  code *pcVar9;
  ELiteralType EVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  int *piVar16;
  float *pfVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96 [6];
  ForAnyElementType local_90;
  undefined8 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  int local_48 [8];
  
  EVar10 = FLiteral::GetType(param_2);
  switch(EVar10) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar14;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48[0] = 0;
    local_48[1] = 0;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar6,&local_50,local_48,local_48 + 1);
    memset(local_50.Data + iVar13,0,(longlong)iVar6);
    (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
    __return_storage_ptr__->ArrayNum = local_48[0];
    __return_storage_ptr__->ArrayMax = local_48[1];
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar14;
    }
    pFVar15 = (FScriptContainerElement *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    pFVar1 = pFVar15 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar12 = (int)local_88;
      }
      if (pFVar15 == pFVar1) break;
      FVar5 = *pFVar15;
      if (iVar12 == local_88._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_90,(int *)((longlong)&local_88 + 4));
      }
      iVar13 = iVar12 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar13);
      pFVar15 = pFVar15 + 1;
      local_90.Data[iVar12] = FVar5;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_90.Data;
    __return_storage_ptr__->ArrayMax = local_88._4_4_;
    __return_storage_ptr__->ArrayNum = iVar12;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar14;
    }
    piVar16 = (int *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    piVar2 = piVar16 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_98);
        iVar12 = (int)local_78;
      }
      if (piVar16 == piVar2) break;
      iVar7 = *piVar16;
      if (iVar12 == local_78._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_80,(int *)((longlong)&local_78 + 4));
      }
      iVar13 = iVar12 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      piVar16 = piVar16 + 1;
      local_80.Data[iVar12] = (FScriptContainerElement)(iVar7 != 0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_80.Data;
    __return_storage_ptr__->ArrayMax = local_78._4_4_;
    __return_storage_ptr__->ArrayNum = iVar12;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar14;
    }
    pfVar17 = (float *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    pfVar3 = pfVar17 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_97);
        iVar12 = (int)local_68;
      }
      if (pfVar17 == pfVar3) break;
      fVar4 = *pfVar17;
      if (iVar12 == local_68._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_70,(int *)((longlong)&local_68 + 4));
      }
      iVar13 = iVar12 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar13);
      pfVar17 = pfVar17 + 1;
      local_70.Data[iVar12] = (FScriptContainerElement)(fVar4 != 0.0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_70.Data;
    __return_storage_ptr__->ArrayMax = local_68._4_4_;
    __return_storage_ptr__->ArrayNum = iVar12;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar14;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    iVar13 = 0;
    plVar18 = (longlong *)(param_2->Value)._padding_;
    plVar19 = plVar18 + (longlong)iVar6 * 2;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = 0;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_96);
        iVar12 = (int)local_58;
      }
      if (plVar18 == plVar19) break;
      lVar8 = *plVar18;
      if (iVar12 == local_58._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_60,(int *)((longlong)&local_58 + 4));
      }
      iVar13 = iVar12 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar13);
      plVar18 = plVar18 + 2;
      local_60.Data[iVar12] = (FScriptContainerElement)(lVar8 != 0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
    __return_storage_ptr__->ArrayMax = local_58._4_4_;
    __return_storage_ptr__->ArrayNum = iVar12;
    break;
  default:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar14;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
      return pTVar14;
    }
  case None:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af57a40

TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  code *pcVar9;
  ELiteralType EVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  float *pfVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96 [6];
  TArray<bool,TSizedDefaultAllocator<32>_> local_90;
  TArray<bool,TSizedDefaultAllocator<32>_> local_80;
  TArray<bool,TSizedDefaultAllocator<32>_> local_70;
  TArray<bool,TSizedDefaultAllocator<32>_> local_60;
  TArray<bool,TSizedDefaultAllocator<32>_> local_50 [2];
  
  EVar10 = FLiteral::GetType(param_2);
  switch(EVar10) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_50[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50[0].ArrayNum = 0;
    local_50[0].ArrayMax = 0;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar6,&local_50[0].AllocatorInstance,&local_50[0].ArrayNum,
                        &local_50[0].ArrayMax);
    memset(local_50[0].AllocatorInstance.Data + iVar13,0,(longlong)iVar6);
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,local_50);
    FVar15.Data = local_50[0].AllocatorInstance.Data;
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    pFVar16 = (FScriptContainerElement *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    pFVar1 = pFVar16 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar12 = local_90.ArrayNum;
      }
      if (pFVar16 == pFVar1) break;
      FVar5 = *pFVar16;
      if (iVar12 == local_90.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_90.AllocatorInstance,&local_90.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_90.ArrayNum = iVar13;
      pFVar16 = pFVar16 + 1;
      local_90.AllocatorInstance.Data[iVar12] = FVar5;
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_90);
    FVar15.Data = local_90.AllocatorInstance.Data;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    piVar17 = (int *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    piVar2 = piVar17 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_98);
        iVar12 = local_80.ArrayNum;
      }
      if (piVar17 == piVar2) break;
      iVar7 = *piVar17;
      if (iVar12 == local_80.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_80.AllocatorInstance,&local_80.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_80.ArrayNum = iVar13;
      piVar17 = piVar17 + 1;
      local_80.AllocatorInstance.Data[iVar12] = (FScriptContainerElement)(iVar7 != 0);
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_80);
    FVar15.Data = local_80.AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    pfVar18 = (float *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pfVar3 = pfVar18 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_97);
        iVar12 = local_70.ArrayNum;
      }
      if (pfVar18 == pfVar3) break;
      fVar4 = *pfVar18;
      if (iVar12 == local_70.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_70.ArrayNum = iVar13;
      pfVar18 = pfVar18 + 1;
      local_70.AllocatorInstance.Data[iVar12] = (FScriptContainerElement)(fVar4 != 0.0);
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_70);
    FVar15.Data = local_70.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    iVar13 = 0;
    plVar19 = (longlong *)(param_2->Value)._padding_;
    plVar20 = plVar19 + (longlong)iVar6 * 2;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_96);
        iVar12 = local_60.ArrayNum;
      }
      if (plVar19 == plVar20) break;
      lVar8 = *plVar19;
      if (iVar12 == local_60.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_60.ArrayNum = iVar13;
      plVar19 = plVar19 + 2;
      local_60.AllocatorInstance.Data[iVar12] = (FScriptContainerElement)(lVar8 != 0);
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_60);
    FVar15.Data = local_60.AllocatorInstance.Data;
    break;
  default:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
  case None:
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af57eb0

TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  code *pcVar9;
  ELiteralType EVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  float *pfVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96 [6];
  TArray<bool,TSizedDefaultAllocator<32>_> local_90;
  TArray<bool,TSizedDefaultAllocator<32>_> local_80;
  TArray<bool,TSizedDefaultAllocator<32>_> local_70;
  TArray<bool,TSizedDefaultAllocator<32>_> local_60;
  TArray<bool,TSizedDefaultAllocator<32>_> local_50 [2];
  
  EVar10 = FLiteral::GetType(param_2);
  switch(EVar10) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_50[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50[0].ArrayNum = 0;
    local_50[0].ArrayMax = 0;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar6,&local_50[0].AllocatorInstance,&local_50[0].ArrayNum,
                        &local_50[0].ArrayMax);
    memset(local_50[0].AllocatorInstance.Data + iVar13,0,(longlong)iVar6);
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,local_50);
    FVar15.Data = local_50[0].AllocatorInstance.Data;
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    pFVar16 = (FScriptContainerElement *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    pFVar1 = pFVar16 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar12 = local_90.ArrayNum;
      }
      if (pFVar16 == pFVar1) break;
      FVar5 = *pFVar16;
      if (iVar12 == local_90.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_90.AllocatorInstance,&local_90.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_90.ArrayNum = iVar13;
      pFVar16 = pFVar16 + 1;
      local_90.AllocatorInstance.Data[iVar12] = FVar5;
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_90);
    FVar15.Data = local_90.AllocatorInstance.Data;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    piVar17 = (int *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    piVar2 = piVar17 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_98);
        iVar12 = local_80.ArrayNum;
      }
      if (piVar17 == piVar2) break;
      iVar7 = *piVar17;
      if (iVar12 == local_80.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_80.AllocatorInstance,&local_80.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_80.ArrayNum = iVar13;
      piVar17 = piVar17 + 1;
      local_80.AllocatorInstance.Data[iVar12] = (FScriptContainerElement)(iVar7 != 0);
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_80);
    FVar15.Data = local_80.AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    pfVar18 = (float *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pfVar3 = pfVar18 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_97);
        iVar12 = local_70.ArrayNum;
      }
      if (pfVar18 == pfVar3) break;
      fVar4 = *pfVar18;
      if (iVar12 == local_70.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_70.ArrayNum = iVar13;
      pfVar18 = pfVar18 + 1;
      local_70.AllocatorInstance.Data[iVar12] = (FScriptContainerElement)(fVar4 != 0.0);
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_70);
    FVar15.Data = local_70.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    iVar13 = 0;
    plVar19 = (longlong *)(param_2->Value)._padding_;
    plVar20 = plVar19 + (longlong)iVar6 * 2;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_96);
        iVar12 = local_60.ArrayNum;
      }
      if (plVar19 == plVar20) break;
      lVar8 = *plVar19;
      if (iVar12 == local_60.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_60.ArrayNum = iVar13;
      plVar19 = plVar19 + 2;
      local_60.AllocatorInstance.Data[iVar12] = (FScriptContainerElement)(lVar8 != 0);
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_60);
    FVar15.Data = local_60.AllocatorInstance.Data;
    break;
  default:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataValueReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
  case None:
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TDataValueReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af58320

TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  code *pcVar9;
  ELiteralType EVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  float *pfVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96 [6];
  TArray<bool,TSizedDefaultAllocator<32>_> local_90;
  TArray<bool,TSizedDefaultAllocator<32>_> local_80;
  TArray<bool,TSizedDefaultAllocator<32>_> local_70;
  TArray<bool,TSizedDefaultAllocator<32>_> local_60;
  TArray<bool,TSizedDefaultAllocator<32>_> local_50 [2];
  
  EVar10 = FLiteral::GetType(param_2);
  switch(EVar10) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    local_50[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50[0].ArrayNum = 0;
    local_50[0].ArrayMax = 0;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar6,&local_50[0].AllocatorInstance,&local_50[0].ArrayNum,
                        &local_50[0].ArrayMax);
    memset(local_50[0].AllocatorInstance.Data + iVar13,0,(longlong)iVar6);
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,local_50);
    FVar15.Data = local_50[0].AllocatorInstance.Data;
    break;
  case BooleanArray:
    if (((param_2->Value).TypeIndex != '\a') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    pFVar16 = (FScriptContainerElement *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    pFVar1 = pFVar16 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
        iVar12 = local_90.ArrayNum;
      }
      if (pFVar16 == pFVar1) break;
      FVar5 = *pFVar16;
      if (iVar12 == local_90.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_90.AllocatorInstance,&local_90.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_90.ArrayNum = iVar13;
      pFVar16 = pFVar16 + 1;
      local_90.AllocatorInstance.Data[iVar12] = FVar5;
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_90);
    FVar15.Data = local_90.AllocatorInstance.Data;
    break;
  case IntegerArray:
    if (((param_2->Value).TypeIndex != '\b') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    piVar17 = (int *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    piVar2 = piVar17 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_98);
        iVar12 = local_80.ArrayNum;
      }
      if (piVar17 == piVar2) break;
      iVar7 = *piVar17;
      if (iVar12 == local_80.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_80.AllocatorInstance,&local_80.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_80.ArrayNum = iVar13;
      piVar17 = piVar17 + 1;
      local_80.AllocatorInstance.Data[iVar12] = (FScriptContainerElement)(iVar7 != 0);
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_80);
    FVar15.Data = local_80.AllocatorInstance.Data;
    break;
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    pfVar18 = (float *)(param_2->Value)._padding_;
    iVar13 = 0;
    iVar6 = (int)(param_2->Value)._padding_;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    pfVar3 = pfVar18 + iVar6;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_97);
        iVar12 = local_70.ArrayNum;
      }
      if (pfVar18 == pfVar3) break;
      fVar4 = *pfVar18;
      if (iVar12 == local_70.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_70.ArrayNum = iVar13;
      pfVar18 = pfVar18 + 1;
      local_70.AllocatorInstance.Data[iVar12] = (FScriptContainerElement)(fVar4 != 0.0);
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_70);
    FVar15.Data = local_70.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
    iVar6 = (int)(param_2->Value)._padding_;
    iVar13 = 0;
    plVar19 = (longlong *)(param_2->Value)._padding_;
    plVar20 = plVar19 + (longlong)iVar6 * 2;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    while( true ) {
      iVar12 = iVar13;
      if ((int)(param_2->Value)._padding_ != iVar6) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_96);
        iVar12 = local_60.ArrayNum;
      }
      if (plVar19 == plVar20) break;
      lVar8 = *plVar19;
      if (iVar12 == local_60.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_60.AllocatorInstance,&local_60.ArrayMax);
      }
      iVar13 = iVar12 + 1;
      local_60.ArrayNum = iVar13;
      plVar19 = plVar19 + 2;
      local_60.AllocatorInstance.Data[iVar12] = (FScriptContainerElement)(lVar8 != 0);
    }
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><TArray<bool,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject,&local_60);
    FVar15.Data = local_60.AllocatorInstance.Data;
    break;
  default:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x484,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case StringArray:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("bExpectsNone",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                        ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar9)();
      return pTVar14;
    }
  case None:
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)__return_storage_ptr__,
               NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &___7__TDataWriteReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    return __return_storage_ptr__;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af58790

FAudioBuffer * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FAudioBuffer>_>
::CreateExplicitArgs
          (FAudioBuffer *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FAudioBuffer *pFVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAudioBuffer *)(*pcVar1)();
      return pFVar4;
    }
    FAudioBuffer::FAudioBuffer(__return_storage_ptr__,(int)(param_2->Value)._padding_);
    return __return_storage_ptr__;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAudioBuffer *)(*pcVar1)();
      return pFVar4;
    }
    FAudioBuffer::FAudioBuffer(__return_storage_ptr__,(int)*(float *)&(param_2->Value)._padding_);
    return __return_storage_ptr__;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAudioBuffer *)(*pcVar1)();
      return pFVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAudioBuffer *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    FAudioBuffer::FAudioBuffer(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x01') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAudioBuffer *)(*pcVar1)();
    return pFVar4;
  }
  FAudioBuffer::FAudioBuffer(__return_storage_ptr__,(uint)(byte)(param_2->Value)._padding_);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af58960

TDataReadReference<Metasound::FAudioBuffer> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::FAudioBuffer> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBuffer>::TDataReference<Metasound::FAudioBuffer><bool_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBuffer>::TDataReference<Metasound::FAudioBuffer><int_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,
               (int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBuffer>::TDataReference<Metasound::FAudioBuffer><float_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,
               (float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af58b10

TDataValueReference<Metasound::FAudioBuffer> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataValueReference<Metasound::FAudioBuffer>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::FAudioBuffer> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FAudioBuffer> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBuffer>::TDataReference<Metasound::FAudioBuffer><bool_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBuffer>::TDataReference<Metasound::FAudioBuffer><int_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,
               (int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBuffer>::TDataReference<Metasound::FAudioBuffer><float_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,
               (float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFAudioBuffer_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af58cc0

TDataWriteReference<Metasound::FAudioBuffer> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::FAudioBuffer> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBuffer>::TDataReference<Metasound::FAudioBuffer><bool_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBuffer>::TDataReference<Metasound::FAudioBuffer><int_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,
               (int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBuffer>::TDataReference<Metasound::FAudioBuffer><float_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,
               (float *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FAudioBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)__return_storage_ptr__,NewObject,param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af58e70

FMetasoundParameterStorageWrapper * __cdecl
Metasound::
TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::DataFactoryPrivate::TDataTypeCreator<FMetasoundParameterStorageWrapper>_>
::CreateExplicitArgs
          (FMetasoundParameterStorageWrapper *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FMetasoundParameterStorageWrapper *pFVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMetasoundParameterStorageWrapper *)(*pcVar1)();
      return pFVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMetasoundParameterStorageWrapper *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    (__return_storage_ptr__->ParameterStoragePtr).Object = (FMetasoundParameterPackStorage *)0x0;
    (__return_storage_ptr__->ParameterStoragePtr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x05') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMetasoundParameterStorageWrapper *)(*pcVar1)();
    return pFVar4;
  }
  FMetasoundParameterStorageWrapper::FMetasoundParameterStorageWrapper
            (__return_storage_ptr__,(TSharedPtr<Audio::IProxyData,1> *)param_2);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af58f90

TDataReadReference<FMetasoundParameterStorageWrapper> * __cdecl
Metasound::
TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
::CreateExplicitArgs
          (TDataReadReference<FMetasoundParameterStorageWrapper> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<FMetasoundParameterStorageWrapper> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<FMetasoundParameterStorageWrapper>::
    TDataReference<FMetasoundParameterStorageWrapper><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<FMetasoundParameterStorageWrapper> *)__return_storage_ptr__,NewObject
               ,(TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<FMetasoundParameterStorageWrapper>::
    TDataReference<FMetasoundParameterStorageWrapper><>
              ((TDataReference<FMetasoundParameterStorageWrapper> *)__return_storage_ptr__,NewObject
              );
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af590b0

TDataValueReference<FMetasoundParameterStorageWrapper> * __cdecl
Metasound::
TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::TDataValueReference<FMetasoundParameterStorageWrapper>_>
::CreateExplicitArgs
          (TDataValueReference<FMetasoundParameterStorageWrapper> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<FMetasoundParameterStorageWrapper> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<FMetasoundParameterStorageWrapper>::
    TDataReference<FMetasoundParameterStorageWrapper><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<FMetasoundParameterStorageWrapper> *)__return_storage_ptr__,NewObject
               ,(TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<FMetasoundParameterStorageWrapper>::
    TDataReference<FMetasoundParameterStorageWrapper><>
              ((TDataReference<FMetasoundParameterStorageWrapper> *)__return_storage_ptr__,NewObject
              );
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af591d0

TDataWriteReference<FMetasoundParameterStorageWrapper> * __cdecl
Metasound::
TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::TDataWriteReference<FMetasoundParameterStorageWrapper>_>
::CreateExplicitArgs
          (TDataWriteReference<FMetasoundParameterStorageWrapper> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<FMetasoundParameterStorageWrapper> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<FMetasoundParameterStorageWrapper>::
    TDataReference<FMetasoundParameterStorageWrapper><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<FMetasoundParameterStorageWrapper> *)__return_storage_ptr__,NewObject
               ,(TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<FMetasoundParameterStorageWrapper> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<FMetasoundParameterStorageWrapper>::
    TDataReference<FMetasoundParameterStorageWrapper><>
              ((TDataReference<FMetasoundParameterStorageWrapper> *)__return_storage_ptr__,NewObject
              );
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af592f0

FSendAddress * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FSendAddress,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FSendAddress>_>
::CreateExplicitArgs
          (FSendAddress *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FSendAddress *pFVar4;
  wchar_t *pwVar5;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    pwVar5 = L"";
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSendAddress *)(*pcVar1)();
      return pFVar4;
    }
    __return_storage_ptr__->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
    if ((int)(param_2->Value)._padding_ != 0) {
      pwVar5 = (wchar_t *)(param_2->Value)._padding_;
    }
    ::FName::FName(&__return_storage_ptr__->ChannelName,pwVar5);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSendAddress *)(*pcVar1)();
      return pFVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSendAddress *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    __return_storage_ptr__->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
    (__return_storage_ptr__->ChannelName).ComparisonIndex = 0;
    (__return_storage_ptr__->ChannelName).Number = 0;
  }
  (__return_storage_ptr__->DataType).ComparisonIndex = 0;
  (__return_storage_ptr__->DataType).Number = 0;
  __return_storage_ptr__->InstanceID = 0xffffffffffffffff;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af59440

TDataValueReference<Metasound::FSendAddress> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FSendAddress,Metasound::TDataValueReference<Metasound::FSendAddress>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::FSendAddress> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FSendAddress> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FSendAddress>::
    TDataReference<Metasound::FSendAddress><FString_const_&>
              ((TDataReference<Metasound::FSendAddress> *)__return_storage_ptr__,NewObject,
               (FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FSendAddress>::TDataReference<Metasound::FSendAddress><>
              ((TDataReference<Metasound::FSendAddress> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFSendAddress_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af59560

TDataWriteReference<Metasound::FSendAddress> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FSendAddress,Metasound::TDataWriteReference<Metasound::FSendAddress>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::FSendAddress> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::FSendAddress> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FSendAddress>::
    TDataReference<Metasound::FSendAddress><FString_const_&>
              ((TDataReference<Metasound::FSendAddress> *)__return_storage_ptr__,NewObject,
               (FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FSendAddress> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FSendAddress>::TDataReference<Metasound::FSendAddress><>
              ((TDataReference<Metasound::FSendAddress> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFSendAddress_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af59680

FString * __cdecl
Metasound::TDataLiteralFactory<FString,Metasound::DataFactoryPrivate::TDataTypeCreator<FString>_>::
CreateExplicitArgs(FString *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FString *pFVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x04') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)param_2);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af597a0

TDataValueReference<FString> * __cdecl
Metasound::TDataLiteralFactory<FString,Metasound::TDataValueReference<FString>_>::CreateExplicitArgs
          (TDataValueReference<FString> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<FString> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<FString> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<FString>::TDataReference<FString><FString_const_&>
              ((TDataReference<FString> *)__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<FString> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<FString> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<FString>::TDataReference<FString><>
              ((TDataReference<FString> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataValueReference_VFString___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af598c0

TDataWriteReference<FString> * __cdecl
Metasound::TDataLiteralFactory<FString,Metasound::TDataWriteReference<FString>_>::CreateExplicitArgs
          (TDataWriteReference<FString> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<FString> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<FString> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<FString>::TDataReference<FString><FString_const_&>
              ((TDataReference<FString> *)__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<FString> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<FString> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<FString>::TDataReference<FString><>
              ((TDataReference<FString> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference_VFString___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af599e0

FTime __cdecl
Metasound::
TDataLiteralFactory<Metasound::FTime,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTime>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FTime FVar4;
  FLiteral *in_R8;
  
  EVar2 = FLiteral::GetType(in_R8);
  switch(EVar2) {
  case Float:
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4.Time = (double)(*pcVar1)();
      return (FTime)FVar4.Time;
    }
  case Boolean:
  case Integer:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      FVar4.Time = (double)(*pcVar1)();
      return (FTime)FVar4.Time;
    }
  case None:
    param_1->SampleRate = 0;
    param_1->TargetBlockRate = 0.0;
    return (FTime)(double)param_1;
  }
  if (((in_R8->Value).TypeIndex != '\x03') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar4.Time = (double)(*pcVar1)();
    return (FTime)FVar4.Time;
  }
  *(double *)param_1 = (double)*(float *)&(in_R8->Value)._padding_;
  return (FTime)(double)param_1;
}

// CreateExplicitArgs @ 14af59b00

TDataReadReference<Metasound::FTime> * __cdecl
Metasound::TDataLiteralFactory<Metasound::FTime,Metasound::TDataReadReference<Metasound::FTime>_>::
CreateExplicitArgs(TDataReadReference<Metasound::FTime> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::FTime> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><float_const_&>
              ((TDataReference<Metasound::FTime> *)__return_storage_ptr__,NewObject,(float *)param_2
              );
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af59c20

TDataValueReference<Metasound::FTime> * __cdecl
Metasound::TDataLiteralFactory<Metasound::FTime,Metasound::TDataValueReference<Metasound::FTime>_>::
CreateExplicitArgs(TDataValueReference<Metasound::FTime> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FTime> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><float_const_&>
              ((TDataReference<Metasound::FTime> *)__return_storage_ptr__,NewObject,(float *)param_2
              );
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFTime_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af59d40

TDataWriteReference<Metasound::FTime> * __cdecl
Metasound::TDataLiteralFactory<Metasound::FTime,Metasound::TDataWriteReference<Metasound::FTime>_>::
CreateExplicitArgs(TDataWriteReference<Metasound::FTime> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::FTime> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><float_const_&>
              ((TDataReference<Metasound::FTime> *)__return_storage_ptr__,NewObject,(float *)param_2
              );
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FTime> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FTime>::TDataReference<Metasound::FTime><>
              ((TDataReference<Metasound::FTime> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af59e60

FTrigger * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FTrigger,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTrigger>_>
::CreateExplicitArgs(FTrigger *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  ELiteralType EVar4;
  bool bVar5;
  FTrigger *pFVar6;
  
  EVar4 = FLiteral::GetType(param_2);
  switch(EVar4) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTrigger *)(*pcVar2)();
      return pFVar6;
    }
    lVar3 = (param_2->Value)._padding_;
    (__return_storage_ptr__->TriggeredFrames).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->TriggeredFrames).ArrayNum = 0;
    (__return_storage_ptr__->TriggeredFrames).ArrayMax = 0;
    __return_storage_ptr__->bHasAdvanced = false;
    __return_storage_ptr__->bTriggeredFromInit = false;
    __return_storage_ptr__->bHasTrigger = false;
    __return_storage_ptr__->NumFramesPerBlock = param_1->NumFramesPerBlock;
    iVar1 = param_1->SampleRate;
    __return_storage_ptr__->LastTriggerIndexInBlock = 0;
    __return_storage_ptr__->SampleRate = (int)(float)iVar1;
    if ((char)lVar3 != '\0') {
      FTrigger::TriggerFrame(__return_storage_ptr__,0);
      return __return_storage_ptr__;
    }
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTrigger *)(*pcVar2)();
      return pFVar6;
    }
    lVar3 = (param_2->Value)._padding_;
    (__return_storage_ptr__->TriggeredFrames).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->TriggeredFrames).ArrayNum = 0;
    (__return_storage_ptr__->TriggeredFrames).ArrayMax = 0;
    __return_storage_ptr__->bHasAdvanced = false;
    __return_storage_ptr__->bTriggeredFromInit = false;
    __return_storage_ptr__->bHasTrigger = false;
    __return_storage_ptr__->NumFramesPerBlock = param_1->NumFramesPerBlock;
    iVar1 = param_1->SampleRate;
    __return_storage_ptr__->LastTriggerIndexInBlock = 0;
    __return_storage_ptr__->SampleRate = (int)(float)iVar1;
    FTrigger::TriggerFrame(__return_storage_ptr__,(int)lVar3);
    return __return_storage_ptr__;
  default:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTrigger *)(*pcVar2)();
      return pFVar6;
    }
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTrigger *)(*pcVar2)();
      return pFVar6;
    }
  case None:
    (__return_storage_ptr__->TriggeredFrames).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->TriggeredFrames).ArrayNum = 0;
    (__return_storage_ptr__->TriggeredFrames).ArrayMax = 0;
    __return_storage_ptr__->bHasAdvanced = false;
    __return_storage_ptr__->bTriggeredFromInit = false;
    __return_storage_ptr__->bHasTrigger = false;
    __return_storage_ptr__->NumFramesPerBlock = param_1->NumFramesPerBlock;
    iVar1 = param_1->SampleRate;
    __return_storage_ptr__->LastTriggerIndexInBlock = 0;
    __return_storage_ptr__->SampleRate = (int)(float)iVar1;
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af5a060

TDataReadReference<Metasound::FTrigger> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
CreateExplicitArgs(TDataReadReference<Metasound::FTrigger> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::FTrigger> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,bool_const_&>
              ((TDataReference<Metasound::FTrigger> *)__return_storage_ptr__,NewObject,param_1,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,int_const_&>
              ((TDataReference<Metasound::FTrigger> *)__return_storage_ptr__,NewObject,param_1,
               (int *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)__return_storage_ptr__,NewObject,param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af5a1e0

TDataValueReference<Metasound::FTrigger> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataValueReference<Metasound::FTrigger>_>::
CreateExplicitArgs(TDataValueReference<Metasound::FTrigger> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FTrigger> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,bool_const_&>
              ((TDataReference<Metasound::FTrigger> *)__return_storage_ptr__,NewObject,param_1,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,int_const_&>
              ((TDataReference<Metasound::FTrigger> *)__return_storage_ptr__,NewObject,param_1,
               (int *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)__return_storage_ptr__,NewObject,param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFTrigger_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af5a360

TDataWriteReference<Metasound::FTrigger> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataWriteReference<Metasound::FTrigger>_>::
CreateExplicitArgs(TDataWriteReference<Metasound::FTrigger> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::FTrigger> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,bool_const_&>
              ((TDataReference<Metasound::FTrigger> *)__return_storage_ptr__,NewObject,param_1,
               (bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&,int_const_&>
              ((TDataReference<Metasound::FTrigger> *)__return_storage_ptr__,NewObject,param_1,
               (int *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FTrigger> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)__return_storage_ptr__,NewObject,param_1);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af5a4e0

bool __cdecl
Metasound::TDataLiteralFactory<bool,Metasound::DataFactoryPrivate::TDataTypeCreator<bool>_>::
CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case None:
    break;
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    return (bool)(char)(param_2->Value)._padding_;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    return (int)(param_2->Value)._padding_ != 0;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (*(float *)&(param_2->Value)._padding_ != 0.0) {
      return true;
    }
    break;
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    return (param_2->Value)._padding_ != 0;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return false;
}

// CreateExplicitArgs @ 14af5a690

TDataReadReference<bool> * __cdecl
Metasound::TDataLiteralFactory<bool,Metasound::TDataReadReference<bool>_>::CreateExplicitArgs
          (TDataReadReference<bool> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<bool> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><bool_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><int_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><float_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<bool>::TDataReference<bool><>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference__N_Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af5a870

TDataValueReference<bool> * __cdecl
Metasound::TDataLiteralFactory<bool,Metasound::TDataValueReference<bool>_>::CreateExplicitArgs
          (TDataValueReference<bool> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<bool> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><bool_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><int_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><float_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<bool>::TDataReference<bool><>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataValueReference__N_Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14af5aa50

TDataWriteReference<bool> * __cdecl
Metasound::TDataLiteralFactory<bool,Metasound::TDataWriteReference<bool>_>::CreateExplicitArgs
          (TDataWriteReference<bool> *__return_storage_ptr__,FOperatorSettings *param_1,
          FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<bool> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><bool_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><int_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><float_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<bool>::TDataReference<bool><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
  case String:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case FloatArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<bool> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<bool>::TDataReference<bool><>
              ((TDataReference<bool> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataWriteReference__N_Metasound__6B_;
  return __return_storage_ptr__;
}

