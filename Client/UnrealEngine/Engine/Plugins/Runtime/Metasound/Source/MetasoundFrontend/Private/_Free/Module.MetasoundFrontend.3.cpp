// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 216

// `dynamic_initializer_for_'InputDataMetadata'' @ 1411e1bd0

void __cdecl Metasound::VariableNames::_dynamic_initializer_for__InputDataMetadata__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  InputDataMetadata.Description.TextData.Reference = (pFVar1->TextData).Reference;
  if (InputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputDataMetadata.Description.TextData.Reference + 8))
              (InputDataMetadata.Description.TextData.Reference,local_res8);
  }
  InputDataMetadata.Description.Flags = pFVar1->Flags;
  FText::FText(&InputDataMetadata.DisplayName);
  InputDataMetadata.bIsAdvancedDisplay = false;
  atexit(_dynamic_atexit_destructor_for__InputDataMetadata__);
  return;
}

// `dynamic_initializer_for_'InputVariableMetadata'' @ 1411e1c40

void __cdecl Metasound::VariableNames::_dynamic_initializer_for__InputVariableMetadata__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  InputVariableMetadata.Description.TextData.Reference = (pFVar1->TextData).Reference;
  if (InputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputVariableMetadata.Description.TextData.Reference + 8))
              (InputVariableMetadata.Description.TextData.Reference,local_res8);
  }
  InputVariableMetadata.Description.Flags = pFVar1->Flags;
  FText::FText(&InputVariableMetadata.DisplayName);
  InputVariableMetadata.bIsAdvancedDisplay = false;
  atexit(_dynamic_atexit_destructor_for__InputVariableMetadata__);
  return;
}

// `dynamic_initializer_for_'OutputDataMetadata'' @ 1411e1cb0

void __cdecl Metasound::VariableNames::_dynamic_initializer_for__OutputDataMetadata__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  OutputDataMetadata.Description.TextData.Reference = (pFVar1->TextData).Reference;
  if (OutputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputDataMetadata.Description.TextData.Reference + 8))
              (OutputDataMetadata.Description.TextData.Reference,local_res8);
  }
  OutputDataMetadata.Description.Flags = pFVar1->Flags;
  FText::FText(&OutputDataMetadata.DisplayName);
  OutputDataMetadata.bIsAdvancedDisplay = false;
  atexit(_dynamic_atexit_destructor_for__OutputDataMetadata__);
  return;
}

// `dynamic_initializer_for_'OutputVariableMetadata'' @ 1411e1d20

void __cdecl Metasound::VariableNames::_dynamic_initializer_for__OutputVariableMetadata__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  OutputVariableMetadata.Description.TextData.Reference = (pFVar1->TextData).Reference;
  if (OutputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputVariableMetadata.Description.TextData.Reference + 8))
              (OutputVariableMetadata.Description.TextData.Reference,local_res8);
  }
  OutputVariableMetadata.Description.Flags = pFVar1->Flags;
  FText::FText(&OutputVariableMetadata.DisplayName);
  OutputVariableMetadata.bIsAdvancedDisplay = false;
  atexit(_dynamic_atexit_destructor_for__OutputVariableMetadata__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h__Script_MetasoundFrontend_442248804'' @ 1411e1d90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h__Script_MetasoundFrontend_442248804__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MetasoundFrontend",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h__Script_MetasoundFrontend_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h__Script_MetasoundFrontend_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType @ 14ae0c5e0

UEnum * __cdecl Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType(void)

{
  if (Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.InnerSingleton,
               &Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.InnerSingleton;
}

// EMetasoundFrontendLiteralType_StaticEnum @ 14ae0c620

UEnum * __cdecl EMetasoundFrontendLiteralType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType,
                       (UObject *)pUVar1,L"EMetasoundFrontendLiteralType");
  }
  return Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.OuterSingleton;
}

// NewStructOps @ 14ae0c660

void * __cdecl Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMetasoundFrontendLiteral,&UE::CoreUObject::Private::Construct<FMetasoundFrontendLiteral>,&UE::CoreUObject::Private::ConstructForTests<FMetasoundFrontendLiteral>,&UE::CoreUObject::Private::Destruct<FMetasoundFrontendLiteral>,&UE::CoreUObject::Private::Copy<FMetasoundFrontendLiteral>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// AddSPLambda<Metasound::Frontend::FDocumentCache,`Metasound::Frontend::FDocumentCache::Init'::__l2::<lambda_1>_> @ 14ae0ef30

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
::
AddSPLambda<Metasound::Frontend::FDocumentCache,_Metasound::Frontend::FDocumentCache::Init_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
           *this,FDocumentCache *param_1,<lambda_1> *param_2)

