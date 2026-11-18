// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// Convert @ 14e5e7f00

FGLTFJsonMaterialVariant * __thiscall
FGLTFMaterialVariantConverter::Convert(FGLTFMaterialVariantConverter *this,UVariant *param_1)

{
  int *piVar1;
  UPropertyValue *this_00;
  FGLTFJsonPrimitive *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArray<UPropertyValue_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UClass *pUVar9;
  FGLTFJsonMaterialVariant *pFVar10;
  FGLTFJsonMaterialVariant *pFVar11;
  FText *this_01;
  FString *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  ForAnyElementType *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  FGLTFJsonMaterialVariant *local_c0;
  FGLTFJsonMaterialVariant *local_b8;
  undefined **local_b0;
  FGLTFJsonPrimitive *local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  uint local_90;
  FGLTFJsonPrimitive *local_88;
  FGLTFJsonPrimitive *local_80;
  FGLTFJsonMaterial *pFStack_78;
  FGLTFJsonMaterial *local_70;
  TArray<UVariantObjectBinding_*,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  FText local_58;
  
  if ((param_1 == (UVariant *)0x0) ||
     (*(char *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0xb2) == '\0')) {
    return (FGLTFJsonMaterialVariant *)0x0;
  }
  pFVar10 = (FGLTFJsonMaterialVariant *)0x0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_68 = UVariant::GetBindings(param_1);
  local_90 = local_68->ArrayNum;
  uVar15 = (ulonglong)(int)local_90;
  pFVar19 = (local_68->AllocatorInstance).Data;
  local_60 = pFVar19 + uVar15 * 8;
LAB_14e5e7f80:
  pFVar14 = local_60;
  if (local_68->ArrayNum != (int)uVar15) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<UVariantObjectBinding_*_const,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res18);
  }
  if (pFVar19 != pFVar14) {
    pTVar8 = UVariantObjectBinding::GetCapturedProperties(*(UVariantObjectBinding **)pFVar19);
    pFVar13 = (pTVar8->AllocatorInstance).Data;
    iVar7 = pTVar8->ArrayNum;
    pFVar14 = pFVar13 + (longlong)iVar7 * 8;
LAB_14e5e7fb2:
    do {
      if (pTVar8->ArrayNum != iVar7) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UPropertyValue_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar13 == pFVar14) goto LAB_14e5e8122;
      this_00 = *(UPropertyValue **)pFVar13;
      cVar4 = (**(code **)(this_00->_padding_ + 0x2b0))(this_00,0);
      if ((cVar4 != '\0') && (bVar5 = UPropertyValue::HasRecordedData(this_00), bVar5)) {
        pUVar9 = Z_Construct_UClass_UPropertyValueMaterial_NoRegister();
        iVar6 = (int)pUVar9->_padding_;
        if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
           (((longlong *)
             *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
             &pUVar9->_padding_ && (this_00 != (UPropertyValue *)0x0)))) {
          local_88 = (FGLTFJsonPrimitive *)0x0;
          bVar5 = TryParseMaterialProperty
                            (this,&local_88,&local_70,(UPropertyValueMaterial *)this_00);
          if (bVar5) {
            local_80 = local_88;
            pFStack_78 = local_70;
            if (((local_d0.Data <= (FScriptContainerElement *)&local_80) &&
                ((FScriptContainerElement *)&local_80 <
                 local_d0.Data + (longlong)local_c8._4_4_ * 0x10)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pFVar10 = (FGLTFJsonMaterialVariant *)(*pcVar3)();
              return pFVar10;
            }
            iVar6 = (int)local_c8;
            if ((int)local_c8 == local_c8._4_4_) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_d0,(int *)((longlong)&local_c8 + 4));
            }
            local_c8 = CONCAT44(local_c8._4_4_,iVar6 + 1);
            pFVar13 = pFVar13 + 8;
            *(FGLTFJsonPrimitive **)(local_d0.Data + (longlong)iVar6 * 0x10) = local_80;
            *(FGLTFJsonMaterial **)(local_d0.Data + (longlong)iVar6 * 0x10 + 8) = pFStack_78;
            goto LAB_14e5e7fb2;
          }
        }
      }
      pFVar13 = pFVar13 + 8;
    } while( true );
  }
  if (0 < (int)local_c8) {
    lVar18 = *(longlong *)&this->field_0x58;
    pFVar11 = ::operator_new(0x20);
    if (pFVar11 != (FGLTFJsonMaterialVariant *)0x0) {
      *(undefined4 *)&pFVar11->_padding_ = *(undefined4 *)(lVar18 + 0x3a8);
      pFVar11->_padding_ = (longlong)&___7FGLTFJsonMaterialVariant__6B_;
      (pFVar11->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->Name).Data.ArrayNum = 0;
      (pFVar11->Name).Data.ArrayMax = 0;
      pFVar10 = pFVar11;
    }
    pFVar17 = (ForAnyElementType *)(lVar18 + 0x3a0);
    local_c0 = pFVar10;
    if (((pFVar17->Data <= (FScriptContainerElement *)&local_c0) &&
        ((FScriptContainerElement *)&local_c0 <
         pFVar17->Data + (longlong)*(int *)(lVar18 + 0x3ac) * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FGLTFJsonMaterialVariant *)(*pcVar3)();
      return pFVar10;
    }
    iVar7 = *(int *)(lVar18 + 0x3a8);
    if (iVar7 == *(int *)(lVar18 + 0x3ac)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar17,(int *)(lVar18 + 0x3ac));
    }
    *(int *)(lVar18 + 0x3a8) = iVar7 + 1;
    *(FGLTFJsonMaterialVariant **)(pFVar17->Data + (longlong)iVar7 * 8) = local_c0;
    local_c0 = (FGLTFJsonMaterialVariant *)0x0;
    local_b8 = pFVar10;
    this_01 = UVariant::GetDisplayText(param_1,&local_58);
    pFVar12 = FText::ToString(this_01);
    ::FString::operator=(&local_b8->Name,pFVar12);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    iVar7 = (int)local_c8;
    uVar15 = (ulonglong)(int)local_c8;
    pFVar19 = local_d0.Data + uVar15 * 0x10;
    FVar16.Data = local_d0.Data;
LAB_14e5e8280:
    if ((int)uVar15 != iVar7) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<TTuple<FGLTFJsonPrimitive_*,FGLTFJsonMaterial_*>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_d8);
    }
    pFVar10 = local_b8;
    if (FVar16.Data != pFVar19) {
      pFVar2 = *(FGLTFJsonPrimitive **)FVar16.Data;
      pFVar14 = (pFVar2->MaterialVariantMappings).AllocatorInstance.Data;
      pFVar13 = pFVar14 + (longlong)(pFVar2->MaterialVariantMappings).ArrayNum * 0x20;
      for (; pFVar14 != pFVar13; pFVar14 = pFVar14 + 0x20) {
        if (*(FGLTFJsonPrimitive **)(pFVar14 + 8) == *(FGLTFJsonPrimitive **)(FVar16.Data + 8)) {
          if (pFVar14 != (FScriptContainerElement *)0x0) {
            TArray<FGLTFJsonMaterialVariant_*,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FGLTFJsonMaterialVariant_*_const_&>
                      ((TArray<FGLTFJsonMaterialVariant_*,TSizedDefaultAllocator<32>_> *)
                       (pFVar14 + 0x10),&local_b8);
            uVar15 = local_c8 & 0xffffffff;
            FVar16.Data = FVar16.Data + 0x10;
            goto LAB_14e5e8280;
          }
          break;
        }
      }
      local_b0 = &___7FGLTFJsonMaterialVariantMapping__6B_;
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = 0;
      local_a8 = *(FGLTFJsonPrimitive **)(FVar16.Data + 8);
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_a0,(int *)((longlong)&local_98 + 4));
      local_98 = CONCAT44(local_98._4_4_,iVar6 + 1);
      *(FGLTFJsonMaterialVariant **)(local_a0.Data + (longlong)iVar6 * 8) = local_b8;
      pFVar14 = (pFVar2->MaterialVariantMappings).AllocatorInstance.Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_b0) &&
          ((FScriptContainerElement *)&local_b0 <
           pFVar14 + (longlong)(pFVar2->MaterialVariantMappings).ArrayMax * 0x20)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FGLTFJsonMaterialVariant *)(*pcVar3)();
        return pFVar10;
      }
      iVar6 = (pFVar2->MaterialVariantMappings).ArrayNum;
      piVar1 = &(pFVar2->MaterialVariantMappings).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(pFVar2->MaterialVariantMappings).AllocatorInstance,piVar1);
      }
      _Src.Data = local_a0.Data;
      (pFVar2->MaterialVariantMappings).ArrayNum = iVar6 + 1;
      pFVar13 = (pFVar2->MaterialVariantMappings).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
      *(undefined ***)pFVar13 = &___7FGLTFJsonMaterialVariantMapping__6B_;
      pFVar14 = pFVar13 + 0x10;
      *(FGLTFJsonPrimitive **)(pFVar13 + 8) = local_a8;
      *(FScriptContainerElement **)&pFVar14->field_0x0 = (FScriptContainerElement *)0x0;
      lVar18 = (longlong)(int)local_98;
      *(int *)(pFVar13 + 0x18) = (int)local_98;
      if ((int)local_98 == 0) {
        *(int *)(pFVar13 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(int)local_98,0,(ForAnyElementType *)pFVar14,(int)local_98,
                   (int *)(pFVar13 + 0x1c));
        memcpy(*(FScriptContainerElement **)&pFVar14->field_0x0,_Src.Data,lVar18 << 3);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      uVar15 = local_c8 & 0xffffffff;
      FVar16.Data = FVar16.Data + 0x10;
      goto LAB_14e5e8280;
    }
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return pFVar10;
LAB_14e5e8122:
  pFVar19 = pFVar19 + 8;
  uVar15 = (ulonglong)local_90;
  goto LAB_14e5e7f80;
}

