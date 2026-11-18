// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 32

// StaticStruct @ 1462c2ff0

UScriptStruct * __cdecl FGetDataflowVariableNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetDataflowVariableNode,(UObject *)pUVar1,
                         L"GetDataflowVariableNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton;
}

// GetType @ 1462c3030

FName __thiscall FGetDataflowVariableNode::GetType(FGetDataflowVariableNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetDataflowVariableNode");
  return in_RDX;
}

// IsA @ 1462c3060

bool __thiscall FGetDataflowVariableNode::IsA(FGetDataflowVariableNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FGetDataflowVariableNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462c30c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462c30c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462c30e6;
      }
    }
  }
  bVar5 = true;
LAB_1462c30e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462c3120

FStructOnScope * __thiscall
FGetDataflowVariableNode::NewStructOnScope(FGetDataflowVariableNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
      Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetDataflowVariableNode,(UObject *)pUVar2,
                           L"GetDataflowVariableNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462c31a0

void __thiscall
FGetDataflowVariableNode::SerializeInternal(FGetDataflowVariableNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetDataflowVariableNode,(UObject *)pUVar1,
                         L"GetDataflowVariableNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462c321d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462c3230

FName __thiscall FGetDataflowVariableNode::GetDisplayName(FGetDataflowVariableNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetVariable");
  return in_RDX;
}

// GetCategory @ 1462c3260

FName __thiscall FGetDataflowVariableNode::GetCategory(FGetDataflowVariableNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Dataflow");
  return in_RDX;
}

// GetTags @ 1462c3290

FString * __thiscall
FGetDataflowVariableNode::GetTags(FGetDataflowVariableNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462c32c0

UScriptStruct * __thiscall
FGetDataflowVariableNode::TypedScriptStruct(FGetDataflowVariableNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetDataflowVariableNode,(UObject *)pUVar1,
                         L"GetDataflowVariableNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton;
}

// OnPropertyChanged @ 1462c3300

void __thiscall
FGetDataflowVariableNode::OnPropertyChanged
          (FGetDataflowVariableNode *this,FContext *param_1,FPropertyChangedEvent *param_2)

{
  return;
}

// PostSerialize @ 1462c3310

void __thiscall
FGetDataflowVariableNode::PostSerialize(FGetDataflowVariableNode *this,FArchive *param_1)

{
  UDataflow *pUVar1;
  
  if (((param_1->field_0x28 & 1) != 0) && (this->VariableName != (FName)0x0)) {
    pUVar1 = (UDataflow *)FWeakObjectPtr::Get(&(this->WeakDataflowPtr).WeakPtr);
    if (pUVar1 != (UDataflow *)0x0) {
      SetVariable(this,pUVar1,this->VariableName);
      return;
    }
  }
  return;
}

// Evaluate @ 1462c3360

void __thiscall
FGetDataflowVariableNode::Evaluate
          (FGetDataflowVariableNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  UObjectBaseUtility *this_00;
  UObject *pUVar2;
  bool bVar3;
  char cVar4;
  undefined1 *puVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FPropertyBagPropertyDesc *pFVar9;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar10;
  uint *puVar11;
  FContext *pFVar12;
  uint *puVar13;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowAnyType *)puVar5 == &this->Value) {
    if (this->EvaluateFunction !=
        (_func___cdecl_void_FGetDataflowVariableNode_ptr_FInstancedPropertyBag_ptr_FContext_ptr_FDataflowOutput_ptr
         *)0x0) {
      pcVar1 = *(code **)(param_1->_padding_ + 0x18);
      ::FName::FName(&local_res8,"TEngineContext");
      cVar4 = (*pcVar1)(param_1,local_res8);
      pFVar12 = param_1;
      if (cVar4 == '\0') {
        pFVar12 = (FContext *)0x0;
      }
      if ((pFVar12 != (FContext *)0x0) &&
         (this_00 = (UObjectBaseUtility *)pFVar12[1]._padding_, this_00 != (UObjectBaseUtility *)0x0
         )) {
        pUVar6 = UDataflowInstanceInterface::StaticClass();
        plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
        if (plVar7 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
          pFVar9 = FInstancedPropertyBag::FindPropertyDescByName
                             ((FInstancedPropertyBag *)(lVar8 + 0x10),this->VariableName);
          if (pFVar9 != (FPropertyBagPropertyDesc *)0x0) {
            puVar11 = *(uint **)(lVar8 + 0x20);
            local_38.Data.AllocatorInstance.Data._0_4_ = (pFVar9->ID).A;
            local_38.Data.AllocatorInstance.Data._4_4_ = (pFVar9->ID).B;
            local_38.Data.ArrayNum = (pFVar9->ID).C;
            local_38.Data.ArrayMax = (pFVar9->ID).D;
            puVar13 = puVar11 + (longlong)*(int *)(lVar8 + 0x28) * 4;
            for (; puVar11 != puVar13; puVar11 = puVar11 + 4) {
              if (((local_38.Data.ArrayMax == puVar11[3] && local_38.Data.ArrayNum == puVar11[2]) &&
                  local_38.Data.AllocatorInstance.Data._4_4_ == puVar11[1]) &&
                  (uint)local_38.Data.AllocatorInstance.Data == *puVar11) {
                bVar3 = true;
                goto LAB_1462c3489;
              }
            }
            bVar3 = false;
LAB_1462c3489:
            if (bVar3) {
              (*this->EvaluateFunction)
                        (this,(FInstancedPropertyBag *)(lVar8 + 0x10),param_1,param_2);
              return;
            }
          }
        }
      }
      TVar10 = FWeakObjectPtr::Pin(&(this->WeakDataflowPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
      pUVar2 = *TVar10.Object;
      *(undefined8 *)TVar10.Object = 0;
      if (local_res8 != (FName)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
      }
      if (pUVar2 != (UObject *)0x0) {
        pFVar9 = FInstancedPropertyBag::FindPropertyDescByName
                           ((FInstancedPropertyBag *)&pUVar2[5].field_0x10,this->VariableName);
        if (pFVar9 != (FPropertyBagPropertyDesc *)0x0) {
          (*this->EvaluateFunction)
                    (this,(FInstancedPropertyBag *)&pUVar2[5].field_0x10,param_1,param_2);
          UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
          return;
        }
        UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
      }
    }
    ::FName::ToString(&this->VariableName,&local_38);
    ::FString::PrintfImpl
              (&local_28,
               L"Dataflow Variable : Failed to evaluate variable [%s], returning defaut value");
    if ((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                         (uint)local_38.Data.AllocatorInstance.Data) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                                     (uint)local_38.Data.AllocatorInstance.Data));
    }
    UE::Dataflow::FContext::Warning(param_1,&local_28,(FDataflowNode *)this,param_2);
    FDataflowOutput::SetNullValue(param_2,param_1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FGetDataflowVariableNode @ 1462ce9c0

FGetDataflowVariableNode * __thiscall
FGetDataflowVariableNode::FGetDataflowVariableNode
          (FGetDataflowVariableNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  int iVar1;
  FName FVar2;
  FDataflowOutput *this_00;
  UClass *pUVar3;
  FName FVar4;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FGetDataflowVariableNode__6B_;
  FInstancedStruct::FInstancedStruct(&(this->VariablePropertyBag).Value);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  local_58.Index = -1;
  local_38.Reference = &this->Value;
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
  this->EvaluateFunction =
       (_func___cdecl_void_FGetDataflowVariableNode_ptr_FInstancedPropertyBag_ptr_FContext_ptr_FDataflowOutput_ptr
        *)0x0;
  this->ContainerType = None;
  (this->WeakDataflowPtr).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_00,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
              ::__l2::Instance);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  FVar2 = (FName)param_1->OwningObject;
  if (FVar2 != (FName)0x0) {
    pUVar3 = UDataflow::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar2 + 0x10) + 0x38)) &&
       (local_res8 = FVar2,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)((longlong)FVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar3->_padding_)) goto LAB_1462ceabd;
  }
  local_res8 = FVar4;
LAB_1462ceabd:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->WeakDataflowPtr).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~FGetDataflowVariableNode @ 1462cff70

void __thiscall FGetDataflowVariableNode::~FGetDataflowVariableNode(FGetDataflowVariableNode *this)

