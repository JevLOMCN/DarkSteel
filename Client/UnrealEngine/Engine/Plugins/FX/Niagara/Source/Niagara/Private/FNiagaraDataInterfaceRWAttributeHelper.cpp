// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// Init<UNiagaraDataInterfaceGrid2DCollection> @ 149201490

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceRWAttributeHelper::Init<UNiagaraDataInterfaceGrid2DCollection>
          (FNiagaraDataInterfaceRWAttributeHelper *this,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  FNiagaraDataInterfaceGPUParamInfo *pFVar4;
  UObject *pUVar5;
  int iVar6;
  uint uVar7;
  FNiagaraTypeDefinition *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  FName *pFVar14;
  ulonglong uVar15;
  FName *pFVar16;
  FName FVar17;
  FName *pFVar18;
  FName *pFVar19;
  FName FVar20;
  FName *pFVar21;
  undefined1 local_res8 [8];
  FNiagaraTypeDefinition local_b0;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  uVar3 = (this->ParamInfo->GeneratedFunctions).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->AttributeInfos).ArrayMax;
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar3,&(this->AttributeInfos).AllocatorInstance,
               (this->AttributeInfos).ArrayNum,piVar1);
  }
  pFVar4 = this->ParamInfo;
  this->TotalChannels = 0;
  uVar3 = (pFVar4->GeneratedFunctions).ArrayNum;
  uVar15 = (ulonglong)(int)uVar3;
  pFVar19 = (FName *)(pFVar4->GeneratedFunctions).AllocatorInstance.Data;
  pFVar21 = pFVar19 + 4;
  pFVar16 = pFVar19 + uVar15 * 10;
  do {
    if ((pFVar4->GeneratedFunctions).ArrayNum != (int)uVar15) {
      `TCheckedPointerIterator<FNiagaraDataInterfaceGeneratedFunction_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == pFVar16) {
      return;
    }
    uVar7 = (pFVar21->ComparisonIndex).Value;
    FVar17 = pFVar21[-1];
    FVar20 = (FName)((longlong)FVar17 + (longlong)(int)uVar7 * 0x10);
    while( true ) {
      if ((pFVar21->ComparisonIndex).Value != uVar7) {
        `TCheckedPointerIterator<TTuple<FName,FName>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar17 == FVar20) goto LAB_149201691;
      if (*(FName *)FVar17 == UNiagaraDataInterfaceRWBase::NAME_Attribute) break;
      FVar17 = (FName)((longlong)FVar17 + 0x10);
    }
    pFVar2 = (FName *)((longlong)FVar17 + 8);
    if (pFVar2 != (FName *)0x0) {
      iVar6 = (this->AttributeInfos).ArrayNum;
      pFVar18 = (FName *)(this->AttributeInfos).AllocatorInstance.Data;
      pFVar14 = pFVar18 + (longlong)iVar6 * 6;
      for (; pFVar18 != pFVar14; pFVar18 = pFVar18 + 6) {
        if (*pFVar18 == *pFVar2) {
          if ((param_1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) &&
             (((UNiagaraDataInterfaceGrid2DCollection::GetValueTypeFromFuncName(&local_b0,pFVar19),
               (TObjectPtr<UObject>_u_0)pFVar18[1] != local_b0.ClassStructOrEnum.field0_0x0 ||
               ((ushort)pFVar18[2].ComparisonIndex.Value != local_b0.UnderlyingType)) ||
              (*(uchar *)((longlong)&pFVar18[2].ComparisonIndex.Value + 2) != local_b0.Flags)))) {
            pFVar9 = FText::FromName(&local_78,pFVar18);
            pFVar10 = FNiagaraTypeDefinition::GetNameText
                                ((FNiagaraTypeDefinition *)(pFVar18 + 1),&local_68);
            pFVar11 = FNiagaraTypeDefinition::GetNameText(&local_b0,&local_58);
            pFVar12 = FText::AsLocalizable_Advanced_LocText
                                (&local_88,L"NiagaraDataInterfaceRWUtils",L"BadType",
                                 L"Same name, different types! {0} vs {1}, Attribute {2}");
            pFVar13 = FTextFormat::FTextFormat(&local_48,pFVar12,Default);
            pFVar9 = FText::Format<FText,FText,FText>(&local_98,pFVar13,pFVar11,pFVar10,pFVar9);
            iVar6 = param_1->ArrayNum;
            if (iVar6 == param_1->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar6 + 1;
            FText::FText((FText *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                         pFVar9);
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            }
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
          }
          goto LAB_149201691;
        }
      }
      if (iVar6 == (this->AttributeInfos).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&(this->AttributeInfos).AllocatorInstance,
                           &(this->AttributeInfos).ArrayMax);
      }
      (this->AttributeInfos).ArrayNum = iVar6 + 1;
      pFVar18 = (FName *)((this->AttributeInfos).AllocatorInstance.Data + (longlong)iVar6 * 0x30);
      DefaultConstructItems<FNiagaraDataInterfaceRWAttributeHelper::FAttributeInfo,int>(pFVar18,1);
      *pFVar18 = *pFVar2;
      pFVar8 = UNiagaraDataInterfaceGrid2DCollection::GetValueTypeFromFuncName(&local_b0,pFVar19);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 = (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      *(TObjectPtr<UObject>_u_0 *)(pFVar18 + 1) = (pFVar8->ClassStructOrEnum).field0_0x0;
      *(ushort *)&pFVar18[2].ComparisonIndex.Value = pFVar8->UnderlyingType;
      *(uchar *)((longlong)&pFVar18[2].ComparisonIndex.Value + 2) = pFVar8->Flags;
      *(short *)&pFVar18[2].Number = pFVar8->Size;
      *(short *)((longlong)&pFVar18[2].Number + 2) = pFVar8->Alignment;
      pFVar18[3].ComparisonIndex.Value = pFVar8->RegisteredTypeDefIndex;
      pFVar18[3].Number = pFVar8->UnderlyingTypePathNameHash;
      uVar7 = UNiagaraDataInterfaceGrid2DCollection::GetComponentCountFromFuncName(pFVar19);
      pFVar18[4].ComparisonIndex.Value = uVar7;
      pFVar18[4].Number = this->TotalChannels;
      pFVar18[5].ComparisonIndex.Value = (this->AttributeInfos).ArrayNum - 1;
      this->TotalChannels = this->TotalChannels + uVar7;
    }
LAB_149201691:
    pFVar19 = pFVar19 + 10;
    pFVar21 = pFVar21 + 10;
    uVar15 = (ulonglong)uVar3;
  } while( true );
}