{
  char cVar1;
  int iVar2;
  TDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar3;
  longlong lVar4;
  <lambda_1> *in_R9;
  undefined1 local_res10 [8];
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  
  this_00 = TDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
            ::
            CreateSPLambda<Metasound::Frontend::FDocumentCache_const_,_Metasound::Frontend::FDocumentCache::Init_::__l2::<lambda_1>_>
                      ((TDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_68,(FDocumentCache *)param_2,in_R9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_50);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
  if ((*(int *)&this_00->field_0x10 != 0) && (*(longlong **)&this_00->field_0x8 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(**(longlong **)&this_00->field_0x8 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
      if ((*(int *)&this_00->field_0x10 == 0) ||
         (plVar3 = *(longlong **)&this_00->field_0x8, plVar3 == (longlong *)0x0)) {
        lVar4 = 0;
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      iVar2 = *(int *)&this->field_0x10;
      param_1->_padding_ = lVar4;
      if (iVar2 == *(int *)&this->field_0x14) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar2 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar2 * 0x10 + *(longlong *)&this->field_0x8),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      goto LAB_14ae0f041;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
LAB_14ae0f041:
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return (FDelegateHandle)(ulong64)param_1;
}

// BinarySearchBy<TArray<TTuple<FGuid,int>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae0f700

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FGuid,int>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TArray<TTuple<FGuid,int>,TSizedDefaultAllocator<32>_> *param_1,FGuid *param_2,
          FKeyForward param_3,TLess<FGuid_const_&> param_4)

{
  TTuple<FGuid,int> *pTVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1->ArrayNum;
  pTVar1 = (TTuple<FGuid,int> *)(param_1->AllocatorInstance).Data;
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,int>_const_,int,FGuid,TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (pTVar1,iVar3,param_2,param_3,param_4);
  if ((iVar3 <= iVar2) || (param_2->A < *(uint *)(pTVar1 + iVar2))) {
    return -1;
  }
  if (param_2->A == *(uint *)(pTVar1 + iVar2)) {
    if (param_2->B < *(uint *)&pTVar1[iVar2].field_0x4) {
      return -1;
    }
    if (param_2->B == *(uint *)&pTVar1[iVar2].field_0x4) {
      if (param_2->C < *(uint *)&pTVar1[iVar2].field_0x8) {
        return -1;
      }
      if (param_2->C == *(uint *)&pTVar1[iVar2].field_0x8) {
        iVar3 = -1;
        if (*(uint *)&pTVar1[iVar2].field_0xc <= param_2->D) {
          iVar3 = iVar2;
        }
        return iVar3;
      }
    }
  }
  return iVar2;
}

// BinarySearchBy<TArray<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae0f7b0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TArray<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TSizedDefaultAllocator<32>_>
           *param_1,FGuid *param_2,FKeyForward param_3,TLess<FGuid_const_&> param_4)

{
  TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *pTVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1->ArrayNum;
  pTVar1 = (TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *)
           (param_1->AllocatorInstance).Data;
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>_const_,int,FGuid,TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (pTVar1,iVar3,param_2,param_3,param_4);
  if (iVar2 < iVar3) {
    if (*(uint *)(pTVar1 + iVar2) <= param_2->A) {
      if (param_2->A == *(uint *)(pTVar1 + iVar2)) {
        if (param_2->B < *(uint *)&pTVar1[iVar2].field_0x4) {
          return -1;
        }
        if (param_2->B == *(uint *)&pTVar1[iVar2].field_0x4) {
          if (param_2->C < *(uint *)&pTVar1[iVar2].field_0x8) {
            return -1;
          }
          if (param_2->C == *(uint *)&pTVar1[iVar2].field_0x8) {
            iVar3 = -1;
            if (*(uint *)&pTVar1[iVar2].field_0xc <= param_2->D) {
              iVar3 = iVar2;
            }
            return iVar3;
          }
        }
      }
      return iVar2;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae0f860

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TArray<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,FGuid *param_2,FKeyForward param_3,TLess<FGuid_const_&> param_4)

{
  TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1->ArrayNum;
  pTVar1 = (TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *)
           (param_1->AllocatorInstance).Data;
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>_const_,int,FGuid,TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (pTVar1,iVar3,param_2,param_3,param_4);
  if (iVar2 < iVar3) {
    if (*(uint *)(pTVar1 + iVar2) <= param_2->A) {
      if (param_2->A == *(uint *)(pTVar1 + iVar2)) {
        if (param_2->B < *(uint *)&pTVar1[iVar2].field_0x4) {
          return -1;
        }
        if (param_2->B == *(uint *)&pTVar1[iVar2].field_0x4) {
          if (param_2->C < *(uint *)&pTVar1[iVar2].field_0x8) {
            return -1;
          }
          if (param_2->C == *(uint *)&pTVar1[iVar2].field_0x8) {
            iVar3 = -1;
            if (*(uint *)&pTVar1[iVar2].field_0xc <= param_2->D) {
              iVar3 = iVar2;
            }
            return iVar3;
          }
        }
      }
      return iVar2;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae0f910

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,TSizedDefaultAllocator<32>_>
           *param_1,FGuid *param_2,FKeyForward param_3,TLess<FGuid_const_&> param_4)

{
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *pTVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1->ArrayNum;
  pTVar1 = (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *)
           (param_1->AllocatorInstance).Data;
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>_const_,int,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (pTVar1,iVar3,param_2,param_3,param_4);
  if (iVar2 < iVar3) {
    if (*(uint *)(pTVar1 + iVar2) <= param_2->A) {
      if (param_2->A == *(uint *)(pTVar1 + iVar2)) {
        if (param_2->B < *(uint *)&pTVar1[iVar2].field_0x4) {
          return -1;
        }
        if (param_2->B == *(uint *)&pTVar1[iVar2].field_0x4) {
          if (param_2->C < *(uint *)&pTVar1[iVar2].field_0x8) {
            return -1;
          }
          if (param_2->C == *(uint *)&pTVar1[iVar2].field_0x8) {
            iVar3 = -1;
            if (*(uint *)&pTVar1[iVar2].field_0xc <= param_2->D) {
              iVar3 = iVar2;
            }
            return iVar3;
          }
        }
      }
      return iVar2;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae0f9c0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,TSizedDefaultAllocator<32>_>
           *param_1,FGuid *param_2,FKeyForward param_3,TLess<FGuid_const_&> param_4)

{
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *pTVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1->ArrayNum;
  pTVar1 = (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *)
           (param_1->AllocatorInstance).Data;
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>_const_,int,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (pTVar1,iVar3,param_2,param_3,param_4);
  if (iVar2 < iVar3) {
    if (*(uint *)(pTVar1 + iVar2) <= param_2->A) {
      if (param_2->A == *(uint *)(pTVar1 + iVar2)) {
        if (param_2->B < *(uint *)&pTVar1[iVar2].field_0x4) {
          return -1;
        }
        if (param_2->B == *(uint *)&pTVar1[iVar2].field_0x4) {
          if (param_2->C < *(uint *)&pTVar1[iVar2].field_0x8) {
            return -1;
          }
          if (param_2->C == *(uint *)&pTVar1[iVar2].field_0x8) {
            iVar3 = -1;
            if (*(uint *)&pTVar1[iVar2].field_0xc <= param_2->D) {
              iVar3 = iVar2;
            }
            return iVar3;
          }
        }
      }
      return iVar2;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>,Metasound::Frontend::FNodeClassRegistryKey,TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>::FKeyForward,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_> @ 14ae0fa70

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>,Metasound::Frontend::FNodeClassRegistryKey,TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>::FKeyForward,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
          (TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>
           *param_1,FNodeClassRegistryKey *param_2,FKeyForward param_3,
          TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&> param_4)

{
  TTuple<Metasound::Frontend::FNodeClassRegistryKey,int> *pTVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1->ArrayNum;
  pTVar1 = (TTuple<Metasound::Frontend::FNodeClassRegistryKey,int> *)
           (param_1->AllocatorInstance).Data;
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>_const_,int,Metasound::Frontend::FNodeClassRegistryKey,TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>::FKeyForward,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
                    (pTVar1,iVar4,param_2,param_3,param_4);
  if (iVar3 < iVar4) {
    bVar2 = Metasound::Frontend::operator<(param_2,(FNodeClassRegistryKey *)(pTVar1 + iVar3));
    iVar4 = -1;
    if (!bVar2) {
      iVar4 = iVar3;
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

// CompareItems<TObjectPtr<UObject>,int> @ 14ae0faf0

bool __cdecl
CompareItems<TObjectPtr<UObject>,int>
          (TObjectPtr<UObject> *param_1,TObjectPtr<UObject> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if (((TObjectPtr<UObject>_u_0 *)(lVar1 + (longlong)param_2))->DebugPtr != param_2->field0_0x0)
      {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>_> @ 14ae0fb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TAccessPtr<FMetasoundFrontendGraph> * __cdecl
Metasound::Frontend::
ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>_>
          (TAccessPtr<FMetasoundFrontendGraph> *__return_storage_ptr__,
          TAccessPtr<FMetasoundFrontendGraph_const_> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  FMetasoundFrontendGraph *pFVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  __return_storage_ptr__->CachedObjectPtr = (FMetasoundFrontendGraph *)0x0;
  *(undefined8 *)&__return_storage_ptr__->GetObject = 0;
  *(undefined8 *)&(__return_storage_ptr__->GetObject).field_0x28 = 0;
  local_78 = *(longlong *)&param_1->GetObject;
  local_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar8 = *(undefined8 **)&(param_1->GetObject).field_0x28;
    puVar11 = (undefined8 *)&(param_1->GetObject).field_0x10;
    if (puVar8 != (undefined8 *)0x0) {
      puVar11 = puVar8;
    }
    (**(code **)*puVar11)(puVar11,&local_68);
  }
  local_48 = (code *)0x0;
  puVar8 = FMemory::Malloc(0x40,0x10);
  *puVar8 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraph_____TAccessPtr_UFMetasoundFrontendGraph___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraph___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar12 = puVar8 + 2;
  *plVar12 = local_78;
  puVar8[7] = local_50;
  local_50 = (longlong *)0x0;
  puVar8[4] = local_68;
  puVar8[5] = uStack_60;
  puVar8[6] = local_58;
  if (*plVar12 != 0) {
    local_78 = 0;
  }
  lVar6 = *(longlong *)&__return_storage_ptr__->GetObject;
  uVar7 = *(undefined8 *)&(__return_storage_ptr__->GetObject).field_0x8;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x10;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x14;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x18;
  uVar5 = *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x1c;
  uVar9 = *(undefined8 *)&(__return_storage_ptr__->GetObject).field_0x20;
  plVar13 = *(longlong **)&(__return_storage_ptr__->GetObject).field_0x28;
  if (plVar12 != (longlong *)0x0) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>::TAccessPtr<FMetasoundFrontendGraph><FMetasoundFrontendGraph_const_>'::__l2::<lambda_1>,FMetasoundFrontendGraph_*>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->GetObject = local_48;
  *(undefined8 *)&(__return_storage_ptr__->GetObject).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar8,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar8 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x10 = local_38;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x14 = uStack_34;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x18 = uStack_30;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x1c = uStack_2c;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x2c = uStack_20._4_4_;
  local_48 = (code *)lVar6;
  uStack_40 = uVar7;
  local_38 = uVar2;
  uStack_34 = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar9;
  uStack_20 = plVar13;
  if (lVar6 != 0) {
    plVar12 = (longlong *)&local_38;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_78 != 0) {
    plVar12 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar12 = local_50;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->GetObject);
  plVar12 = *(longlong **)&(__return_storage_ptr__->GetObject).field_0x28;
  pcVar1 = *(code **)&__return_storage_ptr__->GetObject;
  plVar13 = (longlong *)&(__return_storage_ptr__->GetObject).field_0x10;
  if (plVar12 != (longlong *)0x0) {
    plVar13 = plVar12;
  }
  uVar9 = (**(code **)(*plVar13 + 8))();
  pFVar10 = (FMetasoundFrontendGraph *)(*pcVar1)(uVar9);
  __return_storage_ptr__->CachedObjectPtr = pFVar10;
  return __return_storage_ptr__;
}

// ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>_> @ 14ae0fcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TAccessPtr<FMetasoundFrontendVertex> * __cdecl
Metasound::Frontend::
ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>_>
          (TAccessPtr<FMetasoundFrontendVertex> *__return_storage_ptr__,
          TAccessPtr<FMetasoundFrontendVertex_const_> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  FMetasoundFrontendVertex *pFVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  __return_storage_ptr__->CachedObjectPtr = (FMetasoundFrontendVertex *)0x0;
  *(undefined8 *)&__return_storage_ptr__->GetObject = 0;
  *(undefined8 *)&(__return_storage_ptr__->GetObject).field_0x28 = 0;
  local_78 = *(longlong *)&param_1->GetObject;
  local_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar8 = *(undefined8 **)&(param_1->GetObject).field_0x28;
    puVar11 = (undefined8 *)&(param_1->GetObject).field_0x10;
    if (puVar8 != (undefined8 *)0x0) {
      puVar11 = puVar8;
    }
    (**(code **)*puVar11)(puVar11,&local_68);
  }
  local_48 = (code *)0x0;
  puVar8 = FMemory::Malloc(0x40,0x10);
  *puVar8 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendVertex_____TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendVertex___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar12 = puVar8 + 2;
  *plVar12 = local_78;
  puVar8[7] = local_50;
  local_50 = (longlong *)0x0;
  puVar8[4] = local_68;
  puVar8[5] = uStack_60;
  puVar8[6] = local_58;
  if (*plVar12 != 0) {
    local_78 = 0;
  }
  lVar6 = *(longlong *)&__return_storage_ptr__->GetObject;
  uVar7 = *(undefined8 *)&(__return_storage_ptr__->GetObject).field_0x8;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x10;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x14;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x18;
  uVar5 = *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x1c;
  uVar9 = *(undefined8 *)&(__return_storage_ptr__->GetObject).field_0x20;
  plVar13 = *(longlong **)&(__return_storage_ptr__->GetObject).field_0x28;
  if (plVar12 != (longlong *)0x0) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex><FMetasoundFrontendVertex_const_>'::__l2::<lambda_1>,FMetasoundFrontendVertex_*>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->GetObject = local_48;
  *(undefined8 *)&(__return_storage_ptr__->GetObject).field_0x8 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar8,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar8 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x10 = local_38;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x14 = uStack_34;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x18 = uStack_30;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x1c = uStack_2c;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(__return_storage_ptr__->GetObject).field_0x2c = uStack_20._4_4_;
  local_48 = (code *)lVar6;
  uStack_40 = uVar7;
  local_38 = uVar2;
  uStack_34 = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar9;
  uStack_20 = plVar13;
  if (lVar6 != 0) {
    plVar12 = (longlong *)&local_38;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_78 != 0) {
    plVar12 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar12 = local_50;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->GetObject);
  plVar12 = *(longlong **)&(__return_storage_ptr__->GetObject).field_0x28;
  pcVar1 = *(code **)&__return_storage_ptr__->GetObject;
  plVar13 = (longlong *)&(__return_storage_ptr__->GetObject).field_0x10;
  if (plVar12 != (longlong *)0x0) {
    plVar13 = plVar12;
  }
  uVar9 = (**(code **)(*plVar13 + 8))();
  pFVar10 = (FMetasoundFrontendVertex *)(*pcVar1)(uVar9);
  __return_storage_ptr__->CachedObjectPtr = pFVar10;
  return __return_storage_ptr__;
}

// ConstCastAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::FConstGraphClassAccessPtr> @ 14ae0fe60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGraphClassAccessPtr * __cdecl
Metasound::Frontend::
ConstCastAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::FConstGraphClassAccessPtr>
          (FGraphClassAccessPtr *__return_storage_ptr__,FConstGraphClassAccessPtr *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  local_78 = *(longlong *)&param_1->field_0x10;
  local_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x20;
    if (*(undefined8 **)&param_1->field_0x38 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x38;
    }
    (**(code **)*puVar9)(puVar9,&local_68);
  }
  local_48 = (code *)0x0;
  puVar9 = FMemory::Malloc(0x40,0x10);
  *puVar9 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraphClass_____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraphClass___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar11 = puVar9 + 2;
  *plVar11 = local_78;
  puVar9[7] = local_50;
  local_50 = (longlong *)0x0;
  puVar9[4] = local_68;
  puVar9[5] = uStack_60;
  puVar9[6] = local_58;
  if (*plVar11 != 0) {
    local_78 = 0;
  }
  lVar7 = *(longlong *)&__return_storage_ptr__->field_0x10;
  uVar8 = *(undefined8 *)&__return_storage_ptr__->field_0x18;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x20;
  uVar3 = *(undefined4 *)&__return_storage_ptr__->field_0x24;
  uVar4 = *(undefined4 *)&__return_storage_ptr__->field_0x28;
  uVar5 = *(undefined4 *)&__return_storage_ptr__->field_0x2c;
  uVar10 = *(undefined8 *)&__return_storage_ptr__->field_0x30;
  plVar6 = *(longlong **)&__return_storage_ptr__->field_0x38;
  if (plVar11 != (longlong *)0x0) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::TAccessPtr<FMetasoundFrontendGraphClass><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,FMetasoundFrontendGraphClass_*>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->field_0x10 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar9,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar9 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_38;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_34;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = (undefined4)uStack_20;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = uStack_20._4_4_;
  local_48 = (code *)lVar7;
  uStack_40 = uVar8;
  local_38 = uVar2;
  uStack_34 = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar10;
  uStack_20 = plVar6;
  if (lVar7 != 0) {
    plVar11 = (longlong *)&local_38;
    if (plVar6 != (longlong *)0x0) {
      plVar11 = plVar6;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_78 != 0) {
    plVar11 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar11 = local_50;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->field_0x10);
  pcVar1 = *(code **)&__return_storage_ptr__->field_0x10;
  plVar11 = (longlong *)&__return_storage_ptr__->field_0x20;
  if (*(longlong **)&__return_storage_ptr__->field_0x38 != (longlong *)0x0) {
    plVar11 = *(longlong **)&__return_storage_ptr__->field_0x38;
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  uVar10 = (*pcVar1)(uVar10);
  *(undefined8 *)__return_storage_ptr__ = uVar10;
  return __return_storage_ptr__;
}

// ConstCastAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::FConstNodeAccessPtr> @ 14ae10000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNodeAccessPtr * __cdecl
Metasound::Frontend::
ConstCastAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::FConstNodeAccessPtr>
          (FNodeAccessPtr *__return_storage_ptr__,FConstNodeAccessPtr *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  local_78 = *(longlong *)&param_1->field_0x10;
  local_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x20;
    if (*(undefined8 **)&param_1->field_0x38 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x38;
    }
    (**(code **)*puVar9)(puVar9,&local_68);
  }
  local_48 = (code *)0x0;
  puVar9 = FMemory::Malloc(0x40,0x10);
  *puVar9 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendNode_____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendNode___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar11 = puVar9 + 2;
  *plVar11 = local_78;
  puVar9[7] = local_50;
  local_50 = (longlong *)0x0;
  puVar9[4] = local_68;
  puVar9[5] = uStack_60;
  puVar9[6] = local_58;
  if (*plVar11 != 0) {
    local_78 = 0;
  }
  lVar7 = *(longlong *)&__return_storage_ptr__->field_0x10;
  uVar8 = *(undefined8 *)&__return_storage_ptr__->field_0x18;
  uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x20;
  uVar3 = *(undefined4 *)&__return_storage_ptr__->field_0x24;
  uVar4 = *(undefined4 *)&__return_storage_ptr__->field_0x28;
  uVar5 = *(undefined4 *)&__return_storage_ptr__->field_0x2c;
  uVar10 = *(undefined8 *)&__return_storage_ptr__->field_0x30;
  plVar6 = *(longlong **)&__return_storage_ptr__->field_0x38;
  if (plVar11 != (longlong *)0x0) {
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::TAccessPtr<FMetasoundFrontendNode><FMetasoundFrontendNode_const_>'::__l2::<lambda_1>,FMetasoundFrontendNode_*>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->field_0x10 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_40;
  uStack_20._0_4_ = SUB84(puVar9,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)puVar9 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_38;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_34;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_2c;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = (undefined4)uStack_20;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = uStack_20._4_4_;
  local_48 = (code *)lVar7;
  uStack_40 = uVar8;
  local_38 = uVar2;
  uStack_34 = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar10;
  uStack_20 = plVar6;
  if (lVar7 != 0) {
    plVar11 = (longlong *)&local_38;
    if (plVar6 != (longlong *)0x0) {
      plVar11 = plVar6;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_78 != 0) {
    plVar11 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar11 = local_50;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->field_0x10);
  pcVar1 = *(code **)&__return_storage_ptr__->field_0x10;
  plVar11 = (longlong *)&__return_storage_ptr__->field_0x20;
  if (*(longlong **)&__return_storage_ptr__->field_0x38 != (longlong *)0x0) {
    plVar11 = *(longlong **)&__return_storage_ptr__->field_0x38;
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  uVar10 = (*pcVar1)(uVar10);
  *(undefined8 *)__return_storage_ptr__ = uVar10;
  return __return_storage_ptr__;
}

// CreateSPLambda<Metasound::Frontend::FDocumentCache_const_,`Metasound::Frontend::FDocumentCache::Init'::__l2::<lambda_1>_> @ 14ae101a0

TDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
          ::
          CreateSPLambda<Metasound::Frontend::FDocumentCache_const_,_Metasound::Frontend::FDocumentCache::Init_::__l2::<lambda_1>_>
                    (TDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,FDocumentCache *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  int iVar5;
  code *pcVar6;
  atomic<int> aVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  TDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
  *pTVar10;
  ulong64 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  plVar14 = (longlong *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    plVar13 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar15 = (TReferenceControllerBase<1> *)param_1->_padding_;
    plVar13 = (longlong *)param_1->_padding_;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
      aVar4 = pTVar15->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14ae1026c;
        }
        LOCK();
        aVar7 = pTVar15->SharedReferenceCount;
        bVar16 = aVar4 == aVar7;
        if (bVar16) {
          pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar7 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar7;
      } while (!bVar16);
    }
    plVar12 = plVar13;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      plVar12 = plVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    plVar9 = plVar12 + 1;
    if (plVar12 == (longlong *)0x0) {
      plVar9 = plVar14;
    }
    if (plVar9 != &param_1->_padding_) {
LAB_14ae1026c:
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result.Pin().Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x6d5,L"");
      if (bVar16) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
                   *)(*pcVar6)();
        return pTVar10;
      }
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDocumentMutatePageArgs_Frontend_Metasound___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar11;
    *puVar8 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy,`Metasound::Frontend::FDocumentCache::Init'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = plVar13;
    puVar8[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar8[5] = param_2->__this;
    plVar13 = plVar14;
    plVar14 = (longlong *)&DAT_00000003;
  }
  if ((((ulonglong)plVar14 & 2) != 0) &&
     (plVar14 = (longlong *)(ulonglong)((uint)plVar14 & 0xfffffffd),
     pTVar15 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar15->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
    }
  }
  if ((((ulonglong)plVar14 & 1) != 0) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    piVar3 = (int *)((longlong)plVar13 + 0xc);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar13 + 8))(plVar13,1);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// DefaultConstructItems<FMetasoundFrontendClass,int> @ 14ae10380

void __cdecl DefaultConstructItems<FMetasoundFrontendClass,int>(void *param_1,int param_2)

{
  FMetasoundFrontendClassMetadata *this;
  
  if (param_2 != 0) {
    this = (FMetasoundFrontendClassMetadata *)((longlong)param_1 + 0x18);
    do {
      *(undefined ***)&this[-1].Version.Minor = &___7FMetasoundFrontendClass__6B_;
      this[-1].ChangeID = Metasound::FrontendInvalidID;
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(this);
      *(undefined8 *)&this[1].ClassName.Namespace.Number = 0;
      *(undefined8 *)&this[1].ClassName.Name.Number = 0;
      *(undefined8 *)&this[1].ClassName.Variant.Number = 0;
      *(undefined8 *)&this[1].Version.Minor = 0;
      this[1].ChangeID.A = 0;
      this[1].ChangeID.B = 0;
      this[1].ChangeID.C = 0;
      this[1].ChangeID.D = 0;
      this[2].ClassName.Namespace.ComparisonIndex = 0;
      this[2].ClassName.Namespace.Number = 0;
      this[2].ClassName.Name.ComparisonIndex = 0;
      this[2].ClassName.Name.Number = 0;
      this = (FMetasoundFrontendClassMetadata *)&this[2].ChangeID.B;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMetasoundFrontendEdge,int> @ 14ae10410

void __cdecl DefaultConstructItems<FMetasoundFrontendEdge,int>(void *param_1,int param_2)

{
  FGuid *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = (FGuid *)((longlong)param_1 + 0x20);
    do {
      pFVar1[-2] = Metasound::FrontendInvalidID;
      pFVar1[-1] = Metasound::FrontendInvalidID;
      *pFVar1 = Metasound::FrontendInvalidID;
      pFVar1[1] = Metasound::FrontendInvalidID;
      param_2 = param_2 + -1;
      pFVar1 = pFVar1 + 4;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Metasound::FLiteral::FNone,int> @ 14ae10460

void __cdecl DefaultConstructItems<Metasound::FLiteral::FNone,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 14ae104f0

void __cdecl
DestructItems<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,int> @ 14ae10530

void __cdecl
DestructItems<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,int>
          (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x18;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,int> @ 14ae10570

void __cdecl
DestructItems<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,int>
          (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x18;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::Frontend::FGraphController::FConstNodeAndClass,int> @ 14ae105b0

void __cdecl
DestructItems<Metasound::Frontend::FGraphController::FConstNodeAndClass,int>
          (FConstNodeAndClass *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Class).field_0x38;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0xd] != 0) {
        plVar1 = plVar2 + -0xb;
        if ((longlong *)plVar2[-8] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-8];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::Frontend::FGraphController::FNodeAndClass,int> @ 14ae10620

void __cdecl
DestructItems<Metasound::Frontend::FGraphController::FNodeAndClass,int>
          (FNodeAndClass *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Class).field_0x38;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0xd] != 0) {
        plVar1 = plVar2 + -0xb;
        if ((longlong *)plVar2[-8] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-8];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int> @ 14ae10690

void __cdecl
DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>
          (TSharedRef<Metasound::Frontend::IInputController,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Emplace<TPairInitializer<TTuple<FGuid,FGuid>_&&,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex_&&>_> @ 14ae10ac0

FSetElementId __thiscall
TSet<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TTuple<FGuid,FGuid>_&&,_Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph_::__l2::FCoreNodeAndFrontendVertex_&&>_>
          (void *this,
          TPairInitializer<TTuple<FGuid,FGuid>_&&,_bool___cdecl_Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph(Metasound::Frontend::GraphBuilderPrivate::FBuildGraphContext_&)_::_2_::FCoreNodeAndFrontendVertex_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  char *in_R9;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar12 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x38 + 4 + *(longlong *)this);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar6);
  if (local_48.Pointer != (TTuple<FGuid,FGuid> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar5 = puVar3[1];
    *(undefined8 *)local_48.Pointer = *puVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    uVar5 = puVar3[3];
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = puVar3[2];
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = uVar5;
    uVar5 = puVar4[1];
    *(undefined8 *)((longlong)local_48.Pointer + 0x20) = *puVar4;
    *(undefined8 *)&((TTuple<FGuid,FGuid> *)((longlong)local_48.Pointer + 0x20))->field_0x8 = uVar5;
    *(undefined4 *)&((TTuple<FGuid,FGuid> *)((longlong)local_48.Pointer + 0x20))->field_0x10 =
         0xffffffff;
  }
  uVar7 = CityHash64(local_48.Pointer,0x10);
  uVar8 = CityHash64((undefined1 *)((longlong)local_48.Pointer + 0x10),0x10);
  bVar14 = false;
  uVar13 = ((uint)(uVar7 >> 2) & 0x3fffffff) + 0x9e3779b9 + (uint)uVar7 * 0x40 + (int)uVar8 ^
           (uint)uVar7;
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    iVar6 = FindIndexByHash<TTuple<FGuid,FGuid>_>(this,uVar13,local_48.Pointer);
    bVar14 = iVar6 != -1;
    if (bVar14) {
      memmove((void *)((longlong)iVar6 * 0x38 + *(longlong *)this),local_48.Pointer,0x30);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar10 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= *(int *)((longlong)this + 0x48))) {
      uVar13 = *(int *)((longlong)this + 0x48) - 1U & uVar13;
      *(uint *)&((TTuple<FGuid,FGuid> *)((longlong)local_48.Pointer + 0x20))->field_0x14 = uVar13;
      lVar11 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar11 = (longlong)this + 0x38;
      }
      uVar9 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar13;
      *(undefined4 *)&((TTuple<FGuid,FGuid> *)((longlong)local_48.Pointer + 0x20))->field_0x10 =
           *(undefined4 *)(lVar11 + uVar9 * 4);
      *(int *)(lVar11 + uVar9 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// ForEach<TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>_&,TFunctionRef<void___cdecl(FMetasoundFrontendClass_&)>_> @ 14ae120a0

void __cdecl
Algo::
ForEach<TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>_&,TFunctionRef<void___cdecl(FMetasoundFrontendClass_&)>_>
          (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<void___cdecl(FMetasoundFrontendClass_&)> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x90;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendClass,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x90;
  }
  return;
}

// ForEach<TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&)>_> @ 14ae12120

void __cdecl
Algo::
ForEach<TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>_const_&,TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&)>_>
          (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&)> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x90;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendClass_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x90;
  }
  return;
}

// ForEachIf<TArray<int,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>'::__l2::<lambda_1>,`Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>'::__l34::<lambda_3>_> @ 14ae121a0

void __cdecl
Algo::
ForEachIf<TArray<int,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>_::__l2::<lambda_1>,_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>_::__l34::<lambda_3>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2,<lambda_3> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == *param_2.LastIndex) {
      *(int *)pFVar3 = *param_3.SwapIndex;
    }
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// ForEachIf<TArray<int,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>'::__l2::<lambda_1>,`Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>'::__l34::<lambda_3>_> @ 14ae12220

void __cdecl
Algo::
ForEachIf<TArray<int,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>_::__l2::<lambda_1>,_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>_::__l34::<lambda_3>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2,<lambda_3> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == *param_2.LastIndex) {
      *(int *)pFVar3 = *param_3.SwapIndex;
    }
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// HeapSortInternal<FMetasoundFrontendClass,int,FIdentityFunctor,`Metasound::Frontend::FDocumentController::DeduplicateDependencies'::__l5::<lambda_2>_> @ 14ae12400

void __cdecl
AlgoImpl::
HeapSortInternal<FMetasoundFrontendClass,int,FIdentityFunctor,_Metasound::Frontend::FDocumentController::DeduplicateDependencies_::__l5::<lambda_2>_>
          (FMetasoundFrontendClass *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersionNumber FVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FName FVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  EMetasoundFrontendClassType EVar15;
  undefined1 uVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  EMetasoundFrontendClassType EVar24;
  undefined1 uVar25;
  ushort uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  bool bVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  FMetasoundFrontendClass *pFVar44;
  FMetasoundFrontendClass *pFVar45;
  int iVar46;
  longlong lVar47;
  FMetasoundFrontendClass *pFVar48;
  int iVar49;
  <lambda_2> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar40 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar40) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar40 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar40) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar41 = (param_2 + -2) / 2;
  iVar42 = iVar41 * 2 + 1;
  iVar49 = iVar42;
  iVar46 = iVar41;
  do {
    while (param_2 <= iVar42) {
LAB_14ae12609:
      if (iVar46 == 0) {
        iVar42 = param_2 + -1;
        lVar47 = (longlong)iVar42;
        if (0 < iVar42) {
          pFVar48 = param_1 + lVar47;
          do {
            uVar13 = (pFVar48->ID).A;
            uVar14 = (pFVar48->ID).B;
            lVar12 = param_1->_padding_;
            uVar20 = (param_1->ID).A;
            uVar21 = (param_1->ID).B;
            uVar22 = (param_1->ID).C;
            uVar23 = (param_1->ID).D;
            FVar2 = (param_1->Metadata).ClassName.Namespace;
            FVar3 = (param_1->Metadata).ClassName.Name;
            FVar4 = (param_1->Metadata).ClassName.Variant;
            FVar5 = (param_1->Metadata).Version;
            EVar24 = (param_1->Metadata).Type;
            uVar25 = (param_1->Metadata).field_0x21;
            uVar26 = (param_1->Metadata).AccessFlags;
            uVar27 = (param_1->Metadata).ChangeID.A;
            uVar28 = (param_1->Metadata).ChangeID.B;
            uVar29 = (param_1->Metadata).ChangeID.C;
            uVar6 = *(undefined8 *)&(param_1->Metadata).ChangeID.D;
            pFVar7 = (param_1->Interface).Inputs.AllocatorInstance.Data;
            iVar46 = (param_1->Interface).Inputs.ArrayNum;
            iVar43 = (param_1->Interface).Inputs.ArrayMax;
            pFVar8 = (param_1->Interface).Outputs.AllocatorInstance.Data;
            iVar18 = (param_1->Interface).Outputs.ArrayNum;
            iVar30 = (param_1->Interface).Outputs.ArrayMax;
            pFVar9 = (param_1->Interface).Environment.AllocatorInstance.Data;
            iVar31 = (param_1->Interface).Environment.ArrayNum;
            iVar32 = (param_1->Interface).Environment.ArrayMax;
            uVar36 = (param_1->Interface).ChangeID.A;
            uVar37 = (param_1->Interface).ChangeID.B;
            uVar38 = (param_1->Interface).ChangeID.C;
            uVar39 = (param_1->Interface).ChangeID.D;
            param_1->_padding_ = pFVar48->_padding_;
            (param_1->ID).A = uVar13;
            (param_1->ID).B = uVar14;
            uVar13 = (pFVar48->ID).D;
            FVar10 = (pFVar48->Metadata).ClassName.Namespace;
            (param_1->ID).C = (pFVar48->ID).C;
            (param_1->ID).D = uVar13;
            (param_1->Metadata).ClassName.Namespace = FVar10;
            FVar10 = (pFVar48->Metadata).ClassName.Variant;
            (param_1->Metadata).ClassName.Name = (pFVar48->Metadata).ClassName.Name;
            (param_1->Metadata).ClassName.Variant = FVar10;
            EVar15 = (pFVar48->Metadata).Type;
            uVar16 = (pFVar48->Metadata).field_0x21;
            uVar17 = (pFVar48->Metadata).AccessFlags;
            uVar13 = (pFVar48->Metadata).ChangeID.A;
            (param_1->Metadata).Version = (pFVar48->Metadata).Version;
            (param_1->Metadata).Type = EVar15;
            (param_1->Metadata).field_0x21 = uVar16;
            (param_1->Metadata).AccessFlags = uVar17;
            (param_1->Metadata).ChangeID.A = uVar13;
            uVar13 = (pFVar48->Metadata).ChangeID.C;
            uVar11 = *(undefined8 *)&(pFVar48->Metadata).ChangeID.D;
            (param_1->Metadata).ChangeID.B = (pFVar48->Metadata).ChangeID.B;
            (param_1->Metadata).ChangeID.C = uVar13;
            *(undefined8 *)&(param_1->Metadata).ChangeID.D = uVar11;
            iVar49 = (pFVar48->Interface).Inputs.ArrayNum;
            iVar41 = (pFVar48->Interface).Inputs.ArrayMax;
            (param_1->Interface).Inputs.AllocatorInstance.Data =
                 (pFVar48->Interface).Inputs.AllocatorInstance.Data;
            (param_1->Interface).Inputs.ArrayNum = iVar49;
            (param_1->Interface).Inputs.ArrayMax = iVar41;
            iVar49 = (pFVar48->Interface).Outputs.ArrayNum;
            iVar41 = (pFVar48->Interface).Outputs.ArrayMax;
            (param_1->Interface).Outputs.AllocatorInstance.Data =
                 (pFVar48->Interface).Outputs.AllocatorInstance.Data;
            (param_1->Interface).Outputs.ArrayNum = iVar49;
            (param_1->Interface).Outputs.ArrayMax = iVar41;
            iVar49 = (pFVar48->Interface).Environment.ArrayNum;
            iVar41 = (pFVar48->Interface).Environment.ArrayMax;
            (param_1->Interface).Environment.AllocatorInstance.Data =
                 (pFVar48->Interface).Environment.AllocatorInstance.Data;
            (param_1->Interface).Environment.ArrayNum = iVar49;
            (param_1->Interface).Environment.ArrayMax = iVar41;
            uVar13 = (pFVar48->Interface).ChangeID.B;
            uVar14 = (pFVar48->Interface).ChangeID.C;
            uVar19 = (pFVar48->Interface).ChangeID.D;
            (param_1->Interface).ChangeID.A = (pFVar48->Interface).ChangeID.A;
            (param_1->Interface).ChangeID.B = uVar13;
            (param_1->Interface).ChangeID.C = uVar14;
            (param_1->Interface).ChangeID.D = uVar19;
            pFVar48->_padding_ = lVar12;
            (pFVar48->ID).A = uVar20;
            (pFVar48->ID).B = uVar21;
            (pFVar48->ID).C = uVar22;
            (pFVar48->ID).D = uVar23;
            (pFVar48->Metadata).ClassName.Namespace = FVar2;
            (pFVar48->Metadata).ClassName.Name = FVar3;
            (pFVar48->Metadata).ClassName.Variant = FVar4;
            (pFVar48->Metadata).Version = FVar5;
            (pFVar48->Metadata).Type = EVar24;
            (pFVar48->Metadata).field_0x21 = uVar25;
            (pFVar48->Metadata).AccessFlags = uVar26;
            (pFVar48->Metadata).ChangeID.A = uVar27;
            (pFVar48->Metadata).ChangeID.B = uVar28;
            (pFVar48->Metadata).ChangeID.C = uVar29;
            *(undefined8 *)&(pFVar48->Metadata).ChangeID.D = uVar6;
            (pFVar48->Interface).Inputs.AllocatorInstance.Data = pFVar7;
            (pFVar48->Interface).Inputs.ArrayNum = iVar46;
            (pFVar48->Interface).Inputs.ArrayMax = iVar43;
            (pFVar48->Interface).Outputs.AllocatorInstance.Data = pFVar8;
            (pFVar48->Interface).Outputs.ArrayNum = iVar18;
            (pFVar48->Interface).Outputs.ArrayMax = iVar30;
            (pFVar48->Interface).Environment.AllocatorInstance.Data = pFVar9;
            (pFVar48->Interface).Environment.ArrayNum = iVar31;
            (pFVar48->Interface).Environment.ArrayMax = iVar32;
            (pFVar48->Interface).ChangeID.A = uVar36;
            (pFVar48->Interface).ChangeID.B = uVar37;
            (pFVar48->Interface).ChangeID.C = uVar38;
            (pFVar48->Interface).ChangeID.D = uVar39;
            iVar49 = 0;
            if (1 < iVar42) {
              do {
                iVar46 = iVar49 * 2;
                iVar41 = iVar46 + 1;
                if (iVar46 + 2 < iVar42) {
                  bVar40 = `Metasound::Frontend::FDocumentController::DeduplicateDependencies'::__l5
                           ::<lambda_2>::operator()
                                     (local_res20,param_1 + (iVar46 + 2),param_1 + iVar41);
                  if (bVar40) {
                    iVar41 = iVar46;
                  }
                  iVar41 = iVar41 + 1;
                }
                pFVar45 = param_1 + iVar41;
                pFVar44 = param_1 + iVar49;
                bVar40 = `Metasound::Frontend::FDocumentController::DeduplicateDependencies'::__l5::
                         <lambda_2>::operator()(local_res20,pFVar44,pFVar45);
                if (!bVar40) break;
                uVar13 = (pFVar45->ID).A;
                uVar14 = (pFVar45->ID).B;
                lVar12 = pFVar44->_padding_;
                uVar20 = (pFVar44->ID).A;
                uVar21 = (pFVar44->ID).B;
                uVar22 = (pFVar44->ID).C;
                uVar23 = (pFVar44->ID).D;
                FVar2 = (pFVar44->Metadata).ClassName.Namespace;
                FVar3 = (pFVar44->Metadata).ClassName.Name;
                FVar4 = (pFVar44->Metadata).ClassName.Variant;
                FVar5 = (pFVar44->Metadata).Version;
                EVar24 = (pFVar44->Metadata).Type;
                uVar25 = (pFVar44->Metadata).field_0x21;
                uVar26 = (pFVar44->Metadata).AccessFlags;
                uVar27 = (pFVar44->Metadata).ChangeID.A;
                uVar28 = (pFVar44->Metadata).ChangeID.B;
                uVar29 = (pFVar44->Metadata).ChangeID.C;
                uVar6 = *(undefined8 *)&(pFVar44->Metadata).ChangeID.D;
                pFVar7 = (pFVar44->Interface).Inputs.AllocatorInstance.Data;
                iVar43 = (pFVar44->Interface).Inputs.ArrayNum;
                iVar18 = (pFVar44->Interface).Inputs.ArrayMax;
                pFVar8 = (pFVar44->Interface).Outputs.AllocatorInstance.Data;
                iVar30 = (pFVar44->Interface).Outputs.ArrayNum;
                iVar31 = (pFVar44->Interface).Outputs.ArrayMax;
                pFVar9 = (pFVar44->Interface).Environment.AllocatorInstance.Data;
                iVar32 = (pFVar44->Interface).Environment.ArrayNum;
                iVar33 = (pFVar44->Interface).Environment.ArrayMax;
                uVar36 = (pFVar44->Interface).ChangeID.A;
                uVar37 = (pFVar44->Interface).ChangeID.B;
                uVar38 = (pFVar44->Interface).ChangeID.C;
                uVar39 = (pFVar44->Interface).ChangeID.D;
                pFVar44->_padding_ = pFVar45->_padding_;
                (pFVar44->ID).A = uVar13;
                (pFVar44->ID).B = uVar14;
                uVar13 = (pFVar45->ID).D;
                FVar10 = (pFVar45->Metadata).ClassName.Namespace;
                (pFVar44->ID).C = (pFVar45->ID).C;
                (pFVar44->ID).D = uVar13;
                (pFVar44->Metadata).ClassName.Namespace = FVar10;
                FVar10 = (pFVar45->Metadata).ClassName.Variant;
                (pFVar44->Metadata).ClassName.Name = (pFVar45->Metadata).ClassName.Name;
                (pFVar44->Metadata).ClassName.Variant = FVar10;
                EVar15 = (pFVar45->Metadata).Type;
                uVar16 = (pFVar45->Metadata).field_0x21;
                uVar17 = (pFVar45->Metadata).AccessFlags;
                uVar13 = (pFVar45->Metadata).ChangeID.A;
                (pFVar44->Metadata).Version = (pFVar45->Metadata).Version;
                (pFVar44->Metadata).Type = EVar15;
                (pFVar44->Metadata).field_0x21 = uVar16;
                (pFVar44->Metadata).AccessFlags = uVar17;
                (pFVar44->Metadata).ChangeID.A = uVar13;
                uVar13 = (pFVar45->Metadata).ChangeID.C;
                uVar11 = *(undefined8 *)&(pFVar45->Metadata).ChangeID.D;
                (pFVar44->Metadata).ChangeID.B = (pFVar45->Metadata).ChangeID.B;
                (pFVar44->Metadata).ChangeID.C = uVar13;
                *(undefined8 *)&(pFVar44->Metadata).ChangeID.D = uVar11;
                iVar49 = (pFVar45->Interface).Inputs.ArrayNum;
                iVar46 = (pFVar45->Interface).Inputs.ArrayMax;
                (pFVar44->Interface).Inputs.AllocatorInstance.Data =
                     (pFVar45->Interface).Inputs.AllocatorInstance.Data;
                (pFVar44->Interface).Inputs.ArrayNum = iVar49;
                (pFVar44->Interface).Inputs.ArrayMax = iVar46;
                iVar49 = (pFVar45->Interface).Outputs.ArrayNum;
                iVar46 = (pFVar45->Interface).Outputs.ArrayMax;
                (pFVar44->Interface).Outputs.AllocatorInstance.Data =
                     (pFVar45->Interface).Outputs.AllocatorInstance.Data;
                (pFVar44->Interface).Outputs.ArrayNum = iVar49;
                (pFVar44->Interface).Outputs.ArrayMax = iVar46;
                iVar49 = (pFVar45->Interface).Environment.ArrayNum;
                iVar46 = (pFVar45->Interface).Environment.ArrayMax;
                (pFVar44->Interface).Environment.AllocatorInstance.Data =
                     (pFVar45->Interface).Environment.AllocatorInstance.Data;
                (pFVar44->Interface).Environment.ArrayNum = iVar49;
                (pFVar44->Interface).Environment.ArrayMax = iVar46;
                uVar13 = (pFVar45->Interface).ChangeID.B;
                uVar14 = (pFVar45->Interface).ChangeID.C;
                uVar19 = (pFVar45->Interface).ChangeID.D;
                (pFVar44->Interface).ChangeID.A = (pFVar45->Interface).ChangeID.A;
                (pFVar44->Interface).ChangeID.B = uVar13;
                (pFVar44->Interface).ChangeID.C = uVar14;
                (pFVar44->Interface).ChangeID.D = uVar19;
                pFVar45->_padding_ = lVar12;
                (pFVar45->ID).A = uVar20;
                (pFVar45->ID).B = uVar21;
                (pFVar45->ID).C = uVar22;
                (pFVar45->ID).D = uVar23;
                (pFVar45->Metadata).ClassName.Namespace = FVar2;
                (pFVar45->Metadata).ClassName.Name = FVar3;
                (pFVar45->Metadata).ClassName.Variant = FVar4;
                (pFVar45->Metadata).Version = FVar5;
                (pFVar45->Metadata).Type = EVar24;
                (pFVar45->Metadata).field_0x21 = uVar25;
                (pFVar45->Metadata).AccessFlags = uVar26;
                (pFVar45->Metadata).ChangeID.A = uVar27;
                (pFVar45->Metadata).ChangeID.B = uVar28;
                (pFVar45->Metadata).ChangeID.C = uVar29;
                *(undefined8 *)&(pFVar45->Metadata).ChangeID.D = uVar6;
                (pFVar45->Interface).Inputs.AllocatorInstance.Data = pFVar7;
                (pFVar45->Interface).Inputs.ArrayNum = iVar43;
                (pFVar45->Interface).Inputs.ArrayMax = iVar18;
                (pFVar45->Interface).Outputs.AllocatorInstance.Data = pFVar8;
                (pFVar45->Interface).Outputs.ArrayNum = iVar30;
                (pFVar45->Interface).Outputs.ArrayMax = iVar31;
                (pFVar45->Interface).Environment.AllocatorInstance.Data = pFVar9;
                (pFVar45->Interface).Environment.ArrayNum = iVar32;
                (pFVar45->Interface).Environment.ArrayMax = iVar33;
                (pFVar45->Interface).ChangeID.A = uVar36;
                (pFVar45->Interface).ChangeID.B = uVar37;
                (pFVar45->Interface).ChangeID.C = uVar38;
                (pFVar45->Interface).ChangeID.D = uVar39;
                iVar49 = iVar41;
              } while (iVar41 * 2 + 1 < iVar42);
            }
            iVar42 = iVar42 + -1;
            lVar47 = lVar47 + -1;
            pFVar48 = pFVar48 + -1;
          } while (0 < lVar47);
        }
        return;
      }
      iVar41 = iVar46 + -1;
      iVar42 = iVar49 + -2;
      iVar49 = iVar42;
      iVar46 = iVar41;
    }
    iVar42 = iVar41 * 2;
    iVar43 = iVar42 + 1;
    if (iVar42 + 2 < param_2) {
      bVar40 = `Metasound::Frontend::FDocumentController::DeduplicateDependencies'::__l5::<lambda_2>
               ::operator()(local_res20,param_1 + (iVar42 + 2),param_1 + iVar43);
      if (bVar40) {
        iVar43 = iVar42;
      }
      iVar43 = iVar43 + 1;
    }
    pFVar44 = param_1 + iVar43;
    pFVar48 = param_1 + iVar41;
    bVar40 = `Metasound::Frontend::FDocumentController::DeduplicateDependencies'::__l5::<lambda_2>::
             operator()(local_res20,pFVar48,pFVar44);
    if (!bVar40) goto LAB_14ae12609;
    uVar13 = (pFVar44->ID).A;
    uVar14 = (pFVar44->ID).B;
    iVar42 = iVar43 * 2 + 1;
    lVar47 = pFVar48->_padding_;
    uVar20 = (pFVar48->ID).A;
    uVar21 = (pFVar48->ID).B;
    uVar22 = (pFVar48->ID).C;
    uVar23 = (pFVar48->ID).D;
    FVar2 = (pFVar48->Metadata).ClassName.Namespace;
    FVar3 = (pFVar48->Metadata).ClassName.Name;
    FVar4 = (pFVar48->Metadata).ClassName.Variant;
    FVar5 = (pFVar48->Metadata).Version;
    EVar24 = (pFVar48->Metadata).Type;
    uVar25 = (pFVar48->Metadata).field_0x21;
    uVar26 = (pFVar48->Metadata).AccessFlags;
    uVar27 = (pFVar48->Metadata).ChangeID.A;
    uVar28 = (pFVar48->Metadata).ChangeID.B;
    uVar29 = (pFVar48->Metadata).ChangeID.C;
    uVar6 = *(undefined8 *)&(pFVar48->Metadata).ChangeID.D;
    pFVar7 = (pFVar48->Interface).Inputs.AllocatorInstance.Data;
    iVar30 = (pFVar48->Interface).Inputs.ArrayNum;
    iVar31 = (pFVar48->Interface).Inputs.ArrayMax;
    pFVar8 = (pFVar48->Interface).Outputs.AllocatorInstance.Data;
    iVar32 = (pFVar48->Interface).Outputs.ArrayNum;
    iVar33 = (pFVar48->Interface).Outputs.ArrayMax;
    pFVar9 = (pFVar48->Interface).Environment.AllocatorInstance.Data;
    iVar34 = (pFVar48->Interface).Environment.ArrayNum;
    iVar35 = (pFVar48->Interface).Environment.ArrayMax;
    uVar36 = (pFVar48->Interface).ChangeID.A;
    uVar37 = (pFVar48->Interface).ChangeID.B;
    uVar38 = (pFVar48->Interface).ChangeID.C;
    uVar39 = (pFVar48->Interface).ChangeID.D;
    pFVar48->_padding_ = pFVar44->_padding_;
    (pFVar48->ID).A = uVar13;
    (pFVar48->ID).B = uVar14;
    uVar13 = (pFVar44->ID).D;
    FVar10 = (pFVar44->Metadata).ClassName.Namespace;
    (pFVar48->ID).C = (pFVar44->ID).C;
    (pFVar48->ID).D = uVar13;
    (pFVar48->Metadata).ClassName.Namespace = FVar10;
    FVar10 = (pFVar44->Metadata).ClassName.Variant;
    (pFVar48->Metadata).ClassName.Name = (pFVar44->Metadata).ClassName.Name;
    (pFVar48->Metadata).ClassName.Variant = FVar10;
    EVar15 = (pFVar44->Metadata).Type;
    uVar16 = (pFVar44->Metadata).field_0x21;
    uVar17 = (pFVar44->Metadata).AccessFlags;
    uVar13 = (pFVar44->Metadata).ChangeID.A;
    (pFVar48->Metadata).Version = (pFVar44->Metadata).Version;
    (pFVar48->Metadata).Type = EVar15;
    (pFVar48->Metadata).field_0x21 = uVar16;
    (pFVar48->Metadata).AccessFlags = uVar17;
    (pFVar48->Metadata).ChangeID.A = uVar13;
    uVar13 = (pFVar44->Metadata).ChangeID.C;
    uVar11 = *(undefined8 *)&(pFVar44->Metadata).ChangeID.D;
    (pFVar48->Metadata).ChangeID.B = (pFVar44->Metadata).ChangeID.B;
    (pFVar48->Metadata).ChangeID.C = uVar13;
    *(undefined8 *)&(pFVar48->Metadata).ChangeID.D = uVar11;
    iVar41 = (pFVar44->Interface).Inputs.ArrayNum;
    iVar18 = (pFVar44->Interface).Inputs.ArrayMax;
    (pFVar48->Interface).Inputs.AllocatorInstance.Data =
         (pFVar44->Interface).Inputs.AllocatorInstance.Data;
    (pFVar48->Interface).Inputs.ArrayNum = iVar41;
    (pFVar48->Interface).Inputs.ArrayMax = iVar18;
    iVar41 = (pFVar44->Interface).Outputs.ArrayNum;
    iVar18 = (pFVar44->Interface).Outputs.ArrayMax;
    (pFVar48->Interface).Outputs.AllocatorInstance.Data =
         (pFVar44->Interface).Outputs.AllocatorInstance.Data;
    (pFVar48->Interface).Outputs.ArrayNum = iVar41;
    (pFVar48->Interface).Outputs.ArrayMax = iVar18;
    iVar41 = (pFVar44->Interface).Environment.ArrayNum;
    iVar18 = (pFVar44->Interface).Environment.ArrayMax;
    (pFVar48->Interface).Environment.AllocatorInstance.Data =
         (pFVar44->Interface).Environment.AllocatorInstance.Data;
    (pFVar48->Interface).Environment.ArrayNum = iVar41;
    (pFVar48->Interface).Environment.ArrayMax = iVar18;
    uVar13 = (pFVar44->Interface).ChangeID.B;
    uVar14 = (pFVar44->Interface).ChangeID.C;
    uVar19 = (pFVar44->Interface).ChangeID.D;
    (pFVar48->Interface).ChangeID.A = (pFVar44->Interface).ChangeID.A;
    (pFVar48->Interface).ChangeID.B = uVar13;
    (pFVar48->Interface).ChangeID.C = uVar14;
    (pFVar48->Interface).ChangeID.D = uVar19;
    pFVar44->_padding_ = lVar47;
    (pFVar44->ID).A = uVar20;
    (pFVar44->ID).B = uVar21;
    (pFVar44->ID).C = uVar22;
    (pFVar44->ID).D = uVar23;
    (pFVar44->Metadata).ClassName.Namespace = FVar2;
    (pFVar44->Metadata).ClassName.Name = FVar3;
    (pFVar44->Metadata).ClassName.Variant = FVar4;
    (pFVar44->Metadata).Version = FVar5;
    (pFVar44->Metadata).Type = EVar24;
    (pFVar44->Metadata).field_0x21 = uVar25;
    (pFVar44->Metadata).AccessFlags = uVar26;
    (pFVar44->Metadata).ChangeID.A = uVar27;
    (pFVar44->Metadata).ChangeID.B = uVar28;
    (pFVar44->Metadata).ChangeID.C = uVar29;
    *(undefined8 *)&(pFVar44->Metadata).ChangeID.D = uVar6;
    (pFVar44->Interface).Inputs.AllocatorInstance.Data = pFVar7;
    (pFVar44->Interface).Inputs.ArrayNum = iVar30;
    (pFVar44->Interface).Inputs.ArrayMax = iVar31;
    (pFVar44->Interface).Outputs.AllocatorInstance.Data = pFVar8;
    (pFVar44->Interface).Outputs.ArrayNum = iVar32;
    (pFVar44->Interface).Outputs.ArrayMax = iVar33;
    (pFVar44->Interface).Environment.AllocatorInstance.Data = pFVar9;
    (pFVar44->Interface).Environment.ArrayNum = iVar34;
    (pFVar44->Interface).Environment.ArrayMax = iVar35;
    (pFVar44->Interface).ChangeID.A = uVar36;
    (pFVar44->Interface).ChangeID.B = uVar37;
    (pFVar44->Interface).ChangeID.C = uVar38;
    (pFVar44->Interface).ChangeID.D = uVar39;
    iVar41 = iVar43;
  } while( true );
}

// IntroSortInternal<FMetasoundFrontendClass,int,FIdentityFunctor,`Metasound::Frontend::FDocumentController::DeduplicateDependencies'::__l5::<lambda_2>_> @ 14ae12960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FMetasoundFrontendClass,int,FIdentityFunctor,_Metasound::Frontend::FDocumentController::DeduplicateDependencies_::__l5::<lambda_2>_>
          (FMetasoundFrontendClass *param_1,int param_2,FIdentityFunctor param_3,<lambda_2> param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FMetasoundFrontendVersionNumber FVar12;
  undefined8 uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FName FVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  FMetasoundFrontendClass *this;
  int iVar21;
  EMetasoundFrontendClassType EVar22;
  undefined1 uVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  EMetasoundFrontendClassType EVar28;
  undefined1 uVar29;
  ushort uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  FMetasoundFrontendVersionNumber *pFVar43;
  FMetasoundFrontendVersionNumber *pFVar44;
  FMetasoundFrontendClassInterface *pFVar45;
  FMetasoundFrontendClass *pFVar46;
  longlong lVar47;
  FMetasoundFrontendClass *pFVar48;
  FMetasoundFrontendClass *pFVar49;
  FMetasoundFrontendClass *pFVar50;
  FMetasoundFrontendClass *pFVar51;
  float fVar52;
  undefined1 auStack_3f8 [32];
  <lambda_2> local_3d8;
  FMetasoundFrontendClass *local_3d0;
  FMetasoundFrontendClass **local_3c8;
  int local_3c0;
  FMetasoundFrontendClass *local_3a8;
  FMetasoundFrontendClass *local_398;
  FMetasoundFrontendClass *local_390;
  undefined4 local_388;
  undefined1 local_380 [744];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  if (1 < param_2) {
    local_390 = param_1 + (longlong)param_2 + -1;
    local_3d8 = param_4;
    local_398 = param_1;
    fVar52 = logf((float)param_2 * (float)param_2);
    local_388 = (undefined4)(longlong)fVar52;
    memset(local_380,0,0x2e8);
    local_3c8 = &local_398;
    do {
      local_3a8 = local_3c8[2];
      iVar21 = (int)(((longlong)local_3c8[1] - (longlong)*local_3c8) / 0x90);
      pFVar46 = local_3c8[1];
      this = *local_3c8;
      local_3c0 = (int)local_3a8;
      while (iVar21 = iVar21 + 1, local_3d0 = pFVar46, local_3c0 != 0) {
        if (iVar21 < 9) {
          if (this < pFVar46) {
            do {
              pFVar48 = local_3d0;
              pFVar49 = this;
              pFVar46 = this;
              pFVar51 = this + 1;
              if (this + 1 <= local_3d0) {
                do {
                  uVar1 = (pFVar51->ID).A;
                  uVar2 = (pFVar49->ID).A;
                  if ((uVar2 < uVar1) ||
                     ((uVar2 == uVar1 &&
                      ((uVar3 = (pFVar51->ID).B, uVar4 = (pFVar49->ID).B, pFVar48 = local_3d0,
                       uVar4 < uVar3 ||
                       ((uVar4 == uVar3 &&
                        ((uVar3 = (pFVar51->ID).C, uVar4 = (pFVar49->ID).C, uVar4 < uVar3 ||
                         ((uVar4 == uVar3 && ((pFVar49->ID).D < (pFVar51->ID).D)))))))))))) {
LAB_14ae131de:
                    bVar7 = true;
                  }
                  else if ((uVar1 < uVar2) ||
                          ((uVar1 = (pFVar49->ID).B, uVar2 = (pFVar51->ID).B, uVar2 < uVar1 ||
                           ((uVar2 == uVar1 &&
                            ((uVar1 = (pFVar49->ID).C, uVar2 = (pFVar51->ID).C, uVar2 < uVar1 ||
                             ((uVar2 == uVar1 && ((pFVar51->ID).D < (pFVar49->ID).D)))))))))) {
                    bVar7 = false;
                  }
                  else {
                    pFVar43 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar51->Metadata);
                    pFVar44 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar49->Metadata);
                    pFVar48 = local_3d0;
                    if ((pFVar43->Major < pFVar44->Major) ||
                       ((pFVar44->Major == pFVar43->Major && (pFVar43->Minor < pFVar44->Minor))))
                    goto LAB_14ae131de;
                    pFVar43 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar51->Metadata);
                    pFVar44 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar49->Metadata);
                    if ((pFVar44->Major < pFVar43->Major) ||
                       ((pFVar44->Major == pFVar43->Major && (pFVar44->Minor < pFVar43->Minor)))) {
                      bVar7 = false;
                      pFVar48 = local_3d0;
                    }
                    else {
                      pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(pFVar49);
                      iVar21 = (pFVar45->Inputs).ArrayNum;
                      pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(pFVar49);
                      iVar5 = (pFVar45->Outputs).ArrayNum;
                      pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(pFVar51);
                      iVar6 = (pFVar45->Inputs).ArrayNum;
                      pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(pFVar51);
                      bVar7 = (pFVar45->Outputs).ArrayNum + iVar6 < iVar5 + iVar21;
                      pFVar48 = local_3d0;
                    }
                  }
                  pFVar46 = pFVar51;
                  if (!bVar7) {
                    pFVar46 = pFVar49;
                  }
                  pFVar51 = pFVar51 + 1;
                  pFVar49 = pFVar46;
                } while (pFVar51 <= pFVar48);
              }
              lVar8 = pFVar46->_padding_;
              uVar4 = (pFVar46->ID).A;
              uVar25 = (pFVar46->ID).B;
              local_3d0 = pFVar48 + -1;
              uVar26 = (pFVar46->ID).C;
              uVar27 = (pFVar46->ID).D;
              FVar9 = (pFVar46->Metadata).ClassName.Namespace;
              uVar1 = (pFVar48->ID).A;
              uVar2 = (pFVar48->ID).B;
              FVar10 = (pFVar46->Metadata).ClassName.Name;
              FVar11 = (pFVar46->Metadata).ClassName.Variant;
              FVar12 = (pFVar46->Metadata).Version;
              EVar28 = (pFVar46->Metadata).Type;
              uVar29 = (pFVar46->Metadata).field_0x21;
              uVar30 = (pFVar46->Metadata).AccessFlags;
              uVar31 = (pFVar46->Metadata).ChangeID.A;
              uVar32 = (pFVar46->Metadata).ChangeID.B;
              uVar33 = (pFVar46->Metadata).ChangeID.C;
              uVar13 = *(undefined8 *)&(pFVar46->Metadata).ChangeID.D;
              pFVar14 = (pFVar46->Interface).Inputs.AllocatorInstance.Data;
              iVar6 = (pFVar46->Interface).Inputs.ArrayNum;
              iVar34 = (pFVar46->Interface).Inputs.ArrayMax;
              pFVar15 = (pFVar46->Interface).Outputs.AllocatorInstance.Data;
              iVar35 = (pFVar46->Interface).Outputs.ArrayNum;
              iVar36 = (pFVar46->Interface).Outputs.ArrayMax;
              pFVar16 = (pFVar46->Interface).Environment.AllocatorInstance.Data;
              iVar37 = (pFVar46->Interface).Environment.ArrayNum;
              iVar38 = (pFVar46->Interface).Environment.ArrayMax;
              uVar39 = (pFVar46->Interface).ChangeID.A;
              uVar40 = (pFVar46->Interface).ChangeID.B;
              uVar41 = (pFVar46->Interface).ChangeID.C;
              uVar42 = (pFVar46->Interface).ChangeID.D;
              pFVar46->_padding_ = pFVar48->_padding_;
              (pFVar46->ID).A = uVar1;
              (pFVar46->ID).B = uVar2;
              uVar1 = (pFVar48->ID).D;
              FVar17 = (pFVar48->Metadata).ClassName.Namespace;
              (pFVar46->ID).C = (pFVar48->ID).C;
              (pFVar46->ID).D = uVar1;
              (pFVar46->Metadata).ClassName.Namespace = FVar17;
              FVar17 = (pFVar48->Metadata).ClassName.Variant;
              (pFVar46->Metadata).ClassName.Name = (pFVar48->Metadata).ClassName.Name;
              (pFVar46->Metadata).ClassName.Variant = FVar17;
              EVar22 = (pFVar48->Metadata).Type;
              uVar23 = (pFVar48->Metadata).field_0x21;
              uVar24 = (pFVar48->Metadata).AccessFlags;
              uVar1 = (pFVar48->Metadata).ChangeID.A;
              (pFVar46->Metadata).Version = (pFVar48->Metadata).Version;
              (pFVar46->Metadata).Type = EVar22;
              (pFVar46->Metadata).field_0x21 = uVar23;
              (pFVar46->Metadata).AccessFlags = uVar24;
              (pFVar46->Metadata).ChangeID.A = uVar1;
              uVar1 = (pFVar48->Metadata).ChangeID.C;
              uVar18 = *(undefined8 *)&(pFVar48->Metadata).ChangeID.D;
              (pFVar46->Metadata).ChangeID.B = (pFVar48->Metadata).ChangeID.B;
              (pFVar46->Metadata).ChangeID.C = uVar1;
              *(undefined8 *)&(pFVar46->Metadata).ChangeID.D = uVar18;
              iVar21 = (pFVar48->Interface).Inputs.ArrayNum;
              iVar5 = (pFVar48->Interface).Inputs.ArrayMax;
              (pFVar46->Interface).Inputs.AllocatorInstance.Data =
                   (pFVar48->Interface).Inputs.AllocatorInstance.Data;
              (pFVar46->Interface).Inputs.ArrayNum = iVar21;
              (pFVar46->Interface).Inputs.ArrayMax = iVar5;
              iVar21 = (pFVar48->Interface).Outputs.ArrayNum;
              iVar5 = (pFVar48->Interface).Outputs.ArrayMax;
              (pFVar46->Interface).Outputs.AllocatorInstance.Data =
                   (pFVar48->Interface).Outputs.AllocatorInstance.Data;
              (pFVar46->Interface).Outputs.ArrayNum = iVar21;
              (pFVar46->Interface).Outputs.ArrayMax = iVar5;
              iVar21 = (pFVar48->Interface).Environment.ArrayNum;
              iVar5 = (pFVar48->Interface).Environment.ArrayMax;
              (pFVar46->Interface).Environment.AllocatorInstance.Data =
                   (pFVar48->Interface).Environment.AllocatorInstance.Data;
              (pFVar46->Interface).Environment.ArrayNum = iVar21;
              (pFVar46->Interface).Environment.ArrayMax = iVar5;
              uVar1 = (pFVar48->Interface).ChangeID.B;
              uVar2 = (pFVar48->Interface).ChangeID.C;
              uVar3 = (pFVar48->Interface).ChangeID.D;
              (pFVar46->Interface).ChangeID.A = (pFVar48->Interface).ChangeID.A;
              (pFVar46->Interface).ChangeID.B = uVar1;
              (pFVar46->Interface).ChangeID.C = uVar2;
              (pFVar46->Interface).ChangeID.D = uVar3;
              pFVar48->_padding_ = lVar8;
              (pFVar48->ID).A = uVar4;
              (pFVar48->ID).B = uVar25;
              (pFVar48->ID).C = uVar26;
              (pFVar48->ID).D = uVar27;
              (pFVar48->Metadata).ClassName.Namespace = FVar9;
              (pFVar48->Metadata).ClassName.Name = FVar10;
              (pFVar48->Metadata).ClassName.Variant = FVar11;
              (pFVar48->Metadata).Version = FVar12;
              (pFVar48->Metadata).Type = EVar28;
              (pFVar48->Metadata).field_0x21 = uVar29;
              (pFVar48->Metadata).AccessFlags = uVar30;
              (pFVar48->Metadata).ChangeID.A = uVar31;
              (pFVar48->Metadata).ChangeID.B = uVar32;
              (pFVar48->Metadata).ChangeID.C = uVar33;
              *(undefined8 *)&(pFVar48->Metadata).ChangeID.D = uVar13;
              (pFVar48->Interface).Inputs.AllocatorInstance.Data = pFVar14;
              (pFVar48->Interface).Inputs.ArrayNum = iVar6;
              (pFVar48->Interface).Inputs.ArrayMax = iVar34;
              (pFVar48->Interface).Outputs.AllocatorInstance.Data = pFVar15;
              (pFVar48->Interface).Outputs.ArrayNum = iVar35;
              (pFVar48->Interface).Outputs.ArrayMax = iVar36;
              (pFVar48->Interface).Environment.AllocatorInstance.Data = pFVar16;
              (pFVar48->Interface).Environment.ArrayNum = iVar37;
              (pFVar48->Interface).Environment.ArrayMax = iVar38;
              (pFVar48->Interface).ChangeID.A = uVar39;
              (pFVar48->Interface).ChangeID.B = uVar40;
              (pFVar48->Interface).ChangeID.C = uVar41;
              (pFVar48->Interface).ChangeID.D = uVar42;
              param_4 = local_3d8;
            } while (this < local_3d0);
          }
          goto LAB_14ae13007;
        }
        uVar1 = (this->ID).A;
        uVar2 = (this->ID).B;
        pFVar48 = pFVar46 + 1;
        pFVar49 = this + iVar21 / 2;
        lVar8 = pFVar49->_padding_;
        uVar4 = (pFVar49->ID).A;
        uVar25 = (pFVar49->ID).B;
        uVar26 = (pFVar49->ID).C;
        uVar27 = (pFVar49->ID).D;
        FVar9 = (pFVar49->Metadata).ClassName.Namespace;
        FVar10 = (pFVar49->Metadata).ClassName.Name;
        FVar11 = (pFVar49->Metadata).ClassName.Variant;
        FVar12 = (pFVar49->Metadata).Version;
        EVar28 = (pFVar49->Metadata).Type;
        uVar29 = (pFVar49->Metadata).field_0x21;
        uVar30 = (pFVar49->Metadata).AccessFlags;
        uVar31 = (pFVar49->Metadata).ChangeID.A;
        uVar32 = (pFVar49->Metadata).ChangeID.B;
        uVar33 = (pFVar49->Metadata).ChangeID.C;
        uVar13 = *(undefined8 *)&(pFVar49->Metadata).ChangeID.D;
        pFVar14 = (pFVar49->Interface).Inputs.AllocatorInstance.Data;
        iVar6 = (pFVar49->Interface).Inputs.ArrayNum;
        iVar34 = (pFVar49->Interface).Inputs.ArrayMax;
        pFVar15 = (pFVar49->Interface).Outputs.AllocatorInstance.Data;
        iVar35 = (pFVar49->Interface).Outputs.ArrayNum;
        iVar36 = (pFVar49->Interface).Outputs.ArrayMax;
        pFVar16 = (pFVar49->Interface).Environment.AllocatorInstance.Data;
        iVar37 = (pFVar49->Interface).Environment.ArrayNum;
        iVar38 = (pFVar49->Interface).Environment.ArrayMax;
        uVar39 = (pFVar49->Interface).ChangeID.A;
        uVar40 = (pFVar49->Interface).ChangeID.B;
        uVar41 = (pFVar49->Interface).ChangeID.C;
        uVar42 = (pFVar49->Interface).ChangeID.D;
        pFVar49->_padding_ = this->_padding_;
        (pFVar49->ID).A = uVar1;
        (pFVar49->ID).B = uVar2;
        uVar1 = (this->ID).D;
        FVar17 = (this->Metadata).ClassName.Namespace;
        (pFVar49->ID).C = (this->ID).C;
        (pFVar49->ID).D = uVar1;
        (pFVar49->Metadata).ClassName.Namespace = FVar17;
        FVar17 = (this->Metadata).ClassName.Variant;
        (pFVar49->Metadata).ClassName.Name = (this->Metadata).ClassName.Name;
        (pFVar49->Metadata).ClassName.Variant = FVar17;
        EVar22 = (this->Metadata).Type;
        uVar23 = (this->Metadata).field_0x21;
        uVar24 = (this->Metadata).AccessFlags;
        uVar1 = (this->Metadata).ChangeID.A;
        (pFVar49->Metadata).Version = (this->Metadata).Version;
        (pFVar49->Metadata).Type = EVar22;
        (pFVar49->Metadata).field_0x21 = uVar23;
        (pFVar49->Metadata).AccessFlags = uVar24;
        (pFVar49->Metadata).ChangeID.A = uVar1;
        uVar1 = (this->Metadata).ChangeID.C;
        uVar18 = *(undefined8 *)&(this->Metadata).ChangeID.D;
        (pFVar49->Metadata).ChangeID.B = (this->Metadata).ChangeID.B;
        (pFVar49->Metadata).ChangeID.C = uVar1;
        *(undefined8 *)&(pFVar49->Metadata).ChangeID.D = uVar18;
        iVar21 = (this->Interface).Inputs.ArrayNum;
        iVar5 = (this->Interface).Inputs.ArrayMax;
        (pFVar49->Interface).Inputs.AllocatorInstance.Data =
             (this->Interface).Inputs.AllocatorInstance.Data;
        (pFVar49->Interface).Inputs.ArrayNum = iVar21;
        (pFVar49->Interface).Inputs.ArrayMax = iVar5;
        iVar21 = (this->Interface).Outputs.ArrayNum;
        iVar5 = (this->Interface).Outputs.ArrayMax;
        (pFVar49->Interface).Outputs.AllocatorInstance.Data =
             (this->Interface).Outputs.AllocatorInstance.Data;
        (pFVar49->Interface).Outputs.ArrayNum = iVar21;
        (pFVar49->Interface).Outputs.ArrayMax = iVar5;
        iVar21 = (this->Interface).Environment.ArrayNum;
        iVar5 = (this->Interface).Environment.ArrayMax;
        (pFVar49->Interface).Environment.AllocatorInstance.Data =
             (this->Interface).Environment.AllocatorInstance.Data;
        (pFVar49->Interface).Environment.ArrayNum = iVar21;
        (pFVar49->Interface).Environment.ArrayMax = iVar5;
        uVar1 = (this->Interface).ChangeID.B;
        uVar2 = (this->Interface).ChangeID.C;
        uVar3 = (this->Interface).ChangeID.D;
        (pFVar49->Interface).ChangeID.A = (this->Interface).ChangeID.A;
        (pFVar49->Interface).ChangeID.B = uVar1;
        (pFVar49->Interface).ChangeID.C = uVar2;
        (pFVar49->Interface).ChangeID.D = uVar3;
        this->_padding_ = lVar8;
        (this->ID).A = uVar4;
        (this->ID).B = uVar25;
        (this->ID).C = uVar26;
        (this->ID).D = uVar27;
        (this->Metadata).ClassName.Namespace = FVar9;
        (this->Metadata).ClassName.Name = FVar10;
        (this->Metadata).ClassName.Variant = FVar11;
        (this->Metadata).Version = FVar12;
        (this->Metadata).Type = EVar28;
        (this->Metadata).field_0x21 = uVar29;
        (this->Metadata).AccessFlags = uVar30;
        (this->Metadata).ChangeID.A = uVar31;
        (this->Metadata).ChangeID.B = uVar32;
        (this->Metadata).ChangeID.C = uVar33;
        *(undefined8 *)&(this->Metadata).ChangeID.D = uVar13;
        (this->Interface).Inputs.AllocatorInstance.Data = pFVar14;
        (this->Interface).Inputs.ArrayNum = iVar6;
        (this->Interface).Inputs.ArrayMax = iVar34;
        (this->Interface).Outputs.AllocatorInstance.Data = pFVar15;
        (this->Interface).Outputs.ArrayNum = iVar35;
        (this->Interface).Outputs.ArrayMax = iVar36;
        (this->Interface).Environment.AllocatorInstance.Data = pFVar16;
        (this->Interface).Environment.ArrayNum = iVar37;
        (this->Interface).Environment.ArrayMax = iVar38;
        (this->Interface).ChangeID.A = uVar39;
        (this->Interface).ChangeID.B = uVar40;
        (this->Interface).ChangeID.C = uVar41;
        (this->Interface).ChangeID.D = uVar42;
        pFVar49 = this;
LAB_14ae12b50:
        do {
          pFVar51 = pFVar49;
          pFVar49 = pFVar51 + 1;
          if (pFVar46 < pFVar49) goto LAB_14ae12c60;
          uVar1 = pFVar51[1].ID.A;
          uVar2 = (this->ID).A;
          if ((uVar2 < uVar1) ||
             ((uVar2 == uVar1 &&
              ((uVar3 = pFVar51[1].ID.B, uVar4 = (this->ID).B, uVar4 < uVar3 ||
               ((uVar4 == uVar3 &&
                ((uVar3 = pFVar51[1].ID.C, uVar4 = (this->ID).C, uVar4 < uVar3 ||
                 ((uVar4 == uVar3 && ((this->ID).D < pFVar51[1].ID.D)))))))))))) goto LAB_14ae12c60;
        } while ((uVar1 < uVar2) ||
                ((uVar1 = (this->ID).B, uVar2 = pFVar51[1].ID.B, uVar2 < uVar1 ||
                 ((uVar2 == uVar1 &&
                  ((uVar1 = (this->ID).C, uVar2 = pFVar51[1].ID.C, uVar2 < uVar1 ||
                   ((uVar2 == uVar1 && (pFVar51[1].ID.D < (this->ID).D))))))))));
        pFVar43 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar51[1].Metadata);
        pFVar44 = FMetasoundFrontendClassMetadata::GetVersion(&this->Metadata);
        if ((pFVar44->Major <= pFVar43->Major) &&
           ((pFVar44->Major != pFVar43->Major || (pFVar44->Minor <= pFVar43->Minor)))) {
          pFVar43 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar51[1].Metadata);
          pFVar44 = FMetasoundFrontendClassMetadata::GetVersion(&this->Metadata);
          if ((pFVar44->Major < pFVar43->Major) ||
             ((pFVar44->Major == pFVar43->Major && (pFVar44->Minor < pFVar43->Minor))))
          goto LAB_14ae12b50;
          pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(this);
          iVar21 = (pFVar45->Inputs).ArrayNum;
          pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(this);
          iVar5 = (pFVar45->Outputs).ArrayNum;
          pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(pFVar49);
          iVar6 = (pFVar45->Inputs).ArrayNum;
          pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(pFVar49);
          if (iVar5 + iVar21 <= (pFVar45->Outputs).ArrayNum + iVar6) goto LAB_14ae12b50;
        }
LAB_14ae12c60:
        do {
          do {
            do {
              pFVar50 = pFVar48;
              pFVar48 = pFVar50 + -1;
              if (pFVar48 <= this) goto LAB_14ae12d66;
              uVar1 = (this->ID).A;
              uVar2 = pFVar50[-1].ID.A;
              if ((uVar2 < uVar1) ||
                 ((uVar2 == uVar1 &&
                  ((uVar3 = (this->ID).B, uVar4 = pFVar50[-1].ID.B, uVar4 < uVar3 ||
                   ((uVar4 == uVar3 &&
                    ((uVar3 = (this->ID).C, uVar4 = pFVar50[-1].ID.C, uVar4 < uVar3 ||
                     ((uVar4 == uVar3 && (pFVar50[-1].ID.D < (this->ID).D))))))))))))
              goto LAB_14ae12d66;
            } while ((uVar1 < uVar2) ||
                    ((uVar1 = pFVar50[-1].ID.B, uVar2 = (this->ID).B, uVar2 < uVar1 ||
                     ((uVar2 == uVar1 &&
                      ((uVar1 = pFVar50[-1].ID.C, uVar2 = (this->ID).C, uVar2 < uVar1 ||
                       ((uVar2 == uVar1 && ((this->ID).D < pFVar50[-1].ID.D))))))))));
            pFVar43 = FMetasoundFrontendClassMetadata::GetVersion(&this->Metadata);
            pFVar44 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar50[-1].Metadata);
            if ((pFVar43->Major < pFVar44->Major) ||
               ((pFVar44->Major == pFVar43->Major && (pFVar43->Minor < pFVar44->Minor))))
            goto LAB_14ae12d66;
            pFVar43 = FMetasoundFrontendClassMetadata::GetVersion(&this->Metadata);
            pFVar44 = FMetasoundFrontendClassMetadata::GetVersion(&pFVar50[-1].Metadata);
          } while ((pFVar44->Major < pFVar43->Major) ||
                  ((pFVar44->Major == pFVar43->Major && (pFVar44->Minor < pFVar43->Minor))));
          pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(pFVar48);
          iVar21 = (pFVar45->Inputs).ArrayNum;
          pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(pFVar48);
          iVar5 = (pFVar45->Outputs).ArrayNum;
          pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(this);
          iVar6 = (pFVar45->Inputs).ArrayNum;
          pFVar45 = FMetasoundFrontendClass::GetDefaultInterface(this);
        } while (iVar5 + iVar21 <= (pFVar45->Outputs).ArrayNum + iVar6);
LAB_14ae12d66:
        uVar19 = pFVar50[-1].ID.A;
        uVar20 = pFVar50[-1].ID.B;
        if (pFVar49 <= pFVar48) {
          lVar8 = pFVar49->_padding_;
          uVar4 = pFVar51[1].ID.A;
          uVar25 = pFVar51[1].ID.B;
          uVar26 = pFVar51[1].ID.C;
          uVar27 = pFVar51[1].ID.D;
          FVar9 = pFVar51[1].Metadata.ClassName.Namespace;
          FVar10 = pFVar51[1].Metadata.ClassName.Name;
          FVar11 = pFVar51[1].Metadata.ClassName.Variant;
          FVar12 = pFVar51[1].Metadata.Version;
          EVar28 = pFVar51[1].Metadata.Type;
          uVar29 = pFVar51[1].Metadata.field_0x21;
          uVar30 = pFVar51[1].Metadata.AccessFlags;
          uVar31 = pFVar51[1].Metadata.ChangeID.A;
          uVar32 = pFVar51[1].Metadata.ChangeID.B;
          uVar33 = pFVar51[1].Metadata.ChangeID.C;
          uVar13 = *(undefined8 *)&pFVar51[1].Metadata.ChangeID.D;
          pFVar14 = pFVar51[1].Interface.Inputs.AllocatorInstance.Data;
          iVar6 = pFVar51[1].Interface.Inputs.ArrayNum;
          iVar34 = pFVar51[1].Interface.Inputs.ArrayMax;
          pFVar15 = pFVar51[1].Interface.Outputs.AllocatorInstance.Data;
          iVar35 = pFVar51[1].Interface.Outputs.ArrayNum;
          iVar36 = pFVar51[1].Interface.Outputs.ArrayMax;
          pFVar16 = pFVar51[1].Interface.Environment.AllocatorInstance.Data;
          iVar37 = pFVar51[1].Interface.Environment.ArrayNum;
          iVar38 = pFVar51[1].Interface.Environment.ArrayMax;
          uVar39 = pFVar51[1].Interface.ChangeID.A;
          uVar40 = pFVar51[1].Interface.ChangeID.B;
          uVar41 = pFVar51[1].Interface.ChangeID.C;
          uVar42 = pFVar51[1].Interface.ChangeID.D;
          pFVar49->_padding_ = pFVar48->_padding_;
          pFVar51[1].ID.A = uVar19;
          pFVar51[1].ID.B = uVar20;
          uVar1 = pFVar50[-1].ID.D;
          FVar17 = pFVar50[-1].Metadata.ClassName.Namespace;
          pFVar51[1].ID.C = pFVar50[-1].ID.C;
          pFVar51[1].ID.D = uVar1;
          pFVar51[1].Metadata.ClassName.Namespace = FVar17;
          FVar17 = pFVar50[-1].Metadata.ClassName.Variant;
          pFVar51[1].Metadata.ClassName.Name = pFVar50[-1].Metadata.ClassName.Name;
          pFVar51[1].Metadata.ClassName.Variant = FVar17;
          EVar22 = pFVar50[-1].Metadata.Type;
          uVar23 = pFVar50[-1].Metadata.field_0x21;
          uVar24 = pFVar50[-1].Metadata.AccessFlags;
          uVar1 = pFVar50[-1].Metadata.ChangeID.A;
          pFVar51[1].Metadata.Version = pFVar50[-1].Metadata.Version;
          pFVar51[1].Metadata.Type = EVar22;
          pFVar51[1].Metadata.field_0x21 = uVar23;
          pFVar51[1].Metadata.AccessFlags = uVar24;
          pFVar51[1].Metadata.ChangeID.A = uVar1;
          uVar1 = pFVar50[-1].Metadata.ChangeID.C;
          uVar18 = *(undefined8 *)&pFVar50[-1].Metadata.ChangeID.D;
          pFVar51[1].Metadata.ChangeID.B = pFVar50[-1].Metadata.ChangeID.B;
          pFVar51[1].Metadata.ChangeID.C = uVar1;
          *(undefined8 *)&pFVar51[1].Metadata.ChangeID.D = uVar18;
          iVar21 = pFVar50[-1].Interface.Inputs.ArrayNum;
          iVar5 = pFVar50[-1].Interface.Inputs.ArrayMax;
          pFVar51[1].Interface.Inputs.AllocatorInstance.Data =
               pFVar50[-1].Interface.Inputs.AllocatorInstance.Data;
          pFVar51[1].Interface.Inputs.ArrayNum = iVar21;
          pFVar51[1].Interface.Inputs.ArrayMax = iVar5;
          iVar21 = pFVar50[-1].Interface.Outputs.ArrayNum;
          iVar5 = pFVar50[-1].Interface.Outputs.ArrayMax;
          pFVar51[1].Interface.Outputs.AllocatorInstance.Data =
               pFVar50[-1].Interface.Outputs.AllocatorInstance.Data;
          pFVar51[1].Interface.Outputs.ArrayNum = iVar21;
          pFVar51[1].Interface.Outputs.ArrayMax = iVar5;
          iVar21 = pFVar50[-1].Interface.Environment.ArrayNum;
          iVar5 = pFVar50[-1].Interface.Environment.ArrayMax;
          pFVar51[1].Interface.Environment.AllocatorInstance.Data =
               pFVar50[-1].Interface.Environment.AllocatorInstance.Data;
          pFVar51[1].Interface.Environment.ArrayNum = iVar21;
          pFVar51[1].Interface.Environment.ArrayMax = iVar5;
          uVar1 = pFVar50[-1].Interface.ChangeID.B;
          uVar2 = pFVar50[-1].Interface.ChangeID.C;
          uVar3 = pFVar50[-1].Interface.ChangeID.D;
          pFVar51[1].Interface.ChangeID.A = pFVar50[-1].Interface.ChangeID.A;
          pFVar51[1].Interface.ChangeID.B = uVar1;
          pFVar51[1].Interface.ChangeID.C = uVar2;
          pFVar51[1].Interface.ChangeID.D = uVar3;
          pFVar48->_padding_ = lVar8;
          pFVar50[-1].ID.A = uVar4;
          pFVar50[-1].ID.B = uVar25;
          pFVar50[-1].ID.C = uVar26;
          pFVar50[-1].ID.D = uVar27;
          pFVar50[-1].Metadata.ClassName.Namespace = FVar9;
          pFVar50[-1].Metadata.ClassName.Name = FVar10;
          pFVar50[-1].Metadata.ClassName.Variant = FVar11;
          pFVar50[-1].Metadata.Version = FVar12;
          pFVar50[-1].Metadata.Type = EVar28;
          pFVar50[-1].Metadata.field_0x21 = uVar29;
          pFVar50[-1].Metadata.AccessFlags = uVar30;
          pFVar50[-1].Metadata.ChangeID.A = uVar31;
          pFVar50[-1].Metadata.ChangeID.B = uVar32;
          pFVar50[-1].Metadata.ChangeID.C = uVar33;
          *(undefined8 *)&pFVar50[-1].Metadata.ChangeID.D = uVar13;
          pFVar50[-1].Interface.Inputs.AllocatorInstance.Data = pFVar14;
          pFVar50[-1].Interface.Inputs.ArrayNum = iVar6;
          pFVar50[-1].Interface.Inputs.ArrayMax = iVar34;
          pFVar50[-1].Interface.Outputs.AllocatorInstance.Data = pFVar15;
          pFVar50[-1].Interface.Outputs.ArrayNum = iVar35;
          pFVar50[-1].Interface.Outputs.ArrayMax = iVar36;
          pFVar50[-1].Interface.Environment.AllocatorInstance.Data = pFVar16;
          pFVar50[-1].Interface.Environment.ArrayNum = iVar37;
          pFVar50[-1].Interface.Environment.ArrayMax = iVar38;
          pFVar50[-1].Interface.ChangeID.A = uVar39;
          pFVar50[-1].Interface.ChangeID.B = uVar40;
          pFVar50[-1].Interface.ChangeID.C = uVar41;
          pFVar50[-1].Interface.ChangeID.D = uVar42;
          goto LAB_14ae12b50;
        }
        lVar8 = this->_padding_;
        uVar4 = (this->ID).A;
        uVar25 = (this->ID).B;
        uVar26 = (this->ID).C;
        uVar27 = (this->ID).D;
        FVar9 = (this->Metadata).ClassName.Namespace;
        FVar10 = (this->Metadata).ClassName.Name;
        FVar11 = (this->Metadata).ClassName.Variant;
        FVar12 = (this->Metadata).Version;
        EVar28 = (this->Metadata).Type;
        uVar29 = (this->Metadata).field_0x21;
        uVar30 = (this->Metadata).AccessFlags;
        uVar31 = (this->Metadata).ChangeID.A;
        lVar47 = (longlong)pFVar48 + (-0x90 - (longlong)this);
        local_3c0 = local_3c0 + -1;
        uVar32 = (this->Metadata).ChangeID.B;
        uVar33 = (this->Metadata).ChangeID.C;
        uVar13 = *(undefined8 *)&(this->Metadata).ChangeID.D;
        pFVar14 = (this->Interface).Inputs.AllocatorInstance.Data;
        iVar6 = (this->Interface).Inputs.ArrayNum;
        iVar34 = (this->Interface).Inputs.ArrayMax;
        pFVar15 = (this->Interface).Outputs.AllocatorInstance.Data;
        iVar35 = (this->Interface).Outputs.ArrayNum;
        iVar36 = (this->Interface).Outputs.ArrayMax;
        pFVar16 = (this->Interface).Environment.AllocatorInstance.Data;
        iVar37 = (this->Interface).Environment.ArrayNum;
        iVar38 = (this->Interface).Environment.ArrayMax;
        uVar39 = (this->Interface).ChangeID.A;
        uVar40 = (this->Interface).ChangeID.B;
        uVar41 = (this->Interface).ChangeID.C;
        uVar42 = (this->Interface).ChangeID.D;
        this->_padding_ = pFVar48->_padding_;
        (this->ID).A = uVar19;
        (this->ID).B = uVar20;
        uVar1 = pFVar50[-1].ID.D;
        FVar17 = pFVar50[-1].Metadata.ClassName.Namespace;
        lVar47 = lVar47 / 0x12 + (lVar47 >> 0x3f);
        (this->ID).C = pFVar50[-1].ID.C;
        (this->ID).D = uVar1;
        (this->Metadata).ClassName.Namespace = FVar17;
        FVar17 = pFVar50[-1].Metadata.ClassName.Variant;
        (this->Metadata).ClassName.Name = pFVar50[-1].Metadata.ClassName.Name;
        (this->Metadata).ClassName.Variant = FVar17;
        EVar22 = pFVar50[-1].Metadata.Type;
        uVar23 = pFVar50[-1].Metadata.field_0x21;
        uVar24 = pFVar50[-1].Metadata.AccessFlags;
        uVar1 = pFVar50[-1].Metadata.ChangeID.A;
        (this->Metadata).Version = pFVar50[-1].Metadata.Version;
        (this->Metadata).Type = EVar22;
        (this->Metadata).field_0x21 = uVar23;
        (this->Metadata).AccessFlags = uVar24;
        (this->Metadata).ChangeID.A = uVar1;
        uVar1 = pFVar50[-1].Metadata.ChangeID.C;
        uVar18 = *(undefined8 *)&pFVar50[-1].Metadata.ChangeID.D;
        (this->Metadata).ChangeID.B = pFVar50[-1].Metadata.ChangeID.B;
        (this->Metadata).ChangeID.C = uVar1;
        *(undefined8 *)&(this->Metadata).ChangeID.D = uVar18;
        iVar21 = pFVar50[-1].Interface.Inputs.ArrayNum;
        iVar5 = pFVar50[-1].Interface.Inputs.ArrayMax;
        (this->Interface).Inputs.AllocatorInstance.Data =
             pFVar50[-1].Interface.Inputs.AllocatorInstance.Data;
        (this->Interface).Inputs.ArrayNum = iVar21;
        (this->Interface).Inputs.ArrayMax = iVar5;
        iVar21 = pFVar50[-1].Interface.Outputs.ArrayNum;
        iVar5 = pFVar50[-1].Interface.Outputs.ArrayMax;
        (this->Interface).Outputs.AllocatorInstance.Data =
             pFVar50[-1].Interface.Outputs.AllocatorInstance.Data;
        (this->Interface).Outputs.ArrayNum = iVar21;
        (this->Interface).Outputs.ArrayMax = iVar5;
        iVar21 = pFVar50[-1].Interface.Environment.ArrayNum;
        iVar5 = pFVar50[-1].Interface.Environment.ArrayMax;
        (this->Interface).Environment.AllocatorInstance.Data =
             pFVar50[-1].Interface.Environment.AllocatorInstance.Data;
        (this->Interface).Environment.ArrayNum = iVar21;
        (this->Interface).Environment.ArrayMax = iVar5;
        uVar1 = pFVar50[-1].Interface.ChangeID.B;
        uVar2 = pFVar50[-1].Interface.ChangeID.C;
        uVar3 = pFVar50[-1].Interface.ChangeID.D;
        (this->Interface).ChangeID.A = pFVar50[-1].Interface.ChangeID.A;
        (this->Interface).ChangeID.B = uVar1;
        (this->Interface).ChangeID.C = uVar2;
        (this->Interface).ChangeID.D = uVar3;
        pFVar48->_padding_ = lVar8;
        pFVar50[-1].ID.A = uVar4;
        pFVar50[-1].ID.B = uVar25;
        pFVar50[-1].ID.C = uVar26;
        pFVar50[-1].ID.D = uVar27;
        pFVar50[-1].Metadata.ClassName.Namespace = FVar9;
        pFVar50[-1].Metadata.ClassName.Name = FVar10;
        pFVar50[-1].Metadata.ClassName.Variant = FVar11;
        pFVar50[-1].Metadata.Version = FVar12;
        pFVar50[-1].Metadata.Type = EVar28;
        pFVar50[-1].Metadata.field_0x21 = uVar29;
        pFVar50[-1].Metadata.AccessFlags = uVar30;
        pFVar50[-1].Metadata.ChangeID.A = uVar31;
        pFVar50[-1].Metadata.ChangeID.B = uVar32;
        pFVar50[-1].Metadata.ChangeID.C = uVar33;
        *(undefined8 *)&pFVar50[-1].Metadata.ChangeID.D = uVar13;
        pFVar50[-1].Interface.Inputs.AllocatorInstance.Data = pFVar14;
        pFVar50[-1].Interface.Inputs.ArrayNum = iVar6;
        pFVar50[-1].Interface.Inputs.ArrayMax = iVar34;
        pFVar50[-1].Interface.Outputs.AllocatorInstance.Data = pFVar15;
        pFVar50[-1].Interface.Outputs.ArrayNum = iVar35;
        pFVar50[-1].Interface.Outputs.ArrayMax = iVar36;
        pFVar50[-1].Interface.Environment.AllocatorInstance.Data = pFVar16;
        pFVar50[-1].Interface.Environment.ArrayNum = iVar37;
        pFVar50[-1].Interface.Environment.ArrayMax = iVar38;
        pFVar50[-1].Interface.ChangeID.A = uVar39;
        pFVar50[-1].Interface.ChangeID.B = uVar40;
        pFVar50[-1].Interface.ChangeID.C = uVar41;
        pFVar50[-1].Interface.ChangeID.D = uVar42;
        param_4 = local_3d8;
        if ((lVar47 >> 3) - (lVar47 >> 0x3f) < ((longlong)pFVar46 - (longlong)pFVar49) / 0x90) {
          if (pFVar49 < local_3d0) {
            *local_3c8 = pFVar49;
            local_3c8[1] = local_3d0;
            *(int *)(local_3c8 + 2) = local_3c0;
            local_3c8 = local_3c8 + 3;
          }
          if (pFVar48 <= this + 1) goto LAB_14ae13007;
          local_3d0 = pFVar50 + -2;
          pFVar49 = this;
        }
        else {
          if (this + 1 < pFVar48) {
            *local_3c8 = this;
            local_3c8[1] = pFVar50 + -2;
            *(int *)(local_3c8 + 2) = local_3c0;
            local_3c8 = local_3c8 + 3;
          }
          if (local_3d0 <= pFVar49) goto LAB_14ae13007;
        }
        iVar21 = (int)(((longlong)local_3d0 - (longlong)pFVar49) / 0x90);
        pFVar46 = local_3d0;
        this = pFVar49;
      }
      HeapSortInternal<FMetasoundFrontendClass,int,FIdentityFunctor,_Metasound::Frontend::FDocumentController::DeduplicateDependencies_::__l5::<lambda_2>_>
                (this,iVar21,param_3,param_4);
LAB_14ae13007:
      local_3c8 = local_3c8 + -3;
    } while (&local_398 <= local_3c8);
  }
  return;
}

// KahnTopologicalSort<TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies'::__l2::FSubgraphDependencyLookup> @ 14ae132e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Algo::
KahnTopologicalSort<TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies_::__l2::FSubgraphDependencyLookup>
          (TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSubgraphDependencyLookup *param_2,ETopologicalSort param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForElementType<FSetElementId> FVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  FSubgraphDependencyLookup *pFVar17;
  ulonglong uVar18;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar19;
  byte bVar20;
  ForAnyElementType FVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint *puVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  uint *puVar33;
  ulonglong uVar34;
  uint uVar35;
  ForElementType<unsigned_int> FVar36;
  undefined1 auStackY_538 [32];
  undefined1 local_4e8;
  undefined1 local_4e7;
  undefined1 local_4e6;
  undefined1 local_4e5;
  undefined1 local_4e4 [4];
  uint local_4e0 [2];
  ForAnyElementType local_4d8;
  undefined8 local_4d0;
  ForAnyElementType local_4c8;
  int local_4c0;
  int iStack_4bc;
  uint local_4b8;
  uint local_4b4;
  uint local_4b0 [2];
  uint local_4a8 [2];
  ETopologicalSort local_4a0;
  uint local_49c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_498;
  int iStack_490;
  uint uStack_48c;
  TBitArray<FDefaultBitArrayAllocator> *local_488;
  undefined4 uStack_480;
  uint uStack_47c;
  uint local_478;
  undefined4 uStack_474;
  int iStack_470;
  undefined4 uStack_46c;
  uint local_468;
  uint uStack_464;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_460;
  undefined4 local_458;
  uint uStack_454;
  uint uStack_450;
  undefined4 uStack_44c;
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_448;
  int local_440;
  int local_43c;
  int local_438;
  int local_430;
  undefined4 local_42c;
  TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_> *local_428;
  int local_420;
  int local_41c;
  int local_418;
  longlong *local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_408;
  int local_3e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d8;
  undefined8 uStack_3b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  undefined8 uStack_388;
  undefined4 local_364;
  undefined4 local_344;
  undefined1 local_340 [88];
  undefined1 local_2e8 [32];
  uint *local_2c8;
  ulonglong uStack_2c0;
  undefined8 local_2b8;
  ForElementType<FSetElementId> FStack_2b0;
  ulonglong uStack_2a0;
  undefined1 local_298 [32];
  uint *local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  ForElementType<FSetElementId> FStack_260;
  undefined8 uStack_250;
  undefined1 local_248 [32];
  ForElementType<unsigned_int> local_228;
  uint local_220;
  int local_21c;
  int local_218;
  int local_214;
  undefined1 local_210 [8];
  ForAnyElementType local_208;
  uint local_200;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  ForAnyElementType local_1e8;
  ulonglong local_1e0;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  FMutuallyReachableVertexSetContext local_1c8;
  bool local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_538;
  uVar25 = 0;
  local_248._0_8_ = (FScriptContainerElement *)0x0;
  local_248._8_8_ = 0;
  local_228 = (ForElementType<unsigned_int>)0x0;
  local_220 = 0;
  local_214 = 0;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200 = 0;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0._0_4_ = 0;
  local_1f0._4_4_ = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0._0_4_ = 0;
  local_1d0._4_4_ = 0;
  local_68 = false;
  local_2e8._0_8_ = (FScriptContainerElement *)0x0;
  local_2e8._8_8_ = 0;
  local_2c8 = (uint *)0x0;
  FStack_2b0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
  local_21c = 0x80;
  local_218 = -1;
  uStack_2c0 = 0x8000000000;
  local_2b8 = 0xffffffff;
  local_4a0 = param_3;
  local_448 = (TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_2;
  local_428 = param_1;
  pFVar17 = `Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies'::__l2::
            FSubgraphDependencyLookup::FSubgraphDependencyLookup(local_340,param_2);
  AlgoImpl::
  KahnTopologicalSort_CreateWorkingGraph<TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_>,_Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies_::__l2::FSubgraphDependencyLookup>
            ((FKahnContext *)local_248,param_1,pFVar17,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2e8);
  uVar35 = (uint)local_1e0;
  local_298._0_8_ = (FScriptContainerElement *)0x0;
  local_298._8_8_ = 0;
  local_278 = (uint *)0x0;
  uStack_270 = 0x8000000000;
  local_268 = 0xffffffff;
  FStack_260.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_250 = (ulonglong)uStack_250._4_4_ << 0x20;
  local_4d8.Data = (FScriptContainerElement *)0x0;
  local_4d0 = 0;
  local_49c = (uint)local_1e0;
  if ((int)(uint)local_1e0 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_1e0 & 0xffffffff);
  }
  if (0 < (int)(uint)local_1e0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(uint)local_1e0,&local_4d8,0,(int *)((longlong)&local_4d0 + 4));
  }
  if (uVar35 <= (uint)(local_248._8_4_ - local_214)) goto LAB_14ae136e5;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_248,uVar35);
  uVar23 = 1;
  if (3 < uVar35) {
    uVar31 = (ulonglong)((uVar35 >> 1) + 7) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_42c = (undefined4)lVar22;
    uVar23 = 1 << ((byte)lVar22 & 0x1f);
  }
  if ((local_200 != 0) && ((int)uVar23 <= (int)local_200)) goto LAB_14ae136e5;
  local_200 = uVar23;
  if ((ForElementType<FSetElementId>)local_208.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_208,0,0,4);
  }
  if (uVar23 != 0) {
    uVar29 = uVar23;
    if (uVar23 < 2) {
      if ((ForElementType<FSetElementId>)local_208.Data != (ForElementType<FSetElementId>)0x0) {
        uVar29 = 0;
        goto LAB_14ae13528;
      }
    }
    else {
LAB_14ae13528:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_208,0,uVar29,4);
    }
    if (0 < (int)uVar23) {
      uVar34 = (ulonglong)uVar23;
      uVar31 = uVar25;
      do {
        FVar21.Data = (FScriptContainerElement *)local_210;
        if ((ForElementType<FSetElementId>)local_208.Data != (ForElementType<FSetElementId>)0x0) {
          FVar21.Data = local_208.Data;
        }
        uVar18 = uVar31 & (longlong)(int)uVar23 - 1U;
        uVar31 = uVar31 + 1;
        *(undefined4 *)((longlong)FVar21.Data + uVar18 * 4) = 0xffffffff;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
  }
  if (local_200 != 0) {
    pTStack_460 = (TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10);
    local_468 = 0;
    uStack_464 = 1;
    uStack_454 = 0;
    uStack_450 = 0;
    uVar31 = uVar25;
    if (local_220 != 0) {
      FVar36 = (ForElementType<unsigned_int>)((longlong)local_248 + 0x10);
      if (local_228 != (ForElementType<unsigned_int>)0x0) {
        FVar36 = local_228;
      }
      uVar23 = *(uint *)FVar36;
      uVar34 = uVar25;
      while (uVar23 == 0) {
        uStack_450 = (int)uVar34 + 0x20;
        uVar34 = (ulonglong)uStack_450;
        iVar16 = (int)uVar31;
        local_468 = iVar16 + 1;
        uVar31 = (ulonglong)local_468;
        if ((int)((local_220 - 1) + ((int)(local_220 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_468)
        goto LAB_14ae1363d;
        uVar23 = ((uint *)((longlong)FVar36 + 4))[iVar16];
      }
      uStack_464 = -uVar23 & uVar23;
      uVar31 = (ulonglong)uStack_464 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_420 = (int)lVar22;
      uStack_454 = local_420 + -1 + uStack_450;
      uVar31 = (ulonglong)uStack_454;
      if ((int)local_220 < (int)uStack_454) {
LAB_14ae1363d:
        uVar31 = (ulonglong)local_220;
        uStack_454 = local_220;
      }
    }
    local_458 = 0xffffffff;
    local_410 = (longlong *)local_248;
    local_408._padding_ = CONCAT44(uStack_464,local_468);
    local_408.CurrentBitIndex = uStack_454;
    local_408.UnvisitedBitMask = 0xffffffff;
    local_408._28_4_ = uStack_44c;
    local_408.BaseBitIndex = uStack_450;
    local_408.Array = pTStack_460;
    if ((int)uVar31 < (int)local_220) {
      do {
        iVar16 = (int)uVar31;
        uVar23 = local_200 - 1 & *(uint *)(*local_410 + (longlong)iVar16 * 0xc);
        lVar22 = *local_410 + (longlong)iVar16 * 0xc;
        *(uint *)(lVar22 + 8) = uVar23;
        FVar21.Data = (FScriptContainerElement *)local_210;
        if ((ForElementType<FSetElementId>)local_208.Data != (ForElementType<FSetElementId>)0x0) {
          FVar21.Data = local_208.Data;
        }
        uVar31 = (longlong)(int)local_200 - 1U & (longlong)(int)uVar23;
        *(undefined4 *)(lVar22 + 4) = *(undefined4 *)((longlong)FVar21.Data + uVar31 * 4);
        *(int *)((longlong)FVar21.Data + uVar31 * 4) = iVar16;
        local_408.UnvisitedBitMask = local_408.UnvisitedBitMask & ~local_408._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_408);
        uVar31 = (ulonglong)(uint)local_408.CurrentBitIndex;
      } while (local_408.CurrentBitIndex < (local_408.Array)->NumBits);
    }
  }
LAB_14ae136e5:
  local_4b8 = 0;
  if (0 < (int)uVar35) {
    do {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_248,&local_41c,
                 (bool *)&local_4b8);
      local_4b8 = (int)uVar25 + 1;
      uVar25 = (ulonglong)local_4b8;
    } while ((int)local_4b8 < (int)uVar35);
  }
  iVar16 = local_248._8_4_ - local_214;
  do {
    if (iVar16 < 1) {
      uVar23 = 0;
      local_4c8.Data = (FScriptContainerElement *)0x0;
      local_4c0 = 0;
      iStack_4bc = 0;
      if (0 < (int)uVar35) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar35,&local_4c8,0,&iStack_4bc);
      }
      pFVar26 = (param_1->AllocatorInstance).Data;
      iVar16 = param_1->ArrayNum;
      pFVar28 = pFVar26 + (longlong)iVar16 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar16) {
          local_4e5 = 0;
          `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_4e5);
        }
        if (pFVar26 == pFVar28) break;
        if (((local_4c8.Data <= pFVar26) && (pFVar26 < local_4c8.Data + (longlong)iStack_4bc * 8))
           && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        if (local_4c0 == iStack_4bc) {
          local_4c0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_4c8,&iStack_4bc);
        }
        lVar22 = (longlong)local_4c0;
        local_4c0 = local_4c0 + 1;
        uVar3 = *(undefined8 *)pFVar26;
        pFVar26 = pFVar26 + 8;
        *(undefined8 *)(local_4c8.Data + lVar22 * 8) = uVar3;
      }
      pFVar26 = (param_1->AllocatorInstance).Data;
      iVar16 = param_1->ArrayNum;
      lVar22 = 0;
      pFVar28 = pFVar26 + (longlong)iVar16 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar16) {
          local_4e4[0] = 0;
          `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_4e4);
        }
        if (pFVar26 == pFVar28) {
          if (local_4c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c8.Data);
          }
          if (local_4d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Data);
          }
          uStack_250 = uStack_250 & 0xffffffff00000000;
          if (FStack_260.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)FStack_260.SecondaryData);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_298);
          uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
          if (FStack_2b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)FStack_2b0.SecondaryData);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_2e8);
          if (local_68 != false) {
            AlgoImpl::FMutuallyReachableVertexSetContext::~FMutuallyReachableVertexSetContext
                      (&local_1c8);
          }
          if (local_1d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data);
          }
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data,(uint)local_1e0);
          if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data !=
              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_1e8.Data);
          }
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1f8.Data,(int)local_1f0);
          if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1f8.Data !=
              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_1f8.Data);
          }
          local_200 = 0;
          if ((ForElementType<FSetElementId>)local_208.Data != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free(local_208.Data);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_248);
          pTVar5 = local_448;
          *(undefined4 *)&local_448[1].field_0x10 = 0;
          if (*(void **)&local_448[1].field_0x8 != (void *)0x0) {
            FMemory::Free(*(void **)&local_448[1].field_0x8);
          }
          TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (pTVar5);
          return true;
        }
        uVar35 = 0;
        if ((int)uVar23 < (int)local_4d0) {
          uVar35 = ~uVar23 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) break;
        uVar35 = *(uint *)(local_4d8.Data + lVar22);
        uVar29 = 0;
        if ((int)uVar35 < local_4c0) {
          uVar29 = ~uVar35 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        uVar23 = uVar23 + 1;
        lVar22 = lVar22 + 4;
        *(undefined8 *)pFVar26 = *(undefined8 *)(local_4c8.Data + (longlong)(int)uVar35 * 8);
        pFVar26 = pFVar26 + 8;
      }
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return (bool)uVar15;
    }
    iVar16 = 0;
    uVar35 = 0;
    if (local_2e8._8_4_ == local_2b8._4_4_) {
      if ((param_3 & AllowCycles) == None) {
        if (local_4d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Data);
        }
        uStack_250 = uStack_250 & 0xffffffff00000000;
        if (FStack_260.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FStack_260.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_298);
        uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
        if (FStack_2b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FStack_2b0.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_2e8);
        if (local_68 != false) {
          AlgoImpl::FMutuallyReachableVertexSetContext::~FMutuallyReachableVertexSetContext
                    (&local_1c8);
        }
        if (local_1d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data,(uint)local_1e0);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_1e8.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1f8.Data,(int)local_1f0);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1f8.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_1f8.Data);
        }
        local_200 = 0;
        if ((ForElementType<FSetElementId>)local_208.Data != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free(local_208.Data);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_248);
        pTVar5 = local_448;
        *(undefined4 *)&local_448[1].field_0x10 = 0;
        if (*(void **)&local_448[1].field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&local_448[1].field_0x8);
        }
        TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (pTVar5);
        return false;
      }
      pTVar19 = AlgoImpl::FindMostIndependentMutuallyReachableVertexSet((FKahnContext *)local_248);
      if ((*(int *)&(pTVar19->Elements).field_0x8 == *(int *)&(pTVar19->Elements).field_0x34) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!MRVS.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                              ,0x67,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      uVar23 = *(uint *)&(pTVar19->Elements).field_0x28;
      puVar1 = &(pTVar19->Elements).field_0x10;
      uStack_48c = 1;
      uStack_47c = uVar35;
      local_478 = uVar35;
      if (uVar23 != 0) {
        puVar33 = *(uint **)&(pTVar19->Elements).field_0x20;
        puVar30 = (uint *)puVar1;
        if (puVar33 != (uint *)0x0) {
          puVar30 = puVar33;
        }
        uVar29 = *puVar30;
        iVar16 = 0;
        while (uVar29 == 0) {
          lVar22 = (longlong)iVar16;
          local_478 = local_478 + 0x20;
          iVar16 = iVar16 + 1;
          uStack_47c = uVar23;
          if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14ae1380d;
          uVar29 = puVar30[lVar22 + 1];
        }
        uStack_48c = -uVar29 & uVar29;
        uVar25 = (ulonglong)uStack_48c * 2 + 1;
        lVar22 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_418 = (int)lVar22;
        uStack_47c = (local_478 - 1) + local_418;
        if ((int)uVar23 < (int)uStack_47c) {
          uStack_47c = uVar23;
        }
      }
LAB_14ae1380d:
      uVar29 = *(uint *)&(pTVar19->Elements).field_0x28;
      uStack_474 = local_364;
      uVar27 = uVar29 & 0xffffffe0;
      iStack_470 = *(int *)&(pTVar19->Elements).field_0x8 - *(int *)&(pTVar19->Elements).field_0x34;
      TStack_3d8._padding_ = CONCAT44(uStack_48c,iVar16);
      uStack_480 = 0xffffffff;
      TStack_3d8.CurrentBitIndex = uStack_47c;
      TStack_3d8.UnvisitedBitMask = 0xffffffff;
      iVar24 = (int)uVar29 >> 5;
      TStack_3d8._28_4_ = local_364;
      TStack_3d8.BaseBitIndex = local_478;
      uStack_3b8 = CONCAT44(uStack_46c,iStack_470);
      local_498 = pTVar19;
      iStack_490 = iVar16;
      local_488 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_3e0 = pTVar19;
      TStack_3d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar29 < 0) || ((int)uVar23 < (int)uVar29)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      uVar23 = *(uint *)&(pTVar19->Elements).field_0x28;
      if (uVar29 != uVar23) {
        puVar2 = *(undefined1 **)&(pTVar19->Elements).field_0x20;
        puVar32 = puVar1;
        if (puVar2 != (undefined1 *)0x0) {
          puVar32 = puVar2;
        }
        uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar24 * 4);
        while (uVar29 == 0) {
          lVar22 = (longlong)iVar24;
          uVar27 = uVar27 + 0x20;
          iVar24 = iVar24 + 1;
          uVar29 = uVar23;
          if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_14ae13910;
          uVar29 = *(uint *)(puVar32 + lVar22 * 4 + 4);
        }
        uVar25 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_3e8 = (int)lVar22;
        uVar29 = (uVar27 - 1) + local_3e8;
        if ((int)uVar23 < (int)uVar29) {
          uVar29 = uVar23;
        }
      }
LAB_14ae13910:
      while( true ) {
        pTVar6 = local_3e0;
        if (*(int *)&(local_3e0->Elements).field_0x8 - *(int *)&(local_3e0->Elements).field_0x34 !=
            (int)uStack_3b8) {
          local_4e8 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_4e8);
        }
        if (((TStack_3d8.CurrentBitIndex == uVar29) &&
            (TStack_3d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar6 == pTVar19)) break;
        uVar23 = *(uint *)(*(longlong *)&pTVar6->Elements +
                          (longlong)TStack_3d8.CurrentBitIndex * 0xc);
        local_4b4 = uVar23;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2e8,&local_440,
                   (bool *)&local_4b4);
        uVar27 = uVar35;
        if ((int)uVar23 < (int)local_1d0) {
          uVar27 = ~uVar23 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        *(undefined4 *)(local_1d8.Data + (longlong)(int)uVar23 * 4) = 0xffffffff;
        TStack_3d8.UnvisitedBitMask = TStack_3d8.UnvisitedBitMask & ~TStack_3d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d8);
      }
    }
    if (local_298._8_4_ != local_268._4_4_) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_298);
      bVar14 = (longlong)local_298._8_8_ < 0;
      local_298._8_8_ = local_298._8_8_ & 0xffffffff00000000;
      if (bVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_298,0,(int *)(local_298 + 0xc));
      }
      local_268 = 0xffffffff;
      uStack_270 = uStack_270 & 0xffffffff00000000;
    }
    uVar23 = (uint)uStack_2c0;
    uStack_48c = 1;
    uStack_47c = uVar35;
    iStack_490 = 0;
    if ((uint)uStack_2c0 != 0) {
      puVar33 = (uint *)(local_2e8 + 0x10);
      if (local_2c8 != (uint *)0x0) {
        puVar33 = local_2c8;
      }
      uVar29 = *puVar33;
      while (uVar29 == 0) {
        lVar22 = (longlong)iStack_490;
        uVar35 = uVar35 + 0x20;
        iStack_490 = iStack_490 + 1;
        uStack_47c = (uint)uStack_2c0;
        if ((int)(((uint)uStack_2c0 - 1) + ((int)((uint)uStack_2c0 - 1) >> 0x1f & 0x1fU)) >> 5 <
            iStack_490) goto LAB_14ae13ad0;
        uVar29 = (puVar33 + 1)[lVar22];
      }
      uStack_48c = -uVar29 & uVar29;
      uVar25 = (ulonglong)uStack_48c * 2 + 1;
      lVar22 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_43c = (int)lVar22;
      uStack_47c = (uVar35 - 1) + local_43c;
      if ((int)(uint)uStack_2c0 < (int)uStack_47c) {
        uStack_47c = (uint)uStack_2c0;
      }
    }
LAB_14ae13ad0:
    local_498 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2e8;
    uStack_474 = local_344;
    local_488 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10);
    iStack_470 = local_2e8._8_4_ - local_2b8._4_4_;
    uVar29 = (uint)uStack_2c0 & 0xffffffe0;
    TStack_3a8._padding_ = CONCAT44(uStack_48c,iStack_490);
    uStack_480 = 0xffffffff;
    TStack_3a8.CurrentBitIndex = uStack_47c;
    TStack_3a8.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)(uint)uStack_2c0 >> 5;
    TStack_3a8._28_4_ = local_344;
    TStack_3a8.BaseBitIndex = uVar35;
    uStack_388 = CONCAT44(uStack_46c,iStack_470);
    bVar20 = (byte)uStack_2c0;
    local_478 = uVar35;
    local_3b0 = local_498;
    TStack_3a8.Array = local_488;
    if ((int)(uint)uStack_2c0 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
    }
    if (uVar23 != (uint)uStack_2c0) {
      puVar33 = (uint *)(local_2e8 + 0x10);
      if (local_2c8 != (uint *)0x0) {
        puVar33 = local_2c8;
      }
      uVar35 = -1 << (bVar20 & 0x1f) & puVar33[iVar16];
      while (uVar35 == 0) {
        lVar22 = (longlong)iVar16;
        uVar29 = uVar29 + 0x20;
        iVar16 = iVar16 + 1;
        uVar23 = (uint)uStack_2c0;
        if ((int)(((uint)uStack_2c0 - 1) + ((int)((uint)uStack_2c0 - 1) >> 0x1f & 0x1fU)) >> 5 <
            iVar16) goto LAB_14ae13c00;
        uVar35 = (puVar33 + 1)[lVar22];
      }
      uVar25 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_438 = (int)lVar22;
      uVar23 = local_438 + -1 + uVar29;
      if ((int)(uint)uStack_2c0 < (int)uVar23) {
        uVar23 = (uint)uStack_2c0;
      }
    }
LAB_14ae13c00:
    while( true ) {
      pTVar19 = local_3b0;
      if (*(int *)&(local_3b0->Elements).field_0x8 - *(int *)&(local_3b0->Elements).field_0x34 !=
          (int)uStack_388) {
        local_4e7 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4e7);
      }
      uVar31 = uStack_250;
      FVar13 = FStack_260.SecondaryData;
      uVar11 = FStack_260._0_8_;
      uVar10 = local_268;
      uVar25 = uStack_270;
      puVar33 = local_278;
      uVar9 = local_298._24_8_;
      uVar8 = local_298._16_8_;
      uVar7 = local_298._8_8_;
      uVar3 = local_298._0_8_;
      if (((TStack_3a8.CurrentBitIndex == uVar23) &&
          (TStack_3a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10))) &&
         (pTVar19 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2e8)) break;
      local_4e0[0] = *(uint *)(*(longlong *)&pTVar19->Elements +
                              (longlong)TStack_3a8.CurrentBitIndex * 0xc);
      lVar22 = (longlong)(int)local_4e0[0];
      uVar35 = 0;
      if ((int)local_4e0[0] < (int)local_1f0) {
        uVar35 = ~local_4e0[0] >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      pFVar28 = local_1f8.Data + lVar22 * 0x10;
      puVar30 = *(uint **)&pFVar28->field_0x0;
      iVar16 = *(int *)(pFVar28 + 8);
      puVar33 = puVar30 + iVar16;
      while( true ) {
        if (*(int *)(pFVar28 + 8) != iVar16) {
          local_4e6 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_4e6)
          ;
        }
        if (puVar30 == puVar33) break;
        local_4b0[0] = *puVar30;
        lVar22 = (longlong)(int)local_4b0[0];
        uVar35 = 0;
        if ((int)local_4b0[0] < (int)local_1d0) {
          uVar35 = ~local_4b0[0] >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        pFVar26 = local_1d8.Data + lVar22 * 4;
        if (*(int *)pFVar26 != -1) {
          if ((*(int *)pFVar26 < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ReferencerDependencyCount > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                                  ,0x7d,L""), bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          *(int *)pFVar26 = *(int *)pFVar26 + -1;
          if (*(int *)pFVar26 == 0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_298,&local_430
                       ,(bool *)local_4b0);
          }
        }
        puVar30 = puVar30 + 1;
      }
      local_4a8[0] = local_4e0[0];
      iVar16 = local_248._8_4_ - local_214;
      if (iVar16 != 0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_248,local_4e0[0],
                   (int *)local_4a8);
      }
      if ((local_248._8_4_ - local_214 != iVar16 + -1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("RemainingVertices.Num() == RemainingNum - 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                              ,0x88,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      if (((local_4d8.Data <= (FScriptContainerElement *)local_4e0) &&
          ((FScriptContainerElement *)local_4e0 < local_4d8.Data + (longlong)local_4d0._4_4_ * 4))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      iVar16 = (int)local_4d0;
      if ((int)local_4d0 == local_4d0._4_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_4d8,(int *)((longlong)&local_4d0 + 4));
      }
      local_4d0 = CONCAT44(local_4d0._4_4_,iVar16 + 1);
      *(uint *)(local_4d8.Data + (longlong)iVar16 * 4) = local_4e0[0];
      TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
    }
    iVar16 = local_248._8_4_ - local_214;
    local_298._0_8_ = local_2e8._0_8_;
    local_298._8_8_ = local_2e8._8_8_;
    local_278 = local_2c8;
    uStack_270 = uStack_2c0;
    local_298._16_8_ = local_2e8._16_8_;
    local_298._24_8_ = local_2e8._24_8_;
    FStack_260.SecondaryData = FStack_2b0.SecondaryData;
    uStack_250 = uStack_2a0;
    local_268 = local_2b8;
    FStack_260.InlineData[0] = FStack_2b0.InlineData[0];
    FStack_260.InlineData[1] = FStack_2b0.InlineData[1];
    FStack_260.InlineData[2] = FStack_2b0.InlineData[2];
    FStack_260.InlineData[3] = FStack_2b0.InlineData[3];
    FStack_260._padding_ = FStack_2b0._padding_;
    uVar12 = FStack_260._0_8_;
    local_2e8._0_8_ = uVar3;
    local_2e8._8_8_ = uVar7;
    local_2e8._16_8_ = uVar8;
    local_2e8._24_8_ = uVar9;
    local_2c8 = puVar33;
    uStack_2c0 = uVar25;
    local_2b8 = uVar10;
    FStack_260.InlineData[0] = (uchar)uVar11;
    FStack_260.InlineData[1] = SUB81(uVar11,1);
    FStack_260.InlineData[2] = SUB81(uVar11,2);
    FStack_260.InlineData[3] = SUB81(uVar11,3);
    FStack_260._padding_ = SUB84(uVar11,4);
    FStack_2b0.InlineData[0] = FStack_260.InlineData[0];
    FStack_2b0.InlineData[1] = FStack_260.InlineData[1];
    FStack_2b0.InlineData[2] = FStack_260.InlineData[2];
    FStack_2b0.InlineData[3] = FStack_260.InlineData[3];
    FStack_2b0._padding_ = FStack_260._padding_;
    FStack_2b0.SecondaryData = FVar13;
    uStack_2a0 = uVar31;
    param_1 = local_428;
    param_3 = local_4a0;
    uVar35 = local_49c;
    FStack_260._0_8_ = uVar12;
  } while( true );
}

// KahnTopologicalSort_CreateWorkingGraph<TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_>,`Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies'::__l2::FSubgraphDependencyLookup> @ 14ae143f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
AlgoImpl::
KahnTopologicalSort_CreateWorkingGraph<TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_>,_Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies_::__l2::FSubgraphDependencyLookup>
          (FKahnContext *param_1,
          TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FSubgraphDependencyLookup *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  FIdentityFunctor FVar1;
  code *pcVar2;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  undefined1 auStackY_1c8 [32];
  TLess<void> local_178;
  FIdentityFunctor local_177 [3];
  uint local_174;
  undefined1 local_170;
  undefined1 local_16f [3];
  undefined4 local_16c;
  int local_168;
  uint local_164;
  TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_> local_160;
  uint local_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_148;
  undefined4 local_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_130;
  TArray<int,TSizedDefaultAllocator<32>_> *local_128;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_120;
  FScriptContainerElement *local_118;
  undefined4 local_110;
  int local_10c;
  int local_108 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  FScriptContainerElement *local_f8;
  TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_> *local_f0;
  TMultiMap<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>_>
  *local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  FScriptContainerElement *local_b8;
  undefined4 *local_b0;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar10 = param_2->ArrayNum;
  local_120 = &param_1->Referencers;
  uVar11 = 0;
  local_128 = &param_1->DependencyCount;
  local_130 = &param_1->Dependencies;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_100 = param_4;
  local_f0 = param_2;
  local_e8 = &param_3->DependencyMap;
  if (uVar10 == 0) goto LAB_14ae146a5;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar10);
  uVar16 = 1;
  if (3 < uVar10) {
    uVar16 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_110 = (undefined4)lVar18;
    uVar16 = (ulonglong)(uint)(1 << ((byte)lVar18 & 0x1f));
  }
  uVar9 = (uint)uVar16;
  if ((local_60 != 0) && ((int)uVar9 <= (int)local_60)) goto LAB_14ae146a5;
  local_60 = uVar9;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar9 != 0) {
    uVar19 = uVar9;
    if (uVar9 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_14ae144f0;
      }
    }
    else {
LAB_14ae144f0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar19,4);
    }
    if (0 < (int)uVar9) {
      uVar13 = uVar11;
      do {
        FVar22.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar22.Data = local_68.Data;
        }
        uVar8 = (longlong)(int)uVar9 - 1U & uVar13;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(FVar22.Data + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_150 = 0;
    uStack_14c = 1;
    uStack_13c = 0;
    uStack_138 = 0;
    if (local_80 != 0) {
      FVar20 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_88;
      }
      uVar9 = *(uint *)FVar20;
      uVar16 = uVar11;
      while (uVar9 == 0) {
        uStack_138 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_138;
        iVar7 = (int)uVar11;
        local_150 = iVar7 + 1;
        uVar11 = (ulonglong)local_150;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_150)
        goto LAB_14ae145e1;
        uVar9 = ((uint *)((longlong)FVar20 + 4))[iVar7];
      }
      uStack_14c = -uVar9 & uVar9;
      uVar11 = (ulonglong)uStack_14c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_10c = (int)lVar18;
      uStack_13c = local_10c + -1 + uStack_138;
      uVar11 = (ulonglong)uStack_13c;
      if ((int)local_80 < (int)uStack_13c) {
LAB_14ae145e1:
        uVar11 = (ulonglong)local_80;
        uStack_13c = local_80;
      }
    }
    local_140 = 0xffffffff;
    local_e0 = (longlong *)local_a8;
    local_d8._padding_ = CONCAT44(uStack_14c,local_150);
    local_d8.CurrentBitIndex = uStack_13c;
    local_d8.UnvisitedBitMask = 0xffffffff;
    local_d8._28_4_ = uStack_134;
    local_d8.BaseBitIndex = uStack_138;
    local_d8.Array = pTStack_148;
    if ((int)uVar11 < (int)local_80) {
      do {
        iVar7 = (int)uVar11;
        lVar18 = *local_e0 + (longlong)iVar7 * 0x18;
        uVar11 = *(ulonglong *)(*local_e0 + (longlong)iVar7 * 0x18);
        uVar9 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_60 - 1;
        *(uint *)(lVar18 + 0x14) = uVar9;
        FVar22.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar22.Data = local_68.Data;
        }
        uVar11 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar18 + 0x10) = *(undefined4 *)(FVar22.Data + uVar11 * 4);
        *(int *)(FVar22.Data + uVar11 * 4) = iVar7;
        local_d8.UnvisitedBitMask = local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
        uVar11 = (ulonglong)(uint)local_d8.CurrentBitIndex;
      } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
    }
  }