{
  this->_padding_ = (longlong)&___7FGetDataflowVariableNode__6B_;
  FInstancedStruct::Reset(&(this->VariablePropertyBag).Value);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// ChangeOutputType @ 1462d4f10

void __thiscall
FGetDataflowVariableNode::ChangeOutputType
          (FGetDataflowVariableNode *this,FDataflowOutput *param_1,FName param_2)

{
  if ((param_1 != (FDataflowOutput *)0x0) && ((FName)param_1->_padding_ != param_2)) {
    FDataflowNode::SetConnectionConcreteType
              ((FDataflowNode *)this,(FDataflowConnection *)param_1,param_2,(FName)0x0);
    *(byte *)&param_1->_padding_ = (byte)param_1->_padding_ | 1;
  }
  return;
}

// EvaluateBool @ 1462d8460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGetDataflowVariableNode::EvaluateBool
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  TValueOrError<bool,EPropertyBagResult> TVar9;
  uint uVar10;
  undefined6 extraout_var;
  FTimestamp FVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  undefined8 *puVar19;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188;
  byte local_187;
  TArray<bool,TSizedDefaultAllocator<32>_> local_180;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined1 local_160 [8];
  FDataflowOutput *local_158;
  FContext *local_150;
  FGuid local_138;
  FGuid local_128;
  FPropertyBagArrayRef local_118;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_158 = param_4;
  local_150 = param_3;
  if (param_1->ContainerType == None) {
    FInstancedPropertyBag::GetValueBool(param_2,(FName)&local_188);
    uVar17 = (ulonglong)local_187;
    if ((2 < uVar17) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar18 = 0;
    if (((*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar17) != '\0') && (uVar18 = local_188, local_187 != 0))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), uVar18 = local_188, bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_4->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_128);
      pFVar3 = (FProperty *)local_158->_padding_;
      uVar13 = CityHash64((char *)&local_158->_padding_,0x10);
      puVar15 = (undefined8 *)0x0;
      local_168 = (undefined8 *)0x0;
      puVar19 = ::operator_new(0x40);
      puVar14 = local_168;
      if (puVar19 != (undefined8 *)0x0) {
        uVar16 = pFVar12->A;
        uVar5 = pFVar12->B;
        uVar6 = pFVar12->C;
        uVar7 = pFVar12->D;
        puVar19[6] = *(undefined8 *)FVar11.Value;
        *puVar19 = &___7__TContextCacheElement__N_Dataflow_UE__6B_;
        *(undefined4 *)(puVar19 + 1) = 0;
        *(uint *)((longlong)puVar19 + 0xc) = uVar16;
        *(uint *)(puVar19 + 2) = uVar5;
        *(uint *)((longlong)puVar19 + 0x14) = uVar6;
        *(uint *)(puVar19 + 3) = uVar7;
        puVar19[4] = pFVar3;
        *(uint *)(puVar19 + 5) = uVar10;
        *(undefined1 *)(puVar19 + 7) = uVar18;
        puVar15 = puVar19;
      }
      if (local_168 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)*local_168;
        local_168 = puVar15;
        (*(code *)*puVar19)(puVar14,1);
        puVar15 = local_168;
      }
      local_168 = puVar15;
      if (local_168 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (local_150,(uint)uVar13,pFVar3,pFVar12,uVar10,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(local_150->_padding_ + 0x28))(local_150,uVar13 & 0xffffffff,&local_168);
      }
      if (local_168 != (undefined8 *)0x0) {
        (**(code **)*local_168)(local_168,1);
      }
    }
  }
  else if (param_1->ContainerType == Array) {
    puVar14 = (undefined8 *)0x0;
    local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.ArrayNum = 0;
    local_180.ArrayMax = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar17 = (ulonglong)local_58;
    if ((2 < uVar17) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar17 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_118._padding_ = local_b8._0_8_;
      local_118._padding_ = local_b8._8_8_;
      local_118._padding_ = local_b8._16_8_;
      local_118._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_118.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      iVar2 = *(int *)(local_118._padding_ + 8);
      if ((iVar2 != 0) &&
         (TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&local_180,iVar2,Default),
         puVar15 = puVar14, puVar19 = puVar14, 0 < iVar2)) {
        do {
          TVar9 = FPropertyBagArrayRef::GetValueBool(&local_118,(int)local_160);
          if ((((FScriptContainerElement *)CONCAT62(extraout_var,TVar9.Variant))[1] !=
               (FScriptContainerElement)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar16 = (uint)puVar15;
          FVar1 = *(FScriptContainerElement *)CONCAT62(extraout_var,TVar9.Variant);
          uVar10 = 0;
          if ((int)uVar16 < local_180.ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *((longlong)puVar19 + local_180.AllocatorInstance.Data) = FVar1;
          puVar19 = (undefined8 *)((longlong)puVar19 + 1);
          puVar15 = (undefined8 *)(ulonglong)(uVar16 + 1);
        } while ((longlong)puVar19 < (longlong)iVar2);
      }
    }
    if (param_4->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_138);
      pFVar3 = (FProperty *)param_4->_padding_;
      uVar13 = CityHash64((char *)&local_158->_padding_,0x10);
      local_170 = (undefined8 *)0x0;
      puVar19 = ::operator_new(0x48);
      puVar15 = local_170;
      if (puVar19 != (undefined8 *)0x0) {
        uVar16 = pFVar12->A;
        uVar5 = pFVar12->B;
        uVar6 = pFVar12->C;
        uVar7 = pFVar12->D;
        puVar19[6] = *(undefined8 *)FVar11.Value;
        *puVar19 = &
                   ___7__TContextCacheElement_V__TArray__NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar19 + 1) = 0;
        *(uint *)((longlong)puVar19 + 0xc) = uVar16;
        *(uint *)(puVar19 + 2) = uVar5;
        *(uint *)((longlong)puVar19 + 0x14) = uVar6;
        *(uint *)(puVar19 + 3) = uVar7;
        puVar19[4] = pFVar3;
        *(uint *)(puVar19 + 5) = uVar10;
        puVar19[7] = local_180.AllocatorInstance.Data;
        local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar19 + 8) = local_180.ArrayNum;
        *(int *)((longlong)puVar19 + 0x44) = local_180.ArrayMax;
        local_180.ArrayNum = 0;
        local_180.ArrayMax = 0;
        puVar14 = puVar19;
      }
      if (local_170 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)*local_170;
        local_170 = puVar14;
        (*(code *)*puVar19)(puVar15,1);
        puVar14 = local_170;
      }
      local_170 = puVar14;
      if (local_170 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_3,(uint)uVar13,pFVar3,pFVar12,uVar10,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(param_3->_padding_ + 0x28))(param_3,uVar13 & 0xffffffff,&local_170);
      }
      if (local_170 != (undefined8 *)0x0) {
        (**(code **)*local_170)(local_170,1);
      }
    }
    if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.AllocatorInstance.Data);
    }
  }
  return;
}

// EvaluateByte @ 1462d8900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGetDataflowVariableNode::EvaluateByte
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  TValueOrError<unsigned_char,EPropertyBagResult> TVar9;
  uint uVar10;
  undefined6 extraout_var;
  FTimestamp FVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  undefined8 *puVar19;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188;
  byte local_187;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_180;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined1 local_160 [8];
  FDataflowOutput *local_158;
  FContext *local_150;
  FGuid local_138;
  FGuid local_128;
  FPropertyBagArrayRef local_118;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_158 = param_4;
  local_150 = param_3;
  if (param_1->ContainerType == None) {
    FInstancedPropertyBag::GetValueByte(param_2,(FName)&local_188);
    uVar17 = (ulonglong)local_187;
    if ((2 < uVar17) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar18 = 0;
    if (((*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar17 + 4) != '\0') &&
        (uVar18 = local_188, local_187 != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), uVar18 = local_188, bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_4->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_128);
      pFVar3 = (FProperty *)local_158->_padding_;
      uVar13 = CityHash64((char *)&local_158->_padding_,0x10);
      puVar15 = (undefined8 *)0x0;
      local_168 = (undefined8 *)0x0;
      puVar19 = ::operator_new(0x40);
      puVar14 = local_168;
      if (puVar19 != (undefined8 *)0x0) {
        uVar16 = pFVar12->A;
        uVar5 = pFVar12->B;
        uVar6 = pFVar12->C;
        uVar7 = pFVar12->D;
        puVar19[6] = *(undefined8 *)FVar11.Value;
        *puVar19 = &___7__TContextCacheElement_E_Dataflow_UE__6B_;
        *(undefined4 *)(puVar19 + 1) = 0;
        *(uint *)((longlong)puVar19 + 0xc) = uVar16;
        *(uint *)(puVar19 + 2) = uVar5;
        *(uint *)((longlong)puVar19 + 0x14) = uVar6;
        *(uint *)(puVar19 + 3) = uVar7;
        puVar19[4] = pFVar3;
        *(uint *)(puVar19 + 5) = uVar10;
        *(undefined1 *)(puVar19 + 7) = uVar18;
        puVar15 = puVar19;
      }
      if (local_168 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)*local_168;
        local_168 = puVar15;
        (*(code *)*puVar19)(puVar14,1);
        puVar15 = local_168;
      }
      local_168 = puVar15;
      if (local_168 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (local_150,(uint)uVar13,pFVar3,pFVar12,uVar10,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(local_150->_padding_ + 0x28))(local_150,uVar13 & 0xffffffff,&local_168);
      }
      if (local_168 != (undefined8 *)0x0) {
        (**(code **)*local_168)(local_168,1);
      }
    }
  }
  else if (param_1->ContainerType == Array) {
    puVar14 = (undefined8 *)0x0;
    local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.ArrayNum = 0;
    local_180.ArrayMax = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar17 = (ulonglong)local_58;
    if ((2 < uVar17) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar17 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_118._padding_ = local_b8._0_8_;
      local_118._padding_ = local_b8._8_8_;
      local_118._padding_ = local_b8._16_8_;
      local_118._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_118.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      iVar2 = *(int *)(local_118._padding_ + 8);
      if ((iVar2 != 0) &&
         (TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_180,iVar2,Default),
         puVar15 = puVar14, puVar19 = puVar14, 0 < iVar2)) {
        do {
          TVar9 = FPropertyBagArrayRef::GetValueByte(&local_118,(int)local_160);
          if ((((FScriptContainerElement *)CONCAT62(extraout_var,TVar9.Variant))[1] !=
               (FScriptContainerElement)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar16 = (uint)puVar15;
          FVar1 = *(FScriptContainerElement *)CONCAT62(extraout_var,TVar9.Variant);
          uVar10 = 0;
          if ((int)uVar16 < local_180.ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *((longlong)puVar19 + local_180.AllocatorInstance.Data) = FVar1;
          puVar19 = (undefined8 *)((longlong)puVar19 + 1);
          puVar15 = (undefined8 *)(ulonglong)(uVar16 + 1);
        } while ((longlong)puVar19 < (longlong)iVar2);
      }
    }
    if (param_4->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_138);
      pFVar3 = (FProperty *)param_4->_padding_;
      uVar13 = CityHash64((char *)&local_158->_padding_,0x10);
      local_170 = (undefined8 *)0x0;
      puVar19 = ::operator_new(0x48);
      puVar15 = local_170;
      if (puVar19 != (undefined8 *)0x0) {
        uVar16 = pFVar12->A;
        uVar5 = pFVar12->B;
        uVar6 = pFVar12->C;
        uVar7 = pFVar12->D;
        puVar19[6] = *(undefined8 *)FVar11.Value;
        *puVar19 = &
                   ___7__TContextCacheElement_V__TArray_EV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar19 + 1) = 0;
        *(uint *)((longlong)puVar19 + 0xc) = uVar16;
        *(uint *)(puVar19 + 2) = uVar5;
        *(uint *)((longlong)puVar19 + 0x14) = uVar6;
        *(uint *)(puVar19 + 3) = uVar7;
        puVar19[4] = pFVar3;
        *(uint *)(puVar19 + 5) = uVar10;
        puVar19[7] = local_180.AllocatorInstance.Data;
        local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar19 + 8) = local_180.ArrayNum;
        *(int *)((longlong)puVar19 + 0x44) = local_180.ArrayMax;
        local_180.ArrayNum = 0;
        local_180.ArrayMax = 0;
        puVar14 = puVar19;
      }
      if (local_170 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)*local_170;
        local_170 = puVar14;
        (*(code *)*puVar19)(puVar15,1);
        puVar14 = local_170;
      }
      local_170 = puVar14;
      if (local_170 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_3,(uint)uVar13,pFVar3,pFVar12,uVar10,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(param_3->_padding_ + 0x28))(param_3,uVar13 & 0xffffffff,&local_170);
      }
      if (local_170 != (undefined8 *)0x0) {
        (**(code **)*local_170)(local_170,1);
      }
    }
    if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.AllocatorInstance.Data);
    }
  }
  return;
}