// Init<UNiagaraDataInterfaceGrid3DCollection> @ 149201810

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceRWAttributeHelper::Init<UNiagaraDataInterfaceGrid3DCollection>
          (FNiagaraDataInterfaceRWAttributeHelper *this,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  FNiagaraDataInterfaceGPUParamInfo *pFVar4;
  UObject *pUVar5;
  int iVar6;
  uint uVar7;
  FNiagaraTypeDefinition *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  FName *pFVar14;
  ulonglong uVar15;
  FName *pFVar16;
  FName FVar17;
  FName *pFVar18;
  FName *pFVar19;
  FName FVar20;
  FName *pFVar21;
  undefined1 local_res8 [8];
  FNiagaraTypeDefinition local_b0;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  uVar3 = (this->ParamInfo->GeneratedFunctions).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->AttributeInfos).ArrayMax;
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar3,&(this->AttributeInfos).AllocatorInstance,
               (this->AttributeInfos).ArrayNum,piVar1);
  }
  pFVar4 = this->ParamInfo;
  this->TotalChannels = 0;
  uVar3 = (pFVar4->GeneratedFunctions).ArrayNum;
  uVar15 = (ulonglong)(int)uVar3;
  pFVar19 = (FName *)(pFVar4->GeneratedFunctions).AllocatorInstance.Data;
  pFVar21 = pFVar19 + 4;
  pFVar16 = pFVar19 + uVar15 * 10;
  do {
    if ((pFVar4->GeneratedFunctions).ArrayNum != (int)uVar15) {
      `TCheckedPointerIterator<FNiagaraDataInterfaceGeneratedFunction_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == pFVar16) {
      return;
    }
    uVar7 = (pFVar21->ComparisonIndex).Value;
    FVar17 = pFVar21[-1];
    FVar20 = (FName)((longlong)FVar17 + (longlong)(int)uVar7 * 0x10);
    while( true ) {
      if ((pFVar21->ComparisonIndex).Value != uVar7) {
        `TCheckedPointerIterator<TTuple<FName,FName>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar17 == FVar20) goto LAB_149201a11;
      if (*(FName *)FVar17 == UNiagaraDataInterfaceRWBase::NAME_Attribute) break;
      FVar17 = (FName)((longlong)FVar17 + 0x10);
    }
    pFVar2 = (FName *)((longlong)FVar17 + 8);
    if (pFVar2 != (FName *)0x0) {
      iVar6 = (this->AttributeInfos).ArrayNum;
      pFVar18 = (FName *)(this->AttributeInfos).AllocatorInstance.Data;
      pFVar14 = pFVar18 + (longlong)iVar6 * 6;
      for (; pFVar18 != pFVar14; pFVar18 = pFVar18 + 6) {
        if (*pFVar18 == *pFVar2) {
          if ((param_1 != (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) &&
             (((UNiagaraDataInterfaceGrid3DCollection::GetValueTypeFromFuncName(&local_b0,pFVar19),
               (TObjectPtr<UObject>_u_0)pFVar18[1] != local_b0.ClassStructOrEnum.field0_0x0 ||
               ((ushort)pFVar18[2].ComparisonIndex.Value != local_b0.UnderlyingType)) ||
              (*(uchar *)((longlong)&pFVar18[2].ComparisonIndex.Value + 2) != local_b0.Flags)))) {
            pFVar9 = FText::FromName(&local_78,pFVar18);
            pFVar10 = FNiagaraTypeDefinition::GetNameText
                                ((FNiagaraTypeDefinition *)(pFVar18 + 1),&local_68);
            pFVar11 = FNiagaraTypeDefinition::GetNameText(&local_b0,&local_58);
            pFVar12 = FText::AsLocalizable_Advanced_LocText
                                (&local_88,L"NiagaraDataInterfaceRWUtils",L"BadType",
                                 L"Same name, different types! {0} vs {1}, Attribute {2}");
            pFVar13 = FTextFormat::FTextFormat(&local_48,pFVar12,Default);
            pFVar9 = FText::Format<FText,FText,FText>(&local_98,pFVar13,pFVar11,pFVar10,pFVar9);
            iVar6 = param_1->ArrayNum;
            if (iVar6 == param_1->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar6 + 1;
            FText::FText((FText *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                         pFVar9);
            if (local_98.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            }
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
          }
          goto LAB_149201a11;
        }
      }
      if (iVar6 == (this->AttributeInfos).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&(this->AttributeInfos).AllocatorInstance,
                           &(this->AttributeInfos).ArrayMax);
      }
      (this->AttributeInfos).ArrayNum = iVar6 + 1;
      pFVar18 = (FName *)((this->AttributeInfos).AllocatorInstance.Data + (longlong)iVar6 * 0x30);
      DefaultConstructItems<FNiagaraDataInterfaceRWAttributeHelper::FAttributeInfo,int>(pFVar18,1);
      *pFVar18 = *pFVar2;
      pFVar8 = UNiagaraDataInterfaceGrid3DCollection::GetValueTypeFromFuncName(&local_b0,pFVar19);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 = (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      *(TObjectPtr<UObject>_u_0 *)(pFVar18 + 1) = (pFVar8->ClassStructOrEnum).field0_0x0;
      *(ushort *)&pFVar18[2].ComparisonIndex.Value = pFVar8->UnderlyingType;
      *(uchar *)((longlong)&pFVar18[2].ComparisonIndex.Value + 2) = pFVar8->Flags;
      *(short *)&pFVar18[2].Number = pFVar8->Size;
      *(short *)((longlong)&pFVar18[2].Number + 2) = pFVar8->Alignment;
      pFVar18[3].ComparisonIndex.Value = pFVar8->RegisteredTypeDefIndex;
      pFVar18[3].Number = pFVar8->UnderlyingTypePathNameHash;
      uVar7 = UNiagaraDataInterfaceGrid3DCollection::GetComponentCountFromFuncName(pFVar19);
      pFVar18[4].ComparisonIndex.Value = uVar7;
      pFVar18[4].Number = this->TotalChannels;
      pFVar18[5].ComparisonIndex.Value = (this->AttributeInfos).ArrayNum - 1;
      this->TotalChannels = this->TotalChannels + uVar7;
    }
LAB_149201a11:
    pFVar19 = pFVar19 + 10;
    pFVar21 = pFVar21 + 10;
    uVar15 = (ulonglong)uVar3;
  } while( true );
}

// FNiagaraDataInterfaceRWAttributeHelper @ 149212730

FNiagaraDataInterfaceRWAttributeHelper * __thiscall
FNiagaraDataInterfaceRWAttributeHelper::FNiagaraDataInterfaceRWAttributeHelper
          (FNiagaraDataInterfaceRWAttributeHelper *this,FNiagaraDataInterfaceGPUParamInfo *param_1)

{
  this->ParamInfo = param_1;
  (this->AttributeInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeInfos).ArrayNum = 0;
  (this->AttributeInfos).ArrayMax = 0;
  this->TotalChannels = 0;
  return this;
}

// FindAttributeInfo @ 14922fd00

FAttributeInfo * __thiscall
FNiagaraDataInterfaceRWAttributeHelper::FindAttributeInfo
          (FNiagaraDataInterfaceRWAttributeHelper *this,FName param_1)

{
  FAttributeInfo *pFVar1;
  FAttributeInfo *pFVar2;
  
  pFVar1 = (FAttributeInfo *)(this->AttributeInfos).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->AttributeInfos).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FAttributeInfo *)0x0;
    }
    if (pFVar1->Name == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

