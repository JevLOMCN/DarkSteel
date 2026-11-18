// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 36

// CreateExplicitArgs @ 14b36f860

FWaveTable * __cdecl
Metasound::
TDataLiteralFactory<WaveTable::FWaveTable,Metasound::DataFactoryPrivate::TDataTypeCreator<WaveTable::FWaveTable>_>
::CreateExplicitArgs
          (FWaveTable *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FWaveTable *pFVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case FloatArray:
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWaveTable *)(*pcVar1)();
      return pFVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWaveTable *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    *(undefined8 *)&__return_storage_ptr__->FinalValue = 0;
    (__return_storage_ptr__->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Samples).ArrayNum = 0;
    (__return_storage_ptr__->Samples).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\t') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FWaveTable *)(*pcVar1)();
    return pFVar4;
  }
  WaveTable::FWaveTable::FWaveTable
            (__return_storage_ptr__,(TArray<float,TSizedDefaultAllocator<32>_> *)param_2,0.0);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b36f980

TDataReadReference<WaveTable::FWaveTable> * __cdecl
Metasound::
TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataReadReference<WaveTable::FWaveTable>_>::
CreateExplicitArgs(TDataReadReference<WaveTable::FWaveTable> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<WaveTable::FWaveTable> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<WaveTable::FWaveTable>::
    TDataReference<WaveTable::FWaveTable><TArray<float,TSizedDefaultAllocator<32>_>_const_&>
              ((TDataReference<WaveTable::FWaveTable> *)__return_storage_ptr__,NewObject,
               (TArray<float,TSizedDefaultAllocator<32>_> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<WaveTable::FWaveTable>::TDataReference<WaveTable::FWaveTable><>
              ((TDataReference<WaveTable::FWaveTable> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b36faa0

TDataValueReference<WaveTable::FWaveTable> * __cdecl
Metasound::
TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataValueReference<WaveTable::FWaveTable>_>::
CreateExplicitArgs(TDataValueReference<WaveTable::FWaveTable> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<WaveTable::FWaveTable> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<WaveTable::FWaveTable>::
    TDataReference<WaveTable::FWaveTable><TArray<float,TSizedDefaultAllocator<32>_>_const_&>
              ((TDataReference<WaveTable::FWaveTable> *)__return_storage_ptr__,NewObject,
               (TArray<float,TSizedDefaultAllocator<32>_> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<WaveTable::FWaveTable>::TDataReference<WaveTable::FWaveTable><>
              ((TDataReference<WaveTable::FWaveTable> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_UFWaveTable_WaveTable___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b36fbc0

TDataWriteReference<WaveTable::FWaveTable> * __cdecl
Metasound::
TDataLiteralFactory<WaveTable::FWaveTable,Metasound::TDataWriteReference<WaveTable::FWaveTable>_>::
CreateExplicitArgs(TDataWriteReference<WaveTable::FWaveTable> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<WaveTable::FWaveTable> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case FloatArray:
    if (((param_2->Value).TypeIndex != '\t') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<WaveTable::FWaveTable>::
    TDataReference<WaveTable::FWaveTable><TArray<float,TSizedDefaultAllocator<32>_>_const_&>
              ((TDataReference<WaveTable::FWaveTable> *)__return_storage_ptr__,NewObject,
               (TArray<float,TSizedDefaultAllocator<32>_> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
  case Boolean:
  case Integer:
  case Float:
  case String:
  case UObjectProxy:
  case NoneArray:
  case BooleanArray:
  case IntegerArray:
  case StringArray:
  case UObjectProxyArray:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<WaveTable::FWaveTable> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<WaveTable::FWaveTable>::TDataReference<WaveTable::FWaveTable><>
              ((TDataReference<WaveTable::FWaveTable> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_UFWaveTable_WaveTable___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b36fce0

TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40 [2];
  FAudioBusAsset local_38;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40[0] = 0;
    local_40[1] = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_48,local_40,local_40 + 1);
    DefaultConstructItems<Metasound::FAudioBusAsset,int>
              (local_48.Data + (longlong)iVar5 * 0x10,iVar1);
    (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
    __return_storage_ptr__->ArrayNum = local_40[0];
    __return_storage_ptr__->ArrayMax = local_40[1];
    local_40[0] = 0;
    local_40[1] = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    DestructItems<Metasound::FAudioBusAsset,int>((FAudioBusAsset *)0x0,0);
    FVar7.Data = local_48.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
      FAudioBusAsset::FAudioBusAsset(&local_38,pTVar8);
      iVar5 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
      *(FAudioBusProxy **)(local_58.Data + (longlong)iVar5 * 0x10) = local_38.AudioBusProxy.Object;
      *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)iVar5 * 0x10 + 8) =
           local_38.AudioBusProxy.SharedReferenceCount.ReferenceController;
      if (local_38.AudioBusProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.AudioBusProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.AudioBusProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.AudioBusProxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
    __return_storage_ptr__->ArrayNum = (int)local_50;
    __return_storage_ptr__->ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    DestructItems<Metasound::FAudioBusAsset,int>((FAudioBusAsset *)0x0,0);
    FVar7.Data = local_58.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
      pTVar6 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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

// CreateExplicitArgs @ 14b36ff80

TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_38;
  FAudioBusAsset local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_38.AllocatorInstance,&local_38.ArrayNum,
                       &local_38.ArrayMax);
    DefaultConstructItems<Metasound::FAudioBusAsset,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar2)();
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
      FAudioBusAsset::FAudioBusAsset(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FAudioBusProxy **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
           local_28.AudioBusProxy.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.AudioBusProxy.SharedReferenceCount.ReferenceController;
      if (local_28.AudioBusProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.AudioBusProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.AudioBusProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.AudioBusProxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar2)();
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
      pTVar6 = (TDataReadReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *
               )(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b370220

TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_38;
  FAudioBusAsset local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
    DefaultConstructItems<Metasound::FAudioBusAsset,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
      FAudioBusAsset::FAudioBusAsset(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FAudioBusProxy **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
           local_28.AudioBusProxy.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.AudioBusProxy.SharedReferenceCount.ReferenceController;
      if (local_28.AudioBusProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.AudioBusProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.AudioBusProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.AudioBusProxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
      pTVar6 = (TDataValueReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b3704c0

TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> local_38;
  FAudioBusAsset local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
    DefaultConstructItems<Metasound::FAudioBusAsset,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
      FAudioBusAsset::FAudioBusAsset(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FAudioBusProxy **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
           local_28.AudioBusProxy.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.AudioBusProxy.SharedReferenceCount.ReferenceController;
      if (local_28.AudioBusProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.AudioBusProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.AudioBusProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.AudioBusProxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
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
      pTVar6 = (TDataWriteReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b370760

TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40 [2];
  FWaveAsset local_38;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40[0] = 0;
    local_40[1] = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_48,local_40,local_40 + 1);
    DefaultConstructItems<Metasound::FWaveAsset,int>(local_48.Data + (longlong)iVar5 * 0x10,iVar1);
    (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
    __return_storage_ptr__->ArrayNum = local_40[0];
    __return_storage_ptr__->ArrayMax = local_40[1];
    local_40[0] = 0;
    local_40[1] = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)0x0,0);
    FVar7.Data = local_48.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
      FWaveAsset::FWaveAsset(&local_38,pTVar8);
      iVar5 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
      *(FSoundWaveProxy **)(local_58.Data + (longlong)iVar5 * 0x10) = local_38.SoundWaveProxy.Object
      ;
      *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)iVar5 * 0x10 + 8) =
           local_38.SoundWaveProxy.SharedReferenceCount.ReferenceController;
      if (local_38.SoundWaveProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SoundWaveProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SoundWaveProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SoundWaveProxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
    __return_storage_ptr__->ArrayNum = (int)local_50;
    __return_storage_ptr__->ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)0x0,0);
    FVar7.Data = local_58.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
      pTVar6 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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

// CreateExplicitArgs @ 14b370a00

TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_38;
  FWaveAsset local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_38.AllocatorInstance,&local_38.ArrayNum,
                       &local_38.ArrayMax);
    DefaultConstructItems<Metasound::FWaveAsset,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
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
      FWaveAsset::FWaveAsset(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FSoundWaveProxy **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
           local_28.SoundWaveProxy.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController;
      if (local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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
  case StringArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b370ca0

TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_38;
  FWaveAsset local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_38.AllocatorInstance,&local_38.ArrayNum,
                       &local_38.ArrayMax);
    DefaultConstructItems<Metasound::FWaveAsset,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
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
      FWaveAsset::FWaveAsset(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FSoundWaveProxy **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
           local_28.SoundWaveProxy.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController;
      if (local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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
  case StringArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b370f40

TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> local_38;
  FWaveAsset local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_38.AllocatorInstance,&local_38.ArrayNum,
                       &local_38.ArrayMax);
    DefaultConstructItems<Metasound::FWaveAsset,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
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
      FWaveAsset::FWaveAsset(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FSoundWaveProxy **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
           local_28.SoundWaveProxy.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController;
      if (local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SoundWaveProxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveAsset,int>
              ((FWaveAsset *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
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
  case StringArray:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bExpectsNone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x18b,L"The value passed to the constructor is being ignored");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
               __return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b3711e0

TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::DataFactoryPrivate::TDataTypeCreator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40 [2];
  FWaveTableBankAsset local_38;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar1 = (int)(param_2->Value)._padding_;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40[0] = 0;
    local_40[1] = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&local_48,local_40,local_40 + 1);
    DefaultConstructItems<Metasound::FWaveTableBankAsset,int>
              (local_48.Data + (longlong)iVar5 * 0x10,iVar1);
    (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
    __return_storage_ptr__->ArrayNum = local_40[0];
    __return_storage_ptr__->ArrayMax = local_40[1];
    local_40[0] = 0;
    local_40[1] = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    DestructItems<Metasound::FWaveTableBankAsset,int>((FWaveTableBankAsset *)0x0,0);
    FVar7.Data = local_48.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
      FWaveTableBankAsset::FWaveTableBankAsset(&local_38,pTVar8);
      iVar5 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
      *(FWaveTableBankAssetProxy **)(local_58.Data + (longlong)iVar5 * 0x10) = local_38.Proxy.Object
      ;
      *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)iVar5 * 0x10 + 8) =
           local_38.Proxy.SharedReferenceCount.ReferenceController;
      if (local_38.Proxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.Proxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
    __return_storage_ptr__->ArrayNum = (int)local_50;
    __return_storage_ptr__->ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    DestructItems<Metasound::FWaveTableBankAsset,int>((FWaveTableBankAsset *)0x0,0);
    FVar7.Data = local_58.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
      pTVar6 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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

// CreateExplicitArgs @ 14b371480

TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_38;
  FWaveTableBankAsset local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
    DefaultConstructItems<Metasound::FWaveTableBankAsset,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      FWaveTableBankAsset::FWaveTableBankAsset(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FWaveTableBankAssetProxy **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
           local_28.Proxy.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.Proxy.SharedReferenceCount.ReferenceController;
      if (local_28.Proxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.Proxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      pTVar6 = (TDataReadReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataReadReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b371720

TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_38;
  FWaveTableBankAsset local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
    DefaultConstructItems<Metasound::FWaveTableBankAsset,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      FWaveTableBankAsset::FWaveTableBankAsset(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FWaveTableBankAssetProxy **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
           local_28.Proxy.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.Proxy.SharedReferenceCount.ReferenceController;
      if (local_28.Proxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.Proxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      pTVar6 = (TDataValueReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataValueReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b3719c0

TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::
TDataLiteralFactory<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::CreateExplicitArgs
          (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  int iVar1;
  code *pcVar2;
  ELiteralType EVar3;
  bool bVar4;
  int iVar5;
  TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<Audio::IProxyData,1> *pTVar8;
  TSharedPtr<Audio::IProxyData,1> *pTVar9;
  undefined1 local_res20 [8];
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_48;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> local_38;
  FWaveTableBankAsset local_28;
  
  EVar3 = FLiteral::GetType(param_2);
  switch(EVar3) {
  case NoneArray:
    if (((param_2->Value).TypeIndex != '\x06') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
    DefaultConstructItems<Metasound::FWaveTableBankAsset,int>
              (local_38.AllocatorInstance.Data + (longlong)iVar5 * 0x10,iVar1);
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_38);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar7.Data = local_38.AllocatorInstance.Data;
    break;
  case UObjectProxyArray:
    if (((param_2->Value).TypeIndex != '\v') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      FWaveTableBankAsset::FWaveTableBankAsset(&local_28,pTVar8);
      iVar5 = local_48.ArrayNum;
      if (local_48.ArrayNum == local_48.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
      }
      local_48.ArrayNum = iVar5 + 1;
      *(FWaveTableBankAssetProxy **)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
           local_28.Proxy.Object;
      *(TReferenceControllerBase<1> **)
       (local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           local_28.Proxy.SharedReferenceCount.ReferenceController;
      if (local_28.Proxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.Proxy.SharedReferenceCount.ReferenceController);
      pTVar8 = pTVar8 + 1;
    }
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              ((TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject,&local_48);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar7.Data = local_48.AllocatorInstance.Data;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
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
      pTVar6 = (TDataWriteReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar6;
    }
  case None:
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
    TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_><>
              ((TDataReference<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                *)__return_storage_ptr__,NewObject);
    *(undefined ***)__return_storage_ptr__ =
         &
         ___7__TDataWriteReference_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    return __return_storage_ptr__;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b371c60

TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  EInterpolationMode EVar4;
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
      return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)EVar4;
    }
    EVar4 = (EInterpolationMode)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)EVar4;
    }
    EVar4 = (EInterpolationMode)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)EVar4;
    }
    EVar4 = (EInterpolationMode)*(float *)&(in_R8->Value)._padding_;
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
      return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
    TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>(param_1,*pFVar5);
    return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)(EInterpolationMode)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)EVar4;
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
      return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)EVar4;
    }
  case None:
    EVar4 = Linear;
  }
  TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>::
  TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>(param_1,EVar4);
  return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)(EInterpolationMode)param_1;
}

// CreateExplicitArgs @ 14b371e50

TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b372030

TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4
  ;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
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
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b372210

TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar4
  ;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
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
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b3723f0

TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::CreateExplicitArgs(FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  ESingleSampleMode EVar4;
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
      return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)EVar4;
    }
    EVar4 = (ESingleSampleMode)(byte)(in_R8->Value)._padding_;
    break;
  case Integer:
    if (((in_R8->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)EVar4;
    }
    EVar4 = (ESingleSampleMode)(in_R8->Value)._padding_;
    break;
  case Float:
    if (((in_R8->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)EVar4;
    }
    EVar4 = (ESingleSampleMode)*(float *)&(in_R8->Value)._padding_;
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
      return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)EVar4;
    }
    if ((int)(in_R8->Value)._padding_ != 0) {
      pwVar6 = (wchar_t *)(in_R8->Value)._padding_;
    }
    pFVar5 = ::FName::FName(&local_res20,pwVar6);
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
    TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(param_1,*pFVar5);
    return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)(ESingleSampleMode)param_1;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)EVar4;
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
      return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)EVar4;
    }
  case None:
    EVar4 = Zero;
  }
  TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>::
  TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>(param_1,EVar4);
  return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)(ESingleSampleMode)param_1;
}

// CreateExplicitArgs @ 14b3725d0

TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b3727b0

TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
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
      pTVar4 = (TDataValueReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataValueReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b372990

TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case Boolean:
    if (((param_2->Value).TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><bool_const_&>
              (__return_storage_ptr__,NewObject,(bool *)param_2);
    break;
  case Integer:
    if (((param_2->Value).TypeIndex != '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><int_const_&>
              (__return_storage_ptr__,NewObject,(int *)param_2);
    break;
  case Float:
    if (((param_2->Value).TypeIndex != '\x03') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><float_const_&>
              (__return_storage_ptr__,NewObject,(float *)param_2);
    break;
  case String:
    if (((param_2->Value).TypeIndex != '\x04') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><FString_const_&>
              (__return_storage_ptr__,NewObject,(FString *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
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
      pTVar4 = (TDataWriteReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
    TDataReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><>
              (__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataWriteReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b372b70

FAudioBusAsset * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FAudioBusAsset>_>
::CreateExplicitArgs
          (FAudioBusAsset *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FAudioBusAsset *pFVar4;
  
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
      pFVar4 = (FAudioBusAsset *)(*pcVar1)();
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
      pFVar4 = (FAudioBusAsset *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    (__return_storage_ptr__->AudioBusProxy).Object = (FAudioBusProxy *)0x0;
    (__return_storage_ptr__->AudioBusProxy).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x05') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAudioBusAsset *)(*pcVar1)();
    return pFVar4;
  }
  FAudioBusAsset::FAudioBusAsset(__return_storage_ptr__,(TSharedPtr<Audio::IProxyData,1> *)param_2);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b372c90

TDataReadReference<Metasound::FAudioBusAsset> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::FAudioBusAsset> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::FAudioBusAsset> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBusAsset>::
    TDataReference<Metasound::FAudioBusAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<Metasound::FAudioBusAsset> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FAudioBusAsset>::TDataReference<Metasound::FAudioBusAsset><>
              ((TDataReference<Metasound::FAudioBusAsset> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b372db0

TDataValueReference<Metasound::FAudioBusAsset> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataValueReference<Metasound::FAudioBusAsset>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::FAudioBusAsset> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FAudioBusAsset> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBusAsset>::
    TDataReference<Metasound::FAudioBusAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<Metasound::FAudioBusAsset> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataValueReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FAudioBusAsset>::TDataReference<Metasound::FAudioBusAsset><>
              ((TDataReference<Metasound::FAudioBusAsset> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b372ed0

TDataWriteReference<Metasound::FAudioBusAsset> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FAudioBusAsset,Metasound::TDataWriteReference<Metasound::FAudioBusAsset>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::FAudioBusAsset> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::FAudioBusAsset> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FAudioBusAsset>::
    TDataReference<Metasound::FAudioBusAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<Metasound::FAudioBusAsset> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataWriteReference<Metasound::FAudioBusAsset> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FAudioBusAsset>::TDataReference<Metasound::FAudioBusAsset><>
              ((TDataReference<Metasound::FAudioBusAsset> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b372ff0

FWaveAsset * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FWaveAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveAsset>_>
::CreateExplicitArgs
          (FWaveAsset *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FWaveAsset *pFVar4;
  
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
      pFVar4 = (FWaveAsset *)(*pcVar1)();
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
      pFVar4 = (FWaveAsset *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    (__return_storage_ptr__->SoundWaveProxy).Object = (FSoundWaveProxy *)0x0;
    (__return_storage_ptr__->SoundWaveProxy).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x05') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FWaveAsset *)(*pcVar1)();
    return pFVar4;
  }
  FWaveAsset::FWaveAsset(__return_storage_ptr__,(TSharedPtr<Audio::IProxyData,1> *)param_2);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b373110

TDataReadReference<Metasound::FWaveAsset> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataReadReference<Metasound::FWaveAsset>_>::
CreateExplicitArgs(TDataReadReference<Metasound::FWaveAsset> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::FWaveAsset> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FWaveAsset>::
    TDataReference<Metasound::FWaveAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<Metasound::FWaveAsset> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FWaveAsset> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FWaveAsset>::TDataReference<Metasound::FWaveAsset><>
              ((TDataReference<Metasound::FWaveAsset> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b373230

TDataValueReference<Metasound::FWaveAsset> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataValueReference<Metasound::FWaveAsset>_>::
CreateExplicitArgs(TDataValueReference<Metasound::FWaveAsset> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FWaveAsset> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FWaveAsset> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FWaveAsset>::
    TDataReference<Metasound::FWaveAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<Metasound::FWaveAsset> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FWaveAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataValueReference<Metasound::FWaveAsset> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FWaveAsset>::TDataReference<Metasound::FWaveAsset><>
              ((TDataReference<Metasound::FWaveAsset> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFWaveAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b373350

TDataWriteReference<Metasound::FWaveAsset> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FWaveAsset,Metasound::TDataWriteReference<Metasound::FWaveAsset>_>::
CreateExplicitArgs(TDataWriteReference<Metasound::FWaveAsset> *__return_storage_ptr__,
                  FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::FWaveAsset> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FWaveAsset> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FWaveAsset>::
    TDataReference<Metasound::FWaveAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<Metasound::FWaveAsset> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FWaveAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataWriteReference<Metasound::FWaveAsset> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FWaveAsset>::TDataReference<Metasound::FWaveAsset><>
              ((TDataReference<Metasound::FWaveAsset> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFWaveAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b373470

FWaveTableBankAsset * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FWaveTableBankAsset>_>
::CreateExplicitArgs
          (FWaveTableBankAsset *__return_storage_ptr__,FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  FWaveTableBankAsset *pFVar4;
  
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
      pFVar4 = (FWaveTableBankAsset *)(*pcVar1)();
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
      pFVar4 = (FWaveTableBankAsset *)(*pcVar1)();
      return pFVar4;
    }
  case None:
    (__return_storage_ptr__->Proxy).Object = (FWaveTableBankAssetProxy *)0x0;
    (__return_storage_ptr__->Proxy).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (((param_2->Value).TypeIndex != '\x05') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FWaveTableBankAsset *)(*pcVar1)();
    return pFVar4;
  }
  FWaveTableBankAsset::FWaveTableBankAsset
            (__return_storage_ptr__,(TSharedPtr<Audio::IProxyData,1> *)param_2);
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b373590

TDataReadReference<Metasound::FWaveTableBankAsset> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>
::CreateExplicitArgs
          (TDataReadReference<Metasound::FWaveTableBankAsset> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataReadReference<Metasound::FWaveTableBankAsset> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FWaveTableBankAsset>::
    TDataReference<Metasound::FWaveTableBankAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<Metasound::FWaveTableBankAsset> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FWaveTableBankAsset>::TDataReference<Metasound::FWaveTableBankAsset><>
              ((TDataReference<Metasound::FWaveTableBankAsset> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b3736b0

TDataValueReference<Metasound::FWaveTableBankAsset> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataValueReference<Metasound::FWaveTableBankAsset>_>
::CreateExplicitArgs
          (TDataValueReference<Metasound::FWaveTableBankAsset> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataValueReference<Metasound::FWaveTableBankAsset> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FWaveTableBankAsset>::
    TDataReference<Metasound::FWaveTableBankAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<Metasound::FWaveTableBankAsset> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataValueReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataValueReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FWaveTableBankAsset>::TDataReference<Metasound::FWaveTableBankAsset><>
              ((TDataReference<Metasound::FWaveTableBankAsset> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataValueReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateExplicitArgs @ 14b3737d0

TDataWriteReference<Metasound::FWaveTableBankAsset> * __cdecl
Metasound::
TDataLiteralFactory<Metasound::FWaveTableBankAsset,Metasound::TDataWriteReference<Metasound::FWaveTableBankAsset>_>
::CreateExplicitArgs
          (TDataWriteReference<Metasound::FWaveTableBankAsset> *__return_storage_ptr__,
          FOperatorSettings *param_1,FLiteral *param_2)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TDataWriteReference<Metasound::FWaveTableBankAsset> *pTVar4;
  
  EVar2 = FLiteral::GetType(param_2);
  switch(EVar2) {
  case UObjectProxy:
    if (((param_2->Value).TypeIndex != '\x05') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
      return pTVar4;
    }
    TDataReference<Metasound::FWaveTableBankAsset>::
    TDataReference<Metasound::FWaveTableBankAsset><TSharedPtr<Audio::IProxyData,1>_const_&>
              ((TDataReference<Metasound::FWaveTableBankAsset> *)__return_storage_ptr__,NewObject,
               (TSharedPtr<Audio::IProxyData,1> *)param_2);
    break;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataFactory.h"
                       ,0x484,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDataWriteReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
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
      pTVar4 = (TDataWriteReference<Metasound::FWaveTableBankAsset> *)(*pcVar1)();
      return pTVar4;
    }
  case None:
    TDataReference<Metasound::FWaveTableBankAsset>::TDataReference<Metasound::FWaveTableBankAsset><>
              ((TDataReference<Metasound::FWaveTableBankAsset> *)__return_storage_ptr__,NewObject);
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataWriteReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