// EvaluateDouble @ 1462d8da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGetDataflowVariableNode::EvaluateDouble
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TValueOrError<double,EPropertyBagResult> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  float local_158 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_150;
  TValueOrError<double,EPropertyBagResult> local_140;
  FPropertyBagArrayRef local_128;
  TValueOrError<double,EPropertyBagResult> local_c8;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_188;
  if (param_1->ContainerType == None) {
    local_158[0] = 0.0;
    FInstancedPropertyBag::GetValueDouble(param_2,&local_140,param_1->VariableName);
    uVar8 = (ulonglong)local_140.Variant.TypeIndex;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8 + 4) != '\0') {
      if ((local_140.Variant.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_158[0] = (float)(double)local_140.Variant._padding_;
    }
    FDataflowOutput::SetValue<float>(param_4,local_158,param_3);
  }
  else if (param_1->ContainerType == Array) {
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_128._padding_ = local_b8._0_8_;
      local_128._padding_ = local_b8._8_8_;
      local_128._padding_ = local_b8._16_8_;
      local_128._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_128.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      iVar2 = *(int *)(local_128._padding_ + 8);
      if (iVar2 != 0) {
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_150,iVar2,Default);
        uVar7 = 0;
        if (0 < iVar2) {
          lVar9 = 0;
          do {
            pTVar6 = FPropertyBagArrayRef::GetValueDouble(&local_128,&local_c8,uVar7);
            if (((pTVar6->Variant).TypeIndex != '\0') &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            dVar1 = (double)(pTVar6->Variant)._padding_;
            uVar5 = 0;
            if ((int)uVar7 < local_150.ArrayNum) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if (uVar5 == 0) {
              local_168 = (longlong)(int)uVar7;
              local_160 = (longlong)local_150.ArrayNum;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar7 = uVar7 + 1;
            *(float *)(local_150.AllocatorInstance.Data + lVar9 * 4) = (float)dVar1;
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar2);
        }
      }
    }
    FDataflowOutput::SetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
              (param_4,&local_150,param_3);
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
  }
  return;
}

// EvaluateFloat @ 1462d90b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGetDataflowVariableNode::EvaluateFloat
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TValueOrError<float,EPropertyBagResult> TVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  float local_148 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_140;
  float local_130;
  byte local_12c;
  undefined1 local_128 [16];
  FPropertyBagArrayRef local_118;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (param_1->ContainerType == None) {
    local_148[0] = 0.0;
    FInstancedPropertyBag::GetValueFloat(param_2,(FName)&local_130);
    uVar8 = (ulonglong)local_12c;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) != '\0') {
      if ((local_12c != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_148[0] = local_130;
    }
    FDataflowOutput::SetValue<float>(param_4,local_148,param_3);
  }
  else if (param_1->ContainerType == Array) {
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_118._padding_ = local_b8._0_8_;
      local_118._padding_ = local_b8._8_8_;
      local_118._padding_ = local_b8._16_8_;
      local_118._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_118.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      iVar2 = *(int *)(local_118._padding_ + 8);
      if (iVar2 != 0) {
        TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_140,iVar2,Default);
        uVar7 = 0;
        if (0 < iVar2) {
          lVar9 = 0;
          do {
            TVar6 = FPropertyBagArrayRef::GetValueFloat(&local_118,(int)local_128);
            if ((*(char *)((longlong)TVar6.Variant + 4) != '\0') &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar1 = *(undefined4 *)TVar6.Variant;
            uVar5 = 0;
            if ((int)uVar7 < local_140.ArrayNum) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if (uVar5 == 0) {
              local_158 = (longlong)(int)uVar7;
              local_150 = (longlong)local_140.ArrayNum;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar7 = uVar7 + 1;
            *(undefined4 *)(local_140.AllocatorInstance.Data + lVar9 * 4) = uVar1;
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar2);
        }
      }
    }
    FDataflowOutput::SetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
              (param_4,&local_140,param_3);
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
  }
  return;
}

// EvaluateInt32 @ 1462d93c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGetDataflowVariableNode::EvaluateInt32
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  int iVar1;
  undefined4 uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  TValueOrError<int,EPropertyBagResult> TVar10;
  FTimestamp FVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStackY_198 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_168;
  int local_158 [2];
  undefined8 *local_150;
  FContext *local_148;
  FGuid local_138;
  int local_128;
  byte local_124;
  undefined1 local_120 [8];
  FPropertyBagArrayRef local_118;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148 = param_3;
  if (param_1->ContainerType == None) {
    local_158[0] = 0;
    FInstancedPropertyBag::GetValueInt32(param_2,(FName)&local_128);
    uVar16 = (ulonglong)local_124;
    if ((2 < uVar16) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar16) != '\0') {
      if ((local_124 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_158[0] = local_128;
    }
    FDataflowOutput::SetValue<int>(param_4,local_158,param_3);
  }
  else if (param_1->ContainerType == Array) {
    puVar14 = (undefined8 *)0x0;
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar16 = (ulonglong)local_58;
    if ((2 < uVar16) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar16 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_118._padding_ = local_b8._0_8_;
      local_118._padding_ = local_b8._8_8_;
      local_118._padding_ = local_b8._16_8_;
      local_118._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_118.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      iVar1 = *(int *)(local_118._padding_ + 8);
      if ((iVar1 != 0) &&
         (TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_168,iVar1,Default),
         puVar17 = puVar14, puVar18 = puVar14, 0 < iVar1)) {
        do {
          TVar10 = FPropertyBagArrayRef::GetValueInt32(&local_118,(int)local_120);
          if ((*(char *)((longlong)TVar10.Variant + 4) != '\0') &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar15 = (uint)puVar17;
          uVar2 = *(undefined4 *)TVar10.Variant;
          uVar9 = 0;
          if ((int)uVar15 < local_168.ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)(local_168.AllocatorInstance.Data + (longlong)puVar18 * 4) = uVar2;
          puVar18 = (undefined8 *)((longlong)puVar18 + 1);
          puVar17 = (undefined8 *)(ulonglong)(uVar15 + 1);
        } while ((longlong)puVar18 < (longlong)iVar1);
      }
    }
    if (param_4->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_138);
      pFVar3 = (FProperty *)param_4->_padding_;
      uVar13 = CityHash64((char *)&param_4->_padding_,0x10);
      local_150 = (undefined8 *)0x0;
      puVar18 = ::operator_new(0x48);
      puVar17 = local_150;
      if (puVar18 != (undefined8 *)0x0) {
        uVar15 = pFVar12->A;
        uVar5 = pFVar12->B;
        uVar6 = pFVar12->C;
        uVar7 = pFVar12->D;
        puVar18[6] = *(undefined8 *)FVar11.Value;
        *puVar18 = &
                   ___7__TContextCacheElement_V__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar18 + 1) = 0;
        *(uint *)((longlong)puVar18 + 0xc) = uVar15;
        *(uint *)(puVar18 + 2) = uVar5;
        *(uint *)((longlong)puVar18 + 0x14) = uVar6;
        *(uint *)(puVar18 + 3) = uVar7;
        puVar18[4] = pFVar3;
        *(uint *)(puVar18 + 5) = uVar9;
        puVar18[7] = local_168.AllocatorInstance.Data;
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar18 + 8) = local_168.ArrayNum;
        *(int *)((longlong)puVar18 + 0x44) = local_168.ArrayMax;
        local_168.ArrayNum = 0;
        local_168.ArrayMax = 0;
        puVar14 = puVar18;
      }
      if (local_150 != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)*local_150;
        local_150 = puVar14;
        (*(code *)*puVar18)(puVar17,1);
        puVar14 = local_150;
      }
      local_150 = puVar14;
      if (local_150 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (local_148,(uint)uVar13,pFVar3,pFVar12,uVar9,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(local_148->_padding_ + 0x28))(local_148,uVar13 & 0xffffffff,&local_150);
      }
      if (local_150 != (undefined8 *)0x0) {
        (**(code **)*local_150)(local_150,1);
      }
    }
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
  }
  return;
}

