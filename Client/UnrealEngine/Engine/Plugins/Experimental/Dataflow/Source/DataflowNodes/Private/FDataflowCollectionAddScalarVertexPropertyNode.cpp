// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 23

// StaticStruct @ 14dac09d0

UScriptStruct * __cdecl FDataflowCollectionAddScalarVertexPropertyNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode,
                           (UObject *)pUVar1,L"DataflowCollectionAddScalarVertexPropertyNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
         OuterSingleton;
}

// GetType @ 14dac0a10

FName __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::GetType
          (FDataflowCollectionAddScalarVertexPropertyNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowCollectionAddScalarVertexPropertyNode");
  return in_RDX;
}

// IsA @ 14dac0a40

bool __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::IsA
          (FDataflowCollectionAddScalarVertexPropertyNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowCollectionAddScalarVertexPropertyNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dac0aa8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dac0aa8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dac0ac6;
      }
    }
  }
  bVar5 = true;
LAB_14dac0ac6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dac0b00

FStructOnScope * __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::NewStructOnScope
          (FDataflowCollectionAddScalarVertexPropertyNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode,
                           (UObject *)pUVar2,L"DataflowCollectionAddScalarVertexPropertyNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dac0b80

void __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::SerializeInternal
          (FDataflowCollectionAddScalarVertexPropertyNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode,
                           (UObject *)pUVar1,L"DataflowCollectionAddScalarVertexPropertyNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dac0bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dac0c10

FName __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::GetDisplayName
          (FDataflowCollectionAddScalarVertexPropertyNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PaintWeightMap");
  return in_RDX;
}

// GetCategory @ 14dac0c40

FName __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::GetCategory
          (FDataflowCollectionAddScalarVertexPropertyNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection");
  return in_RDX;
}

// GetTags @ 14dac0c70

FString * __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::GetTags
          (FDataflowCollectionAddScalarVertexPropertyNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Paint a weight map and save it to collection");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dac0ca0

UScriptStruct * __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::TypedScriptStruct
          (FDataflowCollectionAddScalarVertexPropertyNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode,
                           (UObject *)pUVar1,L"DataflowCollectionAddScalarVertexPropertyNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
         OuterSingleton;
}

// GetRenderParametersImpl @ 14dac0ce0

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::GetRenderParametersImpl
          (FDataflowCollectionAddScalarVertexPropertyNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FDataflowAddScalarVertexPropertyCallbackRegistry *this_00;
  
  this_00 = FDataflowAddScalarVertexPropertyCallbackRegistry::Get();
  FDataflowAddScalarVertexPropertyCallbackRegistry::GetRenderingParameters
            (this_00,__return_storage_ptr__,&(this->TargetGroup).Name);
  return __return_storage_ptr__;
}

// Evaluate @ 14dac0d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::Evaluate
          (FDataflowCollectionAddScalarVertexPropertyNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  FName FVar2;
  FName FVar3;
  longlong *plVar4;
  ITextData *pIVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  FDataflowInput *this_00;
  FManagedArrayCollection *pFVar9;
  FName *pFVar10;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStackY_2d8 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_298;
  int local_288;
  TArray<float,TSizedDefaultAllocator<32>_> local_280;
  undefined8 local_270;
  undefined2 local_268;
  undefined2 uStack_266;
  undefined8 local_260;
  FName local_258 [2];
  FConstructionParameters local_248;
  FCollectionAttributeKey local_238;
  FConnectionReference local_218;
  FName local_200;
  FName local_1f8;
  FTextFormat local_1f0;
  FText local_1e0;
  float *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FName local_1b8;
  FName local_1b0;
  FText local_1a8;
  FText local_198;
  TArrayView<float,int> local_188;
  FText local_178;
  FTextFormat local_168;
  FFormatArgumentValue local_158;
  undefined4 local_138;
  FText local_128;
  undefined4 local_118;
  longlong local_110;
  longlong *local_108;
  undefined4 local_100;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  GetWeightAttributeKey(this,&local_238,param_1);
  pFVar1 = &this->Collection;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar8 == pFVar1) {
    local_218.ContainerReference = (void *)0x0;
    local_218.Index = -1;
    local_218.Reference = pFVar1;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_218);
    pFVar9 = FDataflowInput::GetValue<FManagedArrayCollection>(this_00,param_1,local_218.Reference);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar9);
    if (1 < local_238.Attribute.Data.ArrayNum) {
      iVar15 = local_238.Attribute.Data.ArrayNum + -1;
      if (local_238.Attribute.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      pFVar10 = ::FName::FName(&local_1b8,iVar15,
                               (wchar_t *)local_238.Attribute.Data.AllocatorInstance.Data,FNAME_Add)
      ;
      FVar2 = *pFVar10;
      iVar15 = local_238.Group.Data.ArrayNum + -1;
      if (local_238.Group.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      pFVar10 = ::FName::FName(&local_1b0,iVar15,
                               (wchar_t *)local_238.Group.Data.AllocatorInstance.Data,FNAME_Add);
      local_268._0_1_ = true;
      local_268._1_1_ = false;
      local_260 = 0;
      FVar3 = *pFVar10;
      local_270 = 0;
      local_248.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_248.GroupIndexDependency.Number = 0;
      local_248.Saved = true;
      local_248.bAllowCircularDependency = false;
      local_248._10_2_ = uStack_266;
      local_258[0] = FVar3;
      bVar7 = FManagedArrayCollection::HasAttribute(&local_f8,FVar2,FVar3);
      if (!bVar7) {
        FManagedArrayCollection::AddNewAttributeImpl<float>(&local_f8,FVar2,FVar3,&local_248);
      }
      bVar7 = FManagedArrayCollection::HasAttribute(&local_f8,FVar2,FVar3);
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("HasAttribute(Name, Group)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x164,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_200 = FVar2;
      local_1f8 = FVar3;
      pTVar11 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&local_f8.Map,(TTuple<FName,FName> *)&local_200);
      if ((pTVar11 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pTVar11->field_0x10 != '\t') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSameType<T>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x315,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar11->field_0x10);
      plVar4 = *(longlong **)&pTVar11->field_0x30;
      if ((plVar4 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)(plVar4 + 1) = 1;
      if ((0 < (this->VertexWeights).ArrayNum) &&
         (iVar15 = (**(code **)(*plVar4 + 0x60))(plVar4), (this->VertexWeights).ArrayNum != iVar15))
      {
        local_288 = (**(code **)(*plVar4 + 0x60))(plVar4);
        pFVar12 = FText::FromName(&local_178,local_258);
        iVar15 = (this->VertexWeights).ArrayNum;
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_198,L"DataflowCollectionAddScalarVertexProperty",
                             L"VertexCountMismatchDetails",
                             L"Vertex weights in the node: {0}\n Vertices in group \"{1}\" in the Collection: {2}"
                            );
        pFVar14 = FTextFormat::FTextFormat(&local_168,pFVar13,Default);
        local_138 = 4;
        local_158.Type = Int;
        local_158.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_158.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_158.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar15;
        FText::FText(&local_128,pFVar12);
        if ((local_128.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_110 = (longlong)local_288;
        local_118 = 0;
        local_108 = (longlong *)0x0;
        local_100 = 0;
        local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.ArrayNum = 3;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,3,0,&local_298.AllocatorInstance,3,&local_298.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_298.AllocatorInstance.Data,&local_158,3);
        local_1f0.TextFormatData.Object = (pFVar14->TextFormatData).Object;
        local_1f0.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar14->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_1f0.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1f0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_1f0.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_1e0,&local_1f0,&local_298);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_298.AllocatorInstance.Data,local_298.ArrayNum);
        if ((FFormatArgumentValue *)local_298.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_298.AllocatorInstance.Data);
        }
        if (local_108 != (longlong *)0x0) {
          (**(code **)(*local_108 + 0x10))();
        }
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar14->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar5 = (pFVar12->TextData).Reference;
        if (pIVar5 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar5 + 0x10))();
        }
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_1a8,L"DataflowCollectionAddScalarVertexProperty",
                             L"VertexCountMismatchHeadline",L"Vertex count mismatch.");
        UE::Dataflow::FDataflowTools::LogAndToastWarning((FDataflowNode *)this,pFVar12,&local_1e0);
        if (local_1a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
        }
        if (local_1e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
        }
        if (local_198.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
        }
      }
      local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.ArrayNum = (int)plVar4[3];
      lVar16 = (longlong)local_280.ArrayNum;
      _Src = (void *)plVar4[2];
      if (local_280.ArrayNum == 0) {
        local_280.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_280.ArrayNum,0,&local_280.AllocatorInstance,local_280.ArrayNum,
                   &local_280.ArrayMax);
        memcpy(local_280.AllocatorInstance.Data,_Src,lVar16 << 2);
      }
      iStack_1c0 = (**(code **)(*plVar4 + 0x60))(plVar4);
      local_1c8 = (float *)plVar4[2];
      if ((iStack_1c0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_188._12_4_ = uStack_1bc;
      local_188.ArrayNum = iStack_1c0;
      local_188.DataPtr = local_1c8;
      ExtractVertexWeights(this,&local_280,&local_188);
      if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.AllocatorInstance.Data);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  else {
    puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FCollectionAttributeKey *)puVar8 == &this->AttributeKey) {
      FDataflowNode::SetValue<FCollectionAttributeKey,FCollectionAttributeKey>
                ((FDataflowNode *)this,param_1,&local_238,&this->AttributeKey);
    }
  }
  if (local_238.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Group.Data.AllocatorInstance.Data);
  }
  if (local_238.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Attribute.Data.AllocatorInstance.Data);
  }
  return;
}