// TryParseMaterialProperty @ 14e615230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FGLTFMaterialVariantConverter::TryParseMaterialProperty
          (FGLTFMaterialVariantConverter *this,FGLTFJsonPrimitive **param_1,
          FGLTFJsonMaterial **param_2,UPropertyValueMaterial *param_3)

{
  int iVar1;
  FGLTFLogBuilder *pFVar2;
  AActor *pAVar3;
  FGLTFConvertBuilder *pFVar4;
  longlong lVar5;
  UStaticMesh *pUVar6;
  code *pcVar7;
  UMaterialInterface *pUVar8;
  bool bVar9;
  undefined1 uVar10;
  USkeletalMeshComponent *this_00;
  UMaterialInterface *pUVar11;
  UClass *pUVar12;
  FGLTFJsonMesh *pFVar13;
  USkeletalMesh *pUVar14;
  FGLTFJsonMaterial *pFVar15;
  uint uVar16;
  uint uVar17;
  UMaterialInterface *local_138;
  undefined1 local_130 [8];
  UStaticMesh *local_128;
  USkeletalMesh *local_120;
  UMaterialInterface *local_118;
  FGLTFMaterialArray local_110;
  FGLTFMaterialArray local_100;
  FMeshAttributesArray<int> local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  this_00 = UPropertyValue::GetPropertyParentContainerAddress((UPropertyValue *)param_3);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    pFVar2 = *(FGLTFLogBuilder **)&this->field_0x58;
    FGLTFVariantUtilities::GetLogContext(&local_90,(UPropertyValue *)param_3);
    ::FString::PrintfImpl
              (&local_e0,
               L"Variant property %s must belong to a mesh component, the property will be skipped")
    ;
    FGLTFLogBuilder::LogWarning(pFVar2,&local_e0);
    local_50.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      local_50.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    }