// EvaluateInt64 @ 1462d97b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGetDataflowVariableNode::EvaluateInt64
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  longlong lVar1;
  FProperty *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TValueOrError<__int64,EPropertyBagResult> *pTVar10;
  FTimestamp FVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_198;
  int local_190 [2];
  undefined8 *local_188;
  undefined8 *local_180;
  FContext *local_178;
  FDataflowOutput *local_170;
  FGuid local_158;
  FGuid local_148;
  TValueOrError<__int64,EPropertyBagResult> local_138;
  FPropertyBagArrayRef local_128;
  TValueOrError<__int64,EPropertyBagResult> local_c8;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_178 = param_3;
  local_170 = param_4;
  if (param_1->ContainerType == None) {
    puVar14 = (undefined8 *)0x0;
    FInstancedPropertyBag::GetValueInt64(param_2,&local_138,param_1->VariableName);
    uVar18 = (ulonglong)local_138.Variant.TypeIndex;
    if ((2 < uVar18) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar19 = puVar14;
    if (((*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar18 + 4) != '\0') &&
        (puVar19 = (undefined8 *)local_138.Variant._padding_, local_138.Variant.TypeIndex != 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), puVar19 = (undefined8 *)local_138.Variant._padding_, bVar6))
    {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_4->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_148);
      pFVar2 = (FProperty *)param_4->_padding_;
      uVar13 = CityHash64((char *)&local_170->_padding_,0x10);
      local_180 = (undefined8 *)0x0;
      puVar15 = ::operator_new(0x40);
      puVar20 = local_180;
      if (puVar15 != (undefined8 *)0x0) {
        uVar17 = pFVar12->A;
        uVar8 = pFVar12->B;
        uVar4 = pFVar12->C;
        uVar5 = pFVar12->D;
        puVar15[6] = *(undefined8 *)FVar11.Value;
        *puVar15 = &___7__TContextCacheElement__J_Dataflow_UE__6B_;
        *(undefined4 *)(puVar15 + 1) = 0;
        *(uint *)((longlong)puVar15 + 0xc) = uVar17;
        *(uint *)(puVar15 + 2) = uVar8;
        *(uint *)((longlong)puVar15 + 0x14) = uVar4;
        *(uint *)(puVar15 + 3) = uVar5;
        puVar15[4] = pFVar2;
        *(uint *)(puVar15 + 5) = uVar9;
        puVar15[7] = puVar19;
        puVar14 = puVar15;
      }
      if (local_180 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)*local_180;
        local_180 = puVar14;
        (*(code *)*puVar19)(puVar20,1);
        puVar14 = local_180;
      }
      local_180 = puVar14;
      if (local_180 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (local_178,(uint)uVar13,pFVar2,pFVar12,uVar9,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(local_178->_padding_ + 0x28))(local_178,uVar13 & 0xffffffff,&local_180);
      }
      if (local_180 != (undefined8 *)0x0) {
        (**(code **)*local_180)(local_180,1);
      }
    }
  }
  else if (param_1->ContainerType == Array) {
    puVar14 = (undefined8 *)0x0;
    local_198.Data = (FScriptContainerElement *)0x0;
    local_190[0] = 0;
    local_190[1] = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar18 = (ulonglong)local_58;
    if ((2 < uVar18) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar18 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_128._padding_ = local_b8._0_8_;
      local_128._padding_ = local_b8._8_8_;
      local_128._padding_ = local_b8._16_8_;
      local_128._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_128.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      uVar9 = *(uint *)(local_128._padding_ + 8);
      if (uVar9 != 0) {
        if (local_190[0] < (int)uVar9) {
          iVar16 = uVar9 - local_190[0];
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar16,&local_198,local_190,local_190 + 1);
          memset(local_198.Data + (longlong)iVar7 * 8,0,(longlong)iVar16 << 3);
        }
        else {
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          if ((int)uVar9 < local_190[0]) {
            uVar17 = local_190[0] - uVar9;
            if ((int)(uVar9 | uVar17) < 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (uVar17 != 0) {
              iVar16 = (local_190[0] - uVar17) - uVar9;
              iVar7 = local_190[0];
              if (iVar16 != 0) {
                memmove(local_198.Data + (longlong)(int)uVar9 * 8,
                        local_198.Data + (longlong)(int)uVar9 * 8 + (longlong)(int)uVar17 * 8,
                        (longlong)iVar16 << 3);
                iVar7 = local_190[0];
              }
              local_190[0] = iVar7 - uVar17;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&local_198,iVar7 - uVar17,local_190 + 1);
            }
          }
        }
        puVar19 = puVar14;
        puVar20 = puVar14;
        if (0 < (int)uVar9) {
          do {
            uVar17 = (uint)puVar19;
            pTVar10 = FPropertyBagArrayRef::GetValueInt64(&local_128,&local_c8,uVar17);
            if (((pTVar10->Variant).TypeIndex != '\0') &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar1 = (pTVar10->Variant)._padding_;
            uVar8 = 0;
            if ((int)uVar17 < local_190[0]) {
              uVar8 = ~uVar17 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(longlong *)(local_198.Data + (longlong)puVar20 * 8) = lVar1;
            puVar20 = (undefined8 *)((longlong)puVar20 + 1);
            puVar19 = (undefined8 *)(ulonglong)(uVar17 + 1);
          } while ((longlong)puVar20 < (longlong)(int)uVar9);
        }
      }
    }
    if (param_4->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_158);
      pFVar2 = (FProperty *)param_4->_padding_;
      uVar13 = CityHash64((char *)&param_4->_padding_,0x10);
      local_188 = (undefined8 *)0x0;
      puVar20 = ::operator_new(0x48);
      puVar19 = local_188;
      if (puVar20 != (undefined8 *)0x0) {
        uVar17 = pFVar12->A;
        uVar8 = pFVar12->B;
        uVar4 = pFVar12->C;
        uVar5 = pFVar12->D;
        puVar20[6] = *(undefined8 *)FVar11.Value;
        *puVar20 = &
                   ___7__TContextCacheElement_V__TArray__JV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar20 + 1) = 0;
        *(uint *)((longlong)puVar20 + 0xc) = uVar17;
        *(uint *)(puVar20 + 2) = uVar8;
        *(uint *)((longlong)puVar20 + 0x14) = uVar4;
        *(uint *)(puVar20 + 3) = uVar5;
        puVar20[4] = pFVar2;
        *(uint *)(puVar20 + 5) = uVar9;
        puVar20[7] = local_198.Data;
        local_198.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar20 + 8) = local_190[0];
        *(int *)((longlong)puVar20 + 0x44) = local_190[1];
        local_190[0] = 0;
        local_190[1] = 0;
        puVar14 = puVar20;
      }
      if (local_188 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)*local_188;
        local_188 = puVar14;
        (*(code *)*puVar20)(puVar19,1);
        puVar14 = local_188;
      }
      local_188 = puVar14;
      if (local_188 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (local_178,(uint)uVar13,pFVar2,pFVar12,uVar9,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(local_178->_padding_ + 0x28))(local_178,uVar13 & 0xffffffff,&local_188);
      }
      if (local_188 != (undefined8 *)0x0) {
        (**(code **)*local_188)(local_188,1);
      }
    }
    if (local_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data);
    }
  }
  return;
}