// GetSupportedViewModes @ 14dac1330

void __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::GetSupportedViewModes
          (FDataflowCollectionAddScalarVertexPropertyNode *this,FContext *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&DataflowConstruction3DViewModeName,L"3DView");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&Cloth3DSimView,L"Cloth3DSimView");
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar5 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      ::FName::FName(&ClothRenderView,L"ClothRenderView");
      _Init_thread_footer(&::_TSS2);
    }
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 < (FScriptContainerElement *)0x155374601) &&
     (&DataflowConstruction3DViewModeName < (FName *)(pFVar1 + (longlong)param_2->ArrayMax * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       DataflowConstruction3DViewModeName;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 < (FScriptContainerElement *)0x155374611) &&
     (&Cloth3DSimView < (FName *)(pFVar1 + (longlong)param_2->ArrayMax * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = Cloth3DSimView;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 < (FScriptContainerElement *)0x155374621) &&
     (&ClothRenderView < (FName *)(pFVar1 + (longlong)param_2->ArrayMax * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = ClothRenderView;
  return;
}

// GetVertexAttributeValues @ 14dac1620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::GetVertexAttributeValues
          (FDataflowCollectionAddScalarVertexPropertyNode *this,FContext *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FDataflowInput *this_00;
  FManagedArrayCollection *this_01;
  TManagedArray<float> *pTVar4;
  TArrayView<float,int> *pTVar5;
  int iVar6;
  FName local_res8;
  TArray<float,TSizedDefaultAllocator<32>_> local_88;
  TArrayView<float,int> local_78;
  FConnectionReference local_68;
  FCollectionAttributeKey local_50;
  
  GetWeightAttributeKey(this,&local_50,param_1);
  iVar6 = local_50.Attribute.Data.ArrayNum + -1;
  if (local_50.Attribute.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar6,
                          (wchar_t *)local_50.Attribute.Data.AllocatorInstance.Data,FNAME_Add);
  FVar1 = *pFVar3;
  iVar6 = local_50.Group.Data.ArrayNum + -1;
  if (local_50.Group.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_50.Group.Data.AllocatorInstance.Data,
                          FNAME_Add);
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  FVar2 = *pFVar3;
  local_68.Reference = &this->Collection;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
  this_01 = FDataflowInput::GetValue<FManagedArrayCollection>(this_00,param_1,&this->Collection);
  iVar6 = FManagedArrayCollection::NumElements(this_01,FVar2);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,iVar6,Default);
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<float>(this_01,FVar1,FVar2);
  if (pTVar4 == (TManagedArray<float> *)0x0) {
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_res8.ComparisonIndex.Value = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_88,(float *)&local_res8,iVar6);
    pTVar5 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                       ((TArrayView<float,int> *)&local_68,param_2);
    local_78.DataPtr = pTVar5->DataPtr;
    local_78.ArrayNum = pTVar5->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    ExtractVertexWeights(this,&local_88,&local_78);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  else {
    pTVar5 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                       (&local_78,param_2);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)pTVar5->DataPtr;
    local_88.ArrayNum = pTVar5->ArrayNum;
    local_88.ArrayMax = *(int *)&pTVar5->field_0xc;
    ExtractVertexWeights
              (this,(TArray<float,TSizedDefaultAllocator<32>_> *)&pTVar4->field_0x10,
               (TArrayView<float,int> *)&local_88);
  }
  if (local_50.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Group.Data.AllocatorInstance.Data);
  }
  if (local_50.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Attribute.Data.AllocatorInstance.Data);
  }
  return;
}