LAB_14e615453:
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    return false;
  }
  pAVar3 = (AActor *)this_00->_padding_;
  pFVar4 = *(FGLTFConvertBuilder **)&this->field_0x58;
  if (pAVar3 == (AActor *)0x0) {
    FGLTFVariantUtilities::GetLogContext(&local_80,(UPropertyValue *)param_3);
    ::FString::PrintfImpl
              (&local_d0,
               L"Variant property %s must belong to an actor, the property will be skipped");
    FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)pFVar4,&local_d0);
    local_50.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      local_50.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
    }
    goto LAB_14e615453;
  }
  bVar9 = FGLTFConvertBuilder::IsSelectedActor(pFVar4,pAVar3);
  if (!bVar9) {
    FGLTFVariantUtilities::GetLogContext(&local_70,(UPropertyValue *)param_3);
    ::FString::PrintfImpl
              (&local_c0,
               L"Variant property %s doesn\'t belong to an actor selected for export, the property will be skipped"
              );
    FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)pFVar4,&local_c0);
    local_50.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      local_50.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    }
    goto LAB_14e615453;
  }
  local_138 = (UMaterialInterface *)
              UPropertyValue::GetCapturedPropSegments((UPropertyValue *)param_3);
  iVar1 = (int)local_138->_padding_;
  if (iVar1 < 1) {
    pFVar2 = *(FGLTFLogBuilder **)&this->field_0x58;
    FGLTFVariantUtilities::GetLogContext(&local_60,(UPropertyValue *)param_3);
    ::FString::PrintfImpl
              (&local_b0,
               L"Failed to parse material index for variant property %s, the property will be skipped"
              );
    FGLTFLogBuilder::LogWarning(pFVar2,&local_b0);
    local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    }
    goto LAB_14e615453;
  }
  UPropertyValue::GetRecordedData((UPropertyValue *)param_3);
  pUVar11 = UPropertyValueMaterial::GetMaterial(param_3);
  pFVar4 = *(FGLTFConvertBuilder **)&this->field_0x58;
  if (pUVar11 == (UMaterialInterface *)0x0) {
    FGLTFVariantUtilities::GetLogContext(&local_50,(UPropertyValue *)param_3);
    ::FString::PrintfImpl
              (&local_a0,L"No material assigned, the property will be skipped. Context: %s");
    FGLTFLogBuilder::LogWarning((FGLTFLogBuilder *)pFVar4,&local_a0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    goto LAB_14e615453;
  }
  FGLTFConvertBuilder::RegisterObjectVariant(pFVar4,(UObject *)this_00,(UPropertyValue *)param_3);
  FGLTFConvertBuilder::RegisterObjectVariant
            (*(FGLTFConvertBuilder **)&this->field_0x58,(UObject *)pAVar3,(UPropertyValue *)param_3)
  ;
  pUVar8 = local_138;
  uVar17 = iVar1 - 1;
  uVar16 = 0;
  if ((int)uVar17 < (int)local_138->_padding_) {
    uVar16 = ~uVar17 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  lVar5 = *(longlong *)&this->field_0x58;
  uVar16 = *(uint *)(((ForAnyElementType *)&pUVar8->_padding_)->Data +
                    (longlong)(int)uVar17 * 0x28 + 0x10);
  pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  iVar1 = (int)pUVar12->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar12->_padding_)) {
    pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       (((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar12->_padding_ &&
        (pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00),
        pUVar14 != (USkeletalMesh *)0x0)))) {
      local_120 = pUVar14;
      TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
      Emplace<USkeletalMesh_const_*_const_&>
                ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
                  *)(lVar5 + 0x4b8),(USkeletalMesh **)(local_130 + 4),(bool *)&local_120);
      local_100._0_8_ = 0;
      local_100._8_8_ = 0;
      pFVar13 = TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
                ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
                             **)(lVar5 + 0x880),pUVar14,this_00,&local_100,-1);
      goto LAB_14e615614;
    }