// EvaluateName @ 1462d9d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGetDataflowVariableNode::EvaluateName
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TValueOrError<FName,EPropertyBagResult> *pTVar10;
  FTimestamp FVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStackY_1c8 [32];
  TArray<FName,TSizedDefaultAllocator<32>_> local_198;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined1 local_178 [16];
  FContext *local_168;
  FGuid local_150;
  FGuid local_140;
  TValueOrError<FName,EPropertyBagResult> local_130;
  TValueOrError<FName,EPropertyBagResult> local_124;
  FPropertyBagArrayRef local_118;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_178._8_8_ = param_4;
  local_168 = param_3;
  if (param_1->ContainerType == None) {
    puVar14 = (undefined8 *)0x0;
    local_178._0_8_ = 0;
    FInstancedPropertyBag::GetValueName(param_2,&local_130,param_1->VariableName);
    uVar15 = (ulonglong)local_130.Variant.TypeIndex;
    if ((2 < uVar15) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar16 = local_178._0_8_;
    if (((*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar15) != '\0') &&
        (uVar16 = local_130.Variant._0_8_, local_130.Variant.TypeIndex != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), uVar16 = local_130.Variant._0_8_, bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_4->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_140);
      pFVar2 = *(FProperty **)(local_178._8_8_ + 0x10);
      uVar13 = CityHash64((char *)(local_178._8_8_ + 0x18),0x10);
      local_180 = (undefined8 *)0x0;
      puVar18 = ::operator_new(0x40);
      puVar17 = local_180;
      if (puVar18 != (undefined8 *)0x0) {
        uVar8 = pFVar12->A;
        uVar4 = pFVar12->B;
        uVar5 = pFVar12->C;
        uVar6 = pFVar12->D;
        puVar18[6] = *(undefined8 *)FVar11.Value;
        *puVar18 = &___7__TContextCacheElement_VFName___Dataflow_UE__6B_;
        *(undefined4 *)(puVar18 + 1) = 0;
        *(uint *)((longlong)puVar18 + 0xc) = uVar8;
        *(uint *)(puVar18 + 2) = uVar4;
        *(uint *)((longlong)puVar18 + 0x14) = uVar5;
        *(uint *)(puVar18 + 3) = uVar6;
        puVar18[4] = pFVar2;
        *(uint *)(puVar18 + 5) = uVar9;
        puVar18[7] = uVar16;
        puVar14 = puVar18;
      }
      if (local_180 != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)*local_180;
        local_180 = puVar14;
        (*(code *)*puVar18)(puVar17,1);
        puVar14 = local_180;
      }
      local_180 = puVar14;
      if (local_180 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (local_168,(uint)uVar13,pFVar2,pFVar12,uVar9,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(local_168->_padding_ + 0x28))(local_168,uVar13 & 0xffffffff,&local_180);
      }
      if (local_180 != (undefined8 *)0x0) {
        (**(code **)*local_180)(local_180,1);
      }
    }
  }
  else if (param_1->ContainerType == Array) {
    puVar14 = (undefined8 *)0x0;
    local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.ArrayNum = 0;
    local_198.ArrayMax = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar15 = (ulonglong)local_58;
    if ((2 < uVar15) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar15 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_118._padding_ = local_b8._0_8_;
      local_118._padding_ = local_b8._8_8_;
      local_118._padding_ = local_b8._16_8_;
      local_118._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_118.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      iVar1 = *(int *)(local_118._padding_ + 8);
      if ((iVar1 != 0) &&
         (TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(&local_198,iVar1,Default),
         puVar17 = puVar14, puVar18 = puVar14, 0 < iVar1)) {
        do {
          uVar9 = (uint)puVar17;
          pTVar10 = FPropertyBagArrayRef::GetValueName(&local_118,&local_124,uVar9);
          if (((pTVar10->Variant).TypeIndex != '\0') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar16 = *(undefined8 *)&pTVar10->Variant;
          uVar8 = 0;
          if ((int)uVar9 < local_198.ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined8 *)(local_198.AllocatorInstance.Data + (longlong)puVar18 * 8) = uVar16;
          puVar18 = (undefined8 *)((longlong)puVar18 + 1);
          puVar17 = (undefined8 *)(ulonglong)(uVar9 + 1);
        } while ((longlong)puVar18 < (longlong)iVar1);
      }
    }
    if (param_4->_padding_ != 0) {
      FVar11 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar12 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_150);
      pFVar2 = (FProperty *)param_4->_padding_;
      uVar13 = CityHash64((char *)(local_178._8_8_ + 0x18),0x10);
      local_188 = (undefined8 *)0x0;
      puVar18 = ::operator_new(0x48);
      puVar17 = local_188;
      if (puVar18 != (undefined8 *)0x0) {
        uVar8 = pFVar12->A;
        uVar4 = pFVar12->B;
        uVar5 = pFVar12->C;
        uVar6 = pFVar12->D;
        puVar18[6] = *(undefined8 *)FVar11.Value;
        *puVar18 = &
                   ___7__TContextCacheElement_V__TArray_VFName__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar18 + 1) = 0;
        *(uint *)((longlong)puVar18 + 0xc) = uVar8;
        *(uint *)(puVar18 + 2) = uVar4;
        *(uint *)((longlong)puVar18 + 0x14) = uVar5;
        *(uint *)(puVar18 + 3) = uVar6;
        puVar18[4] = pFVar2;
        *(uint *)(puVar18 + 5) = uVar9;
        puVar18[7] = local_198.AllocatorInstance.Data;
        local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar18 + 8) = local_198.ArrayNum;
        *(int *)((longlong)puVar18 + 0x44) = local_198.ArrayMax;
        local_198.ArrayNum = 0;
        local_198.ArrayMax = 0;
        puVar14 = puVar18;
      }
      if (local_188 != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)*local_188;
        local_188 = puVar14;
        (*(code *)*puVar18)(puVar17,1);
        puVar14 = local_188;
      }
      local_188 = puVar14;
      if (local_188 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_3,(uint)uVar13,pFVar2,pFVar12,uVar9,(FTimestamp *)FVar11.Value);
      }
      else {
        (**(code **)(param_3->_padding_ + 0x28))(param_3,uVar13 & 0xffffffff,&local_188);
      }
      if (local_188 != (undefined8 *)0x0) {
        (**(code **)*local_188)(local_188,1);
      }
    }
    if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
    }
  }
  return;
}

