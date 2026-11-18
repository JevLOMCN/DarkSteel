// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 179

// `dynamic_initializer_for_'InputDataMetadata'' @ 1411e19c0

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

// `dynamic_initializer_for_'InputVariableMetadata'' @ 1411e1a30

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

// `dynamic_initializer_for_'OutputDataMetadata'' @ 1411e1aa0

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

// `dynamic_initializer_for_'OutputVariableMetadata'' @ 1411e1b10

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h__Script_MetasoundFrontend_3611216160'' @ 1411e1b80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h__Script_MetasoundFrontend_3611216160__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MetasoundFrontend",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h__Script_MetasoundFrontend_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h__Script_MetasoundFrontend_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UClass_UMetaSoundBuilderDocument @ 14add57a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMetaSoundBuilderDocument(void)

{
  if (Z_Registration_Info_UClass_UMetaSoundBuilderDocument.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMetaSoundBuilderDocument.OuterSingleton,
               &Z_Construct_UClass_UMetaSoundBuilderDocument_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMetaSoundBuilderDocument.OuterSingleton;
}

// NewStructOps @ 14add57e0

void * __cdecl
Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMetaSoundFrontendDocumentBuilder,&UE::CoreUObject::Private::Construct<FMetaSoundFrontendDocumentBuilder>,&UE::CoreUObject::Private::ConstructForTests<FMetaSoundFrontendDocumentBuilder>,&UE::CoreUObject::Private::Destruct<FMetaSoundFrontendDocumentBuilder>,&UE::CoreUObject::Private::Copy<FMetaSoundFrontendDocumentBuilder>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<FMetasoundFrontendInterface,FMetasoundFrontendInterface,int> @ 14add6570

void __cdecl
ConstructItems<FMetasoundFrontendInterface,FMetasoundFrontendInterface,int>
          (void *param_1,FMetasoundFrontendInterface *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x5c);
    piVar5 = &(param_2->Metadata).UClassOptions.ArrayNum;
    do {
      FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
                ((FMetasoundFrontendClassInterface *)
                 ((longlong)param_1 + (-0x58 - (longlong)param_2) + (longlong)piVar5),
                 (FMetasoundFrontendClassInterface *)(piVar5 + -0x16));
      uVar3 = *(undefined8 *)(piVar5 + -4);
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      *(undefined8 *)(piVar4 + -7) = *(undefined8 *)(piVar5 + -6);
      *(undefined8 *)(piVar4 + -5) = uVar3;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar5;
      _Src = (((TArray<FMetasoundFrontendInterfaceUClassOptions,TSizedDefaultAllocator<32>_> *)
              (piVar5 + -2))->AllocatorInstance).Data;
      piVar4[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar2,0,pFVar1,iVar2,piVar4);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x14);
      }
      piVar5 = piVar5 + 0x18;
      piVar4 = piVar4 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,int> @ 14add66e0

void __cdecl
DestructItems<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,int>
          (TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0xd8;
    do {
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)*puVar1,*(int *)(puVar1 + 1)
                );
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -1));
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)puVar1[-4],
                 *(int *)(puVar1 + -3));
      if ((void *)puVar1[-4] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-4]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -5));
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)puVar1[-8],
                 *(int *)(puVar1 + -7));
      if ((void *)puVar1[-8] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-8]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -9));
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)puVar1[-0xc],
                 *(int *)(puVar1 + -0xb));
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -0xd));
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)puVar1[-0x10],
                 *(int *)(puVar1 + -0xf));
      if ((void *)puVar1[-0x10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x10]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -0x11));
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)puVar1[-0x14],
                 *(int *)(puVar1 + -0x13));
      if ((void *)puVar1[-0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x14]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -0x15));
      DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)puVar1[-0x18],
                 *(int *)(puVar1 + -0x17));
      if ((void *)puVar1[-0x18] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x18]);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(puVar1 + -0x19));
      puVar1 = puVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,int> @ 14add6830

void __cdecl
DestructItems<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,int>
          (TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x38;
    do {
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)*puVar1,*(int *)(puVar1 + 1));
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMetaSoundFrontendDocumentBuilder::FNodeInstanceReplacementData,int> @ 14add6880

void __cdecl
DestructItems<FMetaSoundFrontendDocumentBuilder::FNodeInstanceReplacementData,int>
          (FNodeInstanceReplacementData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->OutputConnections).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      *(undefined4 *)(puVar1 + -9) = 0;
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FMetaSoundFrontendDocumentBuilder::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x12));
      FInstancedStruct::Reset((FInstancedStruct *)(puVar1 + -0x14));
      FInstancedStruct::Reset((FInstancedStruct *)(puVar1 + -0x16));
      puVar1 = puVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`FMetaSoundFrontendDocumentBuilder::GetReferencedPresetAsset'::__l2::<lambda_1>_> @ 14add71c0

FMetasoundFrontendNode * __thiscall
TArray<FMetasoundFrontendNode,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FMetaSoundFrontendDocumentBuilder::GetReferencedPresetAsset_::__l2::<lambda_1>_>
          (TArray<FMetasoundFrontendNode,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  IDocumentCache *pIVar1;
  code *pcVar2;
  bool bVar3;
  EMetasoundFrontendClassType EVar4;
  FMetasoundFrontendNode *pFVar5;
  longlong lVar6;
  FMetasoundFrontendNode *pFVar7;
  
  pFVar5 = (FMetasoundFrontendNode *)(this->AllocatorInstance).Data;
  pFVar7 = pFVar5 + this->ArrayNum;
  while( true ) {
    if (pFVar5 == pFVar7) {
      return (FMetasoundFrontendNode *)0x0;
    }
    if ((((param_1.__this)->DocumentCache).Object == (IDocumentCache *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    pIVar1 = ((param_1.__this)->DocumentCache).Object;
    lVar6 = (**(code **)(*(longlong *)pIVar1 + 0x18))(pIVar1,&pFVar5->ClassID);
    if ((lVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Class",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0xe91,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMetasoundFrontendNode *)(*pcVar2)();
      return pFVar5;
    }
    EVar4 = FMetasoundFrontendClassMetadata::GetType
                      ((FMetasoundFrontendClassMetadata *)(lVar6 + 0x18));
    if (EVar4 == External) {
      return pFVar5;
    }
    pFVar5 = pFVar5 + 1;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FMetasoundFrontendNode *)(*pcVar2)();
  return pFVar5;
}

// FindByPredicate<`FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType'::__l21::<lambda_3>_> @ 14add72a0

FMetasoundFrontendClassOutput * __thiscall
TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType_::__l21::<lambda_3>_>
          (TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *this,
          <lambda_3> param_1)

{
  FMetasoundFrontendClassVertex *pFVar1;
  FMetasoundFrontendClassVertex *pFVar2;
  bool bVar3;
  FMetasoundFrontendClassInput local_58;
  
  pFVar2 = (FMetasoundFrontendClassVertex *)(this->AllocatorInstance).Data;
  pFVar1 = pFVar2 + this->ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FMetasoundFrontendClassOutput *)0x0;
    }
    FMetasoundFrontendClassInput::FMetasoundFrontendClassInput(&local_58,pFVar2);
    bVar3 = (FName)local_58._padding_ == param_1.VertexName;
    DestructItems<FMetasoundFrontendClassInputDefault,int>
              ((FMetasoundFrontendClassInputDefault *)local_58.Defaults.AllocatorInstance.Data,
               local_58.Defaults.ArrayNum);
    if ((FMetasoundFrontendClassInputDefault *)local_58.Defaults.AllocatorInstance.Data !=
        (FMetasoundFrontendClassInputDefault *)0x0) {
      FMemory::Free(local_58.Defaults.AllocatorInstance.Data);
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 1;
  }
  return (FMetasoundFrontendClassOutput *)pFVar2;
}

// GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_> @ 14add8c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014add8cdc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff68 : 0x00014add8ce0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TAccessPtr<FMetasoundFrontendGraph> * __thiscall
Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::
GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,_Metasound::Frontend::FGraphClassAccessPtr::GetGraph_::__l2::<lambda_1>_>
          (TAccessPtr<FMetasoundFrontendGraphClass> *this,
          TAccessPtr<FMetasoundFrontendGraph> *__return_storage_ptr__,<lambda_1> param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  FMetasoundFrontendGraphClass *pFVar4;
  FMetasoundFrontendGraph *pFVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  code *local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  code *local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = *(code **)&this->GetObject;
  pFVar5 = (FMetasoundFrontendGraph *)0x0;
  local_80 = (longlong *)0x0;
  if (local_a8 != (code *)0x0) {
    puVar2 = *(undefined8 **)&(this->GetObject).field_0x28;
    puVar6 = (undefined8 *)&(this->GetObject).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar6 = puVar2;
    }
    (**(code **)*puVar6)(puVar6,&local_98);
  }
  local_68 = (code *)0x0;
  local_40 = FMemory::Malloc(0x50,0x10);
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  plVar8 = local_40 + 2;
  *plVar8 = (longlong)local_a8;
  local_40[7] = (longlong)local_80;
  local_80 = (longlong *)0x0;
  *(undefined4 *)(local_40 + 4) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_40 + 0x24) = local_98._4_4_;
  *(undefined4 *)(local_40 + 5) = uStack_90;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uStack_8c;
  local_40[6] = local_88;
  if (*plVar8 != 0) {
    local_a8 = (code *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,FMetasoundFrontendGraph_*>
               ::Call;
  }
  if (local_a8 != (code *)0x0) {
    (**(code **)(CONCAT44(local_98._4_4_,(undefined4)local_98) + 0x10))();
  }
  local_80 = (longlong *)0x0;
  local_a8 = local_68;
  if (local_68 != (code *)0x0) {
    plVar8 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar8 = local_40;
    }
    (**(code **)*plVar8)(plVar8,&local_98);
  }
  __return_storage_ptr__->CachedObjectPtr = (FMetasoundFrontendGraph *)0x0;
  plVar8 = (longlong *)&(__return_storage_ptr__->GetObject).field_0x10;
  *(undefined8 *)&(__return_storage_ptr__->GetObject).field_0x28 = 0;
  *(code **)&__return_storage_ptr__->GetObject = local_a8;
  if (local_a8 != (code *)0x0) {
    plVar7 = &local_98;
    if (local_80 != (longlong *)0x0) {
      plVar7 = local_80;
    }
    (**(code **)*plVar7)(plVar7,plVar8);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->GetObject);
  plVar7 = *(longlong **)&(__return_storage_ptr__->GetObject).field_0x28;
  pcVar1 = *(code **)&__return_storage_ptr__->GetObject;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar8 + 8))(plVar8);
  if (pcVar1 == UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,FMetasoundFrontendGraph_*>
                ::Call) {
    UE::Core::Private::Function::CheckCallable((void *)*puVar2);
    pcVar1 = (code *)*puVar2;
    plVar8 = puVar2 + 2;
    if ((longlong *)puVar2[5] != (longlong *)0x0) {
      plVar8 = (longlong *)puVar2[5];
    }
    uVar3 = (**(code **)(*plVar8 + 8))();
    pFVar4 = (FMetasoundFrontendGraphClass *)(*pcVar1)(uVar3);
    if (pFVar4 != (FMetasoundFrontendGraphClass *)0x0) {
      pFVar5 = BuilderPrivate::FindBuildGraphChecked(pFVar4);
    }
  }
  else {
    pFVar5 = (FMetasoundFrontendGraph *)(*pcVar1)(puVar2);
  }
  __return_storage_ptr__->CachedObjectPtr = pFVar5;
  if (local_a8 != (code *)0x0) {
    plVar8 = &local_98;
    if (local_80 != (longlong *)0x0) {
      plVar8 = local_80;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_68 != (code *)0x0) {
    plVar8 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar8 = local_40;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return __return_storage_ptr__;
}

// HeapSortInternal<int,int,FIdentityFunctor,`FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput'::__l5::<lambda_1>_> @ 14add92e0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput_::__l5::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar2 = iVar6;
  iVar7 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_14add93be:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar9 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar2 = *param_1;
            iVar5 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar2;
            if (1 < iVar6) {
              do {
                iVar2 = iVar5 * 2;
                iVar7 = iVar2 + 1;
                if (iVar2 + 2 < iVar6) {
                  if (param_1[iVar7] < param_1[(longlong)iVar2 + 2]) {
                    iVar7 = iVar2;
                  }
                  iVar7 = iVar7 + 1;
                }
                iVar2 = param_1[iVar5];
                if (iVar2 <= param_1[iVar7]) break;
                param_1[iVar5] = param_1[iVar7];
                param_1[iVar7] = iVar2;
                iVar5 = iVar7;
              } while (iVar7 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar5 = iVar7 + -1;
      iVar6 = iVar2 + -2;
      iVar2 = iVar6;
      iVar7 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[iVar8] < param_1[(longlong)iVar6 + 2]) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar1 = param_1[iVar5];
    if (iVar1 <= param_1[iVar8]) goto LAB_14add93be;
    param_1[iVar5] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = iVar1;
    iVar5 = iVar8;
  } while( true );
}