LAB_14ae146a5:
  iVar7 = param_2->ArrayNum;
  local_174 = 0;
  pFVar21 = (param_2->AllocatorInstance).Data;
  pFVar17 = pFVar21 + (longlong)iVar7 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar7) {
      local_178 = (TLess<void>)0x0;
      `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_178);
    }
    if (pFVar21 == pFVar17) break;
    uVar11 = *(ulonglong *)pFVar21;
    local_16c = 0xffffffff;
    uVar9 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    if (local_a8._8_4_ != local_74) {
      FVar22.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar22.Data = local_68.Data;
      }
      iVar6 = *(int *)(FVar22.Data + (ulonglong)(local_60 - 1 & uVar9) * 4);
      while (iVar6 != -1) {
        pFVar15 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar6 * 0x18);
        if (*(ulonglong *)(local_a8._0_8_ + (longlong)iVar6 * 0x18) == uVar11) {
          if (pFVar15 != (FScriptContainerElement *)0x0) goto LAB_14ae147af;
          break;
        }
        iVar6 = *(int *)(pFVar15 + 0x10);
      }
    }
    local_b0 = &local_16c;
    local_b8 = pFVar21;
    TSet<TTuple<FMetasoundFrontendGraphClass_const_*,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,int_&&>_>
              ((TSet<TTuple<FMetasoundFrontendGraphClass_const_*,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,int,0>,FDefaultSetAllocator>
                *)local_a8,(uint)&local_168,
               (TPairInitializer<FMetasoundFrontendGraphClass_const_*_const_&,int_&&> *)
               (ulonglong)uVar9,(bool *)&local_b8);
    pFVar15 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)local_168 * 0x18);
LAB_14ae147af:
    if ((*(int *)(pFVar15 + 8) != -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExistingHandle == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                           ,0xb7,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar21 = pFVar21 + 8;
    *(uint *)(pFVar15 + 8) = local_174;
    local_174 = local_174 + 1;
  }
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_120,uVar10,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_130,uVar10,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(local_128,uVar10,Default);
  local_164 = param_2->ArrayNum;
  uVar11 = (ulonglong)(int)local_164;
  pFVar17 = (param_2->AllocatorInstance).Data;
  local_174 = 0;
  local_f8 = pFVar17 + uVar11 * 8;
  FVar1 = local_177[0];
  do {
    pFVar21 = local_f8;
    local_118 = pFVar17;
    if (param_2->ArrayNum != (int)uVar11) {
      local_170 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_170);
    }
    if (pFVar17 == pFVar21) {
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      *(undefined4 *)&(param_3->DependencyMap).field_0x48 = 0;
      if (*(void **)&(param_3->DependencyMap).field_0x40 != (void *)0x0) {
        FMemory::Free(*(void **)&(param_3->DependencyMap).field_0x40);
      }
      TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)param_3);
      return;
    }
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.ArrayNum = 0;
    local_160.ArrayMax = 0;
    TMultiMap<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*,1>_>
    ::MultiFind<TSizedDefaultAllocator<32>_>
              (&param_3->DependencyMap,*(FMetasoundFrontendGraphClass **)pFVar17,&local_160,false);
    pTVar3 = local_130;
    lVar18 = (longlong)(int)local_174;
    uVar10 = 0;
    if ((int)local_174 < local_130->ArrayNum) {
      uVar10 = ~local_174 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = local_160.ArrayNum;
    pFVar21 = (pTVar3->AllocatorInstance).Data + lVar18 * 0x10;
    pFVar17 = local_160.AllocatorInstance.Data + (longlong)local_160.ArrayNum * 8;
    FVar22.Data = local_160.AllocatorInstance.Data;
    while( true ) {
      if (local_160.ArrayNum != iVar7) {
        local_16f[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_16f);
      }
      if (FVar22.Data == pFVar17) break;
      uVar11 = *(ulonglong *)FVar22.Data;
      uVar10 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      if (local_a8._8_4_ == local_74) {
LAB_14ae14a32:
        FVar22.Data = FVar22.Data + 8;
      }
      else {
        FVar14.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_68.Data;
        }
        iVar6 = *(int *)(FVar14.Data + (ulonglong)(local_60 - 1 & (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar6 == -1) goto LAB_14ae14a32;
        do {
          pFVar15 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar6 * 0x18);
          if (*(ulonglong *)(local_a8._0_8_ + (longlong)iVar6 * 0x18) == uVar11) {
            pFVar12 = pFVar15 + 8;
            if (pFVar15 == (FScriptContainerElement *)0x0) {
              pFVar12 = (FScriptContainerElement *)0x0;
            }
            if (pFVar12 != (FScriptContainerElement *)0x0) {
              if (((*(FScriptContainerElement **)&pFVar21->field_0x0 <= pFVar12) &&
                  (pFVar12 < *(FScriptContainerElement **)&pFVar21->field_0x0 +
                             (longlong)*(int *)(pFVar21 + 0xc) * 4)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar6 = *(int *)&pFVar21[8].field_0x0;
              if (iVar6 == *(int *)(pFVar21 + 0xc)) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 0xc));
              }
              *(int *)&pFVar21[8].field_0x0 = iVar6 + 1;
              *(undefined4 *)
               (*(FScriptContainerElement **)&pFVar21->field_0x0 + (longlong)iVar6 * 4) =
                   *(undefined4 *)pFVar12;
            }
            goto LAB_14ae14a32;
          }
          iVar6 = *(int *)(pFVar15 + 0x10);
        } while (iVar6 != -1);
        FVar22.Data = FVar22.Data + 8;
      }
    }
    IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
              ((int *)*(FScriptContainerElement **)&pFVar21->field_0x0,*(int *)&pFVar21[8].field_0x0
               ,FVar1,local_178);
    uVar10 = *(uint *)&pFVar21[8].field_0x0;
    pFVar17 = *(FScriptContainerElement **)&pFVar21->field_0x0;
    uVar9 = uVar10;
    if ((int)uVar10 < 2) {
LAB_14ae14ae1:
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < (int)uVar10) {
        uVar10 = uVar10 - uVar9;
        if (((int)(uVar10 | uVar9) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar10 != 0) {
          iVar7 = (*(int *)&pFVar21[8].field_0x0 - uVar9) - uVar10;
          if (iVar7 != 0) {
            memmove(*(FScriptContainerElement **)&pFVar21->field_0x0 + (longlong)(int)uVar9 * 4,
                    *(FScriptContainerElement **)&pFVar21->field_0x0 + (longlong)(int)uVar9 * 4 +
                    (longlong)(int)uVar10 * 4,(longlong)iVar7 << 2);
          }
          *(uint *)&pFVar21[8].field_0x0 = *(int *)&pFVar21[8].field_0x0 - uVar10;
        }
      }
    }
    else {
      pFVar15 = pFVar17 + 4;
      pFVar12 = pFVar17;
      if (pFVar15 != pFVar17 + (longlong)(int)uVar10 * 4) {
        do {
          if ((*(int *)pFVar12 != *(int *)pFVar15) && (pFVar12 = pFVar12 + 4, pFVar12 != pFVar15)) {
            *(int *)pFVar12 = *(int *)pFVar15;
          }
          pFVar15 = pFVar15 + 4;
        } while (pFVar15 != pFVar17 + (longlong)(int)uVar10 * 4);
        uVar10 = *(uint *)&pFVar21[8].field_0x0;
      }
      uVar9 = (uint)((longlong)(pFVar12 + (4 - (longlong)pFVar17)) >> 2);
      if ((int)uVar9 <= (int)uVar10) goto LAB_14ae14ae1;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar9 - uVar10,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 8),
                         (int *)(pFVar21 + 0xc));
      memset(*(FScriptContainerElement **)&pFVar21->field_0x0 + (longlong)iVar7 * 4,0,
             (longlong)(int)(uVar9 - uVar10) << 2);
    }
    pTVar4 = local_128;
    lVar18 = (longlong)(int)local_174;
    iVar7 = *(int *)&pFVar21[8].field_0x0;
    uVar10 = 0;
    if ((int)local_174 < local_128->ArrayNum) {
      uVar10 = ~local_174 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(int *)((pTVar4->AllocatorInstance).Data + lVar18 * 4) = iVar7;
    if (iVar7 == 0) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (local_100,local_108,(bool *)&local_174);
    }
    pTVar3 = local_120;
    pFVar15 = *(FScriptContainerElement **)&pFVar21->field_0x0;
    iVar7 = *(int *)&pFVar21[8].field_0x0;
    pFVar17 = pFVar15 + (longlong)iVar7 * 4;
    while( true ) {
      if (*(int *)&pFVar21[8].field_0x0 != iVar7) {
        local_177[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_177);
      }
      FVar1 = local_177[0];
      if (pFVar15 == pFVar17) break;
      uVar10 = *(uint *)pFVar15;
      uVar9 = 0;
      if ((int)uVar10 < pTVar3->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
      if (((*(FScriptContainerElement **)&pFVar12->field_0x0 <=
            (FScriptContainerElement *)&local_174) &&
          ((FScriptContainerElement *)&local_174 <
           *(FScriptContainerElement **)&pFVar12->field_0x0 + (longlong)*(int *)(pFVar12 + 0xc) * 4)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)&pFVar12[8].field_0x0;
      if (iVar6 == *(int *)(pFVar12 + 0xc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
      }
      *(int *)&pFVar12[8].field_0x0 = iVar6 + 1;
      pFVar15 = pFVar15 + 4;
      *(uint *)(*(FScriptContainerElement **)&pFVar12->field_0x0 + (longlong)iVar6 * 4) = local_174;
    }
    local_174 = local_174 + 1;
    if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.AllocatorInstance.Data);
    }
    uVar11 = (ulonglong)local_164;
    pFVar17 = local_118 + 8;
    param_2 = local_f0;
    param_3 = (FSubgraphDependencyLookup *)local_e8;
  } while( true );
}

// LowerBoundInternal<TTuple<FGuid,int>_const_,int,FGuid,TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae14dc0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FGuid,int>_const_,int,FGuid,TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TTuple<FGuid,int> *param_1,int param_2,FGuid *param_3,FKeyForward param_4,
          TLess<FGuid_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < param_3->A) {
        bVar4 = true;
      }
      else if (param_3->A < *(uint *)(param_1 + iVar1)) {
        bVar4 = false;
      }
      else if (*(uint *)&param_1[iVar1].field_0x4 < param_3->B) {
        bVar4 = true;
      }
      else if (param_3->B < *(uint *)&param_1[iVar1].field_0x4) {
        bVar4 = false;
      }
      else if (*(uint *)&param_1[iVar1].field_0x8 < param_3->C) {
        bVar4 = true;
      }
      else if (param_3->C < *(uint *)&param_1[iVar1].field_0x8) {
        bVar4 = false;
      }
      else {
        bVar4 = *(uint *)&param_1[iVar1].field_0xc < param_3->D;
      }
      if (bVar4) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>_const_,int,FGuid,TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae14e60

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>_const_,int,FGuid,TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *param_1,int param_2,
          FGuid *param_3,FKeyForward param_4,TLess<FGuid_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *pTVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      pTVar3 = param_1 + iVar1;
      if (*(uint *)pTVar3 < param_3->A) {
        bVar5 = true;
      }
      else if (param_3->A < *(uint *)pTVar3) {
        bVar5 = false;
      }
      else if (*(uint *)&pTVar3->field_0x4 < param_3->B) {
        bVar5 = true;
      }
      else if (param_3->B < *(uint *)&pTVar3->field_0x4) {
        bVar5 = false;
      }
      else if (*(uint *)&pTVar3->field_0x8 < param_3->C) {
        bVar5 = true;
      }
      else if (param_3->C < *(uint *)&pTVar3->field_0x8) {
        bVar5 = false;
      }
      else {
        bVar5 = *(uint *)&pTVar3->field_0xc < param_3->D;
      }
      if (bVar5) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>_const_,int,FGuid,TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae14f00

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>_const_,int,FGuid,TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,int param_2,
          FGuid *param_3,FKeyForward param_4,TLess<FGuid_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      pTVar3 = param_1 + iVar1;
      if (*(uint *)pTVar3 < param_3->A) {
        bVar5 = true;
      }
      else if (param_3->A < *(uint *)pTVar3) {
        bVar5 = false;
      }
      else if (*(uint *)&pTVar3->field_0x4 < param_3->B) {
        bVar5 = true;
      }
      else if (param_3->B < *(uint *)&pTVar3->field_0x4) {
        bVar5 = false;
      }
      else if (*(uint *)&pTVar3->field_0x8 < param_3->C) {
        bVar5 = true;
      }
      else if (param_3->C < *(uint *)&pTVar3->field_0x8) {
        bVar5 = false;
      }
      else {
        bVar5 = *(uint *)&pTVar3->field_0xc < param_3->D;
      }
      if (bVar5) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>_const_,int,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae14fa0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>_const_,int,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *param_1,
          int param_2,FGuid *param_3,FKeyForward param_4,TLess<FGuid_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *pTVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      pTVar3 = param_1 + iVar1;
      if (*(uint *)pTVar3 < param_3->A) {
        bVar5 = true;
      }
      else if (param_3->A < *(uint *)pTVar3) {
        bVar5 = false;
      }
      else if (*(uint *)&pTVar3->field_0x4 < param_3->B) {
        bVar5 = true;
      }
      else if (param_3->B < *(uint *)&pTVar3->field_0x4) {
        bVar5 = false;
      }
      else if (*(uint *)&pTVar3->field_0x8 < param_3->C) {
        bVar5 = true;
      }
      else if (param_3->C < *(uint *)&pTVar3->field_0x8) {
        bVar5 = false;
      }
      else {
        bVar5 = *(uint *)&pTVar3->field_0xc < param_3->D;
      }
      if (bVar5) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>_const_,int,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ae15040

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>_const_,int,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *param_1,
          int param_2,FGuid *param_3,FKeyForward param_4,TLess<FGuid_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *pTVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      pTVar3 = param_1 + iVar1;
      if (*(uint *)pTVar3 < param_3->A) {
        bVar5 = true;
      }
      else if (param_3->A < *(uint *)pTVar3) {
        bVar5 = false;
      }
      else if (*(uint *)&pTVar3->field_0x4 < param_3->B) {
        bVar5 = true;
      }
      else if (param_3->B < *(uint *)&pTVar3->field_0x4) {
        bVar5 = false;
      }
      else if (*(uint *)&pTVar3->field_0x8 < param_3->C) {
        bVar5 = true;
      }
      else if (param_3->C < *(uint *)&pTVar3->field_0x8) {
        bVar5 = false;
      }
      else {
        bVar5 = *(uint *)&pTVar3->field_0xc < param_3->D;
      }
      if (bVar5) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>_const_,int,Metasound::Frontend::FNodeClassRegistryKey,TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>::FKeyForward,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_> @ 14ae150e0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>_const_,int,Metasound::Frontend::FNodeClassRegistryKey,TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>::FKeyForward,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
          (TTuple<Metasound::Frontend::FNodeClassRegistryKey,int> *param_1,int param_2,
          FNodeClassRegistryKey *param_3,FKeyForward param_4,
          TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = Metasound::Frontend::operator<((FNodeClassRegistryKey *)(param_1 + iVar1),param_3);
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// RemoveAll<`Metasound::Frontend::FGraphController::RemoveNode'::__l5::<lambda_1>_> @ 14ae15340

int __thiscall
TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_>::
RemoveAll<_Metasound::Frontend::FGraphController::RemoveNode_::__l5::<lambda_1>_>
          (TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FMetasoundFrontendNode *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  
  iVar1 = this->ArrayNum;
  lVar13 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar6 = param_1->InDesc;
  uVar2 = (pFVar6->ID).D;
  uVar3 = (pFVar6->ID).A;
  uVar4 = (pFVar6->ID).B;
  uVar5 = (pFVar6->ID).C;
  pFVar7 = (this->AllocatorInstance).Data;
  iVar15 = 0;
  if ((((uVar2 == *(uint *)(pFVar7 + 0xc) && uVar5 == *(uint *)(pFVar7 + 8)) &&
       uVar4 == *(uint *)(pFVar7 + 4)) && uVar3 == *(uint *)pFVar7) ||
     (((uVar2 == *(uint *)(pFVar7 + 0x2c) && uVar5 == *(uint *)(pFVar7 + 0x28)) &&
      uVar4 == *(uint *)(pFVar7 + 0x24)) && uVar3 == *(uint *)(pFVar7 + 0x20))) {
    bVar14 = 0;
  }
  else {
    bVar14 = 1;
  }
  lVar10 = 0;
  iVar11 = 0;
  do {
    lVar10 = lVar10 + 1;
    iVar12 = iVar11 + 1;
    if (lVar10 < lVar13) {
      pFVar6 = param_1->InDesc;
      uVar2 = (pFVar6->ID).A;
      uVar3 = (pFVar6->ID).B;
      uVar4 = (pFVar6->ID).C;
      uVar5 = (pFVar6->ID).D;
      pFVar8 = pFVar7 + (lVar10 * 0x10 + 2) * 4;
      do {
        if ((((uVar5 == *(uint *)(pFVar8 + 4) && uVar3 == *(uint *)(pFVar8 + -4)) &&
             uVar2 == *(uint *)(pFVar8 + -8)) && uVar4 == *(uint *)pFVar8) ||
           (((uVar5 == *(uint *)(pFVar8 + 0x24) && uVar4 == *(uint *)(pFVar8 + 0x20)) &&
            uVar3 == *(uint *)(pFVar8 + 0x1c)) && uVar2 == *(uint *)(pFVar8 + 0x18))) {
          bVar9 = 0;
        }
        else {
          bVar9 = 1;
        }
        if (bVar14 != bVar9) break;
        iVar12 = iVar12 + 1;
        lVar10 = lVar10 + 1;
        pFVar8 = pFVar8 + 0x40;
      } while (lVar10 < lVar13);
    }
    if (bVar14 != 0) {
      if (iVar15 != iVar11) {
        memmove(pFVar7 + (longlong)iVar15 * 0x40,pFVar7 + (longlong)iVar11 * 0x40,
                (longlong)(iVar12 - iVar11) << 6);
      }
      iVar15 = iVar15 + (iVar12 - iVar11);
    }
    bVar14 = bVar14 ^ 1;
    iVar11 = iVar12;
    if (lVar13 <= lVar10) {
      this->ArrayNum = iVar15;
      return iVar1 - iVar15;
    }
  } while( true );
}

// RemoveAllSwap<`Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>'::__l2::<lambda_1>_> @ 14ae15500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>_::__l2::<lambda_1>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1,EAllowShrinking param_2
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    iVar7 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      if (*(int *)((this->AllocatorInstance).Data + lVar9) == *param_1->LastIndex) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar7 = ~uVar8 + this->ArrayNum;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 4,pFVar1 + (longlong)(this->ArrayNum - iVar7) * 4,
                  (longlong)iVar7 << 2);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      }
      iVar7 = this->ArrayNum;
    } while ((int)uVar8 < iVar7);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&this->AllocatorInstance,iVar7,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// RemoveAllSwap<`Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>'::__l2::<lambda_1>_> @ 14ae15690

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>_::__l2::<lambda_1>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1,EAllowShrinking param_2
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    iVar7 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      if (*(int *)((this->AllocatorInstance).Data + lVar9) == *param_1->LastIndex) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar7 = ~uVar8 + this->ArrayNum;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 4,pFVar1 + (longlong)(this->ArrayNum - iVar7) * 4,
                  (longlong)iVar7 << 2);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      }
      iVar7 = this->ArrayNum;
    } while ((int)uVar8 < iVar7);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&this->AllocatorInstance,iVar7,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// RemoveAllSwap<`Metasound::Frontend::FBaseInputController::Disconnect'::__l5::<lambda_1>_> @ 14ae15820

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_Metasound::Frontend::FBaseInputController::Disconnect_::__l5::<lambda_1>_>
          (TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  iVar9 = iVar6;
  if (0 < iVar6) {
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar9) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      bVar4 = `Metasound::Frontend::FBaseInputController::Disconnect'::__l5::<lambda_1>::operator()
                        (param_1,(FMetasoundFrontendEdge *)
                                 ((this->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x40));
      if (bVar4) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar9 = this->ArrayNum + ~uVar8;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 0x40,
                  pFVar1 + (longlong)(this->ArrayNum - iVar9) * 0x40,(longlong)iVar9 << 6);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
      iVar9 = this->ArrayNum;
    } while ((int)uVar8 < iVar9);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,4,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// RemoveAllSwap<`Metasound::Frontend::FBaseInputController::Disconnect'::__l5::<lambda_1>_> @ 14ae159c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_Metasound::Frontend::FBaseInputController::Disconnect_::__l5::<lambda_1>_>
          (TArray<FMetasoundFrontendEdge,TSizedDefaultAllocator<32>_> *this,
          <lambda_1>_conflict *param_1,EAllowShrinking param_2)

{
  FGuid *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar7 = this->ArrayNum;
  bVar4 = false;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    iVar8 = iVar7;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
      }
      pFVar1 = param_1->NodeID;
      pFVar2 = (this->AllocatorInstance).Data;
      if ((((*(uint *)(pFVar2 + lVar10 + 0x2c) == pFVar1->D &&
            *(uint *)(pFVar2 + lVar10 + 0x28) == pFVar1->C) &&
           *(uint *)(pFVar2 + lVar10 + 0x24) == pFVar1->B) &&
           *(uint *)(pFVar2 + lVar10 + 0x20) == pFVar1->A) &&
         (pFVar1 = param_1->VertexID,
         ((pFVar1->D == *(uint *)(pFVar2 + lVar10 + 0x3c) &&
          pFVar1->C == *(uint *)(pFVar2 + lVar10 + 0x38)) &&
         pFVar1->B == *(uint *)(pFVar2 + lVar10 + 0x34)) &&
         *(uint *)(pFVar2 + lVar10 + 0x30) == pFVar1->A)) {
        bVar4 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
        }
        pFVar2 = (this->AllocatorInstance).Data;
        iVar8 = ~uVar9 + this->ArrayNum;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar9 * 0x40,
                  pFVar2 + (longlong)(this->ArrayNum - iVar8) * 0x40,(longlong)iVar8 << 6);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x40;
      }
      iVar8 = this->ArrayNum;
    } while ((int)uVar9 < iVar8);
    if ((bVar4) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,4,&this->AllocatorInstance,iVar8,&this->ArrayMax);
    }
  }
  return iVar7 - this->ArrayNum;
}