// EvaluateObject @ 1462da210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGetDataflowVariableNode::EvaluateObject
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FDataflowOutput *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TValueOrError<UObject_*,EPropertyBagResult> *pTVar12;
  FTimestamp FVar13;
  FGuid *pFVar14;
  ulong64 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  UObject *pUVar21;
  undefined1 auStackY_1c8 [32];
  undefined8 *local_198;
  FDataflowOutput *local_190;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> local_188;
  undefined8 *local_178;
  FContext *local_170;
  FGuid local_158;
  FGuid local_148;
  TValueOrError<UObject_*,EPropertyBagResult> local_138;
  FPropertyBagArrayRef local_128;
  TValueOrError<UObject_*,EPropertyBagResult> local_c8;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_190 = param_4;
  local_170 = param_3;
  if (param_1->ContainerType == None) {
    FInstancedPropertyBag::GetValueObject(param_2,&local_138,param_1->VariableName,(UClass *)0x0);
    uVar19 = (ulonglong)local_138.Variant.TypeIndex;
    if ((2 < uVar19) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar21 = (UObject *)0x0;
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar19) != '\0') {
      if ((local_138.Variant.TypeIndex != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar21 = (UObject *)local_138.Variant._padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)local_138.Variant._padding_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_138.Variant._padding_);
      }
    }
    if (param_4->_padding_ != 0) {
      FVar13 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar14 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_148);
      plVar18 = &local_190->_padding_;
      local_190 = (FDataflowOutput *)local_190->_padding_;
      uVar15 = CityHash64((char *)plVar18,0x10);
      local_178 = (undefined8 *)0x0;
      puVar17 = ::operator_new(0x50);
      pFVar8 = local_190;
      if (puVar17 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)FVar13.Value;
        uVar6 = *(undefined8 *)pFVar14;
        uVar7 = *(undefined8 *)&pFVar14->C;
        *puVar17 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
        puVar17[6] = uVar4;
        *(undefined8 *)((longlong)puVar17 + 0xc) = uVar6;
        *(undefined8 *)((longlong)puVar17 + 0x14) = uVar7;
        *(undefined4 *)(puVar17 + 1) = 3;
        puVar17[4] = local_190;
        *(uint *)(puVar17 + 5) = uVar11;
        puVar17[7] = &___7FGCObject__6B_;
        *(undefined2 *)(puVar17 + 8) = 0;
        FGCObject::RegisterGCObject((FGCObject *)(puVar17 + 7));
        *puVar17 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar17[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::
                      _vftable__for__FGCObject__;
        puVar17[9] = pUVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar21);
        }
      }
      puVar16 = local_178;
      if (local_178 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)*local_178;
        local_178 = puVar17;
        (*(code *)*puVar20)(puVar16,1);
        puVar17 = local_178;
      }
      local_178 = puVar17;
      if (local_178 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (local_170,(uint)uVar15,(FProperty *)pFVar8,pFVar14,uVar11,
                   (FTimestamp *)FVar13.Value);
      }
      else {
        (**(code **)(local_170->_padding_ + 0x28))(local_170,uVar15 & 0xffffffff,&local_178);
      }
      if (local_178 != (undefined8 *)0x0) {
        (**(code **)*local_178)(local_178,1);
      }
    }
  }
  else if (param_1->ContainerType == Array) {
    puVar17 = (undefined8 *)0x0;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar19 = (ulonglong)local_58;
    if ((2 < uVar19) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar19 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_128._padding_ = local_b8._0_8_;
      local_128._padding_ = local_b8._8_8_;
      local_128._padding_ = local_b8._16_8_;
      local_128._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_128.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      iVar2 = *(int *)(local_128._padding_ + 8);
      if (iVar2 != 0) {
        TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::SetNum(&local_188,iVar2,Default);
        puVar16 = puVar17;
        puVar20 = puVar17;
        if (0 < iVar2) {
          do {
            uVar11 = (uint)puVar16;
            pTVar12 = FPropertyBagArrayRef::GetValueObject
                                (&local_128,&local_c8,uVar11,(UClass *)0x0);
            if (((pTVar12->Variant).TypeIndex != '\0') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar10 = 0;
            if ((int)uVar11 < local_188.ArrayNum) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pUVar21 = (UObject *)(pTVar12->Variant)._padding_;
            pFVar1 = local_188.AllocatorInstance.Data + (longlong)puVar20 * 8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar21);
            }
            *(UObject **)pFVar1 = pUVar21;
            puVar20 = (undefined8 *)((longlong)puVar20 + 1);
            puVar16 = (undefined8 *)(ulonglong)(uVar11 + 1);
            param_4 = local_190;
          } while ((longlong)puVar20 < (longlong)iVar2);
        }
      }
    }
    if ((FProperty *)param_4->_padding_ != (FProperty *)0x0) {
      FVar13 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar14 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_158);
      pFVar3 = (FProperty *)param_4->_padding_;
      uVar15 = CityHash64((char *)&param_4->_padding_,0x10);
      local_198 = (undefined8 *)0x0;
      puVar16 = ::operator_new(0x58);
      if (puVar16 != (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)FVar13.Value;
        uVar6 = *(undefined8 *)pFVar14;
        uVar7 = *(undefined8 *)&pFVar14->C;
        *puVar16 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
        puVar16[6] = uVar4;
        *(undefined8 *)((longlong)puVar16 + 0xc) = uVar6;
        *(undefined8 *)((longlong)puVar16 + 0x14) = uVar7;
        *(undefined4 *)(puVar16 + 1) = 4;
        puVar16[4] = pFVar3;
        *(uint *)(puVar16 + 5) = uVar11;
        puVar16[7] = &___7FGCObject__6B_;
        *(undefined2 *)(puVar16 + 8) = 0;
        FGCObject::RegisterGCObject((FGCObject *)(puVar16 + 7));
        *puVar16 = &UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UObject>_>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar16[7] = &UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UObject>_>::
                      _vftable__for__FGCObject__;
        puVar16[9] = local_188.AllocatorInstance.Data;
        local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar16 + 10) = local_188.ArrayNum;
        *(int *)((longlong)puVar16 + 0x54) = local_188.ArrayMax;
        local_188.ArrayNum = 0;
        local_188.ArrayMax = 0;
        puVar17 = puVar16;
      }
      puVar16 = local_198;
      if (local_198 != (undefined8 *)0x0) {
        puVar20 = (undefined8 *)*local_198;
        local_198 = puVar17;
        (*(code *)*puVar20)(puVar16,1);
        puVar17 = local_198;
      }
      local_198 = puVar17;
      if (local_198 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (local_170,(uint)uVar15,pFVar3,pFVar14,uVar11,(FTimestamp *)FVar13.Value);
      }
      else {
        (**(code **)(local_170->_padding_ + 0x28))(local_170,uVar15 & 0xffffffff,&local_198);
      }
      if (local_198 != (undefined8 *)0x0) {
        (**(code **)*local_198)(local_198,1);
      }
    }
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
  return;
}

// EvaluateString @ 1462da780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGetDataflowVariableNode::EvaluateString
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  TArray<FString,TSizedDefaultAllocator<32>_> local_178;
  FString local_168;
  FContext *local_158;
  FDataflowOutput *local_150;
  TValueOrError<FString,EPropertyBagResult> local_148;
  TValueOrError<FString,EPropertyBagResult> local_130;
  FPropertyBagArrayRef local_118;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_158 = param_3;
  local_150 = param_4;
  if (param_1->ContainerType == None) {
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    FInstancedPropertyBag::GetValueString(param_2,&local_148,param_1->VariableName);
    uVar6 = (ulonglong)local_148.Variant.TypeIndex;
    if ((2 < uVar6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6 + 4) != '\0') {
      if ((local_148.Variant.TypeIndex != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar10 = (int)local_148.Variant._padding_ + -1;
      if ((int)local_148.Variant._padding_ == 0) {
        iVar10 = 0;
      }
      ::FString::AssignRange(&local_168,(wchar_t *)local_148.Variant._padding_,iVar10);
    }
    FDataflowOutput::SetValue<FString>(param_4,&local_168,param_3);
    if ((2 < local_148.Variant.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_148.Variant.TypeIndex])(&local_148);
    FVar5.Data = local_168.Data.AllocatorInstance.Data;
  }
  else {
    if (param_1->ContainerType != Array) {
      return;
    }
    uVar8 = 0;
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar6 = (ulonglong)local_58;
    if ((2 < uVar6) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_118._padding_ = local_b8._0_8_;
      local_118._padding_ = local_b8._8_8_;
      local_118._padding_ = local_b8._16_8_;
      local_118._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_118.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      iVar10 = *(int *)(local_118._padding_ + 8);
      lVar7 = (longlong)iVar10;
      if (iVar10 != 0) {
        TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_178,iVar10,Default);
        uVar6 = uVar8;
        if (0 < iVar10) {
          do {
            uVar11 = (uint)uVar8;
            pFVar4 = (FScriptContainerElement *)
                     FPropertyBagArrayRef::GetValueString(&local_118,&local_130,uVar11);
            if ((pFVar4[0x10] != (FScriptContainerElement)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar3 = 0;
            if ((int)uVar11 < local_178.ArrayNum) {
              uVar3 = ~uVar11 >> 0x1f;
            }
            if (uVar3 == 0) {
              local_188 = (longlong)(int)uVar11;
              local_180 = (longlong)local_178.ArrayNum;
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            pFVar9 = local_178.AllocatorInstance.Data + uVar6;
            if (pFVar9 != pFVar4) {
              if (*(void **)pFVar9 != (void *)0x0) {
                FMemory::Free(*(void **)pFVar9);
              }
              *(undefined8 *)pFVar9 = *(undefined8 *)pFVar4;
              *(undefined8 *)pFVar4 = 0;
              *(undefined4 *)(pFVar9 + 8) = *(undefined4 *)(pFVar4 + 8);
              *(undefined4 *)(pFVar9 + 0xc) = *(undefined4 *)(pFVar4 + 0xc);
              *(longlong *)(pFVar4 + 8) = 0;
            }
            uVar8 = (ulonglong)local_130.Variant.TypeIndex;
            if ((2 < local_130.Variant.TypeIndex) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar8])(&local_130);
            uVar8 = (ulonglong)(uVar11 + 1);
            lVar7 = lVar7 + -1;
            param_3 = local_158;
            uVar6 = uVar6 + 0x10;
            param_4 = local_150;
          } while (lVar7 != 0);
        }
      }
    }
    FDataflowOutput::SetValue<TArray<FString,TSizedDefaultAllocator<32>_>_>
              (param_4,&local_178,param_3);
    DestructItems<FString,int>((FString *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
    FVar5.Data = local_178.AllocatorInstance.Data;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// EvaluateStruct @ 1462dab40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGetDataflowVariableNode::EvaluateStruct
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  FTimestamp FVar7;
  FGuid *pFVar8;
  ulong64 uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStackY_1d8 [32];
  FConstStructArrayView local_198;
  FConstStructView local_180 [2];
  FGuid local_160;
  FGuid local_150;
  TValueOrError<FStructView,EPropertyBagResult> local_140;
  TValueOrError<FStructView,EPropertyBagResult> local_128;
  FPropertyBagArrayRef local_108;
  undefined1 local_a8 [96];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_1->ContainerType == None) {
    local_180[0].ScriptStruct = (UScriptStruct *)0x0;
    local_180[0].StructMemory = (uchar *)0x0;
    FInstancedPropertyBag::GetValueStruct
              (param_2,&local_140,param_1->VariableName,(UScriptStruct *)0x0);
    uVar11 = (ulonglong)local_140.Variant.TypeIndex;
    if (2 < uVar11) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar11 + 4) != '\0') {
      if (local_140.Variant.TypeIndex != 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_180[0].ScriptStruct = (UScriptStruct *)local_140.Variant._padding_;
      local_180[0].StructMemory = (uchar *)local_140.Variant._padding_;
    }
    if (param_4->_padding_ != 0) {
      FVar7 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar6 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar8 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_150);
      pFVar2 = (FProperty *)param_4->_padding_;
      uVar9 = CityHash64((char *)&param_4->_padding_,0x10);
      UE::Dataflow::FContext::SetDataFromStructView
                (param_3,(uint)uVar9,pFVar2,local_180,pFVar8,uVar6,(FTimestamp *)FVar7.Value);
    }
  }
  else if (param_1->ContainerType == Array) {
    local_198.ElementSize = 0;
    local_198.ArrayNum = 0;
    local_198.DataPtr = (void *)0x0;
    local_198.ScriptStruct = (UScriptStruct *)0x0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_a8,
               param_1->VariableName);
    uVar11 = (ulonglong)local_48;
    if (2 < uVar11) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar11 + 4) != '\0') {
      if (local_48 != 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_108._padding_ = local_a8._0_8_;
      local_108._padding_ = local_a8._8_8_;
      local_108._padding_ = local_a8._16_8_;
      local_108._padding_ = local_a8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_108.ValueDesc,(FPropertyBagPropertyDesc *)(local_a8 + 0x20));
      iVar1 = *(int *)(local_108._padding_ + 8);
      if (iVar1 != 0) {
        FPropertyBagArrayRef::GetValueStruct(&local_108,&local_128,0,(UScriptStruct *)0x0);
        if ((local_128.Variant.TypeIndex == '\0') &&
           ((UScriptStruct *)local_128.Variant._padding_ != (UScriptStruct *)0x0)) {
          iVar10 = (int)*(short *)((longlong)(local_128.Variant._padding_ + 0x58) + 4);
          lVar4 = *(longlong *)(local_128.Variant._padding_ + 0x58);
          if (iVar1 < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                               ,0x1b8,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if ((void *)local_128.Variant._padding_ == (void *)0x0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InData != nullptr || InCount == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                               ,0x1b9,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_198.DataPtr = (void *)local_128.Variant._padding_;
          local_198.ScriptStruct = (UScriptStruct *)local_128.Variant._padding_;
          local_198.ArrayNum = iVar1;
          local_198.ElementSize = iVar10 + -1 + (int)lVar4 & -iVar10;
        }
      }
    }
    if (param_4->_padding_ != 0) {
      FVar7 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)param_4);
      uVar6 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)param_4);
      pFVar8 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)param_4,&local_160);
      pFVar2 = (FProperty *)param_4->_padding_;
      uVar9 = CityHash64((char *)&param_4->_padding_,0x10);
      UE::Dataflow::FContext::SetDataFromStructArrayView
                (param_3,(uint)uVar9,pFVar2,&local_198,pFVar8,uVar6,(FTimestamp *)FVar7.Value);
    }
  }
  return;
}