// HeapSortInternal<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,FIdentityFunctor,`Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges'::__l9::<lambda_1>_> @ 14add9470

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,FIdentityFunctor,_Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges_::__l9::<lambda_1>_>
          (FInterfaceBindingRegistryEntry **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> param_4)

{
  FInterfaceBindingRegistryEntry *pFVar1;
  FInterfaceBindingRegistryEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  <lambda_1> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,FIdentityFunctor,TReversePredicate<_Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges_::__l9::<lambda_1>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar9 = param_2 + -1;
  lVar10 = (longlong)iVar9;
  if (0 < iVar9) {
    do {
      iVar11 = 0;
      pFVar1 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = pFVar1;
      if (1 < iVar9) {
        do {
          iVar7 = iVar11 * 2;
          iVar8 = iVar7 + 1;
          if (iVar7 + 2 < iVar9) {
            pFVar1 = param_1[iVar8];
            pFVar2 = param_1[(longlong)iVar7 + 2];
            if ((pFVar2 == (FInterfaceBindingRegistryEntry *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("A",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                   ,0xba,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((pFVar1 == (FInterfaceBindingRegistryEntry *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("B",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                   ,0xbb,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar2);
            iVar6 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar1);
            if (iVar5 < iVar6) {
              iVar8 = iVar7;
            }
            iVar8 = iVar8 + 1;
          }
          pFVar1 = param_1[iVar8];
          pFVar2 = param_1[iVar11];
          if ((pFVar2 == (FInterfaceBindingRegistryEntry *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("A",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                 ,0xba,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((pFVar1 == (FInterfaceBindingRegistryEntry *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("B",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                 ,0xbb,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar2);
          iVar5 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar1);
          if (iVar5 <= iVar7) break;
          pFVar1 = param_1[iVar11];
          param_1[iVar11] = param_1[iVar8];
          param_1[iVar8] = pFVar1;
          iVar11 = iVar8;
        } while (iVar8 * 2 + 1 < iVar9);
      }
      iVar9 = iVar9 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}

// HeapifyInternal<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,FIdentityFunctor,TReversePredicate<`Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges'::__l9::<lambda_1>_>_> @ 14add9690

void __cdecl
AlgoImpl::
HeapifyInternal<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,FIdentityFunctor,TReversePredicate<_Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges_::__l9::<lambda_1>_>_>
          (FInterfaceBindingRegistryEntry **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_bool___cdecl_Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges(FGuid_const_&,TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>_const_&,FGuid_const_&,TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>_const_&,TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>_&)_::_9_::<lambda_1>_>
          param_4)

{
  FInterfaceBindingRegistryEntry *pFVar1;
  FInterfaceBindingRegistryEntry *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar9 = iVar6 * 2 + 1;
  iVar4 = iVar9;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar9) {
LAB_14add9852:
      if (iVar11 == 0) {
        return;
      }
      iVar6 = iVar11 + -1;
      iVar9 = iVar4 + -2;
      iVar4 = iVar9;
      iVar11 = iVar6;
    }
    iVar9 = iVar6 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      pFVar1 = param_1[iVar10];
      pFVar2 = param_1[(longlong)iVar9 + 2];
      if ((pFVar2 == (FInterfaceBindingRegistryEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("A",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                             ,0xba,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pFVar1 == (FInterfaceBindingRegistryEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("B",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                             ,0xbb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar2);
      iVar8 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar1);
      if (iVar7 < iVar8) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar1 = param_1[iVar10];
    pFVar2 = param_1[iVar6];
    if ((pFVar2 == (FInterfaceBindingRegistryEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("A",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0xba,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pFVar1 == (FInterfaceBindingRegistryEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0xbb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar2);
    iVar7 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar1);
    if (iVar7 <= iVar9) goto LAB_14add9852;
    pFVar1 = param_1[iVar6];
    param_1[iVar6] = param_1[iVar10];
    iVar9 = iVar10 * 2 + 1;
    param_1[iVar10] = pFVar1;
    iVar6 = iVar10;
  } while( true );
}

// InternalConstructor<UMetaSoundBuilderDocument> @ 14add9c10

void __cdecl InternalConstructor<UMetaSoundBuilderDocument>(FObjectInitializer *param_1)

{
  UObject *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &UMetaSoundBuilderDocument::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UMetaSoundBuilderDocument::_vftable__for__IMetaSoundDocumentInterface__;
    FMetasoundFrontendDocument::FMetasoundFrontendDocument
              ((FMetasoundFrontendDocument *)&this[1].field_0x8);
    *(undefined8 *)&this[0xb].field_0x8 = 0;
    *(undefined8 *)&this[0xb].field_0x10 = 0;
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    *(uint *)&this[4].field_0x8 = pFVar4->A;
    *(uint *)&this[4].field_0xc = uVar1;
    *(uint *)&this[4].field_0x10 = uVar2;
    *(uint *)&this[4].field_0x14 = uVar3;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMetaSoundBuilderDocument> @ 14add9c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMetaSoundBuilderDocument>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMetaSoundBuilderDocument::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UMetaSoundBuilderDocument::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UMetaSoundBuilderDocument::_vftable__for__IMetaSoundDocumentInterface__;
    FMetasoundFrontendDocument::FMetasoundFrontendDocument
              ((FMetasoundFrontendDocument *)&pUVar1[1].field_0x8);
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,`FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput'::__l5::<lambda_1>_> @ 14add9d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput_::__l5::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  int *local_338;
  int *local_328;
  int *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppiVar5 = &local_328;
    do {
      piVar8 = ppiVar5[1];
      piVar4 = *ppiVar5;
      piVar1 = ppiVar5[2];
      iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
      local_338._0_4_ = (int)piVar1;
      piVar9 = piVar4;
      if ((int)local_338 != 0) {
LAB_14add9e00:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar6 = piVar8 + 1;
          iVar2 = piVar9[iVar3 >> 1];
          piVar9[iVar3 >> 1] = *piVar9;
          *piVar9 = iVar2;
          piVar4 = piVar9;
LAB_14add9e30:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar8) goto code_r0x00014add9e39;
          goto LAB_14add9e40;
        }
        for (; piVar4 = piVar9, piVar1 = piVar9, piVar9 < piVar8; piVar8 = piVar8 + -1) {
          while (piVar1 = piVar1 + 1, piVar1 <= piVar8) {
            if (*piVar1 < *piVar4) {
              piVar4 = piVar1;
            }
          }
          iVar3 = *piVar4;
          *piVar4 = *piVar8;
          *piVar8 = iVar3;
        }
        goto LAB_14add9ef9;
      }
LAB_14add9ee7:
      local_338 = piVar1;
      HeapSortInternal<int,int,FIdentityFunctor,_FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput_::__l5::<lambda_1>_>
                (piVar4,iVar3,param_3,param_4);
LAB_14add9ef9:
      ppiVar5 = ppiVar5 + -3;
    } while (&local_328 <= ppiVar5);
  }
  return;
code_r0x00014add9e39:
  if (*piVar9 <= *piVar4) goto LAB_14add9e30;
LAB_14add9e40:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -1;
    if (piVar6 <= piVar9) break;
  } while (*piVar6 <= *piVar9);
  if (piVar4 <= piVar6) {
    iVar3 = *piVar4;
    *piVar4 = *piVar6;
    *piVar6 = iVar3;
    goto LAB_14add9e30;
  }
  iVar3 = *piVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *piVar9 = *piVar6;
  *piVar6 = iVar3;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar8 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar8) {
      *ppiVar5 = piVar4;
      ppiVar5[1] = piVar8;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar6 <= piVar9 + 1) goto LAB_14add9ef9;
    piVar8 = piVar7 + -2;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 1 < piVar6) {
      *ppiVar5 = piVar9;
      ppiVar5[1] = piVar7 + -2;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar8 <= piVar4) goto LAB_14add9ef9;
  }
  iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
  piVar9 = piVar4;
  if ((int)local_338 == 0) goto LAB_14add9ee7;
  goto LAB_14add9e00;
}

// IntroSortInternal<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,FIdentityFunctor,`Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges'::__l9::<lambda_1>_> @ 14add9f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,FIdentityFunctor,_Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges_::__l9::<lambda_1>_>
          (FInterfaceBindingRegistryEntry **param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> param_4)

{
  FInterfaceBindingRegistryEntry *pFVar1;
  FInterfaceBindingRegistryEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FInterfaceBindingRegistryEntry **ppFVar7;
  FInterfaceBindingRegistryEntry **ppFVar8;
  FInterfaceBindingRegistryEntry ***pppFVar9;
  FInterfaceBindingRegistryEntry **ppFVar10;
  FInterfaceBindingRegistryEntry **ppFVar11;
  FInterfaceBindingRegistryEntry **ppFVar12;
  float fVar13;
  undefined1 auStack_3a8 [32];
  <lambda_1> local_388;
  FInterfaceBindingRegistryEntry **local_380;
  int local_378;
  FInterfaceBindingRegistryEntry ***local_370;
  FInterfaceBindingRegistryEntry **local_358;
  FInterfaceBindingRegistryEntry **local_348;
  FInterfaceBindingRegistryEntry **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_4;
    local_348 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar13;
    memset(local_330,0,0x2e8);
    pppFVar9 = &local_348;
    do {
      local_380 = pppFVar9[1];
      ppFVar7 = *pppFVar9;
      local_358 = pppFVar9[2];
      iVar5 = (int)((longlong)local_380 - (longlong)ppFVar7 >> 3) + 1;
      local_378 = (int)local_358;
      ppFVar8 = ppFVar7;
      local_370 = pppFVar9;
      if ((int)local_358 != 0) {
LAB_14adda060:
        ppFVar12 = local_380;
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          ppFVar10 = local_380 + 1;
          pFVar1 = ppFVar8[iVar5 >> 1];
          ppFVar8[iVar5 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar1;
          ppFVar7 = ppFVar8;
LAB_14adda090:
          ppFVar7 = ppFVar7 + 1;
          if (ppFVar7 <= ppFVar12) goto code_r0x00014adda099;
          goto LAB_14adda110;
        }
        if (ppFVar8 < local_380) {
          do {
            ppFVar12 = ppFVar8;
            ppFVar7 = ppFVar8;
            ppFVar10 = ppFVar8 + 1;
            if (ppFVar8 + 1 <= local_380) {
              do {
                pFVar1 = *ppFVar12;
                pFVar2 = *ppFVar10;
                if ((pFVar1 == (FInterfaceBindingRegistryEntry *)0x0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("A",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                       ,0xba,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if ((pFVar2 == (FInterfaceBindingRegistryEntry *)0x0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("B",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                                       ,0xbb,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar5 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority
                                  (pFVar1);
                iVar6 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority
                                  (pFVar2);
                ppFVar7 = ppFVar10;
                if (iVar6 <= iVar5) {
                  ppFVar7 = ppFVar12;
                }
                ppFVar10 = ppFVar10 + 1;
                ppFVar12 = ppFVar7;
              } while (ppFVar10 <= local_380);
            }
            pFVar1 = *ppFVar7;
            ppFVar12 = local_380 + -1;
            *ppFVar7 = *local_380;
            *local_380 = pFVar1;
            pppFVar9 = local_370;
            local_380 = ppFVar12;
          } while (ppFVar8 < ppFVar12);
        }
        goto LAB_14adda263;
      }
LAB_14adda251:
      HeapSortInternal<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,FIdentityFunctor,_Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges_::__l9::<lambda_1>_>
                (ppFVar7,iVar5,param_3,param_4);
LAB_14adda263:
      pppFVar9 = pppFVar9 + -3;
    } while (&local_348 <= pppFVar9);
  }
  return;
code_r0x00014adda099:
  pFVar1 = *ppFVar8;
  pFVar2 = *ppFVar7;
  if ((pFVar1 == (FInterfaceBindingRegistryEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("A",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0xba,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pFVar2 == (FInterfaceBindingRegistryEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("B",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                         ,0xbb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar1);
  iVar6 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar2);
  if (iVar6 <= iVar5) goto LAB_14adda090;
LAB_14adda110:
  do {
    ppFVar11 = ppFVar10;
    ppFVar10 = ppFVar11 + -1;
    if (ppFVar10 <= ppFVar8) break;
    pFVar1 = *ppFVar10;
    pFVar2 = *ppFVar8;
    if ((pFVar1 == (FInterfaceBindingRegistryEntry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("A",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0xba,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pFVar2 == (FInterfaceBindingRegistryEntry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                           ,0xbb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar1);
    iVar6 = Metasound::Frontend::FInterfaceBindingRegistryEntry::GetBindingPriority(pFVar2);
  } while (iVar6 <= iVar5);
  if (ppFVar7 <= ppFVar10) {
    pFVar1 = *ppFVar7;
    *ppFVar7 = *ppFVar10;
    *ppFVar10 = pFVar1;
    goto LAB_14adda090;
  }
  pFVar1 = *ppFVar8;
  *ppFVar8 = *ppFVar10;
  local_378 = local_378 + -1;
  *ppFVar10 = pFVar1;
  param_4 = local_388;
  if ((longlong)((longlong)ppFVar10 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar12 - (longlong)ppFVar7 & 0xfffffffffffffff8U)) {
    if (ppFVar7 < local_380) {
      *pppFVar9 = ppFVar7;
      pppFVar9[1] = local_380;
      *(int *)(pppFVar9 + 2) = local_378;
      pppFVar9 = pppFVar9 + 3;
      local_370 = pppFVar9;
    }
    if (ppFVar10 <= ppFVar8 + 1) goto LAB_14adda263;
    local_380 = ppFVar11 + -2;
    ppFVar7 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar10) {
      *pppFVar9 = ppFVar8;
      pppFVar9[1] = ppFVar11 + -2;
      *(int *)(pppFVar9 + 2) = local_378;
      pppFVar9 = pppFVar9 + 3;
      local_370 = pppFVar9;
    }
    if (local_380 <= ppFVar7) goto LAB_14adda263;
  }
  iVar5 = (int)((longlong)local_380 - (longlong)ppFVar7 >> 3) + 1;
  ppFVar8 = ppFVar7;
  if (local_378 == 0) goto LAB_14adda251;
  goto LAB_14adda060;
}

// NewObject<UMetaSoundBuilderDocument> @ 14adda5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMetaSoundBuilderDocument * __cdecl NewObject<UMetaSoundBuilderDocument>(UObject *param_1)

{
  UClass *pUVar1;
  UMetaSoundBuilderDocument *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMetaSoundBuilderDocument::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMetaSoundBuilderDocument *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NoneOf<TArray<FMetasoundFrontendVertexHandle,TSizedDefaultAllocator<32>_>,`FMetaSoundFrontendDocumentBuilder::ApplyNodeInstanceReplacementData'::__l58::<lambda_1>_> @ 14adda670

bool __cdecl
Algo::
NoneOf<TArray<FMetasoundFrontendVertexHandle,TSizedDefaultAllocator<32>_>,_FMetaSoundFrontendDocumentBuilder::ApplyNodeInstanceReplacementData_::__l58::<lambda_1>_>
          (TArray<FMetasoundFrontendVertexHandle,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_1> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendVertexHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((((*(int *)(pFVar2 + 0xc) != 0 || *(int *)(pFVar2 + 8) != 0) || *(int *)(pFVar2 + 4) != 0)
         || *(int *)pFVar2 != 0) &&
       (((*(int *)(pFVar2 + 0x1c) != 0 || *(int *)(pFVar2 + 0x18) != 0) ||
        *(int *)(pFVar2 + 0x14) != 0) || *(int *)(pFVar2 + 0x10) != 0)) {
      return false;
    }
    pFVar2 = pFVar2 + 0x20;
  }
  return true;
}

// RemoveAll<`FMetaSoundFrontendDocumentBuilder::UnlinkVariableNode'::__l2::<lambda_1>_> @ 14adda6f0

int __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::
RemoveAll<_FMetaSoundFrontendDocumentBuilder::UnlinkVariableNode_::__l2::<lambda_1>_>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FGuid *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = this->ArrayNum;
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar3 = param_1->InNodeID;
  iVar9 = 0;
  bVar10 = ((pFVar3->D != *(uint *)(pFVar2 + 0xc) || pFVar3->C != *(uint *)(pFVar2 + 8)) ||
           pFVar3->B != *(uint *)(pFVar2 + 4)) || *(uint *)pFVar2 != pFVar3->A;
  lVar5 = 0;
  iVar6 = 0;
  do {
    lVar5 = lVar5 + 1;
    iVar7 = iVar6 + 1;
    if (lVar5 < lVar8) {
      pFVar3 = param_1->InNodeID;
      pFVar4 = pFVar2 + (lVar5 * 4 + 2) * 4;
      do {
        if (bVar10 != (((pFVar3->A != *(uint *)(pFVar4 + -8) || pFVar3->B != *(uint *)(pFVar4 + -4))
                       || pFVar3->D != *(uint *)(pFVar4 + 4)) || pFVar3->C != *(uint *)pFVar4))
        break;
        iVar7 = iVar7 + 1;
        lVar5 = lVar5 + 1;
        pFVar4 = pFVar4 + 0x10;
      } while (lVar5 < lVar8);
    }
    if (bVar10 != false) {
      if (iVar9 != iVar6) {
        memmove(pFVar2 + (longlong)iVar9 * 0x10,pFVar2 + (longlong)iVar6 * 0x10,
                (longlong)(iVar7 - iVar6) << 4);
      }
      iVar9 = iVar9 + (iVar7 - iVar6);
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar6 = iVar7;
    if (lVar8 <= lVar5) {
      this->ArrayNum = iVar9;
      return iVar1 - iVar9;
    }
  } while( true );
}

// Reverse<FMetasoundFrontendEdge> @ 14addad60

void __cdecl AlgoImpl::Reverse<FMetasoundFrontendEdge>(FMetasoundFrontendEdge *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FMetasoundFrontendEdge *pFVar20;
  longlong lVar21;
  
  lVar21 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar20 = param_1 + (param_2 + -1);
    do {
      uVar1 = (pFVar20->FromNodeID).B;
      uVar2 = (pFVar20->FromNodeID).C;
      uVar3 = (pFVar20->FromNodeID).D;
      uVar4 = (param_1->FromNodeID).A;
      uVar5 = (param_1->FromNodeID).B;
      uVar6 = (param_1->FromNodeID).C;
      uVar7 = (param_1->FromNodeID).D;
      uVar8 = (param_1->FromVertexID).A;
      uVar9 = (param_1->FromVertexID).B;
      uVar10 = (param_1->FromVertexID).C;
      uVar11 = (param_1->FromVertexID).D;
      uVar12 = (param_1->ToNodeID).A;
      uVar13 = (param_1->ToNodeID).B;
      uVar14 = (param_1->ToNodeID).C;
      uVar15 = (param_1->ToNodeID).D;
      uVar16 = (param_1->ToVertexID).A;
      uVar17 = (param_1->ToVertexID).B;
      uVar18 = (param_1->ToVertexID).C;
      uVar19 = (param_1->ToVertexID).D;
      (param_1->FromNodeID).A = (pFVar20->FromNodeID).A;
      (param_1->FromNodeID).B = uVar1;
      (param_1->FromNodeID).C = uVar2;
      (param_1->FromNodeID).D = uVar3;
      uVar1 = (pFVar20->FromVertexID).B;
      uVar2 = (pFVar20->FromVertexID).C;
      uVar3 = (pFVar20->FromVertexID).D;
      (param_1->FromVertexID).A = (pFVar20->FromVertexID).A;
      (param_1->FromVertexID).B = uVar1;
      (param_1->FromVertexID).C = uVar2;
      (param_1->FromVertexID).D = uVar3;
      uVar1 = (pFVar20->ToNodeID).B;
      uVar2 = (pFVar20->ToNodeID).C;
      uVar3 = (pFVar20->ToNodeID).D;
      (param_1->ToNodeID).A = (pFVar20->ToNodeID).A;
      (param_1->ToNodeID).B = uVar1;
      (param_1->ToNodeID).C = uVar2;
      (param_1->ToNodeID).D = uVar3;
      uVar1 = (pFVar20->ToVertexID).B;
      uVar2 = (pFVar20->ToVertexID).C;
      uVar3 = (pFVar20->ToVertexID).D;
      (param_1->ToVertexID).A = (pFVar20->ToVertexID).A;
      (param_1->ToVertexID).B = uVar1;
      (param_1->ToVertexID).C = uVar2;
      (param_1->ToVertexID).D = uVar3;
      (pFVar20->FromNodeID).A = uVar4;
      (pFVar20->FromNodeID).B = uVar5;
      (pFVar20->FromNodeID).C = uVar6;
      (pFVar20->FromNodeID).D = uVar7;
      (pFVar20->FromVertexID).A = uVar8;
      (pFVar20->FromVertexID).B = uVar9;
      (pFVar20->FromVertexID).C = uVar10;
      (pFVar20->FromVertexID).D = uVar11;
      (pFVar20->ToNodeID).A = uVar12;
      (pFVar20->ToNodeID).B = uVar13;
      (pFVar20->ToNodeID).C = uVar14;
      (pFVar20->ToNodeID).D = uVar15;
      (pFVar20->ToVertexID).A = uVar16;
      (pFVar20->ToVertexID).B = uVar17;
      (pFVar20->ToVertexID).C = uVar18;
      (pFVar20->ToVertexID).D = uVar19;
      lVar21 = lVar21 + -1;
      pFVar20 = pFVar20 + -1;
      param_1 = param_1 + 1;
    } while (lVar21 != 0);
  }
  return;
}

// Transform<TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_>,TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl'::__l13::<lambda_2>_> @ 14addade0

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_>,TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl_::__l13::<lambda_2>_>
          (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
          *param_2,<lambda_2> *param_3)

{
  FMetasoundFrontendClassInput *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FMetasoundFrontendClassInput *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_78 [56];
  void *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FMetasoundFrontendClassInput *)(param_1->AllocatorInstance).Data;
  pFVar1 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    `Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl'::
    __l13::<lambda_2>::operator()
              (param_3,(TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*> *)
                       local_78,pFVar7);
    pFVar6 = (param_2->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)local_78) &&
       ((FScriptContainerElement *)local_78 < pFVar6 + (longlong)param_2->ArrayMax * 0x50)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x50;
    *(undefined8 *)pFVar6 = local_78._0_8_;
    *(undefined8 *)(pFVar6 + 8) = local_78._8_8_;
    *(undefined8 *)(pFVar6 + 0x10) = local_78._16_8_;
    *(undefined8 *)(pFVar6 + 0x18) = local_78._24_8_;
    *(undefined8 *)(pFVar6 + 0x20) = local_78._32_8_;
    *(undefined8 *)(pFVar6 + 0x28) = local_78._40_8_;
    *(undefined4 *)(pFVar6 + 0x30) = local_78._48_4_;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(void **)(pFVar6 + 0x38) = local_40;
    local_40 = (void *)0x0;
    *(undefined4 *)(pFVar6 + 0x40) = (undefined4)local_38;
    *(undefined4 *)(pFVar6 + 0x44) = local_38._4_4_;
    local_38 = 0;
    *(undefined8 *)(pFVar6 + 0x48) = local_30;
    DestructItems<FMetasoundFrontendClassInputDefault,int>
              ((FMetasoundFrontendClassInputDefault *)0x0,0);
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// Transform<TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_>,TArray<TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl'::__l13::<lambda_3>_> @ 14addafc0

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_>,TArray<TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl_::__l13::<lambda_3>_>
          (TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
          *param_2,<lambda_3> *param_3)

{
  int iVar1;
  TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FMetasoundFrontendClassOutput *pFVar8;
  FMetasoundFrontendClassOutput *pFVar9;
  undefined1 local_res8 [8];
  TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*> local_68;
  
  iVar1 = param_1->ArrayNum;
  pFVar8 = (FMetasoundFrontendClassOutput *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    `Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl'::
    __l13::<lambda_3>::operator()(param_3,&local_68,pFVar8);
    pTVar2 = (TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*> *)
             (param_2->AllocatorInstance).Data;
    if ((pTVar2 <= &local_68) && (&local_68 < pTVar2 + param_2->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar3 = (param_2->AllocatorInstance).Data;
    lVar7 = (longlong)iVar6 * 0x40;
    pFVar8 = pFVar8 + 1;
    *(undefined8 *)(pFVar3 + lVar7) = local_68._0_8_;
    *(undefined8 *)(pFVar3 + lVar7 + 8) = local_68._8_8_;
    *(undefined8 *)(pFVar3 + lVar7 + 0x10) = local_68._16_8_;
    *(undefined8 *)(pFVar3 + lVar7 + 0x10 + 8) = local_68._24_8_;
    *(undefined8 *)(pFVar3 + lVar7 + 0x20) = local_68._32_8_;
    *(undefined8 *)(pFVar3 + lVar7 + 0x20 + 8) = local_68._40_8_;
    *(undefined8 *)(pFVar3 + lVar7 + 0x30) = local_68._48_8_;
    *(undefined8 *)(pFVar3 + lVar7 + 0x30 + 8) = local_68._56_8_;
  }
  return;
}

// Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions'::__l2::<lambda_1>_> @ 14addb120

/* WARNING: Removing unreachable block (ram,0x00014addb2c2) */
/* WARNING: Removing unreachable block (ram,0x00014addb2d0) */
/* WARNING: Removing unreachable block (ram,0x00014addb2de) */

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions_::__l2::<lambda_1>_>
          (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3)

{
  int iVar1;
  FMetasoundFrontendInterface *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FMetasoundFrontendVersion *pFVar7;
  FMetasoundFrontendVersion *pFVar8;
  undefined1 local_res8 [8];
  <lambda_1> local_res18 [16];
  FMetasoundFrontendInterface local_98;
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (FMetasoundFrontendVersion *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + iVar1;
  local_res18[0] = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVersion_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    `Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions'::__l2::<lambda_1>::
    operator()(local_res18,&local_98,pFVar7);
    pFVar2 = (FMetasoundFrontendInterface *)(param_2->AllocatorInstance).Data;
    if (((pFVar2 <= &local_98) && (&local_98 < pFVar2 + param_2->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x60;
    *(undefined8 *)pFVar6 = 0;
    *(longlong *)pFVar6 = local_98._padding_;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0xc) = local_98._padding_._4_4_;
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(longlong *)(pFVar6 + 0x10) = local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x18) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x1c) = local_98._padding_._4_4_;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(longlong *)(pFVar6 + 0x20) = local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x28) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x2c) = local_98._padding_._4_4_;
    *(longlong *)(pFVar6 + 0x30) = local_98._padding_;
    *(longlong *)(pFVar6 + 0x38) = local_98._padding_;
    *(FName *)(pFVar6 + 0x40) = local_98.Metadata.Version.Name;
    *(FMetasoundFrontendVersionNumber *)(pFVar6 + 0x48) = local_98.Metadata.Version.Number;
    *(undefined8 *)(pFVar6 + 0x50) = 0;
    *(FScriptContainerElement **)(pFVar6 + 0x50) =
         local_98.Metadata.UClassOptions.AllocatorInstance.Data;
    *(int *)(pFVar6 + 0x58) = local_98.Metadata.UClassOptions.ArrayNum;
    *(int *)(pFVar6 + 0x5c) = local_98.Metadata.UClassOptions.ArrayMax;
    local_98.Metadata.UClassOptions.ArrayNum = 0;
    local_98.Metadata.UClassOptions.ArrayMax = 0;
    local_98.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    DestructItems<FMetasoundFrontendClassInput,int>((FMetasoundFrontendClassInput *)0x0,0);
    if ((void *)local_98._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_98._padding_);
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,`Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions'::__l2::<lambda_2>_> @ 14addb330

/* WARNING: Removing unreachable block (ram,0x00014addb4d2) */
/* WARNING: Removing unreachable block (ram,0x00014addb4e0) */
/* WARNING: Removing unreachable block (ram,0x00014addb4ee) */

void __cdecl
Algo::
Transform<TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions_::__l2::<lambda_2>_>
          (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_2> param_3)

{
  int iVar1;
  FMetasoundFrontendInterface *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FMetasoundFrontendVersion *pFVar7;
  FMetasoundFrontendVersion *pFVar8;
  undefined1 local_res8 [8];
  <lambda_2> local_res18 [16];
  FMetasoundFrontendInterface local_98;
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (FMetasoundFrontendVersion *)(param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + iVar1;
  local_res18[0] = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendVersion_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    `Metasound::Frontend::FModifyInterfaceOptions::FModifyInterfaceOptions'::__l2::<lambda_2>::
    operator()(local_res18,&local_98,pFVar7);
    pFVar2 = (FMetasoundFrontendInterface *)(param_2->AllocatorInstance).Data;
    if (((pFVar2 <= &local_98) && (&local_98 < pFVar2 + param_2->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x60;
    *(undefined8 *)pFVar6 = 0;
    *(longlong *)pFVar6 = local_98._padding_;
    *(undefined4 *)(pFVar6 + 8) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0xc) = local_98._padding_._4_4_;
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(longlong *)(pFVar6 + 0x10) = local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x18) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x1c) = local_98._padding_._4_4_;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(longlong *)(pFVar6 + 0x20) = local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x28) = (undefined4)local_98._padding_;
    *(undefined4 *)(pFVar6 + 0x2c) = local_98._padding_._4_4_;
    *(longlong *)(pFVar6 + 0x30) = local_98._padding_;
    *(longlong *)(pFVar6 + 0x38) = local_98._padding_;
    *(FName *)(pFVar6 + 0x40) = local_98.Metadata.Version.Name;
    *(FMetasoundFrontendVersionNumber *)(pFVar6 + 0x48) = local_98.Metadata.Version.Number;
    *(undefined8 *)(pFVar6 + 0x50) = 0;
    *(FScriptContainerElement **)(pFVar6 + 0x50) =
         local_98.Metadata.UClassOptions.AllocatorInstance.Data;
    *(int *)(pFVar6 + 0x58) = local_98.Metadata.UClassOptions.ArrayNum;
    *(int *)(pFVar6 + 0x5c) = local_98.Metadata.UClassOptions.ArrayMax;
    local_98.Metadata.UClassOptions.ArrayNum = 0;
    local_98.Metadata.UClassOptions.ArrayMax = 0;
    local_98.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    local_98._padding_ = 0;
    DestructItems<FMetasoundFrontendClassInput,int>((FMetasoundFrontendClassInput *)0x0,0);
    if ((void *)local_98._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_98._padding_);
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// Transform<TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>,TArray<Metasound::Frontend::IInterfaceRegistryEntry_const_*,TSizedDefaultAllocator<32>_>_&,`FMetaSoundFrontendDocumentBuilder::FindDeclaredInterfaces'::__l2::<lambda_1>_> @ 14addb540

void __cdecl
Algo::
Transform<TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>,TArray<Metasound::Frontend::IInterfaceRegistryEntry_const_*,TSizedDefaultAllocator<32>_>_&,_FMetaSoundFrontendDocumentBuilder::FindDeclaredInterfaces_::__l2::<lambda_1>_>
          (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
           *param_1,
          TArray<Metasound::Frontend::IInterfaceRegistryEntry_const_*,TSizedDefaultAllocator<32>_>
          *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  bool *local_res18;
  int local_res20;
  IInterfaceRegistryEntry *local_a0;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar8 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar8 != 0) {
    puVar13 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar10 = *puVar13;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14addb5ee;
      uVar10 = puVar13[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar8 < iStack_7c) {
      iStack_7c = iVar8;
    }
  }
LAB_14addb5ee:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar14 = uVar10 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_res18 = param_3.bInterfacesFound;
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar8 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar3) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14addb6f0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar10) {
      uVar10 = uVar3;
    }
  }
LAB_14addb6f0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a0 = `FMetaSoundFrontendDocumentBuilder::FindDeclaredInterfaces'::__l2::<lambda_1>::
               operator()(&local_res18,
                          (FMetasoundFrontendVersion *)
                          (*(longlong *)&pTVar6->Elements +
                          (longlong)TStack_60.CurrentBitIndex * 0x18));
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 < pFVar4 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    *(IInterfaceRegistryEntry **)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_a0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde1b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde1c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde1f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1> @ 14adde220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1> @ 14adde250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde2a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde2b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde2d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde2e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1> @ 14adde340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1> @ 14adde370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1> @ 14adde3a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,_Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph_::__l2::<lambda_1>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1> @ 14adde3d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,_Metasound::Frontend::FGraphClassAccessPtr::GetGraph_::__l2::<lambda_1>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde3f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVariable___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVariable___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde490

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde4b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde4c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde4f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde5a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde5b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde5e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1> @ 14adde640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1> @ 14adde6d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde6f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1> @ 14adde700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,_Metasound::Frontend::FGraphClassAccessPtr::GetGraph_::__l2::<lambda_1>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVariable___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde7b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde7c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde7e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1> @ 14adde7f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1> @ 14adde850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1> @ 14adde880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde8a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1> @ 14adde8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde8d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1> @ 14adde940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1> @ 14adde970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1> @ 14adde9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1> @ 14adde9d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014adde9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1> @ 14addea00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addea23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1> @ 14addea30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addea53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1> @ 14addea60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addea83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1> @ 14addea90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addeab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1> @ 14addeac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addeae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1> @ 14addeaf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,_Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph_::__l2::<lambda_1>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addeb13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1> @ 14addeb20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,_Metasound::Frontend::FDocumentAccessPtr::GetRootGraph_::__l2::<lambda_1>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addeb43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1> @ 14addeb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstGraphClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addeb73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1> @ 14addeb80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstGraphClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addeba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1> @ 14addebb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstNodeAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFConstNodeAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addebd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1> @ 14addebe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstNodeAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFConstNodeAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addec03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1> @ 14addec10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,_Metasound::Frontend::FDocumentAccessPtr::GetRootGraph_::__l2::<lambda_1>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addec33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1> @ 14addec40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFGraphClassAccessPtr_34_V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addec63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1> @ 14addec70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFNodeAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFNodeAccessPtr_34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014addec93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// operator() @ 14ade13b0

void __thiscall
``FMetaSoundFrontendDocumentBuilder::SetGraphInputDataType'::__l11::<lambda_1>::operator()'::__l5::
<lambda_1>::operator()(void *this,FMetasoundFrontendEdge *param_1,FMetasoundFrontendNode *param_2)

{
  int iVar1;
  FMetaSoundFrontendDocumentBuilder *this_00;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  lVar5 = *(longlong *)this;
  if (*(longlong *)(lVar5 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x18))();
  if (lVar5 == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3428680960856549461>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x17ab,"ConnectedNodeClass");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (((*(FName *)(lVar5 + 0x18) == Metasound::Frontend::FInputNodeTemplate::ClassName.Namespace)
        && (*(FName *)(lVar5 + 0x20) == Metasound::Frontend::FInputNodeTemplate::ClassName.Name)) &&
       (*(FName *)(lVar5 + 0x28) == Metasound::Frontend::FInputNodeTemplate::ClassName.Variant)) {
      iVar1 = (param_2->Interface).Outputs.ArrayNum;
      lVar5 = *(longlong *)((longlong)this + 8);
      this_00 = *(FMetaSoundFrontendDocumentBuilder **)this;
      uVar7 = iVar1 - 1;
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FMetaSoundFrontendDocumentBuilder::RemoveEdgesFromNodeOutput
                (this_00,&param_1->ToNodeID,
                 (FGuid *)((param_2->Interface).Outputs.AllocatorInstance.Data +
                          (longlong)((param_2->Interface).Outputs.ArrayNum + -1) * 0x20 + 0x10),
                 (FGuid *)(lVar5 + 0x30));
      iVar1 = (param_2->Interface).Inputs.ArrayNum;
      uVar7 = iVar1 - 1;
      uVar2 = **(undefined8 **)((longlong)this + 0x10);
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined8 *)
       ((param_2->Interface).Inputs.AllocatorInstance.Data +
       (longlong)(param_2->Interface).Inputs.ArrayNum * 0x20 + -0x18) = uVar2;
      iVar1 = (param_2->Interface).Outputs.ArrayNum;
      uVar7 = iVar1 - 1;
      uVar2 = **(undefined8 **)((longlong)this + 0x10);
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined8 *)
       ((param_2->Interface).Outputs.AllocatorInstance.Data +
       (longlong)(param_2->Interface).Outputs.ArrayNum * 0x20 + -0x18) = uVar2;
      return;
    }
    FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
              (*(FMetaSoundFrontendDocumentBuilder **)this,&param_1->ToNodeID,&param_1->ToVertexID,
               (FGuid *)(*(longlong *)((longlong)this + 8) + 0x30));
  }
  return;
}

// operator() @ 14ade1620

void __thiscall
``FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType'::__l11::<lambda_2>::operator()'::__l5
::<lambda_1>::operator()(void *this,FMetasoundFrontendEdge *param_1,FMetasoundFrontendNode *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMetasoundFrontendVertexAccessType EVar7;
  longlong lVar8;
  uint uVar9;
  code *local_58;
  FMetaSoundFrontendDocumentBuilder **local_50;
  FMetaSoundFrontendDocumentBuilder *local_48;
  longlong local_40;
  undefined8 local_38;
  FMetasoundFrontendVertexHandle local_30;
  
  lVar8 = *(longlong *)this;
  if (*(longlong *)(lVar8 + 0x28) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar8 + 0x28);
  lVar8 = (**(code **)(*plVar3 + 0x18))(plVar3,&param_2->ClassID);
  if (lVar8 != 0) {
    if (((*(FName *)(lVar8 + 0x18) == Metasound::Frontend::FInputNodeTemplate::ClassName.Namespace)
        && (*(FName *)(lVar8 + 0x20) == Metasound::Frontend::FInputNodeTemplate::ClassName.Name)) &&
       (*(FName *)(lVar8 + 0x28) == Metasound::Frontend::FInputNodeTemplate::ClassName.Variant)) {
      if (**(int **)((longlong)this + 0x18) == 0) {
        iVar2 = (param_2->Interface).Outputs.ArrayNum;
        uVar9 = iVar2 - 1;
        uVar6 = 0;
        if ((int)uVar9 < iVar2) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_38 = *(undefined8 *)((longlong)this + 0x18);
        local_30.NodeID.A = (param_1->ToNodeID).A;
        local_30.NodeID.B = (param_1->ToNodeID).B;
        local_30.NodeID.C = (param_1->ToNodeID).C;
        local_30.NodeID.D = (param_1->ToNodeID).D;
        local_40 = *(longlong *)((longlong)this + 0x10);
        local_48 = *(FMetaSoundFrontendDocumentBuilder **)this;
        local_50 = &local_48;
        local_58 = UE::Core::Private::Function::
                   TFunctionRefCaller<```FMetaSoundFrontendDocumentBuilder::SetGraphInputAccessType'::__l11::<lambda_2>::operator()'::__l5::<lambda_1>::operator()'::__l11::<lambda_1>,void,FMetasoundFrontendEdge_const_&,FMetasoundFrontendNode_&>
                   ::Call;
        pFVar1 = (param_2->Interface).Outputs.AllocatorInstance.Data +
                 (longlong)(param_2->Interface).Outputs.ArrayNum * 0x20 + -0x10;
        local_30.VertexID._0_8_ = *(undefined8 *)pFVar1;
        local_30.VertexID._8_8_ = *(undefined8 *)(pFVar1 + 8);
        FMetaSoundFrontendDocumentBuilder::IterateNodesConnectedWithVertex
                  (local_48,&local_30,
                   (TFunctionRef<void___cdecl(FMetasoundFrontendEdge_const_&,FMetasoundFrontendNode_&)>
                    *)&local_58,(FGuid *)(local_40 + 0x30));
      }
    }
    else if (**(int **)((longlong)this + 0x18) == 0) {
      EVar7 = FMetaSoundFrontendDocumentBuilder::GetNodeInputAccessType
                        (*(FMetaSoundFrontendDocumentBuilder **)this,&param_1->ToNodeID,
                         &param_1->ToVertexID,(FGuid *)(*(longlong *)((longlong)this + 0x10) + 0x30)
                        );
      bVar5 = FMetasoundFrontendClassVertex::CanConnectVertexAccessTypes
                        (**(EMetasoundFrontendVertexAccessType **)((longlong)this + 0x18),EVar7);
      if (!bVar5) {
        FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
                  (*(FMetaSoundFrontendDocumentBuilder **)this,&param_1->ToNodeID,
                   &param_1->ToVertexID,(FGuid *)(*(longlong *)((longlong)this + 0x10) + 0x30));
      }
    }
  }
  return;
}

// operator() @ 14ade17f0

void __thiscall
``FMetaSoundFrontendDocumentBuilder::SetGraphOutputAccessType'::__l14::<lambda_2>::operator()'::__l5
::<lambda_1>::operator()(void *this,FMetasoundFrontendEdge *param_1,FMetasoundFrontendNode *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  EMetasoundFrontendVertexAccessType EVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar7 = *(longlong *)this;
  if (*(longlong *)(lVar7 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar7 + 0x28);
  lVar7 = (**(code **)(*plVar2 + 0x18))(plVar2,&param_2->ClassID);
  if (lVar7 != 0) {
    iVar1 = (param_2->Interface).Outputs.ArrayNum;
    uVar8 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar8 < iVar1) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar6 = FMetaSoundFrontendDocumentBuilder::GetNodeOutputAccessType
                      (*(FMetaSoundFrontendDocumentBuilder **)this,&param_2->ID,
                       (FGuid *)((param_2->Interface).Outputs.AllocatorInstance.Data +
                                (longlong)((param_2->Interface).Outputs.ArrayNum + -1) * 0x20 + 0x10
                                ),(FGuid *)(*(longlong *)((longlong)this + 8) + 0x30));
    bVar4 = FMetasoundFrontendClassVertex::CanConnectVertexAccessTypes
                      (EVar6,**(EMetasoundFrontendVertexAccessType **)((longlong)this + 0x10));
    if (!bVar4) {
      FMetaSoundFrontendDocumentBuilder::RemoveEdgeToNodeInput
                (*(FMetaSoundFrontendDocumentBuilder **)this,&param_1->ToNodeID,&param_1->ToVertexID
                 ,(FGuid *)(*(longlong *)((longlong)this + 8) + 0x30));
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ade6ce4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMetaSoundBuilderDocument::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMetaSoundBuilderDocument::_vector_deleting_destructor__adjustor_40__
          (UMetaSoundBuilderDocument *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMetaSoundBuilderDocument *)&this[-1].Document.Dependencies,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ade6d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade6d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade6dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade6e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade6e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade6ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassInput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade6f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade6fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade70c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendClassOutput_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendClassOutput___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FConstGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade71e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVariable___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade72a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendVariable_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVariable___34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade73c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade74e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode_const_>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade75a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex_const_>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode_const_,FMetasoundFrontendVertex_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr___CBUFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr___CBUFMetasoundFrontendVertex___34_V__TFindInArray___CBUFMetasoundFrontendNode____CBUFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade76c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassInput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassInputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassInput___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassInput__UFGetClassInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassInputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade77e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassOutput>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendClassOutput,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetClassOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassOutputWithNodeID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendClassOutput___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendClassOutput___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendClassOutput__UFGetClassOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassOutputWithNodeID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,`Metasound::Frontend::FGraphClassAccessPtr::GetGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade78a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVariable>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendVariable,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassVariables,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVariableWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVariable___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVariable___34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendVariable__UFGetGraphClassVariables_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVariableWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeInputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeInputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade79c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendNode>::GetMemberAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendVertex>,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendNode,FMetasoundFrontendVertex,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetNodeOutputArray,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsVertexWithName>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_V__TAccessPtr_UFMetasoundFrontendVertex___Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendNode___Frontend_Metasound__QEBA_AV__TAccessPtr_UFMetasoundFrontendVertex___34_V__TFindInArray_UFMetasoundFrontendNode__UFMetasoundFrontendVertex__UFGetNodeOutputArray_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsVertexWithName_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_U__TFindClassInDocument_UFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFClassAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFClassAccessPtr_34_V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__UFIsClassWithID_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithMetadata>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithMetadata_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeInfo>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeInfo_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindClassInDocument<FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithNodeRegistryKey>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_U__TFindClassInDocument___CBUFMetasoundFrontendClass__VFIsClassWithNodeRegistryKey_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound___MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade7fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentDependencies,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendClass__UFGetDocumentDependencies_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FConstDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade80e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstGraphClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FConstGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument_const_,FMetasoundFrontendGraphClass_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFConstGraphClassAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendDocument____CBUFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade81a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass_const_>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstNodeAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr___CBUFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFConstNodeAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FConstNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass_const_,FMetasoundFrontendNode_const_,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFConstNodeAccessPtr_Frontend_Metasound__V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFConstNodeAccessPtr_34_V__TFindInArray___CBUFMetasoundFrontendGraphClass____CBUFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,`Metasound::Frontend::FDocumentAccessPtr::GetRootGraph'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade82c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::GetMemberAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendDocument,FMetasoundFrontendGraphClass,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetDocumentSubgraphs,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsClassWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFGraphClassAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEBA_AVFGraphClassAccessPtr_34_V__TFindInArray_UFMetasoundFrontendDocument__UFMetasoundFrontendGraphClass__UFGetDocumentSubgraphs_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsClassWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraphClass>::GetMemberAccessPtr<Metasound::Frontend::FNodeAccessPtr,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::TFindInArray<FMetasoundFrontendGraphClass,FMetasoundFrontendNode,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FGetGraphClassNodes,Metasound::Frontend::MetasoundFrontendDocumentAccessPtrPrivate::FIsNodeWithID>_>'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____GetMemberAccessPtr_VFNodeAccessPtr_Frontend_Metasound__V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_23____TAccessPtr_UFMetasoundFrontendGraphClass___Frontend_Metasound__QEBA_AVFNodeAccessPtr_34_V__TFindInArray_UFMetasoundFrontendGraphClass__UFMetasoundFrontendNode__UFGetGraphClassNodes_MetasoundFrontendDocumentAccessPtrPrivate_Frontend_Metasound__UFIsNodeWithID_456__MetasoundFrontendDocumentAccessPtrPrivate_34__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8380

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::Frontend::FDocumentModifyDelegates,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::Frontend::FDocumentModifyDelegates,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade83c0

void * __thiscall
FMetaSoundFrontendDocumentBuilder::_scalar_deleting_destructor_
          (FMetaSoundFrontendDocumentBuilder *this,uint param_1)

{
  ~FMetaSoundFrontendDocumentBuilder(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8400

void * __thiscall
Metasound::Frontend::FRebuildPresetRootGraph::_scalar_deleting_destructor_
          (FRebuildPresetRootGraph *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8430

void * __thiscall
Metasound::Frontend::IDocumentTransform::_scalar_deleting_destructor_
          (IDocumentTransform *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade8460

void * __thiscall
IMetaSoundDocumentInterface::_scalar_deleting_destructor_
          (IMetaSoundDocumentInterface *this,uint param_1)

{
  *this = (IMetaSoundDocumentInterface)&___7IInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ade84a0

void * __thiscall
UMetaSoundBuilderDocument::_scalar_deleting_destructor_
          (UMetaSoundBuilderDocument *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMetaSoundDocumentInterface__;
  FMetasoundFrontendDocument::~FMetasoundFrontendDocument(&this->Document);
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1d0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMetasoundFrontendDocumentBuilder @ 14adf6e10

void __cdecl EmptyLinkFunctionForGeneratedCodeMetasoundFrontendDocumentBuilder(void)

{
  return;
}

// FindBuildGraphChecked @ 14adf73d0

FMetasoundFrontendGraph * __cdecl
Metasound::Frontend::BuilderPrivate::FindBuildGraphChecked(FMetasoundFrontendGraphClass *param_1)

{
  IDocumentBuilderRegistry *pIVar1;
  FMetaSoundFrontendDocumentBuilder *this;
  FMetasoundFrontendDocument *pFVar2;
  FMetasoundFrontendGraph *pFVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  pIVar1 = IDocumentBuilderRegistry::Get();
  if (pIVar1 != (IDocumentBuilderRegistry *)0x0) {
    local_18 = 0;
    local_10 = 0;
    this = (FMetaSoundFrontendDocumentBuilder *)
           (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_1->_padding_,&local_18);
    if (this != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar2 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(this);
      pFVar3 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                         (&pFVar2->RootGraph,&this->BuildPageID);
      return pFVar3;
    }
  }
  pFVar3 = FMetasoundFrontendGraphClass::GetDefaultGraph(param_1);
  return pFVar3;
}

// FindConstBuildGraphChecked @ 14adf7520

FMetasoundFrontendGraph * __cdecl
Metasound::Frontend::BuilderPrivate::FindConstBuildGraphChecked
          (FMetasoundFrontendGraphClass *param_1)

{
  IDocumentBuilderRegistry *pIVar1;
  FMetaSoundFrontendDocumentBuilder *this;
  FMetasoundFrontendDocument *pFVar2;
  FMetasoundFrontendGraph *pFVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  pIVar1 = IDocumentBuilderRegistry::Get();
  if (pIVar1 != (IDocumentBuilderRegistry *)0x0) {
    local_18 = 0;
    local_10 = 0;
    this = (FMetaSoundFrontendDocumentBuilder *)
           (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_1->_padding_,&local_18);
    if (this != (FMetaSoundFrontendDocumentBuilder *)0x0) {
      pFVar2 = FMetaSoundFrontendDocumentBuilder::GetConstDocumentChecked(this);
      pFVar3 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                         (&pFVar2->RootGraph,&this->BuildPageID);
      return pFVar3;
    }
  }
  pFVar3 = FMetasoundFrontendGraphClass::GetConstDefaultGraph(param_1);
  return pFVar3;
}

// FindInputRegistryClass @ 14adf7e80

bool __cdecl
Metasound::Frontend::DocumentBuilderPrivate::FindInputRegistryClass
          (FName param_1,EMetasoundFrontendVertexAccessType param_2,FMetasoundFrontendClass *param_3
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  IDataTypeRegistry *pIVar4;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  if (param_2 == Reference) {
    pIVar4 = IDataTypeRegistry::Get();
    uVar3 = (**(code **)((longlong)*pIVar4 + 0xb8))(pIVar4,local_res8,param_3);
    return (bool)uVar3;
  }
  if (param_2 != Value) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  pIVar4 = IDataTypeRegistry::Get();
  uVar3 = (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,local_res8,param_3);
  return (bool)uVar3;
}

// FindOutputRegistryClass @ 14adf9b80

bool __cdecl
Metasound::Frontend::DocumentBuilderPrivate::FindOutputRegistryClass
          (FName param_1,EMetasoundFrontendVertexAccessType param_2,FMetasoundFrontendClass *param_3
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  IDataTypeRegistry *pIVar4;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  if (param_2 == Reference) {
    pIVar4 = IDataTypeRegistry::Get();
    uVar3 = (**(code **)((longlong)*pIVar4 + 0xd0))(pIVar4,local_res8,param_3);
    return (bool)uVar3;
  }
  if (param_2 != Value) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  pIVar4 = IDataTypeRegistry::Get();
  uVar3 = (**(code **)((longlong)*pIVar4 + 0xd8))(pIVar4,local_res8,param_3);
  return (bool)uVar3;
}

// GetTypeHash @ 14ae01880

uint __cdecl Metasound::Frontend::GetTypeHash(FNamedEdge *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  
  FVar1 = param_1->InputName;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = param_1->OutputName;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar4 = FVar2.Number + uVar4;
  uVar5 = CityHash64((char *)&param_1->InputNodeID,0x10);
  uVar6 = CityHash64((char *)param_1,0x10);
  uVar4 = uVar4 * 0x40 + uVar3 + FVar1.Number + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  return (uVar4 >> 2) + 0x9e3779b9 +
         ((uint)uVar6 * 0x40 + (int)uVar5 + ((uint)(uVar6 >> 2) & 0x3fffffff) + 0x9e3779b9 ^
         (uint)uVar6) + uVar4 * 0x40 ^ uVar4;
}

// IsInterfaceInput @ 14ae02a80

bool __cdecl
Metasound::Frontend::DocumentBuilderPrivate::IsInterfaceInput
          (FName param_1,FName param_2,FMetasoundFrontendInterface *param_3)

{
  longlong lVar1;
  bool bVar2;
  FMetasoundFrontendClassInput *pFVar3;
  FMetasoundFrontendClassInput *pFVar4;
  int iVar5;
  FMetasoundFrontendInterface local_d8;
  FMetasoundFrontendInterface local_78;
  
  local_d8.Metadata.Version.Number.Major = 1;
  local_d8.Metadata.Version.Number.Minor = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8.Metadata.Version.Name.ComparisonIndex.Value = 0;
  local_d8.Metadata.Version.Name.Number = 0;
  local_d8.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Metadata.UClassOptions.ArrayNum = 0;
  local_d8.Metadata.UClassOptions.ArrayMax = 0;
  bVar2 = NameContainsInterfaceNamespace(param_1,&local_d8);
  pFVar4 = (FMetasoundFrontendClassInput *)local_d8._padding_;
  iVar5 = (int)local_d8._padding_;
  if (bVar2) {
    for (pFVar3 = (FMetasoundFrontendClassInput *)local_d8._padding_;
        pFVar3 != (FMetasoundFrontendClassInput *)
                  (local_d8._padding_ + (longlong)(int)local_d8._padding_ * 0x48);
        pFVar3 = pFVar3 + 1) {
      if ((param_1 == (FName)pFVar3->_padding_) && ((FName)pFVar3->_padding_ == param_2)) {
        if (param_3 != (FMetasoundFrontendInterface *)0x0) {
          FMetasoundFrontendInterface::operator=(param_3,&local_d8);
          iVar5 = (int)local_d8._padding_;
        }
        bVar2 = true;
        pFVar4 = (FMetasoundFrontendClassInput *)local_d8._padding_;
        goto LAB_14ae02bb9;
      }
    }
  }
  if (param_3 != (FMetasoundFrontendInterface *)0x0) {
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78.Metadata.Version.Name.ComparisonIndex.Value = 0;
    local_78.Metadata.Version.Name.Number = 0;
    local_78.Metadata.Version.Number.Major = 1;
    local_78.Metadata.Version.Number.Minor = 0;
    local_78.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Metadata.UClassOptions.ArrayNum = 0;
    local_78.Metadata.UClassOptions.ArrayMax = 0;
    FMetasoundFrontendInterface::operator=(param_3,&local_78);
    if (local_78.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Metadata.UClassOptions.AllocatorInstance.Data);
    }
    if ((void *)local_78._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_78._padding_);
    }
    if ((void *)local_78._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_78._padding_);
    }
    lVar1 = local_78._padding_;
    DestructItems<FMetasoundFrontendClassInput,int>
              ((FMetasoundFrontendClassInput *)local_78._padding_,(int)local_78._padding_);
    if ((FMetasoundFrontendClassInput *)lVar1 != (FMetasoundFrontendClassInput *)0x0) {
      FMemory::Free((void *)lVar1);
    }
  }
  bVar2 = false;
LAB_14ae02bb9:
  if (local_d8.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Metadata.UClassOptions.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  DestructItems<FMetasoundFrontendClassInput,int>(pFVar4,iVar5);
  if (pFVar4 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(pFVar4);
  }
  return bVar2;
}

// IsInterfaceOutput @ 14ae02c50

bool __cdecl
Metasound::Frontend::DocumentBuilderPrivate::IsInterfaceOutput
          (FName param_1,FName param_2,FMetasoundFrontendInterface *param_3)

{
  undefined1 auVar1 [8];
  longlong lVar2;
  bool bVar3;
  FMetasoundFrontendClassVertex *pFVar4;
  FMetasoundFrontendClassVertex *pFVar5;
  FMetasoundFrontendClassVertex *pFVar6;
  undefined1 local_e8 [8];
  FName local_e0;
  void *local_d8;
  longlong local_d0;
  void *local_c8;
  longlong local_c0;
  longlong local_b8;
  ForAnyElementType local_b0;
  FName local_a8;
  FMetasoundFrontendVersionNumber local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FMetasoundFrontendInterface local_88;
  
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  local_88.Metadata.Version.Name.ComparisonIndex.Value = 0;
  local_88.Metadata.Version.Name.Number = 0;
  local_88.Metadata.Version.Number.Major = 1;
  local_88.Metadata.Version.Number.Minor = 0;
  local_88.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Metadata.UClassOptions.ArrayNum = 0;
  local_88.Metadata.UClassOptions.ArrayMax = 0;
  bVar3 = NameContainsInterfaceNamespace(param_1,&local_88);
  pFVar5 = (FMetasoundFrontendClassVertex *)local_88._padding_;
  if (bVar3) {
    pFVar6 = (FMetasoundFrontendClassVertex *)
             (local_88._padding_ + (longlong)(int)local_88._padding_ * 0x34);
    for (pFVar4 = (FMetasoundFrontendClassVertex *)local_88._padding_; pFVar4 != pFVar6;
        pFVar4 = pFVar4 + 1) {
      FMetasoundFrontendClassInput::FMetasoundFrontendClassInput
                ((FMetasoundFrontendClassInput *)local_e8,pFVar4);
      if ((param_1 == (FName)local_e8) && (local_e0 == param_2)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)local_b0.Data,local_a8.ComparisonIndex.Value
                );
      if ((FMetasoundFrontendClassInputDefault *)local_b0.Data !=
          (FMetasoundFrontendClassInputDefault *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      if (bVar3) {
        if (pFVar4 != (FMetasoundFrontendClassVertex *)0x0) {
          if (param_3 != (FMetasoundFrontendInterface *)0x0) {
            FMetasoundFrontendInterface::operator=(param_3,&local_88);
            pFVar5 = (FMetasoundFrontendClassVertex *)local_88._padding_;
          }
          bVar3 = true;
          goto LAB_14ae02de3;
        }
        break;
      }
    }
  }
  if (param_3 != (FMetasoundFrontendInterface *)0x0) {
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 0;
    local_e0.ComparisonIndex.Value = 0;
    local_e0.Number = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    local_a0.Major = 1;
    local_a0.Minor = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90._0_4_ = 0;
    local_90._4_4_ = 0;
    FMetasoundFrontendInterface::operator=(param_3,(FMetasoundFrontendInterface *)local_e8);
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    auVar1 = local_e8;
    DestructItems<FMetasoundFrontendClassInput,int>
              ((FMetasoundFrontendClassInput *)local_e8,local_e0.ComparisonIndex.Value);
    if ((FName)auVar1 != (FName)0x0) {
      FMemory::Free((void *)auVar1);
    }
  }
  bVar3 = false;
LAB_14ae02de3:
  if (local_88.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Metadata.UClassOptions.AllocatorInstance.Data);
  }
  if ((void *)local_88._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_88._padding_);
  }
  if (pFVar5 != (FMetasoundFrontendClassVertex *)0x0) {
    FMemory::Free(pFVar5);
  }
  lVar2 = local_88._padding_;
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_88._padding_,(int)local_88._padding_);
  if ((FMetasoundFrontendClassInput *)lVar2 != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free((void *)lVar2);
  }
  return bVar3;
}

// LexToString @ 14ae03b80

FString * __cdecl
Metasound::Frontend::LexToString(FString *__return_storage_ptr__,EInvalidEdgeReason *param_1)

{
  EInvalidEdgeReason EVar1;
  
  EVar1 = *param_1;
  if (EVar1 == None) {
    ::FString::FString(__return_storage_ptr__,L"No reason");
    return __return_storage_ptr__;
  }
  if (EVar1 == MismatchedAccessType) {
    ::FString::FString(__return_storage_ptr__,L"Mismatched Access Type");
    return __return_storage_ptr__;
  }
  if (EVar1 == MismatchedDataType) {
    ::FString::FString(__return_storage_ptr__,L"Mismatched DataType");
    return __return_storage_ptr__;
  }
  if (EVar1 != MissingInput) {
    if (EVar1 != MissingOutput) {
      ::FString::FString(__return_storage_ptr__,L"COUNT");
      return __return_storage_ptr__;
    }
    ::FString::FString(__return_storage_ptr__,L"Missing Output");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Missing Input");
  return __return_storage_ptr__;
}

// NameContainsInterfaceNamespace @ 14ae03d90

bool __cdecl
Metasound::Frontend::DocumentBuilderPrivate::NameContainsInterfaceNamespace
          (FName param_1,FMetasoundFrontendInterface *param_2)

{
  longlong lVar1;
  char cVar2;
  ISearchEngine *pIVar3;
  bool bVar4;
  FName local_res18;
  FName local_res20;
  FMetasoundFrontendInterface local_c8;
  FMetasoundFrontendInterface local_68;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  Audio::FParameterPath::SplitName(param_1,&local_res18,&local_res20);
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8.Metadata.Version.Name.ComparisonIndex.Value = 0;
  local_c8.Metadata.Version.Name.Number = 0;
  local_c8.Metadata.Version.Number.Major = 1;
  local_c8.Metadata.Version.Number.Minor = 0;
  local_c8.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Metadata.UClassOptions.ArrayNum = 0;
  local_c8.Metadata.UClassOptions.ArrayMax = 0;
  if (local_res18 != (FName)0x0) {
    pIVar3 = ISearchEngine::Get();
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,local_res18,&local_c8);
    if (cVar2 != '\0') {
      if (param_2 != (FMetasoundFrontendInterface *)0x0) {
        FMetasoundFrontendInterface::operator=(param_2,&local_c8);
      }
      bVar4 = true;
      goto LAB_14ae03ec2;
    }
  }
  if (param_2 != (FMetasoundFrontendInterface *)0x0) {
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_68.Metadata.Version.Name.ComparisonIndex.Value = 0;
    local_68.Metadata.Version.Name.Number = 0;
    local_68.Metadata.Version.Number.Major = 1;
    local_68.Metadata.Version.Number.Minor = 0;
    local_68.Metadata.UClassOptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Metadata.UClassOptions.ArrayNum = 0;
    local_68.Metadata.UClassOptions.ArrayMax = 0;
    FMetasoundFrontendInterface::operator=(param_2,&local_68);
    if (local_68.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Metadata.UClassOptions.AllocatorInstance.Data);
    }
    if ((void *)local_68._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_68._padding_);
    }
    if ((void *)local_68._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_68._padding_);
    }
    lVar1 = local_68._padding_;
    DestructItems<FMetasoundFrontendClassInput,int>
              ((FMetasoundFrontendClassInput *)local_68._padding_,(int)local_68._padding_);
    if ((FMetasoundFrontendClassInput *)lVar1 != (FMetasoundFrontendClassInput *)0x0) {
      FMemory::Free((void *)lVar1);
    }
  }
  bVar4 = false;
LAB_14ae03ec2:
  if (local_c8.Metadata.UClassOptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Metadata.UClassOptions.AllocatorInstance.Data);
  }
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_c8._padding_,(int)local_c8._padding_);
  if ((FMetasoundFrontendClassInput *)local_c8._padding_ != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  return bVar4;
}

// SetDefaultLiteralOnInputNode @ 14ae08350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::Frontend::DocumentBuilderPrivate::SetDefaultLiteralOnInputNode
          (FMetasoundFrontendNode *param_1,FMetasoundFrontendClassInput *param_2,FGuid *param_3)

{
  TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMetasoundFrontendLiteral *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FString local_88;
  longlong local_78;
  longlong lStack_70;
  FMetasoundFrontendLiteral local_68;
  
  pFVar8 = (param_1->Interface).Inputs.AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)(param_1->Interface).Inputs.ArrayNum * 0x20;
  if (pFVar8 != pFVar9) {
    do {
      if (*(longlong *)pFVar8 == param_2->_padding_) {
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          pTVar1 = &param_1->InputLiterals;
          pFVar9 = (pTVar1->AllocatorInstance).Data;
          pFVar7 = pFVar9 + (longlong)(param_1->InputLiterals).ArrayNum * 0x68;
          if (pFVar9 != pFVar7) {
            do {
              if (((*(int *)(pFVar8 + 0x1c) == *(int *)(pFVar9 + 0xc) &&
                   *(int *)(pFVar8 + 0x18) == *(int *)(pFVar9 + 8)) &&
                  *(int *)(pFVar8 + 0x14) == *(int *)(pFVar9 + 4)) &&
                  *(int *)(pFVar8 + 0x10) == *(int *)pFVar9) {
                pFVar6 = FMetasoundFrontendClassInput::FindConstDefault(param_2,param_3);
                if (pFVar6 == (FMetasoundFrontendLiteral *)0x0) {
                  return;
                }
                FMetasoundFrontendLiteral::operator=
                          ((FMetasoundFrontendLiteral *)(pFVar9 + 0x10),pFVar6);
                return;
              }
              pFVar9 = pFVar9 + 0x68;
            } while (pFVar9 != pFVar7);
          }
          pFVar6 = FMetasoundFrontendClassInput::FindConstDefault(param_2,param_3);
          if (pFVar6 != (FMetasoundFrontendLiteral *)0x0) {
            local_78 = *(longlong *)(pFVar8 + 0x10);
            lStack_70 = *(longlong *)(pFVar8 + 0x18);
            FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_68,pFVar6);
            pFVar8 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar8 <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 <
                 pFVar8 + (longlong)(param_1->InputLiterals).ArrayMax * 0x68)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = (param_1->InputLiterals).ArrayNum;
            piVar2 = &(param_1->InputLiterals).ArrayMax;
            if (iVar5 == *piVar2) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x868,&pTVar1->AllocatorInstance,piVar2);
            }
            (param_1->InputLiterals).ArrayNum = iVar5 + 1;
            pFVar9 = (pTVar1->AllocatorInstance).Data;
            pFVar8 = pFVar9 + (longlong)iVar5 * 0x68;
            *(longlong *)pFVar8 = local_78;
            *(longlong *)(pFVar8 + 8) = lStack_70;
            FMetasoundFrontendLiteral::FMetasoundFrontendLiteral
                      ((FMetasoundFrontendLiteral *)(pFVar9 + (longlong)iVar5 * 0x68 + 0x10),
                       &local_68);
            FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_68);
          }
          return;
        }
        break;
      }
      pFVar8 = pFVar8 + 0x20;
    } while (pFVar8 != pFVar9);
  }
  if ((byte)LogMetaSound._0_1_ < 2) {
    return;
  }
  ::FName::ToString((FName *)param_2,&local_88);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_88.Data.AllocatorInstance.Data);
  return;
}

// SetNodeAndVertexNames @ 14ae098f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::Frontend::DocumentBuilderPrivate::SetNodeAndVertexNames
          (FMetasoundFrontendNode *param_1,FMetasoundFrontendClassVertex *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FString local_18;
  
  uVar1 = *(undefined4 *)&param_2->field_0x4;
  (param_1->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_2->field_0x0;
  (param_1->Name).Number = uVar1;
  pFVar3 = (param_1->Interface).Inputs.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)(param_1->Interface).Inputs.ArrayNum * 0x20;
  if (pFVar3 != pFVar2) {
    do {
      if (*(longlong *)(pFVar3 + 8) == *(longlong *)&param_2->field_0x8) {
        *(undefined8 *)pFVar3 = *(undefined8 *)param_2;
        goto LAB_14ae0998e;
      }
      pFVar3 = pFVar3 + 0x20;
    } while (pFVar3 != pFVar2);
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString((FName *)&param_2->field_0x8,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
LAB_14ae0998e:
  pFVar3 = (param_1->Interface).Outputs.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)(param_1->Interface).Outputs.ArrayNum * 0x20;
  if (pFVar3 != pFVar2) {
    do {
      if (*(longlong *)(pFVar3 + 8) == *(longlong *)&param_2->field_0x8) {
        *(undefined8 *)pFVar3 = *(undefined8 *)param_2;
        return;
      }
      pFVar3 = pFVar3 + 0x20;
    } while (pFVar3 != pFVar2);
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString((FName *)&param_2->field_0x8,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TryGetInterfaceBoundEdges @ 14ae0b010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges
          (FGuid *param_1,
          TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *param_2,FGuid *param_3,
          TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
          *param_4,TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
                   *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  FInterfaceBindingRegistryEntry *this;
  FName FVar4;
  code *pcVar5;
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  *this_00;
  FGuid *pFVar6;
  FInterfaceBindingRegistryEntry **ppFVar7;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  IInterfaceBindingRegistry *pIVar12;
  FMetasoundFrontendVersion *pFVar13;
  TArray<FMetasoundFrontendInterfaceVertexBinding,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  ulonglong uVar16;
  ForElementType<FSetElementId> FVar17;
  ulonglong uVar18;
  <lambda_1> <Var19;
  int iVar20;
  uint uVar21;
  FInterfaceBindingRegistryEntry **ppFVar22;
  <lambda_1> <Var23;
  uint uVar24;
  int iVar25;
  undefined1 *puVar26;
  uint *puVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  undefined1 auStackY_1d8 [32];
  <lambda_1> local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6 [2];
  uint local_1a4;
  FInterfaceBindingRegistryEntry **local_1a0;
  ulonglong local_198;
  uint local_190;
  FInterfaceBindingRegistryEntry **local_188;
  int local_180;
  int local_17c;
  undefined1 local_178 [8];
  TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
  *local_170;
  FGuid *local_168;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_160;
  FGuid *local_158;
  FInterfaceBindingRegistryEntry **local_150;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_140;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_8c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_170 = param_5;
  iVar25 = 0;
  local_168 = param_3;
  local_160 = param_2;
  local_158 = param_1;
  local_140 = param_4;
  if (*(int *)&(param_5->Elements).field_0x8 != *(int *)&(param_5->Elements).field_0x34) {
    TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
    ::UnhashElements(param_5);
    *(undefined4 *)&(param_5->Elements).field_0x8 = 0;
    if (*(int *)&(param_5->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,4,0,(ForAnyElementType *)param_5,0,(int *)&(param_5->Elements).field_0xc);
    }
    *(undefined4 *)&(param_5->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_5->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_5->Elements).field_0x28 = 0;
  }
  pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_4->Elements).field_0x10;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  uStack_12c = 1;
  local_88.Elements._40_4_ = 0;
  local_118 = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  iVar1 = *(int *)&(param_4->Elements).field_0x28;
  iStack_11c = local_118;
  if (iVar1 != 0) {
    puVar27 = *(uint **)&(param_4->Elements).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)pTVar28;
    }
    uVar24 = *puVar27;
    local_118 = 0;
    iVar25 = 0;
    while (uVar24 == 0) {
      lVar15 = (longlong)iVar25;
      local_118 = local_118 + 0x20;
      iVar25 = iVar25 + 1;
      iStack_11c = iVar1;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14ae0b16e;
      uVar24 = puVar27[lVar15 + 1];
    }
    uStack_12c = -uVar24 & uVar24;
    uVar18 = (ulonglong)uStack_12c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_180 = (int)lVar15;
    iStack_11c = local_118 + -1 + local_180;
    if (iVar1 < iStack_11c) {
      iStack_11c = iVar1;
    }
  }
LAB_14ae0b16e:
  uVar24 = *(uint *)&(param_4->Elements).field_0x28;
  uStack_114 = local_8c;
  uVar21 = uVar24 & 0xffffffe0;
  iStack_110 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
  uStack_120 = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_12c,iVar25);
  TStack_100.CurrentBitIndex = iStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar24 >> 5;
  TStack_100._28_4_ = local_8c;
  TStack_100.BaseBitIndex = local_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  local_1a4 = uVar24;
  local_148 = pTVar28;
  local_138 = param_4;
  iStack_130 = iVar25;
  local_128 = (undefined1 *)pTVar28;
  local_108 = param_4;
  TStack_100.Array = pTVar28;
  if ((((int)uVar24 < 0) || (iVar1 < (int)uVar24)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  uVar2 = *(uint *)&(param_4->Elements).field_0x28;
  <Var19 = local_1a8;
  <Var23 = local_1a8;
  if (uVar24 != uVar2) {
    puVar26 = *(undefined1 **)&(param_4->Elements).field_0x20;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = (undefined1 *)pTVar28;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar20 * 4);
    while (uVar24 == 0) {
      lVar15 = (longlong)iVar20;
      uVar21 = uVar21 + 0x20;
      iVar20 = iVar20 + 1;
      uVar24 = uVar2;
      local_1a4 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14ae0b290;
      uVar24 = *(uint *)(puVar26 + lVar15 * 4 + 4);
    }
    uVar18 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_17c = (int)lVar15;
    uVar24 = local_17c + -1 + uVar21;
    local_1a4 = uVar24;
    if ((int)uVar2 < (int)uVar24) {
      uVar24 = uVar2;
      local_1a4 = uVar2;
    }
  }
LAB_14ae0b290:
  do {
    pTVar8 = local_108;
    if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
        (int)uStack_e0) {
      local_1a7 = 0;
      `TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a7);
    }
    lVar15 = (longlong)TStack_100.CurrentBitIndex;
    if (((TStack_100.CurrentBitIndex == uVar24) && (TStack_100.Array == pTVar28)) &&
       (pTVar8 == param_4)) {
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return true;
    }
    lVar3 = *(longlong *)&pTVar8->Elements;
    local_1a0 = (FInterfaceBindingRegistryEntry **)0x0;
    local_198 = 0;
    pIVar12 = IInterfaceBindingRegistry::Get();
    cVar11 = (**(code **)*pIVar12)(pIVar12,lVar3 + lVar15 * 0x18,&local_1a0);
    if (cVar11 != '\0') {
      AlgoImpl::
      IntroSortInternal<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,FIdentityFunctor,_Metasound::Frontend::DocumentBuilderPrivate::TryGetInterfaceBoundEdges_::__l9::<lambda_1>_>
                (local_1a0,(uint)local_198,(FIdentityFunctor)<Var23,<Var19);
      pFVar6 = local_168;
      this_00 = local_170;
      uVar16 = (ulonglong)(int)(uint)local_198;
      local_190 = (uint)local_198;
      local_150 = local_1a0 + uVar16;
      uVar18 = uVar16;
      ppFVar22 = local_1a0;
      while( true ) {
        ppFVar7 = local_150;
        local_188 = ppFVar22;
        if ((int)uVar16 != (int)uVar18) {
          local_1a6[0] = 0;
          `TCheckedPointerIterator<Metasound::Frontend::FInterfaceBindingRegistryEntry_const_*,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_1a6);
        }
        param_4 = local_140;
        pTVar28 = local_148;
        uVar24 = local_1a4;
        <Var19 = local_1a8;
        <Var23 = local_1a8;
        if (ppFVar22 == ppFVar7) break;
        this = *ppFVar22;
        if ((this == (FInterfaceBindingRegistryEntry *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("BindingEntry",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                               ,0xc3,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pFVar13 = FInterfaceBindingRegistryEntry::GetOutputInterfaceVersion(this);
        uVar24 = (pFVar13->Number).Major;
        iVar25 = (pFVar13->Number).Minor;
        FVar4 = pFVar13->Name;
        uVar21 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
        uVar21 = uVar21 + FVar4.Number;
        iVar25 = TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FMetasoundFrontendVersion>
                           (local_160,
                            (uVar21 >> 2) +
                            uVar21 * 0x40 + -0x61c88647 +
                            (iVar25 + uVar24 * 0x40 + (uVar24 >> 2) + 0x9e3779b9 ^ uVar24) ^ uVar21,
                            pFVar13);
        if (iVar25 != -1) {
          pTVar14 = FInterfaceBindingRegistryEntry::GetVertexBindings(this);
          iVar25 = pTVar14->ArrayNum;
          pFVar29 = (pTVar14->AllocatorInstance).Data;
          pFVar30 = pFVar29 + (longlong)iVar25 * 0x10;
          while( true ) {
            if (pTVar14->ArrayNum != iVar25) {
              local_1a8 = (<lambda_1>)0x0;
              `TCheckedPointerIterator<FMetasoundFrontendInterfaceVertexBinding_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_1a8);
            }
            if (pFVar29 == pFVar30) break;
            lVar15 = *(longlong *)(pFVar29 + 8);
            uVar24 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
            if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
              FVar17 = (ForElementType<FSetElementId>)&local_88.Hash;
              if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar17 = local_88.Hash.SecondaryData;
              }
              for (iVar1 = *(int *)((longlong)FVar17 +
                                   (ulonglong)
                                   (local_88.HashSize - 1U &
                                   (int)((ulonglong)lVar15 >> 0x20) + uVar24) * 4); iVar1 != -1;
                  iVar1 = *(int *)(local_88.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
                if (*(longlong *)(local_88.Elements._0_8_ + (longlong)iVar1 * 0x10) == lVar15)
                goto LAB_14ae0b4df;
              }
            }
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                      (&local_88,(FName *)local_178,(bool *)(pFVar29 + 8));
            local_d8._0_4_ = local_158->A;
            local_d8._4_4_ = local_158->B;
            uStack_d0._0_4_ = local_158->C;
            uStack_d0._4_4_ = local_158->D;
            local_c8 = *(undefined8 *)pFVar29;
            local_b0 = *(undefined8 *)(pFVar29 + 8);
            local_c0._0_4_ = pFVar6->A;
            local_c0._4_4_ = pFVar6->B;
            uStack_b8._0_4_ = pFVar6->C;
            uStack_b8._4_4_ = pFVar6->D;
            TSet<Metasound::Frontend::FNamedEdge,DefaultKeyFuncs<Metasound::Frontend::FNamedEdge,0>,FDefaultSetAllocator>
            ::Emplace<Metasound::Frontend::FNamedEdge>
                      (this_00,(FNamedEdge *)(local_178 + 4),(bool *)&local_d8);
LAB_14ae0b4df:
            pFVar29 = pFVar29 + 0x10;
          }
        }
        uVar16 = local_198 & 0xffffffff;
        ppFVar22 = local_188 + 1;
        uVar18 = (ulonglong)local_190;
      }
    }
    if (local_1a0 != (FInterfaceBindingRegistryEntry **)0x0) {
      FMemory::Free(local_1a0);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  } while( true );
}

// Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister @ 14ae0c2e0

UClass * __cdecl Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetaSoundBuilderDocument",
               &Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton,
               UMetaSoundBuilderDocument::StaticRegisterNativesUMetaSoundBuilderDocument,0x1d0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundBuilderDocument>,
               InternalVTableHelperCtorCaller<UMetaSoundBuilderDocument>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder @ 14ae0c390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendDocumentBuilder.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMetaSoundFrontendDocumentBuilder.InnerSingleton,
               &Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMetaSoundFrontendDocumentBuilder.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMetaSoundFrontendDocumentBuilder.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'InputDataMetadata'' @ 1504242b0

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputDataMetadata__(void)

{
  if (InputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504242d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputVariableMetadata'' @ 1504242f0

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputVariableMetadata__(void)

{
  if (InputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150424319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputDataMetadata'' @ 150424330

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputDataMetadata__(void)

{
  if (OutputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150424359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputVariableMetadata'' @ 150424370

void __cdecl
Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputVariableMetadata__(void)

{
  if (OutputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150424399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