// RemoveAllSwap<`Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>'::__l30::<lambda_2>_> @ 14ae15bb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>_::__l30::<lambda_2>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,<lambda_2> *param_1,EAllowShrinking param_2
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    iVar7 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      if (*(int *)((this->AllocatorInstance).Data + lVar9) == *param_1->SwapIndex) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar7 = ~uVar8 + this->ArrayNum;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 4,pFVar1 + (longlong)(this->ArrayNum - iVar7) * 4,
                  (longlong)iVar7 << 2);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      }
      iVar7 = this->ArrayNum;
    } while ((int)uVar8 < iVar7);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&this->AllocatorInstance,iVar7,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// RemoveAllSwap<`Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>'::__l30::<lambda_2>_> @ 14ae15d40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>_::__l30::<lambda_2>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,<lambda_2> *param_1,EAllowShrinking param_2
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    iVar7 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      if (*(int *)((this->AllocatorInstance).Data + lVar9) == *param_1->SwapIndex) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar7 = ~uVar8 + this->ArrayNum;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 4,pFVar1 + (longlong)(this->ArrayNum - iVar7) * 4,
                  (longlong)iVar7 << 2);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      }
      iVar7 = this->ArrayNum;
    } while ((int)uVar8 < iVar7);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&this->AllocatorInstance,iVar7,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle> @ 14ae160b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Metasound::Frontend::DocumentCachePrivate::
RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>
          (FMetasoundFrontendVertexHandle *param_1,int param_2,
          FMetasoundFrontendVertexHandle *param_3,int param_4,
          TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
          *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int local_res10 [4];
  int local_res20 [2];
  undefined1 local_38 [8];
  <lambda_1> local_30;
  <lambda_2> local_28 [2];
  
  local_30.LastIndex = local_res20;
  uVar9 = (param_1->NodeID).D ^ (param_3->NodeID).D;
  uVar5 = (param_1->NodeID).C ^ (param_3->NodeID).C;
  uVar6 = (param_1->NodeID).B ^ (param_3->NodeID).B;
  uVar7 = (param_1->NodeID).A ^ (param_3->NodeID).A;
  local_res10[0] = param_2;
  local_res20[0] = param_4;
  if (param_2 == param_4) {
    if (((((uVar9 != 0 || uVar5 != 0) || uVar6 != 0) || uVar7 != 0) ||
        ((((param_1->VertexID).D != (param_3->VertexID).D ||
          (param_1->VertexID).C != (param_3->VertexID).C) ||
         (param_1->VertexID).B != (param_3->VertexID).B) ||
         (param_3->VertexID).A != (param_1->VertexID).A)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSwapKey == InLastKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                           ,0x32,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked((TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            *)param_5,param_3);
    TArray<int,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>_::__l2::<lambda_1>_>
              (pTVar8,&local_30,No);
    if ((pTVar8->ArrayNum == 0) && (*(int *)&param_5->field_0x8 != *(int *)&param_5->field_0x34)) {
      uVar5 = (param_3->NodeID).A;
      TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FMetasoundFrontendVertexHandle>
                ((TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)param_5,uVar5 * 0x40 + (uVar5 >> 2) + (param_3->VertexID).D + 0x9e3779b9 ^ uVar5
                 ,param_3);
      return;
    }
  }
  else if ((((uVar9 == 0 && uVar5 == 0) && uVar6 == 0) && uVar7 == 0) &&
          ((((param_1->VertexID).D == (param_3->VertexID).D &&
            (param_1->VertexID).C == (param_3->VertexID).C) &&
           (param_1->VertexID).B == (param_3->VertexID).B) &&
           (param_3->VertexID).A == (param_1->VertexID).A)) {
    pTVar8 = TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked((TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            *)param_5,param_3);
    TArray<int,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>_::__l2::<lambda_1>_>
              (pTVar8,&local_30,No);
    if ((pTVar8->ArrayNum == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Indices.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                           ,0x40,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_28[0].SwapIndex = local_res10;
    pTVar8 = TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked((TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            *)param_5,param_1);
    TArray<int,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>_::__l30::<lambda_2>_>
              (pTVar8,local_28,No);
    if ((pTVar8->ArrayNum == 0) && (*(int *)&param_5->field_0x8 != *(int *)&param_5->field_0x34)) {
      uVar5 = (param_1->NodeID).A;
      TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FMetasoundFrontendVertexHandle>
                ((TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)param_5,uVar5 * 0x40 + (uVar5 >> 2) + (param_1->VertexID).D + 0x9e3779b9 ^ uVar5
                 ,param_1);
    }
    pTVar8 = TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked((TMapBase<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            *)param_5,param_3);
    pFVar10 = (pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_38);
      }
      if (pFVar10 == pFVar1) break;
      if (*(int *)pFVar10 == local_res20[0]) {
        *(int *)pFVar10 = local_res10[0];
      }
      pFVar10 = pFVar10 + 4;
    }
  }
  return;
}

// RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid> @ 14ae16300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Metasound::Frontend::DocumentCachePrivate::
RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>
          (FGuid *param_1,int param_2,FGuid *param_3,int param_4,
          TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
          *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int local_res10 [2];
  int local_res20 [2];
  undefined1 local_38 [8];
  <lambda_1> local_30;
  <lambda_2> local_28 [2];
  
  local_30.LastIndex = local_res20;
  uVar5 = param_1->C ^ param_3->C;
  uVar10 = param_1->D ^ param_3->D;
  uVar6 = param_1->B ^ param_3->B;
  uVar7 = param_1->A ^ param_3->A;
  local_res10[0] = param_2;
  local_res20[0] = param_4;
  if (param_2 == param_4) {
    if ((((uVar10 != 0 || uVar5 != 0) || uVar6 != 0) || uVar7 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSwapKey == InLastKey",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                           ,0x32,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
             ::Find(param_5,param_3);
    if ((pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x141,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>_::__l2::<lambda_1>_>
              (pTVar8,&local_30,No);
    if (pTVar8->ArrayNum == 0) {
      TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
      ::Remove(param_5,param_3);
      return;
    }
  }
  else if (((uVar10 == 0 && uVar5 == 0) && uVar6 == 0) && uVar7 == 0) {
    pTVar8 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
             ::Find(param_5,param_3);
    if ((pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x141,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>_::__l2::<lambda_1>_>
              (pTVar8,&local_30,No);
    if ((pTVar8->ArrayNum == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Indices.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                           ,0x40,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_28[0].SwapIndex = local_res10;
    pTVar8 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
             ::Find(param_5,param_1);
    if ((pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x141,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_Metasound::Frontend::DocumentCachePrivate::RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>_::__l30::<lambda_2>_>
              (pTVar8,local_28,No);
    if (pTVar8->ArrayNum == 0) {
      TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
      ::Remove(param_5,param_1);
    }
    pTVar8 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
             ::Find(param_5,param_3);
    if ((pTVar8 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x141,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = (pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 4;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_38);
      }
      if (pFVar9 == pFVar1) break;
      if (*(int *)pFVar9 == local_res20[0]) {
        *(int *)pFVar9 = local_res10[0];
      }
      pFVar9 = pFVar9 + 4;
    }
  }
  return;
}

// RemoveSwapMapIndexChecked<TMap<FMetasoundFrontendVertexHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>_>,FMetasoundFrontendVertexHandle> @ 14ae16590

void __cdecl
Metasound::Frontend::DocumentCachePrivate::
RemoveSwapMapIndexChecked<TMap<FMetasoundFrontendVertexHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>_>,FMetasoundFrontendVertexHandle>
          (FMetasoundFrontendVertexHandle *param_1,FMetasoundFrontendVertexHandle *param_2,
          TMap<FMetasoundFrontendVertexHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>_>
          *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  uVar4 = (param_1->NodeID).A;
  uVar9 = 0xffffffff;
  uVar4 = TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                    ((TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
                      *)param_3,
                     (param_1->VertexID).D + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4,
                     param_1);
  if (uVar4 != 0xffffffff) {
    uVar9 = *(undefined4 *)((longlong)(int)uVar4 * 0x2c + 0x20 + *(longlong *)param_3);
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)&param_3->field_0x28)) {
      puVar6 = *(undefined1 **)&param_3->field_0x20;
      if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
        puVar6 = &param_3->field_0x10;
      }
      if ((*(uint *)(puVar6 + (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar4 & 0x1f) & 1) != 0) goto LAB_14ae16687;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Elements.IsValidIndex(ElementIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14ae16687:
    lVar8 = *(longlong *)param_3 + (longlong)(int)uVar4 * 0x2c;
    puVar6 = *(undefined1 **)&param_3->field_0x40;
    if (*(undefined1 **)&param_3->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &param_3->field_0x38;
    }
    puVar7 = (uint *)(puVar6 + (longlong)*(int *)(lVar8 + 0x28) * 4);
    do {
      uVar1 = *puVar7;
      if (uVar1 == 0xffffffff) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else if (uVar1 == uVar4) {
        *puVar7 = *(uint *)(lVar8 + 0x24);
        TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)param_3,uVar4,1);
        goto LAB_14ae16710;
      }
      puVar7 = (uint *)(*(longlong *)param_3 + 0x24 + (longlong)(int)uVar1 * 0x2c);
    } while( true );
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bRemoved",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                     ,0x1a,L"Failed to remove/swap expected MetaSound Document Cache key/value pair"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ae16710:
  uVar4 = (param_2->NodeID).A;
  if (((((param_1->NodeID).D == (param_2->NodeID).D && (param_1->NodeID).C == (param_2->NodeID).C)
       && (param_1->NodeID).B == (param_2->NodeID).B) && uVar4 == (param_1->NodeID).A) &&
     ((((param_2->VertexID).D == (param_1->VertexID).D &&
       (param_2->VertexID).C == (param_1->VertexID).C) &&
      (param_2->VertexID).B == (param_1->VertexID).B) &&
      (param_1->VertexID).A == (param_2->VertexID).A)) {
    return;
  }
  iVar5 = TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                    ((TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
                      *)param_3,
                     (param_2->VertexID).D + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4,
                     param_2);
  if (iVar5 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar5 * 0x2c + *(longlong *)param_3;
    if (lVar8 != 0) goto LAB_14ae167c8;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ae167c8:
  *(undefined4 *)(lVar8 + 0x20) = uVar9;
  return;
}

// RemoveSwapMapIndexChecked<TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid> @ 14ae167f0

void __cdecl
Metasound::Frontend::DocumentCachePrivate::
RemoveSwapMapIndexChecked<TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>
          (FGuid *param_1,FGuid *param_2,
          TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  FScriptContainerElement *_Dst;
  int iVar6;
  uint uVar7;
  int iVar8;
  FKeyForward local_res8;
  
  iVar8 = -1;
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,int>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (&param_3->Pairs,param_1,local_res8,(TLess<FGuid_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRemoved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                       ,0x1a,
                       L"Failed to remove/swap expected MetaSound Document Cache key/value pair");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    uVar7 = ~uVar3 >> 0x1f;
    uVar4 = 0;
    if ((int)uVar3 < (param_3->Pairs).ArrayNum) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar8 = *(int *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14 + 0x10);
    uVar4 = 0;
    if ((int)uVar3 < (param_3->Pairs).ArrayNum) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    _Dst = (param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x14;
    iVar6 = (param_3->Pairs).ArrayNum + ~uVar3;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x14,(longlong)iVar6 * 0x14);
    }
    piVar5 = &(param_3->Pairs).ArrayNum;
    *piVar5 = *piVar5 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,(ForAnyElementType *)param_3,(param_3->Pairs).ArrayNum,
               &(param_3->Pairs).ArrayMax);
  }
  if (((param_1->D != param_2->D || param_1->C != param_2->C) || param_1->B != param_2->B) ||
      param_1->A != param_2->A) {
    piVar5 = TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::Find
                       (param_3,param_2);
    if (piVar5 == (int *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x141,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *piVar5 = iVar8;
  }
  return;
}

// RemoveSwapMapIndexChecked<TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>,Metasound::Frontend::FNodeClassRegistryKey> @ 14ae169f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Metasound::Frontend::DocumentCachePrivate::
RemoveSwapMapIndexChecked<TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>,Metasound::Frontend::FNodeClassRegistryKey>
          (FNodeClassRegistryKey *param_1,FNodeClassRegistryKey *param_2,
          TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  FKeyForward local_res8;
  
  iVar6 = -1;
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>,Metasound::Frontend::FNodeClassRegistryKey,TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>::FKeyForward,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
                    (&param_3->Pairs,param_1,local_res8,
                     (TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRemoved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                       ,0x1a,
                       L"Failed to remove/swap expected MetaSound Document Cache key/value pair");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    uVar5 = 0;
    if ((int)uVar3 < (param_3->Pairs).ArrayNum) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar6 = *(int *)((param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28 + 0x24);
    TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>::
    RemoveAt(&param_3->Pairs,uVar3,Default);
  }
  if ((((param_2->Type != param_1->Type) ||
       ((param_2->ClassName).Namespace != (param_1->ClassName).Namespace)) ||
      ((param_2->ClassName).Name != (param_1->ClassName).Name)) ||
     ((((param_2->ClassName).Variant != (param_1->ClassName).Variant ||
       ((param_2->Version).Major != (param_1->Version).Major)) ||
      ((param_2->Version).Minor != (param_1->Version).Minor)))) {
    piVar4 = TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
             ::Find(param_3,param_2);
    if (piVar4 == (int *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x141,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *piVar4 = iVar6;
  }
  return;
}

// Reverse<FMetasoundFrontendGraphClass_const_*> @ 14ae16b40

void __cdecl
AlgoImpl::Reverse<FMetasoundFrontendGraphClass_const_*>
          (FMetasoundFrontendGraphClass **param_1,int param_2)

{
  FMetasoundFrontendGraphClass *pFVar1;
  FMetasoundFrontendGraphClass **ppFVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppFVar2 = param_1 + (param_2 + -1);
    do {
      pFVar1 = param_1[lVar3];
      param_1[lVar3] = *ppFVar2;
      lVar3 = lVar3 + 1;
      *ppFVar2 = pFVar1;
      ppFVar2 = ppFVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// StaticEnum<enum_EMetasoundFrontendLiteralType> @ 14ae16ba0

UEnum * __cdecl StaticEnum<enum_EMetasoundFrontendLiteralType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendLiteralType,
                       (UObject *)pUVar1,L"EMetasoundFrontendLiteralType");
  }
  return Z_Registration_Info_UEnum_EMetasoundFrontendLiteralType.OuterSingleton;
}

// TLiteralValueToString<int> @ 14ae16be0

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<int>
          (FString *__return_storage_ptr__,int *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// TLiteralValueToString<float> @ 14ae16c10

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<float>
          (FString *__return_storage_ptr__,float *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// TLiteralValueToString<TObjectPtr<UObject>_> @ 14ae16c40

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<TObjectPtr<UObject>_>
          (FString *__return_storage_ptr__,TObjectPtr<UObject> *param_1)

{
  UObject *this;
  
  this = (param_1->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (this == (UObject *)0x0) {
LAB_14ae16c87:
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    UE::GC::MarkAsReachable(this);
  }
  else if (this == (UObject *)0x0) goto LAB_14ae16c87;
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,__return_storage_ptr__,(UObject *)0x0);
  return __return_storage_ptr__;
}

// TLiteralValueToString<Metasound::FLiteral::FNone> @ 14ae16cb0

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<Metasound::FLiteral::FNone>
          (FString *__return_storage_ptr__,FNone *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// TLiteralValueToString<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14ae16ce0

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TLiteralValueToStringHelper<TArray<int,TSizedDefaultAllocator<32>_>_>::Convert
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TLiteralValueToString<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14ae16d00

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  TLiteralValueToStringHelper<TArray<float,TSizedDefaultAllocator<32>_>_>::Convert
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TLiteralValueToString<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_> @ 14ae16d20

FString * __cdecl
MetasoundFrontendLiteralPrivate::
TLiteralValueToString<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  TLiteralValueToStringHelper<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::Convert
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TLiteralValueToString<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_> @ 14ae16d40

FString * __cdecl
MetasoundFrontendLiteralPrivate::
TLiteralValueToString<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,
          TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_> *param_1)

{
  TLiteralValueToStringHelper<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>::
  Convert(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TLiteralValueToString<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14ae16d60

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TLiteralValueToStringHelper<TArray<FString,TSizedDefaultAllocator<32>_>_>::Convert
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TLiteralValueToString<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14ae16d80

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FString *__return_storage_ptr__,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  TLiteralValueToStringHelper<TArray<bool,TSizedDefaultAllocator<32>_>_>::Convert
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TLiteralValueToString<FString> @ 14ae16da0

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<FString>
          (FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TLiteralValueToString<bool> @ 14ae16dc0

FString * __cdecl
MetasoundFrontendLiteralPrivate::TLiteralValueToString<bool>
          (FString *__return_storage_ptr__,bool *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"true";
  if (*param_1 == false) {
    pwVar1 = L"false";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,float> @ 14ae19380

void __cdecl
Metasound::JsonStructSerializerBackend::
WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,float>
          (TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *param_1,
          FStructSerializerState *param_2,float *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  pFVar2 = param_2->ValueProperty;
  if ((pFVar2 != (FProperty *)0x0) && (pFVar2->ArrayDim < 2)) {
    pFVar8 = FArrayProperty::StaticClass();
    bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
    if ((!bVar6) || (pFVar2->_padding_ == 0)) {
      pFVar2 = param_2->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((!bVar6) || (pFVar2->_padding_ == 0)) {
        pFVar2 = param_2->KeyProperty;
        if (pFVar2 == (FProperty *)0x0) {
          pFVar2 = param_2->ValueProperty;
          pTVar3 = param_1->Object;
          bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
          if (bVar6) {
            ::FName::ToString((FName *)&pFVar2->_padding_,&local_60);
          }
          else {
            ::FString::FString(&local_60,L"None");
          }
          iVar1 = (pTVar3->Stack).ArrayNum;
          uVar9 = iVar1 - 1;
          uVar10 = 0;
          if ((int)uVar9 < iVar1) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                      (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar3,&local_60);
          local_res10[0] = 0x20;
          (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,1);
          EVar7 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteValueOnly(pTVar3,*param_3);
          pTVar3->PreviousTokenWritten = EVar7;
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_70.Data.ArrayNum = 0;
          local_70.Data.ArrayMax = 0;
          (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_70,param_2->KeyData,0,0,0,0,0);
          pTVar3 = param_1->Object;
          iVar1 = (pTVar3->Stack).ArrayNum;
          uVar9 = iVar1 - 1;
          uVar10 = 0;
          if ((int)uVar9 < iVar1) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                      (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar3,&local_70);
          local_res8[0] = 0x20;
          (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res8,1);
          EVar7 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteValueOnly(pTVar3,*param_3);
          pTVar3->PreviousTokenWritten = EVar7;
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14ae19712;
      }
    }
  }
  pTVar3 = param_1->Object;
  bVar6 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier(pTVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar7 = pTVar3->PreviousTokenWritten;
  if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
    local_res20[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,1);
    pTVar3->PreviousTokenWritten = Comma;
  }
  local_48 = L"\r\n";
  uStack_40 = 2;
  local_38._12_4_ = uStack_3c;
  local_38.Size = 2;
  local_38.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(pTVar3->Stream,&local_38);
  pFVar4 = pTVar3->Stream;
  if (0 < pTVar3->IndentLevel) {
    uVar11 = (ulonglong)(uint)pTVar3->IndentLevel;
    do {
      local_78[0] = 9;
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_78,1);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  EVar7 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteValueOnly(pTVar3,*param_3);
  pTVar3->PreviousTokenWritten = EVar7;
LAB_14ae19712:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double> @ 14ae19730

void __cdecl
Metasound::JsonStructSerializerBackend::
WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,double>
          (TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *param_1,
          FStructSerializerState *param_2,double *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  EJsonToken EVar7;
  FFieldClass *pFVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  wchar_t *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  pFVar2 = param_2->ValueProperty;
  if ((pFVar2 != (FProperty *)0x0) && (pFVar2->ArrayDim < 2)) {
    pFVar8 = FArrayProperty::StaticClass();
    bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
    if ((!bVar6) || (pFVar2->_padding_ == 0)) {
      pFVar2 = param_2->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar6 = FFieldVariant::IsA((FFieldVariant *)&pFVar2->_padding_,pFVar8);
      if ((!bVar6) || (pFVar2->_padding_ == 0)) {
        pFVar2 = param_2->KeyProperty;
        if (pFVar2 == (FProperty *)0x0) {
          pFVar2 = param_2->ValueProperty;
          pTVar3 = param_1->Object;
          bVar6 = IsThisNotNull(pFVar2,"FField::GetName");
          if (bVar6) {
            ::FName::ToString((FName *)&pFVar2->_padding_,&local_60);
          }
          else {
            ::FString::FString(&local_60,L"None");
          }
          iVar1 = (pTVar3->Stack).ArrayNum;
          uVar9 = iVar1 - 1;
          uVar10 = 0;
          if ((int)uVar9 < iVar1) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                      (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar3,&local_60);
          local_res10[0] = 0x20;
          (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res10,1);
          EVar7 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteValueOnly(pTVar3,*param_3);
          pTVar3->PreviousTokenWritten = EVar7;
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_70.Data.ArrayNum = 0;
          local_70.Data.ArrayMax = 0;
          (**(code **)(pFVar2->_padding_ + 0xe0))(pFVar2,&local_70,param_2->KeyData,0,0,0,0,0);
          pTVar3 = param_1->Object;
          iVar1 = (pTVar3->Stack).ArrayNum;
          uVar9 = iVar1 - 1;
          uVar10 = 0;
          if ((int)uVar9 < iVar1) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(int *)((pTVar3->Stack).AllocatorInstance.Data +
                      (longlong)(pTVar3->Stack).ArrayNum * 4 + -4) != 6) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar3,&local_70);
          local_res8[0] = 0x20;
          (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res8,1);
          EVar7 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteValueOnly(pTVar3,*param_3);
          pTVar3->PreviousTokenWritten = EVar7;
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14ae19ac2;
      }
    }
  }
  pTVar3 = param_1->Object;
  bVar6 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier(pTVar3);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EVar7 = pTVar3->PreviousTokenWritten;
  if ((EVar7 != CurlyOpen) && ((Identifier < EVar7 || ((0x1013U >> (EVar7 & 0x1f) & 1) == 0)))) {
    local_res20[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar3->Stream + 0x188))(pTVar3->Stream,local_res20,1);
    pTVar3->PreviousTokenWritten = Comma;
  }
  local_48 = L"\r\n";
  uStack_40 = 2;
  local_38._12_4_ = uStack_3c;
  local_38.Size = 2;
  local_38.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(pTVar3->Stream,&local_38);
  pFVar4 = pTVar3->Stream;
  if (0 < pTVar3->IndentLevel) {
    uVar11 = (ulonglong)(uint)pTVar3->IndentLevel;
    do {
      local_78[0] = 9;
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_78,1);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  EVar7 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteValueOnly(pTVar3,*param_3);
  pTVar3->PreviousTokenWritten = EVar7;
LAB_14ae19ac2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString> @ 14ae19ae0

void __cdecl
Metasound::JsonStructSerializerBackend::
WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,FString>
          (TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *param_1,
          FStructSerializerState *param_2,FString *param_3)

{
  int iVar1;
  EJsonToken EVar2;
  FProperty *pFVar3;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FArchive *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FFieldClass *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  FString local_d0;
  FString local_c0;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pFVar3 = param_2->ValueProperty;
  if ((pFVar3 != (FProperty *)0x0) && (pFVar3->ArrayDim < 2)) {
    pFVar10 = FArrayProperty::StaticClass();
    bVar8 = FFieldVariant::IsA((FFieldVariant *)&pFVar3->_padding_,pFVar10);
    if ((!bVar8) || (pFVar3->_padding_ == 0)) {
      pFVar3 = param_2->ValueProperty;
      pFVar10 = FSetProperty::StaticClass();
      bVar8 = FFieldVariant::IsA((FFieldVariant *)&pFVar3->_padding_,pFVar10);
      if ((!bVar8) || (pFVar3->_padding_ == 0)) {
        pFVar3 = param_2->KeyProperty;
        if (pFVar3 == (FProperty *)0x0) {
          pFVar3 = param_2->ValueProperty;
          pTVar4 = param_1->Object;
          bVar8 = IsThisNotNull(pFVar3,"FField::GetName");
          if (bVar8) {
            ::FName::ToString((FName *)&pFVar3->_padding_,&local_c0);
          }
          else {
            ::FString::FString(&local_c0,L"None");
          }
          iVar1 = (pTVar4->Stack).ArrayNum;
          uVar11 = iVar1 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar1) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                      (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar4,&local_c0);
          local_res10[0] = 0x20;
          (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res10,1);
          pFVar5 = (param_3->Data).AllocatorInstance.Data;
          iVar1 = (param_3->Data).ArrayNum;
          iStack_90 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_90 = 0;
          }
          local_98._0_4_ = SUB84(pFVar5,0);
          local_98._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
          local_58 = (undefined4)local_98;
          uStack_54 = local_98._4_4_;
          uStack_4c = uStack_8c;
          local_98 = pFVar5;
          iStack_50 = iStack_90;
          (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_58);
          pTVar4->PreviousTokenWritten = String;
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d0.Data.ArrayNum = 0;
          local_d0.Data.ArrayMax = 0;
          (**(code **)(pFVar3->_padding_ + 0xe0))(pFVar3,&local_d0,param_2->KeyData,0,0,0,0,0);
          pTVar4 = param_1->Object;
          iVar1 = (pTVar4->Stack).ArrayNum;
          uVar11 = iVar1 - 1;
          uVar9 = 0;
          if ((int)uVar11 < iVar1) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                      (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar4,&local_d0);
          local_res8[0] = 0x20;
          (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res8,1);
          pFVar5 = (param_3->Data).AllocatorInstance.Data;
          iVar1 = (param_3->Data).ArrayNum;
          iStack_a0 = iVar1 + -1;
          if (iVar1 == 0) {
            iStack_a0 = 0;
          }
          local_a8._0_4_ = SUB84(pFVar5,0);
          local_a8._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
          local_68 = (undefined4)local_a8;
          uStack_64 = local_a8._4_4_;
          uStack_5c = uStack_9c;
          local_a8 = pFVar5;
          iStack_60 = iStack_a0;
          (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_68);
          pTVar4->PreviousTokenWritten = String;
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14ae19ec5;
      }
    }
  }
  pTVar4 = param_1->Object;
  bVar8 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier(pTVar4);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xfa,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EVar2 = pTVar4->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res20[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res20,1);
    pTVar4->PreviousTokenWritten = Comma;
  }
  local_88 = L"\r\n";
  uStack_80 = 2;
  local_48._12_4_ = uStack_7c;
  local_48.Size = 2;
  local_48.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(pTVar4->Stream,&local_48);
  pFVar6 = pTVar4->Stream;
  if (0 < pTVar4->IndentLevel) {
    uVar12 = (ulonglong)(uint)pTVar4->IndentLevel;
    do {
      local_d8[0] = 9;
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_d8,1);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  pFVar5 = (param_3->Data).AllocatorInstance.Data;
  iVar1 = (param_3->Data).ArrayNum;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_78._0_4_ = SUB84(pFVar5,0);
  local_78._4_4_ = (undefined4)((ulonglong)pFVar5 >> 0x20);
  local_38 = (undefined4)local_78;
  uStack_34 = local_78._4_4_;
  uStack_2c = uStack_6c;
  local_78 = pFVar5;
  iStack_30 = iStack_70;
  (**(code **)(pTVar4->_padding_ + 0x28))(pTVar4,&local_38);
  pTVar4->PreviousTokenWritten = String;
LAB_14ae19ec5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,bool> @ 14ae19ef0

void __cdecl
Metasound::JsonStructSerializerBackend::
WritePropertyValue<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,bool>
          (TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *param_1,
          FStructSerializerState *param_2,bool *param_3)

{
  int iVar1;
  EJsonToken EVar2;
  FProperty *pFVar3;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar4;
  FArchive *pFVar5;
  code *pcVar6;
  bool bVar7;
  FFieldClass *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_118 [16];
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  undefined4 local_8c;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  
  pFVar3 = param_2->ValueProperty;
  if ((pFVar3 != (FProperty *)0x0) && (pFVar3->ArrayDim < 2)) {
    pFVar8 = FArrayProperty::StaticClass();
    bVar7 = FFieldVariant::IsA((FFieldVariant *)&pFVar3->_padding_,pFVar8);
    if ((!bVar7) || (pFVar3->_padding_ == 0)) {
      pFVar3 = param_2->ValueProperty;
      pFVar8 = FSetProperty::StaticClass();
      bVar7 = FFieldVariant::IsA((FFieldVariant *)&pFVar3->_padding_,pFVar8);
      if ((!bVar7) || (pFVar3->_padding_ == 0)) {
        pFVar3 = param_2->KeyProperty;
        if (pFVar3 == (FProperty *)0x0) {
          pFVar3 = param_2->ValueProperty;
          pTVar4 = param_1->Object;
          bVar7 = IsThisNotNull(pFVar3,"FField::GetName");
          if (bVar7) {
            ::FName::ToString((FName *)&pFVar3->_padding_,&local_e8);
          }
          else {
            ::FString::FString(&local_e8,L"None");
          }
          iVar1 = (pTVar4->Stack).ArrayNum;
          uVar9 = iVar1 - 1;
          uVar11 = 0;
          if ((int)uVar9 < iVar1) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                      (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar4,&local_e8);
          local_res10[0] = 0x20;
          (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res10,1);
          bVar7 = *param_3;
          if (bVar7 == false) {
            iStack_100 = 5;
            local_108 = L"false";
            local_6c = local_5c;
          }
          else {
            iStack_100 = 4;
            local_108 = L"true";
          }
          local_c8._12_4_ = local_6c;
          local_c8.Size = iStack_100;
          local_c8.DataPtr = local_108;
          TJsonPrintPolicy<char>::WriteString(pTVar4->Stream,&local_c8);
          pTVar4->PreviousTokenWritten = False - (bVar7 != false);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          (**(code **)(pFVar3->_padding_ + 0xe0))(pFVar3,&local_f8,param_2->KeyData,0,0,0,0,0);
          pTVar4 = param_1->Object;
          iVar1 = (pTVar4->Stack).ArrayNum;
          uVar9 = iVar1 - 1;
          uVar11 = 0;
          if ((int)uVar9 < iVar1) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (*(int *)((pTVar4->Stack).AllocatorInstance.Data +
                      (longlong)(pTVar4->Stack).ArrayNum * 4 + -4) != 6) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L"");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::WriteIdentifier(pTVar4,&local_f8);
          local_res8[0] = 0x20;
          (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res8,1);
          bVar7 = *param_3;
          if (bVar7 == false) {
            iStack_100 = 5;
            local_108 = L"false";
            local_8c = local_7c;
          }
          else {
            iStack_100 = 4;
            local_108 = L"true";
          }
          local_d8._12_4_ = local_8c;
          local_d8.Size = iStack_100;
          local_d8.DataPtr = local_108;
          TJsonPrintPolicy<char>::WriteString(pTVar4->Stream,&local_d8);
          pTVar4->PreviousTokenWritten = False - (bVar7 != false);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14ae1a368;
      }
    }
  }
  pTVar4 = param_1->Object;
  bVar7 = TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier(pTVar4);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanWriteValueWithoutIdentifier()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                       ,0xde,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EVar2 = pTVar4->PreviousTokenWritten;
  if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))) {
    local_res20[0] = 0x2c;
    (**(code **)(*(longlong *)pTVar4->Stream + 0x188))(pTVar4->Stream,local_res20,1);
    pTVar4->PreviousTokenWritten = Comma;
  }
  local_108 = L"\r\n";
  iStack_100 = 2;
  local_b8._12_4_ = uStack_fc;
  local_b8.Size = 2;
  local_b8.DataPtr = L"\r\n";
  TJsonPrintPolicy<char>::WriteString(pTVar4->Stream,&local_b8);
  pFVar5 = pTVar4->Stream;
  if (0 < pTVar4->IndentLevel) {
    uVar10 = (ulonglong)(uint)pTVar4->IndentLevel;
    do {
      local_118[0] = 9;
      (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_118,1);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  bVar7 = *param_3;
  if (bVar7 == false) {
    iStack_100 = 5;
    local_108 = L"false";
    local_4c = local_3c;
  }
  else {
    iStack_100 = 4;
    local_108 = L"true";
  }
  local_a8._12_4_ = local_4c;
  local_a8.Size = iStack_100;
  local_a8.DataPtr = local_108;
  TJsonPrintPolicy<char>::WriteString(pTVar4->Stream,&local_a8);
  pTVar4->PreviousTokenWritten = False - (bVar7 != false);
LAB_14ae1a368:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput><FMetasoundFrontendClassInput_const_>'::__l2::<lambda_1>,0,1> @ 14ae1cb00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput><FMetasoundFrontendClassInput_const_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput><FMetasoundFrontendClassInput_const_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendClassInput_____TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cb23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput><FMetasoundFrontendClassOutput_const_>'::__l2::<lambda_1>,0,1> @ 14ae1cb30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput><FMetasoundFrontendClassOutput_const_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput><FMetasoundFrontendClassOutput_const_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendClassOutput_____TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cb53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>::TAccessPtr<FMetasoundFrontendGraph><FMetasoundFrontendGraph_const_>'::__l2::<lambda_1>,0,1> @ 14ae1cb60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>::TAccessPtr<FMetasoundFrontendGraph><FMetasoundFrontendGraph_const_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>::TAccessPtr<FMetasoundFrontendGraph><FMetasoundFrontendGraph_const_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraph_____TAccessPtr_UFMetasoundFrontendGraph___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraph___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cb83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1> @ 14ae1cb90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendGraphClass_const_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraphClass_____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraphClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cbb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::TAccessPtr<FMetasoundFrontendGraphClass><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1> @ 14ae1cbc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::TAccessPtr<FMetasoundFrontendGraphClass><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::TAccessPtr<FMetasoundFrontendGraphClass><FMetasoundFrontendGraphClass_const_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraphClass_____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraphClass___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cbe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::TAccessPtr<FMetasoundFrontendNode><FMetasoundFrontendNode_const_>'::__l2::<lambda_1>,0,1> @ 14ae1cbf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::TAccessPtr<FMetasoundFrontendNode><FMetasoundFrontendNode_const_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::TAccessPtr<FMetasoundFrontendNode><FMetasoundFrontendNode_const_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendNode_____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendNode___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cc13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>::TAccessPtr<FMetasoundFrontendVariable><FMetasoundFrontendVariable_const_>'::__l2::<lambda_1>,0,1> @ 14ae1cc20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>::TAccessPtr<FMetasoundFrontendVariable><FMetasoundFrontendVariable_const_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>::TAccessPtr<FMetasoundFrontendVariable><FMetasoundFrontendVariable_const_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendVariable_____TAccessPtr_UFMetasoundFrontendVariable___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendVariable___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cc43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex><FMetasoundFrontendVertex_const_>'::__l2::<lambda_1>,0,1> @ 14ae1cc50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex><FMetasoundFrontendVertex_const_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex><FMetasoundFrontendVertex_const_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendVertex_____TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendVertex___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cc73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendClass>'::__l2::<lambda_1>,0,1> @ 14ae1cc80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendClass>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendClass>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClass_____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_><FMetasoundFrontendClassInput>'::__l2::<lambda_1>,0,1> @ 14ae1ccb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_><FMetasoundFrontendClassInput>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_><FMetasoundFrontendClassInput>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClassInput_____TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClassInput___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1ccd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_><FMetasoundFrontendClassOutput>'::__l2::<lambda_1>,0,1> @ 14ae1cce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_><FMetasoundFrontendClassOutput>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_><FMetasoundFrontendClassOutput>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClassOutput_____TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClassOutput___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cd03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_><FMetasoundFrontendDocument>'::__l2::<lambda_1>,0,1> @ 14ae1cd10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_><FMetasoundFrontendDocument>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_><FMetasoundFrontendDocument>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendDocument_____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendDocument___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cd33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>::TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>'::__l2::<lambda_1>,0,1> @ 14ae1cd40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>::TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>::TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendGraph_____TAccessPtr___CBUFMetasoundFrontendGraph___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendGraph___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cd63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::TAccessPtr<FMetasoundFrontendGraphClass_const_><FMetasoundFrontendGraphClass>'::__l2::<lambda_1>,0,1> @ 14ae1cd70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::TAccessPtr<FMetasoundFrontendGraphClass_const_><FMetasoundFrontendGraphClass>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::TAccessPtr<FMetasoundFrontendGraphClass_const_><FMetasoundFrontendGraphClass>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendGraphClass_____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendGraphClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ae1cd93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14ae1cfa0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FGuid>,_Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph_::__l2::FCoreNodeAndFrontendVertex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator< @ 14ae1e0e0

bool __cdecl
Metasound::Frontend::operator<(FNodeClassRegistryKey *param_1,FNodeClassRegistryKey *param_2)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  int iVar4;
  
  if (param_1->Type != param_2->Type) {
    return param_1->Type < param_2->Type;
  }
  FVar2 = (param_2->ClassName).Namespace;
  FVar3 = (param_1->ClassName).Namespace;
  if (FVar3 == FVar2) {
    if (((param_1->ClassName).Name == (param_2->ClassName).Name) &&
       ((param_1->ClassName).Variant == (param_2->ClassName).Variant)) {
      iVar4 = (param_2->Version).Major;
      iVar1 = (param_1->Version).Major;
      if (iVar1 < iVar4) {
        return true;
      }
      if (iVar1 == iVar4) {
        return (param_1->Version).Minor < (param_2->Version).Minor;
      }
      return false;
    }
    if (FVar3 == FVar2) {
      FVar2 = (param_2->ClassName).Name;
      FVar3 = (param_1->ClassName).Name;
      if (FVar3 == FVar2) {
        iVar4 = (param_1->ClassName).Variant.ComparisonIndex.Value -
                (param_2->ClassName).Variant.ComparisonIndex.Value;
        if (iVar4 == 0) {
          iVar4 = (param_1->ClassName).Variant.Number - (param_2->ClassName).Variant.Number;
        }
        return SUB41((uint)iVar4 >> 0x1f,0);
      }
      iVar4 = FVar3.ComparisonIndex.Value.Value - FVar2.ComparisonIndex.Value;
      if (iVar4 == 0) {
        iVar4 = FVar3.Number - FVar2.Number;
      }
      return SUB41((uint)iVar4 >> 0x1f,0);
    }
  }
  iVar4 = FVar3.ComparisonIndex.Value.Value - FVar2.ComparisonIndex.Value;
  if (iVar4 == 0) {
    iVar4 = FVar3.Number - FVar2.Number;
  }
  return SUB41((uint)iVar4 >> 0x1f,0);
}

// operator() @ 14ae1e370

FMetasoundFrontendLiteral * __thiscall
`Metasound::Frontend::Invalid::GetInvalidLiteral'::__l2::<lambda_1>::operator()
          (void *this,FMetasoundFrontendLiteral *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendLiteral *pFVar3;
  FString local_68;
  TArray<bool,TSizedDefaultAllocator<32>_> local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  switch(__return_storage_ptr__->Type) {
  case None:
  case Invalid:
    FMetasoundFrontendLiteral::Empty(__return_storage_ptr__);
    __return_storage_ptr__->Type = None;
    __return_storage_ptr__->AsNumDefault = 1;
    break;
  case Boolean:
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,false);
    break;
  case Integer:
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,0);
    break;
  case Float:
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,0.0);
    break;
  case String:
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    break;
  case UObject:
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,(UObject *)0x0);
    break;
  case NoneArray:
    FMetasoundFrontendLiteral::Empty(__return_storage_ptr__);
    __return_storage_ptr__->Type = NoneArray;
    __return_storage_ptr__->AsNumDefault = 0;
    break;
  case BooleanArray:
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,&local_58);
    break;
  case IntegerArray:
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,&local_48);
    break;
  case FloatArray:
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,&local_38);
    break;
  case StringArray:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,&local_28);
    DestructItems<FString,int>((FString *)0x0,0);
    break;
  case UObjectArray:
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    FMetasoundFrontendLiteral::Set(__return_storage_ptr__,&local_18);
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendLiteral.cpp"
                       ,0x21c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMetasoundFrontendLiteral *)(*pcVar1)();
      return pFVar3;
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 14ae1ee40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputDataVertex * __thiscall
`Metasound::Frontend::GraphBuilderPrivate::CreateInputVertexInterface'::__l12::<lambda_1>::
operator()(void *this,FInputDataVertex *__return_storage_ptr__,FName *param_1,FName *param_2,
          EMetasoundFrontendVertexAccessType param_3,FMetasoundFrontendLiteral *param_4)

{
  code *pcVar1;
  bool bVar2;
  EVertexAccessType EVar3;
  FInputDataVertex *pFVar4;
  undefined1 auStackY_c8 [32];
  FText local_98;
  FText local_88;
  undefined1 local_78;
  FText local_70;
  FText local_60;
  undefined1 local_50;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  EVar3 = Metasound::Frontend::FrontendVertexAccessTypeToCoreVertexAccessType(param_3);
  if (param_4 == (FMetasoundFrontendLiteral *)0x0) {
    FText::FText(&local_70);
    FText::FText(&local_60);
    __return_storage_ptr__->_padding_ = (longlong)&___7FDataVertex_Metasound__6B_;
    __return_storage_ptr__->_padding_ = (longlong)*param_1;
    __return_storage_ptr__->_padding_ = (longlong)*param_2;
    __return_storage_ptr__->_padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
    local_50 = 0;
    *(EVertexAccessType *)&__return_storage_ptr__->_padding_ = EVar3;
    (__return_storage_ptr__->Literal).Value.TypeIndex = '\0';
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
  }
  else {
    FMetasoundFrontendLiteral::ToLiteral
              (param_4,(FLiteral *)&local_48,param_2,*(IDataTypeRegistry **)(*(longlong *)this + 8),
               *(FProxyDataCache **)(*(longlong *)this + 0x10));
    FText::FText(&local_98);
    FText::FText(&local_88);
    local_78 = 0;
    __return_storage_ptr__->_padding_ = (longlong)&___7FDataVertex_Metasound__6B_;
    __return_storage_ptr__->_padding_ = (longlong)*param_1;
    __return_storage_ptr__->_padding_ = (longlong)*param_2;
    __return_storage_ptr__->_padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
    *(EVertexAccessType *)&__return_storage_ptr__->_padding_ = EVar3;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&(__return_storage_ptr__->Literal).Value,&local_48);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if (0xc < local_48.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FInputDataVertex *)(*pcVar1)();
        return pFVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48.TypeIndex])(&local_48);
  }
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 14ae1f140

void * __thiscall
IBaseDelegateInstance<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f170

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f1a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FName,FName),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f1d0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy,`Metasound::Frontend::FDocumentCache::Init'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f230

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentCache,1,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentCache,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f290

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentCache,1,void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentCache,1,void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f2f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentCache,1,void___cdecl(int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentCache,1,void___cdecl(int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f350

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphEdgeCache,1,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphEdgeCache,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f3b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphEdgeCache,1,void___cdecl(int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphEdgeCache,1,void___cdecl(int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f410

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphInterfaceCache,1,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphInterfaceCache,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f470

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphInterfaceCache,1,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphInterfaceCache,1,void___cdecl(FName,FName),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f4d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphNodeCache,1,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphNodeCache,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f530

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphNodeCache,1,void___cdecl(int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphNodeCache,1,void___cdecl(int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f590

void * __thiscall
TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphNodeCache,1,void___cdecl(int,int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,Metasound::Frontend::FDocumentGraphNodeCache,1,void___cdecl(int,int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f5f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f620

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f650

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,FName),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FName,FName),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput><FMetasoundFrontendClassInput_const_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendClassInput_____TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f6e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>::TAccessPtr<FMetasoundFrontendClassOutput><FMetasoundFrontendClassOutput_const_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendClassOutput_____TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>::TAccessPtr<FMetasoundFrontendGraph><FMetasoundFrontendGraph_const_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraph_____TAccessPtr_UFMetasoundFrontendGraph___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraph___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraphClass_____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraphClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::TAccessPtr<FMetasoundFrontendGraphClass><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraphClass_____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraphClass___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::TAccessPtr<FMetasoundFrontendNode><FMetasoundFrontendNode_const_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendNode_____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendNode___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>::TAccessPtr<FMetasoundFrontendVariable><FMetasoundFrontendVariable_const_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendVariable_____TAccessPtr_UFMetasoundFrontendVariable___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendVariable___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>::TAccessPtr<FMetasoundFrontendVertex><FMetasoundFrontendVertex_const_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendVertex_____TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendVertex___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendClass>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClass_____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1f9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_><FMetasoundFrontendClassInput>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClassInput_____TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClassInput___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fa40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_><FMetasoundFrontendClassOutput>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClassOutput_____TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClassOutput___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1faa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_><FMetasoundFrontendDocument>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendDocument_____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendDocument___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fb00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>::TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendGraph_____TAccessPtr___CBUFMetasoundFrontendGraph___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendGraph___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fb60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::TAccessPtr<FMetasoundFrontendGraphClass_const_><FMetasoundFrontendGraphClass>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendGraphClass_____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendGraphClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fbc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache_const_,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache_const_,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fc00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache::FDocumentDependencyCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache::FDocumentDependencyCache,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fc40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentCache,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fc80

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphEdgeCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphEdgeCache,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fcc0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphInterfaceCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fd00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphNodeCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentGraphNodeCache,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fd40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FGraphController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FGraphController,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fd80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::Frontend::FVariableController,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FVariableController,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fdc0

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void * __thiscall
Metasound::TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_>::
_scalar_deleting_destructor_
          (TJsonStructSerializerBackend<char,TPrettyJsonPrintPolicy<char>_> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IStructSerializerBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fe10

void * __thiscall
TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>::_scalar_deleting_destructor_
          (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonWriter_DU__TPrettyJsonPrintPolicy_D____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fe60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::Frontend::FDocumentModifyDelegates,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::FDocumentModifyDelegates>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Metasound::Frontend::FDocumentModifyDelegates,SharedPointerInternals::DefaultDeleter<Metasound::Frontend::FDocumentModifyDelegates>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fea0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1fee0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::FFrontendGraph,SharedPointerInternals::DefaultDeleter<Metasound::FFrontendGraph>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Metasound::FFrontendGraph,SharedPointerInternals::DefaultDeleter<Metasound::FFrontendGraph>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1ff20

void * __thiscall
Metasound::Frontend::FBaseInputController::_scalar_deleting_destructor_
          (FBaseInputController *this,uint param_1)

{
  ~FBaseInputController(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1ff60

void * __thiscall
Metasound::Frontend::FDocumentCache::_scalar_deleting_destructor_(FDocumentCache *this,uint param_1)

{
  ~FDocumentCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae1ffa0

void * __thiscall
Metasound::Frontend::FDocumentController::_scalar_deleting_destructor_
          (FDocumentController *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)&(this->DocumentPtr).field_0x10 != 0) {
    plVar3 = *(longlong **)&(this->DocumentPtr).field_0x38;
    plVar4 = (longlong *)&(this->DocumentPtr).field_0x20;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae20020

void * __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::_scalar_deleting_destructor_
          (FDocumentGraphEdgeCache *this,uint param_1)

{
  ~FDocumentGraphEdgeCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae20060

void * __thiscall
Metasound::Frontend::FDocumentGraphInterfaceCache::_scalar_deleting_destructor_
          (FDocumentGraphInterfaceCache *this,uint param_1)

{
  ~FDocumentGraphInterfaceCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae200a0

void * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::_scalar_deleting_destructor_
          (FDocumentGraphNodeCache *this,uint param_1)

{
  ~FDocumentGraphNodeCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae200e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
Metasound::FFrontendGraph::_scalar_deleting_destructor_(FFrontendGraph *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->OutputNodes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OutputNodes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputNodes);
  *(undefined4 *)&(this->InputNodes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InputNodes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,Metasound::INode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputNodes);
  FGraph::~FGraph((FGraph *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae20180

void * __thiscall
Metasound::Frontend::FGraphController::_scalar_deleting_destructor_
          (FGraphController *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningDocument).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->GraphClassPtr).field_0x10 != 0) {
    plVar3 = *(longlong **)&(this->GraphClassPtr).field_0x38;
    plVar4 = (longlong *)&(this->GraphClassPtr).field_0x20;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae20200

void * __thiscall
Metasound::Frontend::FInputNodeInputController::_scalar_deleting_destructor_
          (FInputNodeInputController *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->OwningGraphClassInputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FBaseInputController::~FBaseInputController((FBaseInputController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae20260

void * __thiscall
Metasound::Frontend::FOutputNodeInputController::_scalar_deleting_destructor_
          (FOutputNodeInputController *this,uint param_1)

{
  longlong *plVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  
  if (*(longlong *)&(this->OwningGraphClassOutputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassOutputPtr).GetObject.field_0x28;
    plVar3 = (longlong *)&(this->OwningGraphClassOutputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pIVar2 = (this->CachedDisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FBaseInputController::~FBaseInputController((FBaseInputController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae202e0

void * __thiscall
Metasound::Frontend::FVariableInputController::_scalar_deleting_destructor_
          (FVariableInputController *this,uint param_1)

{
  FBaseInputController::~FBaseInputController((FBaseInputController *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae20320

void * __thiscall
Metasound::Frontend::IDocumentCache::_scalar_deleting_destructor_(IDocumentCache *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae20380

void * __thiscall
Metasound::Frontend::IDocumentGraphEdgeCache::_scalar_deleting_destructor_
          (IDocumentGraphEdgeCache *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae203e0

void * __thiscall
Metasound::Frontend::IDocumentGraphInterfaceCache::_scalar_deleting_destructor_
          (IDocumentGraphInterfaceCache *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ae20440

void * __thiscall
Metasound::Frontend::IDocumentGraphNodeCache::_scalar_deleting_destructor_
          (IDocumentGraphNodeCache *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// AddEdgesToGraph @ 14ae20e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph(FBuildGraphContext *param_1)

{
  int iVar1;
  FMetasoundFrontendGraph *pFVar2;
  FBuildGraphContext *pFVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FName FVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  FStaticBasicLogRecord *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  FName FVar14;
  FGuid *this;
  int *piVar15;
  longlong *plVar16;
  longlong lVar17;
  FGuid *pFVar18;
  FGuid *pFVar19;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  FString local_1a0;
  undefined1 local_190 [8];
  FString *local_188;
  FBuildGraphContext *local_180;
  FString local_178;
  undefined1 local_168 [8];
  FString *local_160;
  FString local_158;
  FString local_148;
  uint local_138;
  FName local_130;
  TTuple<FGuid,FGuid> local_128;
  undefined1 local_108 [8];
  FCoreNodeAndFrontendVertex *local_100 [2];
  char local_f0 [24];
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  longlong local_88 [4];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_5c = 0x80;
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_130 = (FName)param_1->PagedGraph;
  local_138 = *(int *)((longlong)local_130 + 8);
  uVar12 = (ulonglong)(int)local_138;
  FVar14 = *(FName *)local_130;
  piVar15 = (int *)((longlong)FVar14 + 0x30);
  local_178.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(uVar12 * 0x88 + (longlong)FVar14);
  local_180 = param_1;
  while( true ) {
    FVar4.Data = local_178.Data.AllocatorInstance.Data;
    pFVar3 = local_180;
    if (*(int *)((longlong)local_130 + 8) != (int)uVar12) {
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a8);
    }
    if (FVar14 == (FName)FVar4.Data) {
      pFVar2 = pFVar3->PagedGraph;
      this = (FGuid *)(pFVar2->Edges).AllocatorInstance.Data;
      iVar1 = (pFVar2->Edges).ArrayNum;
      pFVar19 = this + (longlong)iVar1 * 4;
      pFVar18 = this + 3;
      goto LAB_14ae210e3;
    }
    FVar7 = (FName)FGraph::FindNode((FGraph *)(pFVar3->Graph).Ptr,(FGuid *)FVar14);
    if (FVar7 == (FName)0x0) break;
    lVar13 = *(longlong *)(piVar15 + -2);
    iVar1 = *piVar15;
    lVar17 = (longlong)iVar1 * 0x20 + lVar13;
    puVar10 = (undefined8 *)(lVar13 + 0x10);
    while( true ) {
      if (*piVar15 != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1a8);
      }
      if (lVar13 == lVar17) break;
      local_128._0_8_ = *(undefined8 *)FVar14;
      local_128._8_8_ = *(undefined8 *)((longlong)FVar14 + 8);
      local_190 = (undefined1  [8])&local_128;
      local_128._16_8_ = *puVar10;
      local_128._24_8_ = puVar10[1];
      local_188 = &local_1a0;
      local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar7;
      local_1a0.Data._8_8_ = lVar13;
      TSet<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TTuple<FGuid,FGuid>_&&,_Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph_::__l2::FCoreNodeAndFrontendVertex_&&>_>
                (local_d8,(TPairInitializer<TTuple<FGuid,FGuid>_&&,_bool___cdecl_Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph(Metasound::Frontend::GraphBuilderPrivate::FBuildGraphContext_&)_::_2_::FCoreNodeAndFrontendVertex_&&>
                           *)local_108,(bool *)local_190);
      lVar13 = lVar13 + 0x20;
      puVar10 = puVar10 + 4;
    }
    lVar13 = *(longlong *)(piVar15 + 2);
    iVar1 = piVar15[4];
    lVar17 = (longlong)iVar1 * 0x20 + lVar13;
    puVar10 = (undefined8 *)(lVar13 + 0x10);
    while( true ) {
      if (piVar15[4] != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1a8);
      }
      if (lVar13 == lVar17) break;
      local_128._0_8_ = *(undefined8 *)FVar14;
      local_128._8_8_ = *(undefined8 *)((longlong)FVar14 + 8);
      local_168 = (undefined1  [8])&local_128;
      local_128._16_8_ = *puVar10;
      local_128._24_8_ = puVar10[1];
      local_160 = &local_158;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar7;
      local_158.Data._8_8_ = lVar13;
      TSet<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TTuple<FGuid,FGuid>_&&,_Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph_::__l2::FCoreNodeAndFrontendVertex_&&>_>
                (local_88,(TPairInitializer<TTuple<FGuid,FGuid>_&&,_bool___cdecl_Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph(Metasound::Frontend::GraphBuilderPrivate::FBuildGraphContext_&)_::_2_::FCoreNodeAndFrontendVertex_&&>
                           *)(local_108 + 4),(bool *)local_168);
      lVar13 = lVar13 + 0x20;
      puVar10 = puVar10 + 4;
    }
    FVar14 = (FName)((longlong)FVar14 + 0x88);
    piVar15 = piVar15 + 0x22;
    uVar12 = (ulonglong)local_138;
  }
  if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14ae215e4;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  FGuid::AppendString((FGuid *)FVar14,&local_178,Digits);
  ::FName::ToString((FName *)((longlong)FVar14 + 0x20),(FString *)local_190);
  FTopLevelAssetPath::ToString(pFVar3->BuildContext->AssetPath,&local_1a0);
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  if ((FName)local_1a0.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  FVar14 = (FName)local_178.Data.AllocatorInstance.Data;
  if ((FName)local_190 != (FName)0x0) {
    FMemory::Free((void *)local_190);
    FVar14 = (FName)local_178.Data.AllocatorInstance.Data;
  }
LAB_14ae215da:
  if (FVar14 != (FName)0x0) {
    FMemory::Free((void *)FVar14);
  }
LAB_14ae215e4:
  bVar5 = false;
LAB_14ae215ea:
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FGuid>,_Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph_::__l2::FCoreNodeAndFrontendVertex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_d8);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FGuid>,_Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph_::__l2::FCoreNodeAndFrontendVertex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_88);
  return bVar5;
LAB_14ae210e3:
  if ((pFVar2->Edges).ArrayNum != iVar1) {
    `TCheckedPointerIterator<FMetasoundFrontendEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_1a8);
  }
  if (this == pFVar19) {
    bVar5 = true;
    goto LAB_14ae215ea;
  }
  local_100[0] = *(FCoreNodeAndFrontendVertex **)(pFVar18 + -1);
  local_100[1]._0_4_ = pFVar18[-1].C;
  local_100[1]._4_4_ = pFVar18[-1].D;
  local_f0._0_4_ = pFVar18->A;
  local_f0._4_4_ = pFVar18->B;
  local_f0._8_4_ = pFVar18->C;
  local_f0._12_4_ = pFVar18->D;
  uVar8 = CityHash64((char *)local_100,0x10);
  uVar9 = CityHash64(&((TTuple<FGuid,FGuid> *)local_100)->field_0x10,0x10);
  iVar6 = TSet<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FGuid,FGuid>_>
                    (local_d8,(uint)uVar8 * 0x40 + ((uint)(uVar8 >> 2) & 0x3fffffff) +
                              (int)uVar9 + -0x61c88647 ^ (uint)uVar8,
                     (TTuple<FGuid,FGuid> *)local_100);
  if (iVar6 == -1) {
LAB_14ae21513:
    if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ae215e4;
    local_190._0_4_ = 0;
    local_190._4_4_ = 0;
    local_188 = (FString *)0x0;
    FGuid::AppendString(this + 3,(FString *)local_190,Digits);
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    FGuid::AppendString(this + 2,&local_1a0,Digits);
    FTopLevelAssetPath::ToString(local_180->BuildContext->AssetPath,&local_148);
    pFVar11 = &::LOG_Static;
LAB_14ae215a1:
    UE::Logging::Private::BasicLog<2>(pFVar11,(FLogCategoryBase *)&LogMetaSound);
    if ((FName)local_148.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    FVar14 = (FName)local_190;
    if ((FName)local_1a0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      FVar14 = (FName)local_190;
    }
    goto LAB_14ae215da;
  }
  lVar13 = (longlong)iVar6 * 0x38 + local_d8[0];
  plVar16 = (longlong *)(lVar13 + 0x20);
  if (lVar13 == 0) {
    plVar16 = (longlong *)0x0;
  }
  if (plVar16 == (longlong *)0x0) goto LAB_14ae21513;
  if (*plVar16 == 0) {
    if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14ae215e4;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    FGuid::AppendString(this + 2,&local_1a0,Digits);
    FTopLevelAssetPath::ToString(local_180->BuildContext->AssetPath,&local_148);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    goto LAB_14ae21371;
  }
  local_128._0_4_ = this->A;
  local_128._4_4_ = this->B;
  local_128._8_4_ = this->C;
  local_128._12_4_ = this->D;
  local_128._16_4_ = pFVar18[-2].A;
  local_128._20_4_ = pFVar18[-2].B;
  local_128._24_4_ = pFVar18[-2].C;
  local_128._28_4_ = pFVar18[-2].D;
  uVar8 = CityHash64((char *)&local_128,0x10);
  uVar9 = CityHash64(&local_128.field_0x10,0x10);
  iVar6 = TSet<TTuple<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FGuid>,`Metasound::Frontend::GraphBuilderPrivate::AddEdgesToGraph'::__l2::FCoreNodeAndFrontendVertex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FGuid,FGuid>_>
                    (local_88,(uint)uVar8 * 0x40 + ((uint)(uVar8 >> 2) & 0x3fffffff) +
                              (int)uVar9 + -0x61c88647 ^ (uint)uVar8,&local_128);
  if (iVar6 == -1) {
LAB_14ae21404:
    if (1 < (byte)LogMetaSound._0_1_) {
      local_190._0_4_ = 0;
      local_190._4_4_ = 0;
      local_188 = (FString *)0x0;
      FGuid::AppendString(this + 1,(FString *)local_190,Digits);
      local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.Data.ArrayNum = 0;
      local_1a0.Data.ArrayMax = 0;
      FGuid::AppendString(this,&local_1a0,Digits);
      FTopLevelAssetPath::ToString(local_180->BuildContext->AssetPath,&local_148);
      pFVar11 = &::LOG_Static;
      goto LAB_14ae215a1;
    }
    goto LAB_14ae215e4;
  }
  lVar13 = (longlong)iVar6 * 0x38 + local_88[0];
  puVar10 = (undefined8 *)(lVar13 + 0x20);
  if (lVar13 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  if (puVar10 == (undefined8 *)0x0) goto LAB_14ae21404;
  if ((INode *)*puVar10 == (INode *)0x0) {
    if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14ae215e4;
    local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Data.ArrayNum = 0;
    local_1a0.Data.ArrayMax = 0;
    FGuid::AppendString(this,&local_1a0,Digits);
    FTopLevelAssetPath::ToString(local_180->BuildContext->AssetPath,&local_148);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    goto LAB_14ae21371;
  }
  local_130 = *(FName *)puVar10[1];
  local_178.Data.AllocatorInstance.Data = *(FScriptContainerElement **)plVar16[1];
  bVar5 = FGraph::AddDataEdge((FGraph *)(local_180->Graph).Ptr,(INode *)*puVar10,&local_130,
                              (INode *)*plVar16,(FName *)&local_178);
  if (!bVar5) goto LAB_14ae2124c;
  this = this + 4;
  pFVar18 = pFVar18 + 4;
  goto LAB_14ae210e3;
LAB_14ae2124c:
  if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ae215e4;
  local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Data.ArrayNum = 0;
  local_1a0.Data.ArrayMax = 0;
  FGuid::AppendString(this + 3,&local_1a0,Digits);
  local_190._0_4_ = 0;
  local_190._4_4_ = 0;
  local_188 = (FString *)0x0;
  FGuid::AppendString(this + 2,(FString *)local_190,Digits);
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  FGuid::AppendString(this + 1,&local_158,Digits);
  local_168 = (undefined1  [8])0x0;
  local_160 = (FString *)0x0;
  FGuid::AppendString(this,(FString *)local_168,Digits);
  FTopLevelAssetPath::ToString(local_180->BuildContext->AssetPath,&local_148);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  if ((FName)local_148.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_168 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_168);
  }
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_190;
  if ((FName)local_158.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_190;
  }
LAB_14ae21371:
  FVar14 = (FName)local_1a0.Data.AllocatorInstance.Data;
  if ((FName)local_148.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
    FVar14 = (FName)local_1a0.Data.AllocatorInstance.Data;
  }
  goto LAB_14ae215da;
}

// AddNodesToGraph @ 14ae22640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl Metasound::Frontend::GraphBuilderPrivate::AddNodesToGraph(FBuildGraphContext *param_1)

{
  FBuildDocumentContext *this;
  FBuildContext *pFVar1;
  code *pcVar2;
  FMetasoundFrontendClass *pFVar3;
  FGuid *pFVar4;
  EMetasoundFrontendClassType EVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  longlong lVar10;
  FMetasoundFrontendVersionNumber *this_00;
  FName *pFVar11;
  ulonglong uVar12;
  FGuid *this_01;
  FGuid *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  FMetasoundFrontendClass *local_res18;
  FMetasoundFrontendClass *local_res20;
  FString local_128;
  FMetasoundFrontendClass *local_118;
  FMetasoundFrontendClass *local_110;
  FMetasoundFrontendGraph *local_108;
  FGuid *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FGuid local_b8;
  FGuid local_a8;
  FGuid *local_98;
  longlong local_90;
  FMetasoundFrontendGraph *local_88;
  FMetasoundFrontendGraphClass *local_80;
  FProxyDataCache *local_78;
  IDataTypeRegistry *local_70;
  TMap<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<Metasound::IGraph_const_,1>,0>_>
  *local_68;
  FGuid *local_60;
  undefined8 uStack_58;
  FTopLevelAssetPath *local_50;
  
  local_108 = param_1->PagedGraph;
  local_res10 = (local_108->Nodes).ArrayNum;
  uVar12 = (ulonglong)(int)local_res10;
  this_01 = (FGuid *)(local_108->Nodes).AllocatorInstance.Data;
  pFVar13 = this_01 + 1;
  local_100 = (FGuid *)((longlong)this_01 + uVar12 * 0x88);
  while( true ) {
    pFVar4 = local_100;
    if ((local_108->Nodes).ArrayNum != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_01 == pFVar4) break;
    this = param_1->BuildDocumentContext;
    uVar9 = CityHash64((char *)pFVar13,0x10);
    iVar8 = TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,FMetasoundFrontendClass_const_*>,TDefaultMapHashableKeyFuncs<FGuid,FMetasoundFrontendClass_const_*,0>,FDefaultSetAllocator>
                        *)this,(uint)uVar9,pFVar13);
    if (((iVar8 == -1) ||
        (lVar10 = (longlong)iVar8 * 0x20 + *(longlong *)&this->FrontendClasses, lVar10 == 0)) ||
       (lVar10 = *(longlong *)(lVar10 + 0x10), lVar10 == 0)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3983196478976818614>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x24a,"nullptr != FrontendNodeClass");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    else {
      pFVar1 = param_1->BuildContext;
      local_88 = param_1->PagedGraph;
      local_80 = param_1->GraphClass;
      local_60 = (pFVar1->PageOrder).DataPtr;
      uStack_58 = *(undefined8 *)&(pFVar1->PageOrder).ArrayNum;
      local_78 = pFVar1->ProxyDataCache;
      local_70 = pFVar1->DataTypeRegistry;
      local_68 = &param_1->BuildDocumentContext->Graphs;
      local_50 = pFVar1->AssetPath;
      local_98 = this_01;
      local_90 = lVar10;
      FGraphBuilder::CreateNode((FCreateNodeParams *)&local_res18);
      pFVar3 = local_res18;
      if (local_res18 == (FMetasoundFrontendClass *)0x0) {
        FTopLevelAssetPath::ToString(param_1->BuildContext->AssetPath,&local_c8);
        if (1 < (byte)LogMetaSound._0_1_) {
          this_00 = FMetasoundFrontendClassMetadata::GetVersion
                              ((FMetasoundFrontendClassMetadata *)(lVar10 + 0x18));
          FMetasoundFrontendVersionNumber::ToString(this_00,&local_d8);
          FMetasoundFrontendClassName::ToString
                    ((FMetasoundFrontendClassName *)(lVar10 + 0x18),&local_e8);
          ::FName::ToString((FName *)(pFVar13 + 1),&local_f8);
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = 0;
          local_128.Data.ArrayMax = 0;
          FGuid::AppendString(this_01,&local_128,Digits);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      else {
        EVar5 = FMetasoundFrontendClassMetadata::GetType
                          ((FMetasoundFrontendClassMetadata *)(lVar10 + 0x18));
        switch(EVar5) {
        default:
          local_110 = pFVar3;
          local_res18 = (FMetasoundFrontendClass *)0x0;
          FGraph::AddNode((FGraph *)(param_1->Graph).Ptr,this_01,(INode *)&local_110);
          break;
        case Input:
          pFVar11 = (FName *)(**(code **)(*(longlong *)&pFVar3->_padding_ + 8))(pFVar3);
          local_b8.A = this_01->A;
          local_b8.B = this_01->B;
          local_b8.C = this_01->C;
          local_b8.D = this_01->D;
          local_res20 = pFVar3;
          local_res18 = (FMetasoundFrontendClass *)0x0;
          FGraph::AddInputNode
                    ((FGraph *)(param_1->Graph).Ptr,&local_b8,pFVar11,(INode *)&local_res20);
          break;
        case Output:
          pFVar11 = (FName *)(**(code **)(*(longlong *)&pFVar3->_padding_ + 8))(pFVar3);
          local_a8.A = this_01->A;
          local_a8.B = this_01->B;
          local_a8.C = this_01->C;
          local_a8.D = this_01->D;
          local_118 = pFVar3;
          local_res18 = (FMetasoundFrontendClass *)0x0;
          FGraph::AddOutputNode
                    ((FGraph *)(param_1->Graph).Ptr,&local_a8,pFVar11,(INode *)&local_118);
        }
      }
    }
    this_01 = (FGuid *)&this_01[8].C;
    pFVar13 = (FGuid *)&pFVar13[8].C;
    uVar12 = (ulonglong)local_res10;
  }
  return true;
}

// CreateEnvironmentVertexInterface @ 14ae2ad70

FEnvironmentVertexInterface * __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateEnvironmentVertexInterface
          (FEnvironmentVertexInterface *__return_storage_ptr__,
          FMetasoundFrontendNodeInterface *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEnvironmentVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  TArray<Metasound::FEnvironmentVertex,TSizedDefaultAllocator<32>_> local_38;
  
  uVar1 = (param_1->Environment).ArrayNum;
  if (uVar1 == 0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar1,&local_58,0,(int *)((longlong)&local_50 + 4));
    }
    iVar2 = (param_1->Environment).ArrayNum;
    pFVar7 = (param_1->Environment).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar2 * 0x20;
    while( true ) {
      if ((param_1->Environment).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar8) break;
      FText::GetEmpty();
      local_40 = *(undefined8 *)pFVar7;
      local_48 = &___7FEnvironmentVertex_Metasound__6B_;
      if (((local_58.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_58.Data + (longlong)local_50._4_4_ * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FEnvironmentVertexInterface *)(*pcVar3)();
        return pFVar6;
      }
      iVar5 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
      pFVar7 = pFVar7 + 0x20;
      *(undefined ***)(local_58.Data + (longlong)iVar5 * 0x10) =
           &___7FEnvironmentVertex_Metasound__6B_;
      *(undefined8 *)(local_58.Data + (longlong)iVar5 * 0x10 + 8) = local_40;
    }
    local_38.AllocatorInstance.Data = local_58.Data;
    local_38.ArrayNum = (int)local_50;
    local_38.ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    FEnvironmentVertexInterface::FEnvironmentVertexInterface(__return_storage_ptr__,&local_38);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// CreateExternalNode @ 14ae2af60

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateExternalNode
          (FBuildContext *param_1,FMetasoundFrontendNode *param_2,FMetasoundFrontendClass *param_3,
          FMetasoundFrontendClassInterface *param_4)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  INodeClassRegistry *pIVar4;
  FNodeData *pFVar5;
  FMetasoundFrontendClassInterface *in_stack_00000028;
  FNodeClassRegistryKey local_b8;
  FNodeData local_90;
  
  if ((((param_3->Metadata).ClassName.Namespace.Number !=
        *(uint *)((longlong)&(param_4->Outputs).AllocatorInstance.Data + 4) ||
       (param_3->Metadata).ClassName.Namespace.ComparisonIndex.Value !=
       *(uint *)&(param_4->Outputs).AllocatorInstance.Data) ||
      (param_3->ID).D != (param_4->Inputs).ArrayMax) ||
      (param_3->ID).C != (param_4->Inputs).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNode.ClassID == InClass.ID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x20b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  if (((in_stack_00000028->Inputs).ArrayNum != (param_3->Metadata).Version.Major) ||
     ((in_stack_00000028->Outputs).ArrayNum != (param_3->Metadata).ChangeID.B)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterfacesHaveEqualSize(InClassInterface, InNode.Interface)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x20c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_b8,(FMetasoundFrontendClassMetadata *)&(param_4->Outputs).ArrayNum);
  pIVar4 = INodeClassRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0xc0);
  pFVar5 = CreateNodeData(&local_90,(FBuildContext *)param_2,(FMetasoundFrontendNode *)param_3,
                          (FMetasoundFrontendClass *)param_4,in_stack_00000028,
                          (FMetasoundFrontendClassInput *)0x0,(FMetasoundFrontendClassOutput *)0x0);
  (*pcVar1)(pIVar4,param_1,&local_b8,pFVar5);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateGraphInternal @ 14ae2c2a0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateGraphInternal
          (FBuildContext *param_1,FBuildDocumentContext *param_2,
          FMetasoundFrontendGraphClass *param_3,FGuid *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  FTopLevelAssetPath *pFVar3;
  code *pcVar4;
  uint *puVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_> TVar9;
  FFrontendGraph *this;
  int iVar10;
  FMetasoundFrontendGraph *pFVar11;
  FMetasoundFrontendGraph *pFVar12;
  FMetasoundFrontendGraph *pFVar13;
  int iVar14;
  FGuid *in_stack_00000028;
  undefined1 local_98 [8];
  int local_90;
  undefined4 uStack_8c;
  FMetasoundFrontendGraph *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FBuildGraphContext local_68;
  
  puVar1 = &(param_2->FrontendClasses).field_0x18;
  local_78 = *(undefined4 *)puVar1;
  uStack_74 = *(undefined4 *)&(param_2->FrontendClasses).field_0x1c;
  puVar5 = *(uint **)puVar1;
  iVar14 = *(int *)&(param_2->FrontendClasses).field_0x20;
  uStack_6c = *(undefined4 *)&(param_2->FrontendClasses).field_0x24;
  pFVar12 = (FMetasoundFrontendGraph *)0x0;
  uVar2 = param_4[9].C;
  iStack_70 = iVar14;
  if (uVar2 != 1) {
    if ((int)uVar2 < 1) goto LAB_14ae2c4d2;
    pFVar11 = *(FMetasoundFrontendGraph **)(param_4 + 9);
    local_88 = pFVar11 + (int)uVar2;
    pFVar13 = local_88;
    iVar10 = iVar14;
    local_90 = iVar14;
    uStack_8c = uStack_6c;
    while( true ) {
      if (param_4[9].C != uVar2) {
        local_98[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendGraph_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_98);
        iVar10 = local_90;
      }
      if (pFVar11 == pFVar13) break;
      if (puVar5 == puVar5 + (longlong)iVar10 * 4) {
LAB_14ae2c3cf:
        pFVar11 = pFVar11 + 1;
      }
      else {
        puVar8 = puVar5;
        do {
          pFVar13 = local_88;
          if ((((pFVar11->PageID).D == puVar8[3] && (pFVar11->PageID).C == puVar8[2]) &&
              (pFVar11->PageID).B == puVar8[1]) && (pFVar11->PageID).A == *puVar8) {
            iVar7 = (int)((longlong)puVar8 - (longlong)puVar5 >> 4);
            iVar10 = local_90;
            if (((iVar7 == -1) || (iVar14 <= iVar7)) ||
               (pFVar12 = pFVar11, iVar14 = iVar7, iVar7 != 0)) goto LAB_14ae2c3cf;
            goto LAB_14ae2c3d8;
          }
          puVar8 = puVar8 + 4;
        } while (puVar8 != puVar5 + (longlong)iVar10 * 4);
        pFVar11 = pFVar11 + 1;
        iVar10 = local_90;
      }
    }
LAB_14ae2c3d8:
    if (pFVar12 != (FMetasoundFrontendGraph *)0x0) goto LAB_14ae2c431;
    if (((int)param_4[9].C < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (FFrontendGraph *)(*pcVar4)();
      return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
             TVar9.Ptr;
    }
  }
  pFVar12 = *(FMetasoundFrontendGraph **)(param_4 + 9);
  if (pFVar12 != (FMetasoundFrontendGraph *)0x0) {
LAB_14ae2c431:
    pFVar3 = *(FTopLevelAssetPath **)&param_2->FrontendClasses;
    this = ::operator_new(0x280);
    if (this == (FFrontendGraph *)0x0) {
      TVar9.Ptr = (FFrontendGraph *)0x0;
    }
    else {
      TVar9.Ptr = FFrontendGraph::FFrontendGraph(this,pFVar3,in_stack_00000028);
    }
    local_68.Graph.Ptr = TVar9.Ptr;
    local_68.GraphClass = (FMetasoundFrontendGraphClass *)param_4;
    local_68.PagedGraph = pFVar12;
    local_68.BuildContext = (FBuildContext *)param_2;
    local_68.BuildDocumentContext = (FBuildDocumentContext *)param_3;
    bVar6 = AddNodesToGraph(&local_68);
    if ((bVar6) && (bVar6 = AddEdgesToGraph(&local_68), TVar9.Ptr = local_68.Graph.Ptr, bVar6)) {
      param_1->AssetPath = (FTopLevelAssetPath *)local_68.Graph.Ptr;
    }
    else {
      param_1->AssetPath = (FTopLevelAssetPath *)0x0;
      if (TVar9.Ptr != (FFrontendGraph *)0x0) {
        (**(code **)(TVar9.Ptr)->_padding_)(TVar9.Ptr,1);
      }
    }
    return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
           (FFrontendGraph *)param_1;
  }
LAB_14ae2c4d2:
  if (1 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  param_1->AssetPath = (FTopLevelAssetPath *)0x0;
  return (TUniquePtr<Metasound::FFrontendGraph,TDefaultDelete<Metasound::FFrontendGraph>_>)
         (FFrontendGraph *)param_1;
}

// CreateInputNode @ 14ae2c940

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateInputNode
          (FBuildContext *param_1,FMetasoundFrontendNode *param_2,FMetasoundFrontendClass *param_3,
          FMetasoundFrontendClassInterface *param_4,FMetasoundFrontendClassInput *param_5)

{
  int iVar1;
  FName FVar2;
  longlong *plVar3;
  code *pcVar4;
  EMetasoundFrontendClassType EVar5;
  bool bVar6;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar7;
  FNodeData *pFVar8;
  FMetasoundFrontendClassInput *in_stack_00000030;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FNodeData local_118;
  FNodeData local_a0;
  
  EVar5 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)&(param_4->Outputs).ArrayNum);
  if ((EVar5 != Input) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClass.Metadata.GetType() == EMetasoundFrontendClassType::Input",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x1cb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar7.Ptr = (INode *)(*pcVar4)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar7.Ptr;
  }
  if (((((param_3->Metadata).ClassName.Namespace.Number !=
         *(uint *)((longlong)&(param_4->Outputs).AllocatorInstance.Data + 4) ||
        (param_3->Metadata).ClassName.Namespace.ComparisonIndex.Value !=
        *(uint *)&(param_4->Outputs).AllocatorInstance.Data) ||
       (param_3->ID).D != (param_4->Inputs).ArrayMax) ||
       (param_4->Inputs).ArrayNum != (param_3->ID).C) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNode.ClassID == InClass.ID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x1cc,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar7.Ptr = (INode *)(*pcVar4)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar7.Ptr;
  }
  if ((((int)param_5->_padding_ != (param_3->Metadata).Version.Major) ||
      ((uint)param_5->_padding_ != (param_3->Metadata).ChangeID.B)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterfacesHaveEqualSize(InClassInterface, InNode.Interface)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x1cd,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar7.Ptr = (INode *)(*pcVar4)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar7.Ptr;
  }
  if ((param_3->Metadata).Version.Major == 1) {
    FVar2 = (param_3->Metadata).ClassName.Variant;
    iVar1 = (int)in_stack_00000030->_padding_;
    if (iVar1 == 0) {
      plVar3 = *(longlong **)&(param_2->ID).C;
      pcVar4 = *(code **)(*plVar3 + 0x140);
      pFVar8 = CreateNodeData(&local_118,(FBuildContext *)param_2,(FMetasoundFrontendNode *)param_3,
                              (FMetasoundFrontendClass *)param_4,
                              (FMetasoundFrontendClassInterface *)param_5,in_stack_00000030,
                              (FMetasoundFrontendClassOutput *)0x0);
      (*pcVar4)(plVar3,param_1,(longlong)FVar2 + 8,pFVar8);
    }
    else if (iVar1 == 1) {
      plVar3 = *(longlong **)&(param_2->ID).C;
      pcVar4 = *(code **)(*plVar3 + 0x150);
      pFVar8 = CreateNodeData(&local_a0,(FBuildContext *)param_2,(FMetasoundFrontendNode *)param_3,
                              (FMetasoundFrontendClass *)param_4,
                              (FMetasoundFrontendClassInterface *)param_5,in_stack_00000030,
                              (FMetasoundFrontendClassOutput *)0x0);
      (*pcVar4)(plVar3,param_1,(longlong)FVar2 + 8,pFVar8);
    }
    else {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&(param_3->Metadata).ClassName.Name,&local_128);
        FTopLevelAssetPath::ToString(*(FTopLevelAssetPath **)&param_2->ID,&local_138);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
      }
      param_1->AssetPath = (FTopLevelAssetPath *)0x0;
    }
  }
  else {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&(param_3->Metadata).ClassName.Name,&local_148);
      FTopLevelAssetPath::ToString(*(FTopLevelAssetPath **)&param_2->ID,&local_158);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    param_1->AssetPath = (FTopLevelAssetPath *)0x0;
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateInputVertexInterface @ 14ae2cc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FInputVertexInterface * __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateInputVertexInterface
          (FInputVertexInterface *__return_storage_ptr__,FBuildContext *param_1,
          FMetasoundFrontendNode *param_2,FMetasoundFrontendClass *param_3,
          FMetasoundFrontendClassInterface *param_4,FMetasoundFrontendClassInput *param_5,
          FMetasoundFrontendClassOutput *param_6)

{
  FScriptContainerElement FVar1;
  uint uVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  FName *pFVar5;
  bool bVar6;
  EMetasoundFrontendClassType EVar7;
  int iVar8;
  FInputVertexInterface *pFVar9;
  FMetasoundFrontendLiteral *pFVar10;
  FInputDataVertex *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  FName *pFVar14;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176 [6];
  FInputVertexInterface *local_170;
  uint local_168;
  FBuildContext *local_160;
  FBuildContext *local_158;
  FMetasoundFrontendClassInterface *local_150;
  FName *local_148;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> local_140;
  TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> local_130;
  FString local_120;
  FString local_110;
  FInputDataVertex local_100;
  FInputDataVertex local_c8;
  FInputDataVertex local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_150 = param_4;
  local_170 = __return_storage_ptr__;
  local_158 = param_1;
  if (((param_4->Inputs).ArrayNum != (param_2->Interface).Inputs.ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClassInterface.Inputs.Num() == InNode.Interface.Inputs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x11c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FInputVertexInterface *)(*pcVar3)();
    return pFVar9;
  }
  uVar2 = (param_2->Interface).Inputs.ArrayNum;
  if (uVar2 == 0) {
    FInputVertexInterface::FInputVertexInterface(local_170);
    return local_170;
  }
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_160 = param_1;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar2,&local_188,0,(int *)((longlong)&local_180 + 4));
  }
  EVar7 = FMetasoundFrontendClassMetadata::GetType(&param_3->Metadata);
  if (EVar7 == Input) {
    if (param_5 == (FMetasoundFrontendClassInput *)0x0) {
      local_176[0] = 0;
      bVar6 = `Metasound::Frontend::GraphBuilderPrivate::CreateInputVertexInterface'::__l16::
              <lambda_2>::operator()(local_176);
      if (!bVar6) goto LAB_14ae2d38c;
    }
    if (((param_2->Interface).Inputs.ArrayNum != 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNode.Interface.Inputs.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                           ,0x13f,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
    if (((param_2->Interface).Inputs.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
    pFVar14 = (FName *)(param_2->Interface).Inputs.AllocatorInstance.Data;
    if (((param_4->Inputs).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
    pFVar10 = FindInputLiteralForInputNode(param_1,param_2,param_4,param_5);
    pFVar11 = `Metasound::Frontend::GraphBuilderPrivate::CreateInputVertexInterface'::__l12::
              <lambda_1>::operator()
                        (&local_160,&local_90,pFVar14,pFVar14 + 1,
                         (EMetasoundFrontendVertexAccessType)param_5->_padding_,pFVar10);
    if (((local_188.Data <= pFVar11) &&
        (pFVar11 < (FInputDataVertex *)(local_188.Data + (longlong)local_180._4_4_ * 0x38))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
    iVar8 = (int)local_180;
    if ((int)local_180 == local_180._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&local_188,(int *)((longlong)&local_180 + 4));
    }
    FVar4.Data = local_188.Data;
    local_180 = CONCAT44(local_180._4_4_,iVar8 + 1);
    lVar12 = (longlong)iVar8 * 0x38;
    *(undefined ***)&local_188.Data[lVar12].field_0x0 = &___7FDataVertex_Metasound__6B_;
    *(longlong *)(local_188.Data + lVar12 + 8) = pFVar11->_padding_;
    *(longlong *)(local_188.Data + lVar12 + 0x10) = pFVar11->_padding_;
    *(int *)(local_188.Data + lVar12 + 0x18) = (int)pFVar11->_padding_;
    *(undefined ***)&local_188.Data[lVar12].field_0x0 = &___7FInputDataVertex_Metasound__6B_;
    FVar1 = (FScriptContainerElement)(pFVar11->Literal).Value.TypeIndex;
    local_188.Data[lVar12 + 0x30] = FVar1;
    if ((0xc < (byte)FVar1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[(byte)FVar1])
              (FVar4.Data + lVar12 + 0x20,&pFVar11->Literal);
    if ((0xc < local_90.Literal.Value.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    if (EVar7 != Output) {
      local_168 = (param_4->Inputs).ArrayNum;
      uVar13 = (ulonglong)(int)local_168;
      pFVar14 = (FName *)(param_4->Inputs).AllocatorInstance.Data;
      local_148 = pFVar14 + uVar13 * 9;
      while( true ) {
        pFVar5 = local_148;
        if ((param_4->Inputs).ArrayNum != (int)uVar13) {
          local_178 = 0;
          `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_178);
        }
        if (pFVar14 == pFVar5) break;
        pFVar10 = FindLiteralForInputVertex
                            (local_158,pFVar14,param_2,(FMetasoundFrontendClassInput *)pFVar14);
        pFVar11 = `Metasound::Frontend::GraphBuilderPrivate::CreateInputVertexInterface'::__l12::
                  <lambda_1>::operator()
                            (&local_160,&local_100,pFVar14,pFVar14 + 1,
                             pFVar14[6].ComparisonIndex.Value,pFVar10);
        if (((local_188.Data <= pFVar11) &&
            (pFVar11 < (FInputDataVertex *)(local_188.Data + (longlong)local_180._4_4_ * 0x38))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FInputVertexInterface *)(*pcVar3)();
          return pFVar9;
        }
        iVar8 = (int)local_180;
        if ((int)local_180 == local_180._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&local_188,(int *)((longlong)&local_180 + 4));
        }
        FVar4.Data = local_188.Data;
        local_180 = CONCAT44(local_180._4_4_,iVar8 + 1);
        lVar12 = (longlong)iVar8 * 0x38;
        *(undefined ***)&local_188.Data[lVar12].field_0x0 = &___7FDataVertex_Metasound__6B_;
        *(longlong *)(local_188.Data + lVar12 + 8) = pFVar11->_padding_;
        *(longlong *)(local_188.Data + lVar12 + 0x10) = pFVar11->_padding_;
        *(int *)(local_188.Data + lVar12 + 0x18) = (int)pFVar11->_padding_;
        *(undefined ***)&local_188.Data[lVar12].field_0x0 = &___7FInputDataVertex_Metasound__6B_;
        FVar1 = (FScriptContainerElement)(pFVar11->Literal).Value.TypeIndex;
        local_188.Data[lVar12 + 0x30] = FVar1;
        if ((0xc < (byte)FVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FInputVertexInterface *)(*pcVar3)();
          return pFVar9;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                    ::__l2::MoveConstructors)[(byte)FVar1])
                  (FVar4.Data + lVar12 + 0x20,&pFVar11->Literal);
        uVar13 = (ulonglong)local_100.Literal.Value.TypeIndex;
        if ((0xc < local_100.Literal.Value.TypeIndex) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FInputVertexInterface *)(*pcVar3)();
          return pFVar9;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])();
        uVar13 = (ulonglong)local_168;
        pFVar14 = pFVar14 + 9;
        param_4 = local_150;
      }
      goto LAB_14ae2d38c;
    }
    if (param_6 == (FMetasoundFrontendClassOutput *)0x0) {
      local_177 = 0;
      bVar6 = `Metasound::Frontend::GraphBuilderPrivate::CreateInputVertexInterface'::__l27::
              <lambda_3>::operator()(&local_177);
      if (!bVar6) goto LAB_14ae2d38c;
    }
    if ((param_2->Interface).Inputs.ArrayNum != 1) {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&param_2->Name,&local_110);
        FTopLevelAssetPath::ToString(param_1->AssetPath,&local_120);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14ae2d38c;
    }
    pFVar14 = (FName *)(param_2->Interface).Inputs.AllocatorInstance.Data;
    if (((param_4->Inputs).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
    pFVar10 = FindLiteralForInputVertex
                        (param_1,pFVar14,param_2,
                         (FMetasoundFrontendClassInput *)(param_4->Inputs).AllocatorInstance.Data);
    pFVar11 = `Metasound::Frontend::GraphBuilderPrivate::CreateInputVertexInterface'::__l12::
              <lambda_1>::operator()
                        (&local_160,&local_c8,pFVar14,pFVar14 + 1,
                         *(EMetasoundFrontendVertexAccessType *)&param_6->field_0x30,pFVar10);
    if (((local_188.Data <= pFVar11) &&
        (pFVar11 < (FInputDataVertex *)(local_188.Data + (longlong)local_180._4_4_ * 0x38))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
    iVar8 = (int)local_180;
    if ((int)local_180 == local_180._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&local_188,(int *)((longlong)&local_180 + 4));
    }
    FVar4.Data = local_188.Data;
    local_180 = CONCAT44(local_180._4_4_,iVar8 + 1);
    lVar12 = (longlong)iVar8 * 0x38;
    *(undefined ***)&local_188.Data[lVar12].field_0x0 = &___7FDataVertex_Metasound__6B_;
    *(longlong *)(local_188.Data + lVar12 + 8) = pFVar11->_padding_;
    *(longlong *)(local_188.Data + lVar12 + 0x10) = pFVar11->_padding_;
    *(int *)(local_188.Data + lVar12 + 0x18) = (int)pFVar11->_padding_;
    *(undefined ***)&local_188.Data[lVar12].field_0x0 = &___7FInputDataVertex_Metasound__6B_;
    FVar1 = (FScriptContainerElement)(pFVar11->Literal).Value.TypeIndex;
    local_188.Data[lVar12 + 0x30] = FVar1;
    if ((0xc < (byte)FVar1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[(byte)FVar1])
              (FVar4.Data + lVar12 + 0x20,&pFVar11->Literal);
    local_90.Literal.Value.TypeIndex = local_c8.Literal.Value.TypeIndex;
    if ((0xc < local_c8.Literal.Value.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FInputVertexInterface *)(*pcVar3)();
      return pFVar9;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_90.Literal.Value.TypeIndex])();
LAB_14ae2d38c:
  pFVar9 = local_170;
  local_130.AllocatorInstance.Data = local_188.Data;
  local_130.ArrayNum = (int)local_180;
  local_130.ArrayMax = local_180._4_4_;
  local_180 = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_188.Data = (FScriptContainerElement *)0x0;
  FInputVertexInterface::FInputVertexInterface(local_170,&local_130,&local_140);
  DestructItems<Metasound::FInputDataVertex,int>((FInputDataVertex *)local_188.Data,(int)local_180);
  if ((FInputDataVertex *)local_188.Data != (FInputDataVertex *)0x0) {
    FMemory::Free(local_188.Data);
  }
  return pFVar9;
}

// CreateLocallyUniqueId @ 14ae2d430

FGuid * __cdecl Metasound::Frontend::CreateLocallyUniqueId(FGuid *__return_storage_ptr__)

{
  atomic<unsigned___int64> aVar1;
  uint uVar2;
  
  aVar1 = DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter;
  LOCK();
  UNLOCK();
  uVar2 = DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter._0_4_;
  DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter =
       (atomic<unsigned___int64>)
       ((longlong)DocumentIDGeneratorPrivate::GlobalAtomicMetasoundIdCounter + 1);
  __return_storage_ptr__->D = uVar2;
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = aVar1._4_4_;
  return __return_storage_ptr__;
}

// CreateNodeData @ 14ae2e2e0

FNodeData * __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateNodeData
          (FNodeData *__return_storage_ptr__,FBuildContext *param_1,FMetasoundFrontendNode *param_2,
          FMetasoundFrontendClass *param_3,FMetasoundFrontendClassInterface *param_4,
          FMetasoundFrontendClassInput *param_5,FMetasoundFrontendClassOutput *param_6)

{
  int iVar1;
  longlong *plVar2;
  UScriptStruct *this;
  code *pcVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  FNodeData *pFVar6;
  IOperatorData **ppIVar7;
  FEnvironmentVertexInterface *pFVar8;
  FOutputVertexInterface *pFVar9;
  FInputVertexInterface *pFVar10;
  FMetasoundFrontendClassInput *pFVar11;
  IOperatorData *local_128;
  FSharedReferencer<1> FStack_120;
  FString local_118;
  FString local_108;
  undefined1 local_f8 [8];
  TReferenceControllerBase<1> *local_f0;
  TSharedPtr<Metasound::IOperatorData_const_,1> local_e8;
  FEnvironmentVertexInterface local_d8;
  FOutputVertexInterface local_c8;
  FInputVertexInterface local_a8;
  FVertexInterface local_88;
  
  plVar2 = (longlong *)(param_2->Configuration).InstancedStruct.StructMemory;
  local_128 = (IOperatorData *)0x0;
  FStack_120.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((plVar2 == (longlong *)0x0) ||
     (this = (param_2->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr,
     this == (UScriptStruct *)0x0)) goto LAB_14ae2e448;
  pUVar5 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
  if (this != pUVar5) {
    pUVar5 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)this->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
         ) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_14ae2e409;
    }
    pUVar5 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_108,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_118,(UObject *)0x0);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNodeData *)(*pcVar3)();
      return pFVar6;
    }
  }
LAB_14ae2e409:
  ppIVar7 = (IOperatorData **)(**(code **)(*plVar2 + 0x10))(plVar2,local_f8);
  if (&local_128 != ppIVar7) {
    local_128 = *ppIVar7;
    *ppIVar7 = (IOperatorData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&FStack_120,(FSharedReferencer<1> *)(ppIVar7 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
LAB_14ae2e448:
  pFVar11 = param_5;
  if ((param_5 == (FMetasoundFrontendClassInput *)0x0) &&
     (pFVar11 = (FMetasoundFrontendClassInput *)param_6,
     param_6 == (FMetasoundFrontendClassOutput *)0x0)) {
    pFVar11 = (FMetasoundFrontendClassInput *)&param_2->Name;
  }
  local_e8.Object = local_128;
  local_e8.SharedReferenceCount.ReferenceController = FStack_120.ReferenceController;
  pFVar8 = CreateEnvironmentVertexInterface(&local_d8,&param_2->Interface);
  pFVar9 = CreateOutputVertexInterface(&local_c8,param_1,param_2,param_3,param_4,param_5,param_6);
  pFVar10 = CreateInputVertexInterface(&local_a8,param_1,param_2,param_3,param_4,param_5,param_6);
  FVertexInterface::FVertexInterface(&local_88,pFVar10,pFVar9,pFVar8);
  FNodeData::FNodeData(__return_storage_ptr__,(FName *)pFVar11,&param_2->ID,&local_88,&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// CreateOutputNode @ 14ae2e8b0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateOutputNode
          (FBuildContext *param_1,FMetasoundFrontendNode *param_2,FMetasoundFrontendClass *param_3,
          FMetasoundFrontendClassInterface *param_4,FMetasoundFrontendClassOutput *param_5)

{
  uint *puVar1;
  longlong lVar2;
  EMetasoundFrontendClassType EVar3;
  bool bVar4;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  FNodeData *pFVar6;
  code *pcVar7;
  longlong *plVar8;
  FMetasoundFrontendClassOutput *in_stack_00000030;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FNodeData local_118;
  FNodeData local_a0;
  
  EVar3 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)&(param_4->Outputs).ArrayNum);
  if ((EVar3 != Output) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClass.Metadata.GetType() == EMetasoundFrontendClassType::Output",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x1eb,L""), bVar4)) {
    pcVar7 = (code *)swi(3);
    TVar5.Ptr = (INode *)(*pcVar7)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
  }
  if (((((param_3->Metadata).ClassName.Namespace.Number !=
         *(uint *)((longlong)&(param_4->Outputs).AllocatorInstance.Data + 4) ||
        (param_3->Metadata).ClassName.Namespace.ComparisonIndex.Value !=
        *(uint *)&(param_4->Outputs).AllocatorInstance.Data) ||
       (param_3->ID).D != (param_4->Inputs).ArrayMax) ||
       (param_4->Inputs).ArrayNum != (param_3->ID).C) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNode.ClassID == InClass.ID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x1ec,L""), bVar4)) {
    pcVar7 = (code *)swi(3);
    TVar5.Ptr = (INode *)(*pcVar7)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
  }
  puVar1 = &(param_3->Metadata).ChangeID.B;
  if (((*(int *)&param_5->field_0x8 != (param_3->Metadata).Version.Major) ||
      (*(uint *)&param_5->field_0x18 != *puVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterfacesHaveEqualSize(InClassInterface, InNode.Interface)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x1ed,L""), bVar4)) {
    pcVar7 = (code *)swi(3);
    TVar5.Ptr = (INode *)(*pcVar7)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
  }
  if (*puVar1 == 1) {
    lVar2 = *(longlong *)&(param_3->Metadata).Type;
    if ((*(int *)&param_5->field_0x18 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar7 = (code *)swi(3);
      TVar5.Ptr = (INode *)(*pcVar7)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
    }
    if (*(int *)(*(longlong *)&param_5->field_0x10 + 0x30) == 0) {
      plVar8 = *(longlong **)&(param_2->ID).C;
      pFVar6 = &local_118;
      pcVar7 = *(code **)(*plVar8 + 0x168);
    }
    else {
      if ((*(int *)&param_5->field_0x18 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar7 = (code *)swi(3);
        TVar5.Ptr = (INode *)(*pcVar7)();
        return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar5.Ptr;
      }
      if (*(int *)(*(longlong *)&param_5->field_0x10 + 0x30) != 1) {
        if (1 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString(&(param_3->Metadata).ClassName.Name,&local_128);
          FTopLevelAssetPath::ToString(*(FTopLevelAssetPath **)&param_2->ID,&local_138);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14ae2eb9b;
      }
      plVar8 = *(longlong **)&(param_2->ID).C;
      pFVar6 = &local_a0;
      pcVar7 = *(code **)(*plVar8 + 0x178);
    }
    pFVar6 = CreateNodeData(pFVar6,(FBuildContext *)param_2,(FMetasoundFrontendNode *)param_3,
                            (FMetasoundFrontendClass *)param_4,
                            (FMetasoundFrontendClassInterface *)param_5,
                            (FMetasoundFrontendClassInput *)0x0,in_stack_00000030);
    (*pcVar7)(plVar8,param_1,lVar2 + 8,pFVar6);
  }
  else {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&(param_3->Metadata).ClassName.Name,&local_148);
      FTopLevelAssetPath::ToString(*(FTopLevelAssetPath **)&param_2->ID,&local_158);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
LAB_14ae2eb9b:
    param_1->AssetPath = (FTopLevelAssetPath *)0x0;
  }
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateOutputVertexInterface @ 14ae2ebd0

/* WARNING: Enum "Type": Some values do not have unique names */

FOutputVertexInterface * __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateOutputVertexInterface
          (FOutputVertexInterface *__return_storage_ptr__,FBuildContext *param_1,
          FMetasoundFrontendNode *param_2,FMetasoundFrontendClass *param_3,
          FMetasoundFrontendClassInterface *param_4,FMetasoundFrontendClassInput *param_5,
          FMetasoundFrontendClassOutput *param_6)

{
  uint uVar1;
  code *pcVar2;
  FMetasoundFrontendClassInterface *pFVar3;
  FMetasoundFrontendClassInput *pFVar4;
  FMetasoundFrontendClassOutput *pFVar5;
  bool bVar6;
  EMetasoundFrontendClassType EVar7;
  int iVar8;
  int iVar9;
  FOutputVertexInterface *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res18 [8];
  ForAnyElementType local_158;
  undefined8 local_150;
  undefined1 local_148 [8];
  undefined **local_140;
  undefined8 local_138;
  undefined8 local_130;
  EVertexAccessType local_128;
  undefined **local_120;
  undefined8 local_118;
  undefined8 local_110;
  EVertexAccessType local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  EVertexAccessType local_e8;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> local_e0;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> local_d0;
  FString local_c0;
  FString local_b0;
  FText local_a0;
  FText local_90;
  undefined1 local_80;
  FText local_78;
  FText local_68;
  undefined1 local_58;
  FText local_50;
  FText local_40;
  undefined1 local_30;
  
  pFVar3 = param_4;
  if (((param_4->Outputs).ArrayNum != (param_2->Interface).Outputs.ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClassInterface.Outputs.Num() == InNode.Interface.Outputs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0xc0,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FOutputVertexInterface *)(*pcVar2)();
    return pFVar10;
  }
  uVar1 = (param_2->Interface).Outputs.ArrayNum;
  if (uVar1 == 0) {
    FOutputVertexInterface::FOutputVertexInterface(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar1,&local_158,0,(int *)((longlong)&local_150 + 4));
  }
  EVar7 = FMetasoundFrontendClassMetadata::GetType(&param_3->Metadata);
  pFVar5 = param_6;
  pFVar4 = param_5;
  if (EVar7 == Input) {
    if (param_5 == (FMetasoundFrontendClassInput *)0x0) {
      local_148[0] = 0;
      bVar6 = `Metasound::Frontend::GraphBuilderPrivate::CreateOutputVertexInterface'::__l16::
              <lambda_1>::operator()(local_148);
      if (!bVar6) goto LAB_14ae2f204;
    }
    if ((param_2->Interface).Outputs.ArrayNum == 1) {
      pFVar12 = (param_2->Interface).Outputs.AllocatorInstance.Data;
      if (((pFVar3->Outputs).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FOutputVertexInterface *)(*pcVar2)();
        return pFVar10;
      }
      FText::FText(&local_50);
      FText::FText(&local_40);
      local_30 = 0;
      local_e8 = FrontendVertexAccessTypeToCoreVertexAccessType
                           ((EMetasoundFrontendVertexAccessType)pFVar4->_padding_);
      local_f8 = *(undefined8 *)pFVar12;
      local_f0 = *(undefined8 *)(pFVar12 + 8);
      local_100 = &___7FOutputDataVertex_Metasound__6B_;
      if (((local_158.Data <= (FScriptContainerElement *)&local_100) &&
          ((FScriptContainerElement *)&local_100 < local_158.Data + (longlong)local_150._4_4_ * 0x20
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FOutputVertexInterface *)(*pcVar2)();
        return pFVar10;
      }
      iVar9 = (int)local_150;
      if ((int)local_150 == local_150._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_158,(int *)((longlong)&local_150 + 4));
      }
      local_150 = CONCAT44(local_150._4_4_,iVar9 + 1);
      pFVar12 = local_158.Data + (longlong)iVar9 * 0x20;
      *(undefined ***)pFVar12 = &___7FDataVertex_Metasound__6B_;
      *(undefined8 *)(pFVar12 + 8) = local_f8;
      *(undefined8 *)(pFVar12 + 0x10) = local_f0;
      *(EVertexAccessType *)(pFVar12 + 0x18) = local_e8;
      *(undefined ***)pFVar12 = &___7FOutputDataVertex_Metasound__6B_;
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      }
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
      }
    }
    else if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&param_2->Name,&local_b0);
      FTopLevelAssetPath::ToString(param_1->AssetPath,&local_c0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (EVar7 == Output) {
    if (param_6 == (FMetasoundFrontendClassOutput *)0x0) {
      local_res18[0] = 0;
      bVar6 = `Metasound::Frontend::GraphBuilderPrivate::CreateOutputVertexInterface'::__l43::
              <lambda_2>::operator()(local_res18);
      if (!bVar6) goto LAB_14ae2f204;
    }
    if (((param_2->Interface).Outputs.ArrayNum != 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNode.Interface.Outputs.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                           ,0xf4,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FOutputVertexInterface *)(*pcVar2)();
      return pFVar10;
    }
    if (((param_2->Interface).Outputs.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FOutputVertexInterface *)(*pcVar2)();
      return pFVar10;
    }
    pFVar12 = (param_2->Interface).Outputs.AllocatorInstance.Data;
    if (((pFVar3->Outputs).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FOutputVertexInterface *)(*pcVar2)();
      return pFVar10;
    }
    FText::FText(&local_78);
    FText::FText(&local_68);
    local_58 = 0;
    local_108 = FrontendVertexAccessTypeToCoreVertexAccessType
                          (*(EMetasoundFrontendVertexAccessType *)&pFVar5->field_0x30);
    local_118 = *(undefined8 *)pFVar12;
    local_110 = *(undefined8 *)(pFVar12 + 8);
    local_120 = &___7FOutputDataVertex_Metasound__6B_;
    if (((local_158.Data <= (FScriptContainerElement *)&local_120) &&
        ((FScriptContainerElement *)&local_120 < local_158.Data + (longlong)local_150._4_4_ * 0x20))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FOutputVertexInterface *)(*pcVar2)();
      return pFVar10;
    }
    iVar9 = (int)local_150;
    if ((int)local_150 == local_150._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_158,(int *)((longlong)&local_150 + 4));
    }
    local_150 = CONCAT44(local_150._4_4_,iVar9 + 1);
    pFVar12 = local_158.Data + (longlong)iVar9 * 0x20;
    *(undefined ***)pFVar12 = &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)(pFVar12 + 8) = local_118;
    *(undefined8 *)(pFVar12 + 0x10) = local_110;
    *(EVertexAccessType *)(pFVar12 + 0x18) = local_108;
    *(undefined ***)pFVar12 = &___7FOutputDataVertex_Metasound__6B_;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  else {
    iVar9 = (pFVar3->Outputs).ArrayNum;
    pFVar12 = (pFVar3->Outputs).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar9 * 0x34;
    while( true ) {
      if ((pFVar3->Outputs).ArrayNum != iVar9) {
        param_4._0_1_ = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&param_4);
      }
      if (pFVar12 == pFVar13) break;
      FText::FText(&local_a0);
      FText::FText(&local_90);
      local_80 = 0;
      local_128 = FrontendVertexAccessTypeToCoreVertexAccessType
                            (*(EMetasoundFrontendVertexAccessType *)(pFVar12 + 0x30));
      local_138 = *(undefined8 *)pFVar12;
      local_130 = *(undefined8 *)(pFVar12 + 8);
      local_140 = &___7FOutputDataVertex_Metasound__6B_;
      if (((local_158.Data <= (FScriptContainerElement *)&local_140) &&
          ((FScriptContainerElement *)&local_140 < local_158.Data + (longlong)local_150._4_4_ * 0x20
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FOutputVertexInterface *)(*pcVar2)();
        return pFVar10;
      }
      iVar8 = (int)local_150;
      if ((int)local_150 == local_150._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_158,(int *)((longlong)&local_150 + 4));
      }
      local_150 = CONCAT44(local_150._4_4_,iVar8 + 1);
      pFVar11 = local_158.Data + (longlong)iVar8 * 0x20;
      *(undefined ***)pFVar11 = &___7FDataVertex_Metasound__6B_;
      *(undefined8 *)(pFVar11 + 8) = local_138;
      *(undefined8 *)(pFVar11 + 0x10) = local_130;
      *(EVertexAccessType *)(pFVar11 + 0x18) = local_128;
      *(undefined ***)pFVar11 = &___7FOutputDataVertex_Metasound__6B_;
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      pFVar12 = pFVar12 + 0x34;
    }
  }
LAB_14ae2f204:
  local_d0.AllocatorInstance.Data = local_158.Data;
  local_d0.ArrayNum = (int)local_150;
  local_d0.ArrayMax = local_150._4_4_;
  local_150 = 0;
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  FOutputVertexInterface::FOutputVertexInterface(__return_storage_ptr__,&local_d0,&local_e0);
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  return __return_storage_ptr__;
}

// CreateSubgraphNode @ 14ae2f2a0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateSubgraphNode
          (FBuildContext *param_1,TSharedRef<Metasound::IGraph_const_,1> *param_2,
          FMetasoundFrontendNode *param_3,FMetasoundFrontendClass *param_4,
          FMetasoundFrontendClassInterface *param_5)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar3;
  FNodeData *pFVar4;
  FGraphNode *this;
  FGraphNode *pFVar5;
  FMetasoundFrontendClassInterface *in_stack_00000030;
  TSharedRef<Metasound::IGraph_const_,1> local_118;
  FNodeData local_108;
  FNodeData local_90;
  
  if ((((param_4->Metadata).ClassName.Namespace.Number !=
        *(uint *)((longlong)&(param_5->Outputs).AllocatorInstance.Data + 4) ||
       (param_4->Metadata).ClassName.Namespace.ComparisonIndex.Value !=
       *(uint *)&(param_5->Outputs).AllocatorInstance.Data) ||
      (param_4->ID).D != (param_5->Inputs).ArrayMax) ||
      (param_4->ID).C != (param_5->Inputs).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNode.ClassID == InClass.ID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x216,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  if (((in_stack_00000030->Inputs).ArrayNum != (param_4->Metadata).Version.Major) ||
     ((in_stack_00000030->Outputs).ArrayNum != (param_4->Metadata).ChangeID.B)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterfacesHaveEqualSize(InClassInterface, InNode.Interface)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x217,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (INode *)(*pcVar1)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar3.Ptr;
    }
  }
  pFVar5 = (FGraphNode *)0x0;
  pFVar4 = CreateNodeData(&local_108,(FBuildContext *)param_2,(FMetasoundFrontendNode *)param_4,
                          (FMetasoundFrontendClass *)param_5,in_stack_00000030,
                          (FMetasoundFrontendClassInput *)0x0,(FMetasoundFrontendClassOutput *)0x0);
  this = ::operator_new(0xa0);
  if (this != (FGraphNode *)0x0) {
    local_118.Object = *(IGraph **)&param_3->ID;
    local_118.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(param_3->ID).C;
    if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4 = FNodeData::FNodeData(&local_90,pFVar4);
    pFVar5 = FGraphNode::FGraphNode(this,pFVar4,&local_118);
  }
  param_1->AssetPath = (FTopLevelAssetPath *)pFVar5;
  FNodeData::~FNodeData(&local_108);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVariableNode @ 14ae2f410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateVariableNode
          (FBuildContext *param_1,FMetasoundFrontendNode *param_2,FMetasoundFrontendClass *param_3,
          FMetasoundFrontendClassInterface *param_4,FMetasoundFrontendGraph *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  FMetasoundFrontendNode *pFVar3;
  uchar uVar4;
  EMetasoundFrontendClassType EVar5;
  bool bVar6;
  char cVar7;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar8;
  FName *pFVar9;
  FName *this;
  longlong in_stack_00000030;
  undefined1 auStackY_188 [32];
  FString local_148;
  FString local_138;
  FMetasoundFrontendNode *local_128;
  FMetasoundFrontendClassInterface *local_120;
  FMetasoundFrontendClass *local_118;
  FString local_110;
  undefined1 local_100 [24];
  FNodeData local_e8;
  FLiteral local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_120 = (FMetasoundFrontendClassInterface *)param_5;
  local_128 = param_2;
  local_118 = (FMetasoundFrontendClass *)param_4;
  EVar5 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)&(param_4->Outputs).ArrayNum);
  if ((EVar5 != Variable) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClass.Metadata.GetType() == EMetasoundFrontendClassType::Variable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x1aa,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    TVar8.Ptr = (INode *)(*pcVar2)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar8.Ptr;
  }
  if (((((param_3->Metadata).ClassName.Namespace.Number !=
         *(uint *)((longlong)&(param_4->Outputs).AllocatorInstance.Data + 4) ||
        (param_3->Metadata).ClassName.Namespace.ComparisonIndex.Value !=
        *(uint *)&(param_4->Outputs).AllocatorInstance.Data) ||
       (param_3->ID).D != (param_4->Inputs).ArrayMax) ||
       (param_4->Inputs).ArrayNum != (param_3->ID).C) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNode.ClassID == InClass.ID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x1ab,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    TVar8.Ptr = (INode *)(*pcVar2)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar8.Ptr;
  }
  if ((((param_5->Nodes).ArrayNum != (param_3->Metadata).Version.Major) ||
      ((param_5->Edges).ArrayNum != (param_3->Metadata).ChangeID.B)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterfacesHaveEqualSize(InClassInterface, InNode.Interface)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x1ac,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    TVar8.Ptr = (INode *)(*pcVar2)();
    return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar8.Ptr;
  }
  this = *(FName **)(in_stack_00000030 + 0x20);
  pFVar9 = this + (longlong)*(int *)(in_stack_00000030 + 0x28) * 0x17;
  if (this != pFVar9) {
    do {
      if ((((uint)param_3->_padding_ == this[0xf].ComparisonIndex.Value &&
           (param_3->ID).B == this[0x10].Number) &&
          (param_3->ID).A == this[0x10].ComparisonIndex.Value) &&
          *(uint *)((longlong)&param_3->_padding_ + 4) == this[0xf].Number) {
        plVar1 = *(longlong **)&(param_2->ID).C;
        pFVar9 = this + 1;
        cVar7 = (**(code **)(*plVar1 + 0x50))(plVar1,pFVar9);
        pFVar3 = local_128;
        if (cVar7 != '\0') {
          FMetasoundFrontendLiteral::ToLiteral
                    ((FMetasoundFrontendLiteral *)(this + 2),&local_70,pFVar9,
                     *(IDataTypeRegistry **)&(local_128->ID).C,
                     *(FProxyDataCache **)&local_128->ClassID);
          pcVar2 = *(code **)(*plVar1 + 400);
          CreateNodeData(&local_e8,(FBuildContext *)pFVar3,(FMetasoundFrontendNode *)param_3,
                         local_118,local_120,(FMetasoundFrontendClassInput *)0x0,
                         (FMetasoundFrontendClassOutput *)0x0);
          uVar4 = local_70.Value.TypeIndex;
          if ((0xc < local_70.Value.TypeIndex) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x105,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            TVar8.Ptr = (INode *)(*pcVar2)();
            return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar8.Ptr;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar4])(local_100,&local_70);
          (*pcVar2)(plVar1,param_1,pFVar9,local_100);
          if ((0xc < local_70.Value.TypeIndex) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            TVar8.Ptr = (INode *)(*pcVar2)();
            return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar8.Ptr;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_70.Value.TypeIndex])(&local_70);
          return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
        }
        if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ae2f5cf;
        ::FName::ToString(this,&local_110);
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)param_3,&local_148,Digits);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        goto LAB_14ae2f5c5;
      }
      this = this + 0x17;
    } while (this != pFVar9);
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    FGuid::AppendString((FGuid *)param_3,&local_138,Digits);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    local_110.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
LAB_14ae2f5c5:
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
LAB_14ae2f5cf:
  param_1->AssetPath = (FTopLevelAssetPath *)0x0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateVertexInterface @ 14ae2f7c0

FVertexInterface * __cdecl
Metasound::Frontend::GraphBuilderPrivate::CreateVertexInterface
          (FVertexInterface *__return_storage_ptr__,FBuildContext *param_1,
          FMetasoundFrontendNode *param_2,FMetasoundFrontendClass *param_3,
          FMetasoundFrontendClassInterface *param_4,FMetasoundFrontendClassInput *param_5,
          FMetasoundFrontendClassOutput *param_6)

{
  FEnvironmentVertexInterface *pFVar1;
  FOutputVertexInterface *pFVar2;
  FInputVertexInterface *pFVar3;
  FEnvironmentVertexInterface local_78;
  FOutputVertexInterface local_68;
  FInputVertexInterface local_48;
  
  pFVar1 = CreateEnvironmentVertexInterface(&local_78,&param_2->Interface);
  pFVar2 = CreateOutputVertexInterface(&local_68,param_1,param_2,param_3,param_4,param_5,param_6);
  pFVar3 = CreateInputVertexInterface(&local_48,param_1,param_2,param_3,param_4,param_5,param_6);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,pFVar3,pFVar2,pFVar1);
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeMetasoundFrontendLiteral @ 14ae30b90

void __cdecl EmptyLinkFunctionForGeneratedCodeMetasoundFrontendLiteral(void)

{
  return;
}

// FindBuildGraphChecked @ 14ae32010

FMetasoundFrontendGraph * __cdecl
Metasound::Frontend::FindBuildGraphChecked(FMetasoundFrontendGraphClass *param_1)

{
  IDocumentBuilderRegistry *pIVar1;
  FMetaSoundFrontendDocumentBuilder *this;
  FMetasoundFrontendGraph *pFVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  pIVar1 = IDocumentBuilderRegistry::Get();
  if (pIVar1 != (IDocumentBuilderRegistry *)0x0) {
    local_18 = 0;
    local_10 = 0;
    this = (FMetaSoundFrontendDocumentBuilder *)
           (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_1->_padding_,&local_18);
    if (this != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar2 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this);
      return pFVar2;
    }
  }
  pFVar2 = FMetasoundFrontendGraphClass::GetDefaultGraph(param_1);
  return pFVar2;
}

// FindClassInputForInputNode @ 14ae32170

FMetasoundFrontendClassInput * __cdecl
Metasound::Frontend::GraphBuilderPrivate::FindClassInputForInputNode
          (FMetasoundFrontendGraphClass *param_1,FMetasoundFrontendNode *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendClassInput *pFVar3;
  FMetasoundFrontendClassInterface *pFVar4;
  FMetasoundFrontendClassInput *pFVar5;
  
  if ((param_2->Interface).Inputs.ArrayNum == 1) {
    pFVar4 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)param_1);
    pFVar5 = (FMetasoundFrontendClassInput *)(pFVar4->Inputs).AllocatorInstance.Data;
    pFVar3 = pFVar5 + (pFVar4->Inputs).ArrayNum;
    if (pFVar5 != pFVar3) {
      do {
        if ((((param_2->ID).D == *(uint *)((longlong)&pFVar5->_padding_ + 4) &&
             (param_2->ID).A == (uint)pFVar5->_padding_) &&
            (param_2->ID).C == (uint)pFVar5->_padding_) &&
            (param_2->ID).B == *(uint *)((longlong)&pFVar5->_padding_ + 4)) {
          return pFVar5;
        }
        pFVar5 = pFVar5 + 1;
      } while (pFVar5 != pFVar3);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3983196478976818657>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x21f,"InInputNode.Interface.Inputs.Num() == 1");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMetasoundFrontendClassInput *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FMetasoundFrontendClassInput *)0x0;
}

// FindClassOutputForOutputNode @ 14ae32250

FMetasoundFrontendClassOutput * __cdecl
Metasound::Frontend::GraphBuilderPrivate::FindClassOutputForOutputNode
          (FMetasoundFrontendGraphClass *param_1,FMetasoundFrontendNode *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendClassOutput *pFVar3;
  FMetasoundFrontendClassInterface *pFVar4;
  FMetasoundFrontendClassOutput *pFVar5;
  
  if ((param_2->Interface).Outputs.ArrayNum == 1) {
    pFVar4 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)param_1);
    pFVar3 = (FMetasoundFrontendClassOutput *)(pFVar4->Outputs).AllocatorInstance.Data;
    pFVar5 = pFVar3 + (pFVar4->Outputs).ArrayNum;
    if (pFVar3 != pFVar5) {
      do {
        if ((((param_2->ID).D == *(uint *)&pFVar3->field_0x2c &&
             (param_2->ID).A == *(uint *)&pFVar3->field_0x20) &&
            (param_2->ID).C == *(uint *)&pFVar3->field_0x28) &&
            (param_2->ID).B == *(uint *)&pFVar3->field_0x24) {
          return pFVar3;
        }
        pFVar3 = pFVar3 + 1;
      } while (pFVar3 != pFVar5);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3983196478976818640>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x230,"InOutputNode.Interface.Outputs.Num() == 1");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMetasoundFrontendClassOutput *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FMetasoundFrontendClassOutput *)0x0;
}

// FindConstBuildGraphChecked @ 14ae325b0

FMetasoundFrontendGraph * __cdecl
Metasound::Frontend::FindConstBuildGraphChecked(FMetasoundFrontendGraphClass *param_1)

{
  IDocumentBuilderRegistry *pIVar1;
  FMetaSoundFrontendDocumentBuilder *this;
  FMetasoundFrontendGraph *pFVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  pIVar1 = IDocumentBuilderRegistry::Get();
  if (pIVar1 != (IDocumentBuilderRegistry *)0x0) {
    local_18 = 0;
    local_10 = 0;
    this = (FMetaSoundFrontendDocumentBuilder *)
           (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_1->_padding_,&local_18);
    if (this != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar2 = FMetaSoundFrontendDocumentBuilder::FindConstBuildGraphChecked(this);
      return pFVar2;
    }
  }
  pFVar2 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(param_1);
  return pFVar2;
}

// FindInputLiteralForInputNode @ 14ae33800

FMetasoundFrontendLiteral * __cdecl
Metasound::Frontend::GraphBuilderPrivate::FindInputLiteralForInputNode
          (FBuildContext *param_1,FMetasoundFrontendNode *param_2,
          FMetasoundFrontendClassInterface *param_3,FMetasoundFrontendClassInput *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendLiteral *pFVar4;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar5;
  FMetasoundFrontendClassInputDefault *pFVar6;
  FMetasoundFrontendClassInputDefault *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TArrayView<FGuid_const_,int> local_28;
  TArrayView<FGuid_const_,int> local_18;
  
  if ((param_2->Interface).Inputs.ArrayNum == 1) {
    pFVar8 = (param_2->InputLiterals).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)(param_2->InputLiterals).ArrayNum * 0x68;
    if (pFVar8 != pFVar9) {
      pFVar1 = (param_2->Interface).Inputs.AllocatorInstance.Data;
      do {
        if (((*(int *)(pFVar1 + 0x1c) == *(int *)(pFVar8 + 0xc) &&
             *(int *)(pFVar1 + 0x18) == *(int *)(pFVar8 + 8)) &&
            *(int *)(pFVar1 + 0x14) == *(int *)(pFVar8 + 4)) &&
            *(int *)(pFVar1 + 0x10) == *(int *)pFVar8) {
          if ((FMetasoundFrontendLiteral *)(pFVar8 + 0x10) != (FMetasoundFrontendLiteral *)0x0) {
            return (FMetasoundFrontendLiteral *)(pFVar8 + 0x10);
          }
          break;
        }
        pFVar8 = pFVar8 + 0x68;
      } while (pFVar8 != pFVar9);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3983196478976819081>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x77,"InInputNode.Interface.Inputs.Num() == 1");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendLiteral *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar7 = (FMetasoundFrontendClassInputDefault *)0x0;
  local_28.DataPtr = (param_1->PageOrder).DataPtr;
  local_28.ArrayNum = (param_1->PageOrder).ArrayNum;
  local_28._12_4_ = *(undefined4 *)&(param_1->PageOrder).field_0xc;
  pTVar5 = FMetasoundFrontendClassInput::GetDefaults(param_4);
  pFVar6 = FindPreferredPage<FMetasoundFrontendClassInputDefault>(pTVar5,&local_28);
  if (pFVar6 == (FMetasoundFrontendClassInputDefault *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3983196478976819058>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x8e,"InputDefault");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendLiteral *)(*pcVar2)();
      return pFVar4;
    }
  }
  else if ((pFVar6->Literal).Type != Invalid) {
    return &pFVar6->Literal;
  }
  if ((param_3->Inputs).ArrayNum == 1) {
    local_18.DataPtr = (param_1->PageOrder).DataPtr;
    local_18.ArrayNum = (param_1->PageOrder).ArrayNum;
    local_18._12_4_ = *(undefined4 *)&(param_1->PageOrder).field_0xc;
    pTVar5 = FMetasoundFrontendClassInput::GetDefaults
                       ((FMetasoundFrontendClassInput *)
                        ((param_3->Inputs).AllocatorInstance.Data +
                        ((longlong)(param_3->Inputs).ArrayNum * 9 + -9) * 8));
    pFVar6 = FindPreferredPage<FMetasoundFrontendClassInputDefault>(pTVar5,&local_18);
    if (pFVar6 == (FMetasoundFrontendClassInputDefault *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3983196478976819044>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                         ,0x9c,"InputDefault");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FMetasoundFrontendLiteral *)(*pcVar2)();
        return pFVar4;
      }
    }
    else if ((pFVar6->Literal).Type != Invalid) {
      pFVar7 = pFVar6;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3983196478976819048>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x98,"InInputNodeClassInterface.Inputs.Num() == 1");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMetasoundFrontendLiteral *)(*pcVar2)();
      return pFVar4;
    }
  }
  return &pFVar7->Literal;
}

// FindLiteralForInputVertex @ 14ae33b50

/* WARNING: Type propagation algorithm not settling */

FMetasoundFrontendLiteral * __cdecl
Metasound::Frontend::GraphBuilderPrivate::FindLiteralForInputVertex
          (FBuildContext *param_1,FName *param_2,FMetasoundFrontendNode *param_3,
          FMetasoundFrontendClassInput *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FMetasoundFrontendLiteral *pFVar5;
  TArray<FMetasoundFrontendClassInputDefault,TSizedDefaultAllocator<32>_> *pTVar6;
  FMetasoundFrontendClassInputDefault *pFVar7;
  FScriptContainerElement *pFVar8;
  FMetasoundFrontendClassInputDefault *pFVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  TArrayView<FGuid_const_,int> local_18;
  
  iVar1 = (param_3->InputLiterals).ArrayNum;
  if (iVar1 != 0) {
    pFVar11 = (FName *)(param_3->Interface).Inputs.AllocatorInstance.Data;
    pFVar4 = pFVar11 + (longlong)(param_3->Interface).Inputs.ArrayNum * 4;
    if (pFVar11 != pFVar4) {
      do {
        if (*pFVar11 == *param_2) {
          if (pFVar11 != (FName *)0x0) {
            pFVar8 = (param_3->InputLiterals).AllocatorInstance.Data;
            pFVar10 = pFVar8 + (longlong)iVar1 * 0x68;
            if (pFVar8 == pFVar10) goto LAB_14ae33bcf;
            goto LAB_14ae33c60;
          }
          break;
        }
        pFVar11 = pFVar11 + 4;
      } while (pFVar11 != pFVar4);
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3983196478976819119>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x51,"InputVertex");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendLiteral *)(*pcVar2)();
      return pFVar5;
    }
  }
  goto LAB_14ae33bcf;
  while (pFVar8 = pFVar8 + 0x68, pFVar8 != pFVar10) {
LAB_14ae33c60:
    if (((pFVar11[2].Number == *(uint *)(pFVar8 + 4) &&
         pFVar11[3].ComparisonIndex.Value == *(uint *)(pFVar8 + 8)) &&
        pFVar11[3].Number == *(uint *)(pFVar8 + 0xc)) &&
        pFVar11[2].ComparisonIndex.Value == *(uint *)pFVar8) {
      if ((FMetasoundFrontendLiteral *)(pFVar8 + 0x10) != (FMetasoundFrontendLiteral *)0x0) {
        return (FMetasoundFrontendLiteral *)(pFVar8 + 0x10);
      }
      break;
    }
  }
LAB_14ae33bcf:
  local_18.DataPtr = (param_1->PageOrder).DataPtr;
  local_18.ArrayNum = (param_1->PageOrder).ArrayNum;
  local_18._12_4_ = *(undefined4 *)&(param_1->PageOrder).field_0xc;
  pTVar6 = FMetasoundFrontendClassInput::GetDefaults(param_4);
  pFVar7 = FindPreferredPage<FMetasoundFrontendClassInputDefault>(pTVar6,&local_18);
  pFVar9 = (FMetasoundFrontendClassInputDefault *)0x0;
  if (pFVar7 == (FMetasoundFrontendClassInputDefault *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3983196478976819105>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendGraphBuilder.cpp"
                       ,0x5f,"InputDefault");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendLiteral *)(*pcVar2)();
      return pFVar5;
    }
  }
  else if ((pFVar7->Literal).Type != Invalid) {
    pFVar9 = pFVar7;
  }
  return &pFVar9->Literal;
}

// FindVariableForVariableNode @ 14ae372d0

FMetasoundFrontendVariable * __cdecl
Metasound::Frontend::GraphBuilderPrivate::FindVariableForVariableNode
          (FMetasoundFrontendNode *param_1,FMetasoundFrontendGraph *param_2)

{
  FMetasoundFrontendVariable *pFVar1;
  FMetasoundFrontendVariable *pFVar2;
  
  pFVar1 = (FMetasoundFrontendVariable *)(param_2->Variables).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (param_2->Variables).ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if ((((param_1->ID).D == (pFVar1->VariableNodeID).D &&
           (param_1->ID).C == (pFVar1->VariableNodeID).C) &&
          (param_1->ID).B == (pFVar1->VariableNodeID).B) &&
          (param_1->ID).A == (pFVar1->VariableNodeID).A) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FMetasoundFrontendVariable *)0x0;
}

// GetInvalidClassArray @ 14ae38cd0

TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Frontend::Invalid::GetInvalidClassArray(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidClassArray'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInvalidClassInterface @ 14ae38d40

FMetasoundFrontendClassInterface * __cdecl
Metasound::Frontend::Invalid::GetInvalidClassInterface(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidClassInterface'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInvalidClassMetadata @ 14ae38db0

FMetasoundFrontendClassMetadata * __cdecl
Metasound::Frontend::Invalid::GetInvalidClassMetadata(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&::Invalid);
      _Init_thread_footer(&::_TSS0);
      return &::Invalid;
    }
  }
  return &::Invalid;
}

// GetInvalidDocumentMetadata @ 14ae38e30

FMetasoundFrontendDocumentMetadata * __cdecl
Metasound::Frontend::Invalid::GetInvalidDocumentMetadata(void)

{
  return &::Invalid;
}

// GetInvalidGraphClass @ 14ae38e40

FMetasoundFrontendGraphClass * __cdecl Metasound::Frontend::Invalid::GetInvalidGraphClass(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass(&::Invalid);
      atexit(`Metasound::Frontend::Invalid::GetInvalidGraphClass'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
      return &::Invalid;
    }
  }
  return &::Invalid;
}

// GetInvalidGraphClassArray @ 14ae38ed0

TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Frontend::Invalid::GetInvalidGraphClassArray(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidGraphClassArray'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInvalidGraphClassPresetOptions @ 14ae38f40

FMetasoundFrontendGraphClassPresetOptions * __cdecl
Metasound::Frontend::Invalid::GetInvalidGraphClassPresetOptions(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidGraphClassPresetOptions'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInvalidLiteral @ 14ae38fb0

FMetasoundFrontendLiteral * __cdecl Metasound::Frontend::Invalid::GetInvalidLiteral(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::Frontend::Invalid::GetInvalidLiteral'::__l2::<lambda_1>::operator()
                (local_res8,&Literal);
      atexit(`Metasound::Frontend::Invalid::GetInvalidLiteral'::__l2::
             _dynamic_atexit_destructor_for__Literal__);
      _Init_thread_footer(&::_TSS0);
      return &Literal;
    }
  }
  return &Literal;
}

// GetInvalidName @ 14ae39040

FName * __cdecl Metasound::Frontend::Invalid::GetInvalidName(void)

{
  return &::Invalid;
}

// GetInvalidNameSet @ 14ae39050

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
Metasound::Frontend::Invalid::GetInvalidNameSet(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidNameSet'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInvalidNodeInterface @ 14ae390c0

FMetasoundFrontendNodeInterface * __cdecl
Metasound::Frontend::Invalid::GetInvalidNodeInterface(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidNodeInterface'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInvalidString @ 14ae39130

FString * __cdecl Metasound::Frontend::Invalid::GetInvalidString(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidString'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInvalidText @ 14ae391a0

FText * __cdecl Metasound::Frontend::Invalid::GetInvalidText(void)

{
  ITextData *pIVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar1 = ::operator_new(0x38);
    StaticEmptyText.TextData.Reference = (ITextData *)0x0;
    if (pIVar1 != (ITextData *)0x0) {
      *(undefined4 *)&pIVar1[2].field_0x1 = 0;
      *(undefined2 *)&pIVar1[2].field_0x5 = 0;
      pIVar1[2].field_0x7 = 0;
      pIVar1[1] = (ITextData)0x0;
      *(undefined1 *)(pIVar1 + 2) = 0;
      *pIVar1 = (ITextData)&___7FTextHistory_Base__6B_;
      pIVar1[3] = (ITextData)0xffffffffffffffff;
      pIVar1[4] = (ITextData)0x0;
      pIVar1[5] = (ITextData)0x0;
      pIVar1[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar1 + 1) = *(int *)(pIVar1 + 1) + 1;
      UNLOCK();
      StaticEmptyText.TextData.Reference = pIVar1;
    }
    StaticEmptyText.Flags = 0;
    atexit(`FText::GetEmpty'::__l2::_dynamic_atexit_destructor_for__StaticEmptyText__);
    _Init_thread_footer(&::_TSS0);
    return &StaticEmptyText;
  }
  return &StaticEmptyText;
}

// GetMetasoundFrontendLiteralType @ 14ae392e0

EMetasoundFrontendLiteralType __cdecl
Metasound::Frontend::GetMetasoundFrontendLiteralType(ELiteralType param_1)

{
  return param_1;
}

// GetMetasoundLiteralType @ 14ae392f0

ELiteralType __cdecl
Metasound::Frontend::GetMetasoundLiteralType(EMetasoundFrontendLiteralType param_1)

{
  return param_1;
}

// GetNodeName @ 14ae3ad30

FName * __cdecl
Metasound::Frontend::GraphBuilderPrivate::GetNodeName
          (FMetasoundFrontendNode *param_1,FMetasoundFrontendClassInput *param_2,
          FMetasoundFrontendClassOutput *param_3)

{
  FMetasoundFrontendClassOutput *pFVar1;
  
  if (param_2 != (FMetasoundFrontendClassInput *)0x0) {
    return (FName *)param_2;
  }
  pFVar1 = (FMetasoundFrontendClassOutput *)&param_1->Name;
  if (param_3 != (FMetasoundFrontendClassOutput *)0x0) {
    pFVar1 = param_3;
  }
  return (FName *)pFVar1;
}

// InterfacesHaveEqualSize @ 14ae3eff0

bool __cdecl
Metasound::Frontend::GraphBuilderPrivate::InterfacesHaveEqualSize
          (FMetasoundFrontendClassInterface *param_1,FMetasoundFrontendNodeInterface *param_2)

{
  if (((param_1->Inputs).ArrayNum == (param_2->Inputs).ArrayNum) &&
     ((param_1->Outputs).ArrayNum == (param_2->Outputs).ArrayNum)) {
    return true;
  }
  return false;
}

// LexToString @ 14ae40300

FString * __cdecl LexToString(FString *__return_storage_ptr__,FNone param_1)

{
  FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// LogFailedToCreateNode @ 14ae40330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::Frontend::GraphBuilderPrivate::LogFailedToCreateNode
          (FString *param_1,FMetasoundFrontendNode *param_2,FMetasoundFrontendClass *param_3)

{
  FMetasoundFrontendVersionNumber *this;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (1 < (byte)LogMetaSound._0_1_) {
    this = FMetasoundFrontendClassMetadata::GetVersion(&param_3->Metadata);
    FMetasoundFrontendVersionNumber::ToString(this,&local_28);
    FMetasoundFrontendClassName::ToString(&(param_3->Metadata).ClassName,&local_38);
    ::FName::ToString(&param_2->Name,&local_48);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(&param_2->ID,&local_58,Digits);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SortSubgraphDependencies @ 14ae466c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies
          (TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  FSubgraphDependencyLookup *pFVar6;
  undefined4 uStack_bc;
  TArrayView<FMetasoundFrontendGraphClass_const_*,int> local_b8;
  undefined1 local_a8 [80];
  undefined1 local_58 [80];
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_b8._12_4_ = uStack_bc;
  local_b8.ArrayNum = iVar1;
  local_b8.DataPtr = (FMetasoundFrontendGraphClass **)pFVar2;
  this = (TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)`Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies'::__l2::
            FSubgraphDependencyLookup::FSubgraphDependencyLookup(local_a8,&local_b8);
  pFVar6 = `Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies'::__l2::
           FSubgraphDependencyLookup::FSubgraphDependencyLookup
                     (local_58,(FSubgraphDependencyLookup *)this);
  bVar4 = Algo::
          KahnTopologicalSort<TArray<FMetasoundFrontendGraphClass_const_*,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::GraphBuilderPrivate::SortSubgraphDependencies_::__l2::FSubgraphDependencyLookup>
                    (param_1,pFVar6,None);
  *(undefined4 *)&this[1].field_0x10 = 0;
  if (*(void **)&this[1].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[1].field_0x8);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendGraphClass_const_*,FMetasoundFrontendGraphClass_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  if ((!bVar4) && (1 < (byte)LogMetaSound._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  return bVar4;
}

// Z_Construct_UScriptStruct_FMetasoundFrontendLiteral @ 14ae49910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMetasoundFrontendLiteral(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendLiteral.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMetasoundFrontendLiteral.InnerSingleton,
               &Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendLiteral.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMetasoundFrontendLiteral.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `dynamic_atexit_destructor_for_'Connectability'' @ 1504243b0

void __cdecl
`Metasound::Frontend::FInputNodeInputController::CanConnectTo'::__l2::
_dynamic_atexit_destructor_for__Connectability__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Connectability.PossibleConverterNodeClasses.AllocatorInstance.Data;
  if (Connectability.PossibleConverterNodeClasses.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (Connectability.PossibleConverterNodeClasses.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 1504243d0

void __cdecl
`Metasound::Frontend::FDocumentController::GetInterfaceVersions'::__l2::
_dynamic_atexit_destructor_for__EmptySet__(void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'InputDataMetadata'' @ 150424410

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputDataMetadata__(void)

{
  if (InputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150424439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputVariableMetadata'' @ 150424450

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputVariableMetadata__(void)

{
  if (InputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150424479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 150424490

void __cdecl
`Metasound::Frontend::FInvalidDocumentController::GetDocumentPtr'::__l2::
_dynamic_atexit_destructor_for__Invalid__(void)

{
  longlong *plVar1;
  
  if (::Invalid._16_8_ != 0) {
    plVar1 = (longlong *)&::Invalid.field_0x20;
    if (::Invalid._56_8_ != 0) {
      plVar1 = (longlong *)::Invalid._56_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x0001504244b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1504244c0

void __cdecl
`Metasound::Frontend::FInvalidDocumentController::GetDocumentPtr'::__l2::
_dynamic_atexit_destructor_for__Invalid__(void)

{
  longlong *plVar1;
  
  if (::Invalid._16_8_ != 0) {
    plVar1 = (longlong *)&::Invalid.field_0x20;
    if (::Invalid._56_8_ != 0) {
      plVar1 = (longlong *)::Invalid._56_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x0001504244e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1504244f0

void __cdecl
`Metasound::Frontend::Invalid::GetInvalidClassArray'::__l2::
_dynamic_atexit_destructor_for__Invalid__(void)

{
  DestructItems<FMetasoundFrontendClass,int>
            ((FMetasoundFrontendClass *)::Invalid.AllocatorInstance.Data,::Invalid.ArrayNum);
  if (::Invalid.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Invalid.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 150424530

void __cdecl
`Metasound::Frontend::Invalid::GetInvalidClassInterface'::__l2::
_dynamic_atexit_destructor_for__Invalid__(void)

{
  if (::Invalid.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Invalid.Environment.AllocatorInstance.Data);
  }
  if (::Invalid.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Invalid.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)::Invalid.Inputs.AllocatorInstance.Data,
             ::Invalid.Inputs.ArrayNum);
  if (::Invalid.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Invalid.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 150424590

void __cdecl
`Metasound::Frontend::Invalid::GetInvalidGraphClass'::__l2::
_dynamic_atexit_destructor_for__Invalid__(void)

{
  FMetasoundFrontendGraphClass::~FMetasoundFrontendGraphClass(&::Invalid);
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1504245b0

void __cdecl
`Metasound::Frontend::Invalid::GetInvalidGraphClassArray'::__l2::
_dynamic_atexit_destructor_for__Invalid__(void)

{
  DestructItems<FMetasoundFrontendGraphClass,int>
            ((FMetasoundFrontendGraphClass *)::Invalid.AllocatorInstance.Data,::Invalid.ArrayNum);
  if (::Invalid.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Invalid.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1504245f0

void __cdecl
`Metasound::Frontend::Invalid::GetInvalidGraphClassPresetOptions'::__l2::
_dynamic_atexit_destructor_for__Invalid__(void)

{
  ::Invalid.InputsInheritingDefault.HashSize = 0;
  if (::Invalid.InputsInheritingDefault.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)::Invalid.InputsInheritingDefault.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&::Invalid.InputsInheritingDefault.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 150424630

void __cdecl
`Metasound::Frontend::Invalid::GetInvalidNameSet'::__l2::_dynamic_atexit_destructor_for__Invalid__
          (void)

{
  ::Invalid.HashSize = 0;
  if (::Invalid.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)::Invalid.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&::Invalid.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 150424670

void __cdecl
`Metasound::Frontend::Invalid::GetInvalidNodeInterface'::__l2::
_dynamic_atexit_destructor_for__Invalid__(void)

{
  if (::Invalid.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Invalid.Environment.AllocatorInstance.Data);
  }
  if (::Invalid.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Invalid.Outputs.AllocatorInstance.Data);
  }
  if (::Invalid.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Invalid.Inputs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1504246c0

void __cdecl
`Metasound::Frontend::Invalid::GetInvalidString'::__l2::_dynamic_atexit_destructor_for__Invalid__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Invalid.Data.AllocatorInstance.Data;
  if (::Invalid.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Invalid.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Literal'' @ 1504246e0

void __cdecl
`Metasound::Frontend::Invalid::GetInvalidLiteral'::__l2::_dynamic_atexit_destructor_for__Literal__
          (void)

{
  if (Literal.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Literal.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)Literal.AsString.AllocatorInstance.Data,Literal.AsString.ArrayNum);
  if (Literal.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Literal.AsString.AllocatorInstance.Data);
  }
  if (Literal.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Literal.AsFloat.AllocatorInstance.Data);
  }
  if (Literal.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Literal.AsInteger.AllocatorInstance.Data);
  }
  if (Literal.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Literal.AsBoolean.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputDataMetadata'' @ 150424760

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputDataMetadata__(void)

{
  if (OutputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150424789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputVariableMetadata'' @ 1504247a0

void __cdecl
Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputVariableMetadata__(void)

{
  if (OutputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504247c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// operator() @ 15055e250

bool __thiscall
`Metasound::Frontend::GraphBuilderPrivate::CreateOutputVertexInterface'::__l16::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3983196478976818990>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3983196478976818990>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15055e290

bool __thiscall
`Metasound::Frontend::GraphBuilderPrivate::CreateInputVertexInterface'::__l16::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3983196478976818883>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3983196478976818883>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15055e2d0

bool __thiscall
`Metasound::Frontend::GraphBuilderPrivate::CreateOutputVertexInterface'::__l43::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3983196478976818958>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3983196478976818958>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15055e310

bool __thiscall
`Metasound::Frontend::GraphBuilderPrivate::CreateInputVertexInterface'::__l27::<lambda_3>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3983196478976818868>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3983196478976818868>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