// EvaluateText @ 1462db1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGetDataflowVariableNode::EvaluateText
          (FGetDataflowVariableNode *param_1,FInstancedPropertyBag *param_2,FContext *param_3,
          FDataflowOutput *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *this;
  FString *pFVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  longlong local_180;
  TArray<FString,TSizedDefaultAllocator<32>_> local_178;
  FString local_168;
  FDataflowOutput *local_158;
  FContext *local_150;
  TValueOrError<FText,EPropertyBagResult> local_148;
  TValueOrError<FText,EPropertyBagResult> local_130;
  FPropertyBagArrayRef local_118;
  undefined1 local_b8 [96];
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_158 = param_4;
  local_150 = param_3;
  if (param_1->ContainerType == None) {
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    FInstancedPropertyBag::GetValueText(param_2,&local_148,param_1->VariableName);
    uVar7 = (ulonglong)local_148.Variant.TypeIndex;
    if ((2 < uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar7) != '\0') {
      if ((local_148.Variant.TypeIndex != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = FText::ToString((FText *)&local_148);
      ::FString::operator=(&local_168,pFVar4);
    }
    FDataflowOutput::SetValue<FString>(param_4,&local_168,param_3);
    if ((2 < local_148.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_148.Variant.TypeIndex])(&local_148);
    FVar6.Data = local_168.Data.AllocatorInstance.Data;
  }
  else {
    if (param_1->ContainerType != Array) {
      return;
    }
    uVar7 = 0;
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    FInstancedPropertyBag::GetArrayRef
              (param_2,(TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)local_b8,
               param_1->VariableName);
    uVar9 = (ulonglong)local_58;
    if ((2 < uVar9) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar9 + 4) != '\0') {
      if ((local_58 != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_118._padding_ = local_b8._0_8_;
      local_118._padding_ = local_b8._8_8_;
      local_118._padding_ = local_b8._16_8_;
      local_118._padding_ = local_b8._24_8_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                (&local_118.ValueDesc,(FPropertyBagPropertyDesc *)(local_b8 + 0x20));
      iVar1 = *(int *)(local_118._padding_ + 8);
      if (iVar1 != 0) {
        TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_178,iVar1,Default);
        uVar9 = uVar7;
        uVar10 = uVar7;
        if (0 < iVar1) {
          do {
            uVar8 = (uint)uVar7;
            this = (FText *)FPropertyBagArrayRef::GetValueText(&local_118,&local_130,uVar8);
            if ((*(char *)&this[1].TextData.Reference != '\0') &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar4 = FText::ToString(this);
            uVar5 = 0;
            if ((int)uVar8 < local_178.ArrayNum) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (local_188 = uVar9, local_180 = (longlong)local_178.ArrayNum,
               bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            ::FString::operator=((FString *)(local_178.AllocatorInstance.Data + uVar10),pFVar4);
            uVar7 = (ulonglong)local_130.Variant.TypeIndex;
            if ((2 < local_130.Variant.TypeIndex) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar7])(&local_130);
            uVar7 = (ulonglong)(uVar8 + 1);
            param_4 = local_158;
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 + 0x10;
          } while ((int)(uVar8 + 1) < iVar1);
        }
      }
    }
    FDataflowOutput::SetValue<TArray<FString,TSizedDefaultAllocator<32>_>_>
              (param_4,&local_178,local_150);
    DestructItems<FString,int>((FString *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
    FVar6.Data = local_178.AllocatorInstance.Data;
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// OnObjectPropertyChanged @ 1462e0260

void __thiscall
FGetDataflowVariableNode::OnObjectPropertyChanged
          (FGetDataflowVariableNode *this,UObject *param_1,FPropertyChangedEvent *param_2)

{
  FProperty *pFVar1;
  bool bVar2;
  UDataflow *pUVar3;
  FName *pFVar4;
  FName FVar5;
  FName FVar6;
  FName local_res8;
  
  pUVar3 = (UDataflow *)FWeakObjectPtr::Get(&(this->WeakDataflowPtr).WeakPtr);
  if ((pUVar3 != (UDataflow *)0x0) && ((UDataflow *)param_1 == pUVar3)) {
    pFVar4 = ::FName::FName(&local_res8,9,L"Variables",FNAME_Add);
    pFVar1 = param_2->MemberProperty;
    FVar6 = *pFVar4;
    if ((pFVar1 == (FProperty *)0x0) || (bVar2 = IsThisNotNull(pFVar1,"FField::GetFName"), !bVar2))
    {
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
    }
    else {
      FVar5 = (FName)pFVar1->_padding_;
    }
    if (FVar5 == FVar6) {
      pFVar1 = param_2->Property;
      if ((pFVar1 == (FProperty *)0x0) || (bVar2 = IsThisNotNull(pFVar1,"FField::GetFName"), !bVar2)
         ) {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
        FVar6.ComparisonIndex.Value = 0;
        FVar6.Number = 0;
      }
      else {
        FVar6 = (FName)pFVar1->_padding_;
      }
      if ((FVar6 == this->VariableName) || (FVar6 == (FName)0x0)) {
        SetVariable(this,pUVar3,this->VariableName);
      }
    }
  }
  return;
}

// RegisterHandlers @ 1462e2fc0

void __thiscall FGetDataflowVariableNode::RegisterHandlers(FGetDataflowVariableNode *this)

{
  return;
}

// SetVariable @ 1462e5d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
FGetDataflowVariableNode::SetVariable
          (FGetDataflowVariableNode *this,UDataflow *param_1,FName param_2)

{
  FPropertyBagPropertyDesc *pFVar1;
  undefined1 auStack_98 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_78;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  FName local_50;
  EPropertyBagPropertyType local_48;
  undefined2 local_47;
  uchar local_45;
  ulong64 local_40;
  FProperty *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.DataPtr = (FPropertyBagPropertyDesc *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDataflow *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakDataflowPtr).WeakPtr,(FObjectPtr)&local_78);
  this->EvaluateFunction =
       (_func___cdecl_void_FGetDataflowVariableNode_ptr_FInstancedPropertyBag_ptr_FContext_ptr_FDataflowOutput_ptr
        *)0x0;
  FInstancedStruct::Reset(&(this->VariablePropertyBag).Value);
  if ((param_1 != (UDataflow *)0x0) &&
     (pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(&param_1->Variables,param_2),
     pFVar1 != (FPropertyBagPropertyDesc *)0x0)) {
    this->VariableName = param_2;
    local_68.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar1->ValueTypeObject).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_68.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_68.DebugPtr);
    }
    local_50 = pFVar1->Name;
    local_60._0_4_ = (pFVar1->ID).A;
    local_60._4_4_ = (pFVar1->ID).B;
    uStack_58._0_4_ = (pFVar1->ID).C;
    uStack_58._4_4_ = (pFVar1->ID).D;
    local_48 = pFVar1->ValueType;
    local_47 = *(undefined2 *)(pFVar1->ContainerTypes).Types.Elements;
    local_45 = (pFVar1->ContainerTypes).NumContainers;
    local_40 = pFVar1->PropertyFlags;
    local_38 = pFVar1->CachedProperty;
    local_30 = pFVar1->CachedIndex;
    local_78.ArrayNum = 1;
    local_78.DataPtr = (FPropertyBagPropertyDesc *)&local_68;
    FInstancedPropertyBag::AddProperties(&this->VariablePropertyBag,&local_78,true);
    FInstancedPropertyBag::SetValue
              (&this->VariablePropertyBag,this->VariableName,pFVar1->CachedProperty,
               (param_1->Variables).Value.StructMemory);
    UpdateOutputTypes(this,pFVar1);
    local_78.DataPtr = (FPropertyBagPropertyDesc *)UE::Dataflow::FTimestamp::Current();
    FDataflowNode::Invalidate((FDataflowNode *)this,(FTimestamp *)&local_78);
  }
  return;
}

// TryAddVariableToDataflowAsset @ 1462e6890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

bool __thiscall
FGetDataflowVariableNode::TryAddVariableToDataflowAsset
          (FGetDataflowVariableNode *this,UDataflow *param_1)

{
  FInstancedPropertyBag *this_00;
  FPropertyBagPropertyDesc *pFVar1;
  undefined1 auStack_88 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_68;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  FName local_40;
  EPropertyBagPropertyType local_38;
  undefined2 local_37;
  uchar local_35;
  ulong64 local_30;
  FProperty *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  this_00 = &param_1->Variables;
  pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(this_00,this->VariableName);
  if ((pFVar1 == (FPropertyBagPropertyDesc *)0x0) &&
     (pFVar1 = FInstancedPropertyBag::FindPropertyDescByName
                         (&this->VariablePropertyBag,this->VariableName),
     pFVar1 != (FPropertyBagPropertyDesc *)0x0)) {
    local_58.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar1->ValueTypeObject).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_58.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_58.DebugPtr);
    }
    local_40 = pFVar1->Name;
    local_50._0_4_ = (pFVar1->ID).A;
    local_50._4_4_ = (pFVar1->ID).B;
    uStack_48._0_4_ = (pFVar1->ID).C;
    uStack_48._4_4_ = (pFVar1->ID).D;
    local_38 = pFVar1->ValueType;
    local_37 = *(undefined2 *)(pFVar1->ContainerTypes).Types.Elements;
    local_35 = (pFVar1->ContainerTypes).NumContainers;
    local_30 = pFVar1->PropertyFlags;
    local_28 = pFVar1->CachedProperty;
    local_20 = pFVar1->CachedIndex;
    local_68.ArrayNum = 1;
    local_68.DataPtr = (FPropertyBagPropertyDesc *)&local_58;
    FInstancedPropertyBag::AddProperties(this_00,&local_68,true);
    FInstancedPropertyBag::SetValue
              (this_00,this->VariableName,pFVar1->CachedProperty,
               (this->VariablePropertyBag).Value.StructMemory);
    return true;
  }
  return false;
}

