// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e878cd0

UScriptStruct * __cdecl FCollectionSelectInternalFacesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectInternalFacesDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectInternalFacesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton
  ;
}

// GetType @ 14e879270

FName __thiscall
FCollectionSelectInternalFacesDataflowNode::GetType
          (FCollectionSelectInternalFacesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionSelectInternalFacesDataflowNode");
  return in_RDX;
}

// IsA @ 14e8792a0

bool __thiscall
FCollectionSelectInternalFacesDataflowNode::IsA
          (FCollectionSelectInternalFacesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionSelectInternalFacesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e879308;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e879308:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e879326;
      }
    }
  }
  bVar5 = true;
LAB_14e879326:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e879370

FStructOnScope * __thiscall
FCollectionSelectInternalFacesDataflowNode::NewStructOnScope
          (FCollectionSelectInternalFacesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectInternalFacesDataflowNode,
                           (UObject *)pUVar2,L"CollectionSelectInternalFacesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8793f0

void __thiscall
FCollectionSelectInternalFacesDataflowNode::SerializeInternal
          (FCollectionSelectInternalFacesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectInternalFacesDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectInternalFacesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87946d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e879480

FName __thiscall
FCollectionSelectInternalFacesDataflowNode::GetDisplayName
          (FCollectionSelectInternalFacesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionSelectInternalFaces");
  return in_RDX;
}

// GetCategory @ 14e8794c0

FName __thiscall
FCollectionSelectInternalFacesDataflowNode::GetCategory
          (FCollectionSelectInternalFacesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection");
  return in_RDX;
}

// GetTags @ 14e8794f0

FString * __thiscall
FCollectionSelectInternalFacesDataflowNode::GetTags
          (FCollectionSelectInternalFacesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e879520

UScriptStruct * __thiscall
FCollectionSelectInternalFacesDataflowNode::TypedScriptStruct
          (FCollectionSelectInternalFacesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectInternalFacesDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectInternalFacesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectInternalFacesDataflowNode.OuterSingleton
  ;
}

// Evaluate @ 14e879a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionSelectInternalFacesDataflowNode::Evaluate
          (FCollectionSelectInternalFacesDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  FName FVar6;
  TManagedArray<int> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  FDataflowInput *pFVar13;
  FManagedArrayCollection *pFVar14;
  FName *pFVar15;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar16;
  FContextCacheElementUStruct *pFVar17;
  FContextCacheElementUStruct *pFVar18;
  FDataflowOutput *this_00;
  FTimestamp FVar19;
  FGuid *pFVar20;
  ulong64 uVar21;
  FContextCacheElementUStruct *pFVar22;
  FContextCacheElementUStruct *pFVar23;
  ForElementType<unsigned_int> FVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  ForAnyElementType FVar29;
  FContextCacheElementUStruct *pFVar30;
  TManagedArray<bool> *pTVar31;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  ForAnyElementType local_190;
  undefined8 local_188;
  undefined1 local_180 [8];
  FContextCacheElementUStruct *local_178;
  undefined4 local_170;
  int iStack_16c;
  TManagedArray<bool> *local_168;
  TManagedArray<int> *local_160;
  FCollectionSelectInternalFacesDataflowNode *local_158;
  FContext *local_150;
  FDataflowSelection *local_148;
  FDataflowFaceSelection *local_140;
  FConnectionReference local_138;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FConnectionReference local_e0;
  FConnectionReference local_c8;
  FName local_b0;
  FName local_a8;
  FName local_a0 [3];
  FGuid local_88;
  FGuid local_78;
  FDataflowSelection local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_158 = this;
  local_150 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&InternalAttributeName,L"Internal");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar14 = &this->Collection;
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar12 == pFVar14) {
    local_138.ContainerReference = (void *)0x0;
    local_138.Index = -1;
    local_138.Reference = pFVar14;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_138);
    if (pFVar13->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,local_138.Reference,pFVar14);
    }
    else {
      local_e0.Index = -1;
      local_e0.ContainerReference = (void *)0x0;
      local_e0.Reference = pFVar14;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_138,&local_e0);
    }
  }
  else {
    local_140 = &this->FaceSelection;
    puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FDataflowFaceSelection *)puVar12 == &this->FaceSelection) {
      pFVar14 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar14);
      local_148 = (FDataflowSelection *)
                  FDataflowNode::GetValue<FDataflowTransformSelection>
                            ((FDataflowNode *)this,param_1,&this->TransformSelection);
      FVar6 = FGeometryCollection::GeometryGroup;
      pFVar15 = ::FName::FName(&local_b0,"TransformIndex");
      local_118 = FVar6;
      local_120 = *pFVar15;
      pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&pFVar14->Map,(TTuple<FName,FName> *)&local_120);
      pFVar23 = (FContextCacheElementUStruct *)0x0;
      pFVar22 = (FContextCacheElementUStruct *)&pTVar16->field_0x10;
      if (pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar22 = pFVar23;
      }
      pFVar17 = pFVar23;
      if (pFVar22 != (FContextCacheElementUStruct *)0x0) {
        pFVar17 = (FContextCacheElementUStruct *)
                  FManagedArrayCollection::FValueType::GetTypedPtr<int>((FValueType *)pFVar22);
      }
      FVar6 = FGeometryCollection::GeometryGroup;
      pFVar15 = ::FName::FName(&local_a8,"FaceStart");
      local_108 = FVar6;
      local_110 = *pFVar15;
      pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&pFVar14->Map,(TTuple<FName,FName> *)&local_110);
      pFVar22 = (FContextCacheElementUStruct *)&pTVar16->field_0x10;
      if (pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar22 = pFVar23;
      }
      if (pFVar22 == (FContextCacheElementUStruct *)0x0) {
        local_160 = (TManagedArray<int> *)0x0;
      }
      else {
        local_160 = FManagedArrayCollection::FValueType::GetTypedPtr<int>((FValueType *)pFVar22);
      }
      FVar6 = FGeometryCollection::GeometryGroup;
      pFVar15 = ::FName::FName(local_a0,"FaceCount");
      local_f8 = FVar6;
      local_100 = *pFVar15;
      pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&pFVar14->Map,(TTuple<FName,FName> *)&local_100);
      pFVar22 = (FContextCacheElementUStruct *)&pTVar16->field_0x10;
      if (pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar22 = pFVar23;
      }
      pFVar18 = pFVar23;
      if (pFVar22 != (FContextCacheElementUStruct *)0x0) {
        pFVar18 = (FContextCacheElementUStruct *)
                  FManagedArrayCollection::FValueType::GetTypedPtr<int>((FValueType *)pFVar22);
      }
      local_f0 = InternalAttributeName;
      local_e8 = FGeometryCollection::FacesGroup;
      pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&pFVar14->Map,(TTuple<FName,FName> *)&local_f0);
      pFVar22 = (FContextCacheElementUStruct *)&pTVar16->field_0x10;
      if (pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar22 = pFVar23;
      }
      if (pFVar22 == (FContextCacheElementUStruct *)0x0) {
        local_168 = (TManagedArray<bool> *)0x0;
      }
      else {
        local_168 = FManagedArrayCollection::FValueType::GetTypedPtr<bool>((FValueType *)pFVar22);
      }
      iVar9 = FManagedArrayCollection::NumElements(pFVar14,FGeometryCollection::FacesGroup);
      local_68.GroupName = FDataflowFaceSelection::FacesGroupName;
      local_68.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_68.SelectionArray.NumBits = 0;
      local_68.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::InitializeFromCollection(&local_68,pFVar14,false);
      pTVar31 = local_168;
      if ((((pFVar17 != (FContextCacheElementUStruct *)0x0) &&
           (local_160 != (TManagedArray<int> *)0x0)) &&
          (pFVar18 != (FContextCacheElementUStruct *)0x0)) &&
         (local_168 != (TManagedArray<bool> *)0x0)) {
        local_190.Data = (FScriptContainerElement *)0x0;
        local_188 = 0;
        bVar8 = FDataflowNode::IsConnected<FDataflowTransformSelection>
                          ((FDataflowNode *)this,&this->TransformSelection);
        if (bVar8) {
          iVar9 = (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17);
          pFVar22 = pFVar23;
          pFVar30 = pFVar23;
          if (0 < iVar9) {
            do {
              uVar25 = (uint)pFVar22;
              uVar28 = ~uVar25 >> 0x1f;
              uVar26 = 0;
              if ((int)uVar25 < (int)pFVar17->_padding_) {
                uVar26 = uVar28;
              }
              if ((uVar26 == 0) &&
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
              bVar8 = FDataflowSelection::IsSelected
                                (local_148,
                                 *(int *)((longlong)&pFVar30->_padding_ + pFVar17->_padding_));
              pTVar7 = local_160;
              if (bVar8) {
                uVar26 = 0;
                if ((int)uVar25 < *(int *)&local_160->field_0x18) {
                  uVar26 = uVar28;
                }
                if ((uVar26 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                local_170 = *(undefined4 *)
                             ((longlong)&pFVar30->_padding_ + *(longlong *)&pTVar7->field_0x10);
                uVar26 = 0;
                if ((int)uVar25 < (int)pFVar18->_padding_) {
                  uVar26 = uVar28;
                }
                if ((uVar26 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iStack_16c = *(int *)((longlong)&pFVar30->_padding_ + pFVar18->_padding_);
                iVar9 = (int)local_188;
                if ((int)local_188 == local_188._4_4_) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&local_190,(int *)((longlong)&local_188 + 4));
                }
                local_188 = CONCAT44(local_188._4_4_,iVar9 + 1);
                *(ulonglong *)(local_190.Data + (longlong)iVar9 * 8) =
                     CONCAT44(iStack_16c,local_170);
              }
              iVar9 = (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17);
              pFVar22 = (FContextCacheElementUStruct *)(ulonglong)(uVar25 + 1);
              pTVar31 = local_168;
              pFVar30 = (FContextCacheElementUStruct *)((longlong)&pFVar30->_padding_ + 4);
            } while ((int)(uVar25 + 1) < iVar9);
          }
        }
        else {
          local_170 = 0;
          iVar10 = (int)local_188;
          iStack_16c = iVar9;
          if ((int)local_188 == local_188._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_190,(int *)((longlong)&local_188 + 4));
          }
          local_188 = CONCAT44(local_188._4_4_,iVar10 + 1);
          *(ulonglong *)(local_190.Data + (longlong)iVar10 * 8) = CONCAT44(iStack_16c,local_170);
        }
        iVar9 = (int)local_188;
        pFVar1 = local_190.Data + (longlong)(int)local_188 * 8;
        FVar29.Data = local_190.Data;
        while( true ) {
          if ((int)local_188 != iVar9) {
            local_198[0] = 0;
            `TCheckedPointerIterator<`FCollectionSelectInternalFacesDataflowNode::Evaluate'::__l9::FFaceRange,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_198);
          }
          if (FVar29.Data == pFVar1) break;
          pFVar22 = pFVar23;
          if (0 < *(int *)(FVar29.Data + 4)) {
            do {
              iVar10 = (int)pFVar22;
              uVar26 = *(int *)FVar29.Data + iVar10;
              if ((((int)uVar26 < 0) || (*(int *)&pTVar31->field_0x28 <= (int)uVar26)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              puVar12 = &pTVar31->field_0x10;
              if (*(undefined1 **)&pTVar31->field_0x20 != (undefined1 *)0x0) {
                puVar12 = *(undefined1 **)&pTVar31->field_0x20;
              }
              uVar25 = uVar26 & 0x1f;
              if ((int)uVar26 < 0) {
                uVar26 = uVar26 + 0x1f;
              }
              if ((*(uint *)(puVar12 + (longlong)((int)uVar26 >> 5) * 4) >> uVar25 & 1) != 0) {
                iVar27 = *(int *)FVar29.Data + iVar10;
                if (((iVar27 < 0) || (local_68.SelectionArray.NumBits <= iVar27)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FVar24 = (ForElementType<unsigned_int>)&local_68.SelectionArray;
                if (local_68.SelectionArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar24 = local_68.SelectionArray.AllocatorInstance.SecondaryData;
                }
                iVar11 = iVar27;
                if (iVar27 < 0) {
                  iVar11 = iVar27 + 0x1f;
                }
                puVar2 = (uint *)((longlong)FVar24 + (longlong)(iVar11 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)iVar27 & 0x1f);
              }
              pFVar22 = (FContextCacheElementUStruct *)(ulonglong)(iVar10 + 1U);
            } while ((int)(iVar10 + 1U) < *(int *)(FVar29.Data + 4));
          }
          FVar29.Data = FVar29.Data + 8;
          pTVar31 = local_168;
        }
        if (local_190.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data);
        }
      }
      local_c8.Reference = local_140;
      local_c8.Index = -1;
      local_c8.ContainerReference = (void *)0x0;
      this_00 = FDataflowNode::FindOutput((FDataflowNode *)local_158,&local_c8);
      if (this_00 == (FDataflowOutput *)0x0) {
        `FDataflowNode::SetValue<FDataflowFaceSelection_&,FDataflowFaceSelection>'::__l7::<lambda_1>
        ::operator()(local_180);
      }
      else if (this_00->_padding_ != 0) {
        FVar19 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
        uVar26 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
        pFVar20 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_78);
        pFVar3 = (FProperty *)this_00->_padding_;
        uVar21 = CityHash64((char *)&this_00->_padding_,0x10);
        local_178 = (FContextCacheElementUStruct *)0x0;
        pFVar22 = ::operator_new(0x58);
        if (pFVar22 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
          local_88.A = pFVar20->A;
          local_88.B = pFVar20->B;
          local_88.C = pFVar20->C;
          local_88.D = pFVar20->D;
          pFVar23 = UE::Dataflow::FContextCacheElementUStruct::
                    FContextCacheElementUStruct<FDataflowFaceSelection_&>
                              (pFVar22,&local_88,pFVar3,(FDataflowFaceSelection *)&local_68,uVar26,
                               (FTimestamp)*FVar19.Value);
        }
        pFVar22 = local_178;
        if (local_178 != (FContextCacheElementUStruct *)0x0) {
          plVar5 = &local_178->_padding_;
          local_178 = pFVar23;
          (**(code **)*plVar5)(pFVar22,1);
          pFVar23 = local_178;
        }
        local_178 = pFVar23;
        if (local_178 == (FContextCacheElementUStruct *)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (local_150,(uint)uVar21,pFVar3,pFVar20,uVar26,(FTimestamp *)FVar19.Value);
        }
        else {
          (**(code **)(local_150->_padding_ + 0x28))(local_150,uVar21 & 0xffffffff,&local_178);
        }
        if (local_178 != (FContextCacheElementUStruct *)0x0) {
          (**(code **)local_178->_padding_)(local_178,1);
        }
      }
      if (local_68.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.SelectionArray.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// FCollectionSelectInternalFacesDataflowNode @ 14e914fe0

FCollectionSelectInternalFacesDataflowNode * __thiscall
FCollectionSelectInternalFacesDataflowNode::FCollectionSelectInternalFacesDataflowNode
          (FCollectionSelectInternalFacesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  FDataflowFaceSelection *pFVar2;
  uint uVar3;
  FDataflowOutput *pFVar4;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionSelectInternalFacesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar3 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar3;
  pFVar2 = &this->FaceSelection;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  uVar3 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar2->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar3;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
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
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pFVar2;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_58);
  }
  return this;
}

// FCollectionSelectInternalFacesDataflowNode @ 14e915160

FCollectionSelectInternalFacesDataflowNode * __thiscall
FCollectionSelectInternalFacesDataflowNode::FCollectionSelectInternalFacesDataflowNode
          (FCollectionSelectInternalFacesDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionSelectInternalFacesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  return this;
}