// SetVertexAttributeValues @ 14dac17c0

void __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::SetVertexAttributeValues
          (FDataflowCollectionAddScalarVertexPropertyNode *this,FContext *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FDataflowInput *this_00;
  FManagedArrayCollection *this_01;
  TManagedArray<float> *pTVar4;
  int iVar5;
  FName local_res8;
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  FConnectionReference local_68;
  FCollectionAttributeKey local_50;
  
  GetWeightAttributeKey(this,&local_50,param_1);
  iVar5 = local_50.Attribute.Data.ArrayNum + -1;
  if (local_50.Attribute.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar5,
                          (wchar_t *)local_50.Attribute.Data.AllocatorInstance.Data,FNAME_Add);
  FVar1 = *pFVar3;
  iVar5 = local_50.Group.Data.ArrayNum + -1;
  if (local_50.Group.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar5,(wchar_t *)local_50.Group.Data.AllocatorInstance.Data,
                          FNAME_Add);
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  FVar2 = *pFVar3;
  local_68.Reference = &this->Collection;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
  this_01 = FDataflowInput::GetValue<FManagedArrayCollection>(this_00,param_1,&this->Collection);
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<float>(this_01,FVar1,FVar2);
  if (pTVar4 == (TManagedArray<float> *)0x0) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    iVar5 = FManagedArrayCollection::NumElements(this_01,FVar2);
    local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_78,(float *)&local_res8,iVar5);
    ReportVertexWeights(this,&local_78,param_2,param_3);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    ReportVertexWeights(this,(TArray<float,TSizedDefaultAllocator<32>_> *)&pTVar4->field_0x10,
                        param_2,param_3);
  }
  local_res8 = (FName)UE::Dataflow::FTimestamp::Current();
  FDataflowNode::Invalidate((FDataflowNode *)this,(FTimestamp *)&local_res8);
  if (local_50.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Group.Data.AllocatorInstance.Data);
  }
  if (local_50.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Attribute.Data.AllocatorInstance.Data);
  }
  return;
}