// UnregisterHandlers @ 1462e72d0

void __thiscall FGetDataflowVariableNode::UnregisterHandlers(FGetDataflowVariableNode *this)

{
  return;
}

// UpdateOutputTypes @ 1462e73e0

void __thiscall
FGetDataflowVariableNode::UpdateOutputTypes
          (FGetDataflowVariableNode *this,FPropertyBagPropertyDesc *param_1)

{
  UDataflow *this_00;
  bool bVar1;
  FDataflowOutput *pFVar2;
  code *pcVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  wchar_t *pwVar5;
  EPropertyBagContainerType EVar6;
  undefined1 local_b0 [48];
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FProperty *local_58;
  FConnectionReference local_50;
  FGuid local_38;
  
  if (param_1->CachedProperty != (FProperty *)0x0) {
    local_50.Reference = &this->Value;
    pcVar3 = (_func___cdecl_void_FGetDataflowVariableNode_ptr_FInstancedPropertyBag_ptr_FContext_ptr_FDataflowOutput_ptr
              *)0x0;
    local_50.ContainerReference = (void *)0x0;
    local_50.Index = 0xffffffff;
    pFVar2 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_50);
    if ((pFVar2 == (FDataflowOutput *)0x0) &&
       (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                          ("Output",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Engine\\Private\\Dataflow\\DataflowVariableNodes.cpp"
                           ,0x90,L""), bVar1)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1->ContainerTypes).NumContainers == '\0') {
      EVar6 = None;
    }
    else {
      EVar6 = (param_1->ContainerTypes).Types.Elements[0];
    }
    this->ContainerType = EVar6;
    FDataflowConnection::GetTypeNameFromProperty((FProperty *)local_b0);
    switch(param_1->ValueType) {
    case Bool:
      pwVar5 = L"TArray<bool>";
      if (EVar6 != Array) {
        pwVar5 = L"bool";
      }
      ::FName::FName((FName *)(local_b0 + 0x10),pwVar5);
      if ((pFVar2 != (FDataflowOutput *)0x0) && (pFVar2->_padding_ != local_b0._16_8_)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,(FName)local_b0._16_8_,
                   (FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateBool;
      break;
    case Byte:
      pwVar5 = L"TArray<uint8>";
      if (EVar6 != Array) {
        pwVar5 = L"uint8";
      }
      ::FName::FName((FName *)(local_b0 + 0x18),pwVar5);
      if ((pFVar2 != (FDataflowOutput *)0x0) && (pFVar2->_padding_ != local_b0._24_8_)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,(FName)local_b0._24_8_,
                   (FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateByte;
      break;
    case Int32:
      pwVar5 = L"TArray<int32>";
      if (EVar6 != Array) {
        pwVar5 = L"int32";
      }
      ::FName::FName((FName *)(local_b0 + 0x20),pwVar5);
      if ((pFVar2 != (FDataflowOutput *)0x0) && (pFVar2->_padding_ != local_b0._32_8_)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,(FName)local_b0._32_8_,
                   (FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateInt32;
      break;
    case Int64:
      pwVar5 = L"TArray<int64>";
      if (EVar6 != Array) {
        pwVar5 = L"int64";
      }
      ::FName::FName((FName *)(local_b0 + 0x28),pwVar5);
      if ((pFVar2 != (FDataflowOutput *)0x0) && (pFVar2->_padding_ != local_b0._40_8_)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,(FName)local_b0._40_8_,
                   (FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateInt64;
      break;
    case Float:
      pwVar5 = L"TArray<float>";
      if (EVar6 != Array) {
        pwVar5 = L"float";
      }
      ::FName::FName(&local_80,pwVar5);
      if ((pFVar2 != (FDataflowOutput *)0x0) && ((FName)pFVar2->_padding_ != local_80)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,local_80,(FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateFloat;
      break;
    case Double:
      pwVar5 = L"TArray<float>";
      if (EVar6 != Array) {
        pwVar5 = L"float";
      }
      ::FName::FName(&local_78,pwVar5);
      if ((pFVar2 != (FDataflowOutput *)0x0) && ((FName)pFVar2->_padding_ != local_78)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,local_78,(FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateDouble;
      break;
    case Name:
      pwVar5 = L"TArray<FName>";
      if (EVar6 != Array) {
        pwVar5 = L"FName";
      }
      ::FName::FName(&local_70,pwVar5);
      if ((pFVar2 != (FDataflowOutput *)0x0) && ((FName)pFVar2->_padding_ != local_70)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,local_70,(FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateName;
      break;
    case String:
      pwVar5 = L"TArray<FString>";
      if (EVar6 != Array) {
        pwVar5 = L"FString";
      }
      ::FName::FName(&local_68,pwVar5);
      if ((pFVar2 != (FDataflowOutput *)0x0) && ((FName)pFVar2->_padding_ != local_68)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,local_68,(FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateString;
      break;
    case Text:
      pwVar5 = L"TArray<FText>";
      if (EVar6 != Array) {
        pwVar5 = L"FText";
      }
      ::FName::FName(&local_60,pwVar5);
      if ((pFVar2 != (FDataflowOutput *)0x0) && ((FName)pFVar2->_padding_ != local_60)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,local_60,(FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateText;
      break;
    default:
      break;
    case Struct:
      if ((pFVar2 != (FDataflowOutput *)0x0) && (pFVar2->_padding_ != local_b0._0_8_)) {
        local_b0._8_8_ = 0;
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,(FName)local_b0._0_8_,
                   (FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateStruct;
      break;
    case Object:
      if ((pFVar2 != (FDataflowOutput *)0x0) && (pFVar2->_padding_ != local_b0._0_8_)) {
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar2,(FName)local_b0._0_8_,
                   (FName)0x0);
        *(byte *)&pFVar2->_padding_ = (byte)pFVar2->_padding_ | 1;
      }
      pcVar3 = EvaluateObject;
    }
    this->EvaluateFunction = pcVar3;
    TVar4 = FWeakObjectPtr::Pin(&(this->WeakDataflowPtr).WeakPtr);
    this_00 = *(UDataflow **)TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_58 != (FProperty *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_58);
    }
    if (this_00 != (UDataflow *)0x0) {
      local_38._0_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
      local_38._8_8_ = *(undefined8 *)((longlong)&this->_padding_ + 4);
      UDataflow::RefreshEdNodeByGuid(this_00,&local_38);
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
    }
  }
  return;
}