LAB_14e61560e:
    pFVar13 = (FGLTFJsonMesh *)0x0;
  }
  else {
    pUVar6 = (UStaticMesh *)this_00->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar6 == (UStaticMesh *)0x0) goto LAB_14e61560e;
    }
    else {
      if (pUVar6 == (UStaticMesh *)0x0) goto LAB_14e61560e;
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_128 = pUVar6;
    TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<UStaticMesh_const_*_const_&>
              ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                *)(lVar5 + 0x468),(UStaticMesh **)local_130,(bool *)&local_128);
    local_110._0_8_ = 0;
    local_110._8_8_ = 0;
    pFVar13 = TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
              ::GetOrAdd(*(TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
                           **)(lVar5 + 0x878),pUVar6,(UStaticMeshComponent *)this_00,&local_110,-1);
  }
LAB_14e615614:
  uVar17 = 0;
  if ((int)uVar16 < (pFVar13->Primitives).ArrayNum) {
    uVar17 = ~uVar16 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  *param_1 = (FGLTFJsonPrimitive *)
             ((pFVar13->Primitives).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x98);
  pFVar4 = *(FGLTFConvertBuilder **)&this->field_0x58;
  if ((*(char *)(pFVar4->_padding_ + 0xb2) == '\x02') &&
     (*(char *)(pFVar4->_padding_ + 0x37) == '\x02')) {
    pFVar15 = FGLTFConvertBuilder::AddUniqueMaterial
                        (pFVar4,pUVar11,(UMeshComponent *)this_00,-1,uVar16);
  }
  else {
    local_118 = pUVar11;
    TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UMaterialInterface_const_*_const_&>
              ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                *)&pFVar4->_padding_,&local_138,(bool *)&local_118);
    local_f0._0_8_ = 0;
    local_f0._8_8_ = 0;
    pFVar15 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
              ::GetOrAdd((pFVar4->MaterialConverter).Ptr,pUVar11,(FGLTFMeshData *)0x0,&local_f0);
  }
  *param_2 = pFVar15;
  return true;
}