// GetStoredAttributeValues @ 14dac1960

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::GetStoredAttributeValues
          (FDataflowCollectionAddScalarVertexPropertyNode *this)

{
  return &this->VertexWeights;
}

// SwapStoredAttributeValuesWith @ 14dac1970

void __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::SwapStoredAttributeValuesWith
          (FDataflowCollectionAddScalarVertexPropertyNode *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1->ArrayNum;
  iVar3 = param_1->ArrayMax;
  pFVar1 = (this->VertexWeights).AllocatorInstance.Data;
  iVar4 = (this->VertexWeights).ArrayNum;
  iVar5 = (this->VertexWeights).ArrayMax;
  (this->VertexWeights).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (this->VertexWeights).ArrayNum = iVar2;
  (this->VertexWeights).ArrayMax = iVar3;
  (param_1->AllocatorInstance).Data = pFVar1;
  param_1->ArrayNum = iVar4;
  param_1->ArrayMax = iVar5;
  return;
}

// FDataflowCollectionAddScalarVertexPropertyNode @ 14dacca40

FDataflowCollectionAddScalarVertexPropertyNode * __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::FDataflowCollectionAddScalarVertexPropertyNode
          (FDataflowCollectionAddScalarVertexPropertyNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FCollectionAttributeKey *this_01;
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FDataflowCollectionAddScalarVertexPropertyNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  this_01 = &this->AttributeKey;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  ::FString::FString(&this_01->Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  (this->VertexWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexWeights).ArrayNum = 0;
  (this->VertexWeights).ArrayMax = 0;
  (this->TargetGroup).Name = FGeometryCollection::VerticesGroup;
  this->OverrideType = ReplaceAll;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_01;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_01;
  local_38.Reference = this_01;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FCollectionAttributeKey *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

// FDataflowCollectionAddScalarVertexPropertyNode @ 14daccbd0

FDataflowCollectionAddScalarVertexPropertyNode * __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::FDataflowCollectionAddScalarVertexPropertyNode
          (FDataflowCollectionAddScalarVertexPropertyNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FDataflowCollectionAddScalarVertexPropertyNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  ::FString::FString(&(this->AttributeKey).Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  (this->VertexWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexWeights).ArrayNum = 0;
  (this->VertexWeights).ArrayMax = 0;
  (this->TargetGroup).Name = FGeometryCollection::VerticesGroup;
  this->OverrideType = ReplaceAll;
  return this;
}

// ~FDataflowCollectionAddScalarVertexPropertyNode @ 14dace170

void __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::~FDataflowCollectionAddScalarVertexPropertyNode
          (FDataflowCollectionAddScalarVertexPropertyNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->VertexWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeKey).Group.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeKey).Attribute.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// ExtractVertexWeights @ 14dad4250

void __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::ExtractVertexWeights
          (FDataflowCollectionAddScalarVertexPropertyNode *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1,TArrayView<float,int> *param_2)

{
  float fVar1;
  EDataflowWeightMapOverrideType EVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetupWeights.Num() == FinalWeights.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionAddScalarVertexPropertyNode.cpp"
                         ,0x184,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar7 = __real_7f7fc99e;
  fVar1 = __real_3f800000;
  iVar3 = param_1->ArrayNum;
  iVar4 = (this->VertexWeights).ArrayNum;
  iVar6 = iVar3;
  if (iVar4 < iVar3) {
    iVar6 = iVar4;
  }
  uVar12 = 0;
  if (iVar6 == 0) {
    if (0 < iVar3) {
      lVar13 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar1 = *(float *)((param_1->AllocatorInstance).Data + lVar13 * 4);
        uVar9 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = uVar12 + 1;
        param_2->DataPtr[lVar13] = fVar1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar3);
    }
  }
  else if (0 < iVar6) {
    lVar13 = 0;
    lVar15 = 0;
    do {
      EVar2 = this->OverrideType;
      if (EVar2 == ReplaceAll) {
        uVar9 = 0;
        if ((int)uVar12 < (this->VertexWeights).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar16 = *(float *)((this->VertexWeights).AllocatorInstance.Data + lVar13 * 4);
LAB_14dad457c:
        if (fVar1 <= fVar16) {
          fVar16 = fVar1;
        }
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        pfVar11 = TArrayView<float,int>::operator[](param_2,uVar12);
LAB_14dad458f:
        *pfVar11 = fVar16;
      }
      else {
        if (EVar2 == AddDifference) {
          uVar9 = 0;
          if ((int)uVar12 < (this->VertexWeights).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = (this->VertexWeights).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar16 = *(float *)((param_1->AllocatorInstance).Data + lVar13 * 4) +
                   *(float *)(pFVar10 + lVar13 * 4);
          goto LAB_14dad457c;
        }
        if (EVar2 == ReplaceChanged) {
          uVar14 = ~uVar12 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar12 < (this->VertexWeights).ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (fVar7 == *(float *)((this->VertexWeights).AllocatorInstance.Data + lVar15)) {
            uVar9 = 0;
            if ((int)uVar12 < param_1->ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar10 = (param_1->AllocatorInstance).Data;
          }
          else {
            uVar9 = 0;
            if ((int)uVar12 < (this->VertexWeights).ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar10 = (this->VertexWeights).AllocatorInstance.Data;
          }
          fVar16 = *(float *)(pFVar10 + lVar13 * 4);
          pfVar11 = TArrayView<float,int>::operator[](param_2,uVar12);
          if (fVar1 <= fVar16) {
            fVar16 = fVar1;
          }
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          goto LAB_14dad458f;
        }
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Unimplemented function called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionAddScalarVertexPropertyNode.cpp"
                           ,0x196,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + 4;
    } while (lVar13 < iVar6);
  }
  return;
}

// FillAttributeWeights @ 14dad4c40

bool __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::FillAttributeWeights
          (FDataflowCollectionAddScalarVertexPropertyNode *this,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_1,FCollectionAttributeKey *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  TManagedArray<float> *pTVar8;
  int iVar9;
  float local_res18 [2];
  FName local_18;
  FName local_10;
  
  iVar9 = (param_2->Attribute).Data.ArrayNum;
  if (1 < iVar9) {
    pFVar7 = ::FName::FName(&local_18,iVar9 + -1,
                            (wchar_t *)(param_2->Attribute).Data.AllocatorInstance.Data,FNAME_Add);
    FVar2 = *pFVar7;
    iVar1 = (param_2->Group).Data.ArrayNum;
    iVar9 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar9 = 0;
    }
    pFVar7 = ::FName::FName(&local_10,iVar9,(wchar_t *)(param_2->Group).Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar3 = *pFVar7;
    if (param_1->Object == (FManagedArrayCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pTVar8 = FManagedArrayCollection::FindAttributeTyped<float>(param_1->Object,FVar2,FVar3);
    if (pTVar8 != (TManagedArray<float> *)0x0) {
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (param_3,(TArray<float,TSizedDefaultAllocator<32>_> *)&pTVar8->field_0x10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
  }
  local_res18[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(param_3,local_res18,param_3->ArrayNum);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// GetWeightAttributeKey @ 14dad6b70

FCollectionAttributeKey * __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::GetWeightAttributeKey
          (FDataflowCollectionAddScalarVertexPropertyNode *this,
          FCollectionAttributeKey *__return_storage_ptr__,FContext *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FDataflowInput *this_01;
  FCollectionAttributeKey *pFVar2;
  FString *pFVar3;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->AttributeKey;
  this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  pFVar2 = FDataflowInput::GetValue<FCollectionAttributeKey>(this_01,param_1,&this->AttributeKey);
  ::FString::FString(&__return_storage_ptr__->Attribute,&pFVar2->Attribute);
  this_00 = &__return_storage_ptr__->Group;
  ::FString::FString(this_00,&pFVar2->Group);
  if (((__return_storage_ptr__->Attribute).Data.ArrayNum < 2) &&
     ((__return_storage_ptr__->Group).Data.ArrayNum < 2)) {
    pFVar3 = ::FName::ToString(&(this->TargetGroup).Name,(FString *)&local_28);
    if (this_00 != pFVar3) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Group).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Group).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Reference != (FCollectionAttributeKey *)0x0) {
      FMemory::Free(local_28.Reference);
    }
    ::FString::operator=(&__return_storage_ptr__->Attribute,&this->Name);
  }
  return __return_storage_ptr__;
}

// ReportVertexWeights @ 14dad8170

void __thiscall
FDataflowCollectionAddScalarVertexPropertyNode::ReportVertexWeights
          (FDataflowCollectionAddScalarVertexPropertyNode *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  EDataflowWeightMapOverrideType EVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 uVar16;
  longlong local_res8;
  
  if ((param_3->ArrayNum != param_2->ArrayNum) &&
     (((param_3->ArrayNum != 0 || (param_1->ArrayNum != param_2->ArrayNum)) &&
      (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(WeightIndices.Num() == FinalWeights.Num()) || (WeightIndices.IsEmpty() && (SetupWeights.Num() == FinalWeights.Num()))"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionAddScalarVertexPropertyNode.cpp"
                          ,0x16d,L""), bVar8)))) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = param_1->ArrayNum;
  pTVar1 = &this->VertexWeights;
  iVar10 = (this->VertexWeights).ArrayNum;
  if (iVar10 < (int)uVar13) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar13 - iVar10,&pTVar1->AllocatorInstance,
                       &(this->VertexWeights).ArrayNum,&(this->VertexWeights).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 4,0,
           (longlong)(int)(uVar13 - iVar10) << 2);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar10) {
      uVar14 = iVar10 - uVar13;
      if (((int)(uVar13 | uVar14) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar14 != 0) {
        pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 4;
        iVar10 = ((this->VertexWeights).ArrayNum - uVar13) - uVar14;
        if (iVar10 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar14 * 4,(longlong)iVar10 << 2);
        }
        iVar10 = (this->VertexWeights).ArrayNum - uVar14;
        (this->VertexWeights).ArrayNum = iVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,iVar10,&(this->VertexWeights).ArrayMax);
      }
    }
  }
  uVar7 = __real_7f7fc99e;
  iVar10 = param_2->ArrayNum;
  uVar13 = 0;
  if (0 < (longlong)iVar10) {
    lVar15 = 0;
    local_res8 = 0;
    do {
      uVar12 = ~uVar13;
      uVar14 = uVar13;
      if (param_3->ArrayNum != 0) {
        uVar14 = 0;
        if ((int)uVar13 < param_3->ArrayNum) {
          uVar14 = uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = *(uint *)((param_3->AllocatorInstance).Data + local_res8);
      }
      EVar4 = this->OverrideType;
      if (EVar4 == ReplaceAll) {
        uVar11 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar11 = uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = *(undefined4 *)((param_2->AllocatorInstance).Data + lVar15 * 4);
        uVar12 = 0;
        if ((int)uVar14 < (this->VertexWeights).ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_14dad86ce:
        *(undefined4 *)((this->VertexWeights).AllocatorInstance.Data + (longlong)(int)uVar14 * 4) =
             uVar16;
      }
      else if (EVar4 == AddDifference) {
        uVar11 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar11 = uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        uVar12 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar2 = *(float *)(pFVar5 + lVar15 * 4);
        fVar3 = *(float *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar14 * 4);
        uVar12 = 0;
        if ((int)uVar14 < (this->VertexWeights).ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(float *)((this->VertexWeights).AllocatorInstance.Data + (longlong)(int)uVar14 * 4) =
             fVar2 - fVar3;
      }
      else {
        if (EVar4 == ReplaceChanged) {
          uVar12 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (param_1->AllocatorInstance).Data;
          uVar12 = 0;
          if ((int)uVar13 < param_2->ArrayNum) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar16 = uVar7;
          if (*(float *)((param_2->AllocatorInstance).Data + lVar15 * 4) !=
              *(float *)(pFVar5 + (longlong)(int)uVar14 * 4)) {
            uVar12 = 0;
            if ((int)uVar13 < param_2->ArrayNum) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar16 = *(undefined4 *)((param_2->AllocatorInstance).Data + lVar15 * 4);
          }
          uVar12 = 0;
          if ((int)uVar14 < (this->VertexWeights).ArrayNum) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_14dad86ce;
        }
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Unimplemented function called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Dataflow\\Source\\DataflowNodes\\Private\\Dataflow\\DataflowCollectionAddScalarVertexPropertyNode.cpp"
                           ,0x17d,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar13 = uVar13 + 1;
      local_res8 = local_res8 + 4;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar10);
  }
  return;
}

