// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8d7880

UScriptStruct * __cdecl FSetFloatAttributeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetFloatAttributeDataflowNode,(UObject *)pUVar1,
                         L"SetFloatAttributeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton;
}

// GetType @ 14e8d7b80

FName __thiscall FSetFloatAttributeDataflowNode::GetType(FSetFloatAttributeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetFloatAttributeDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d7bf0

bool __thiscall
FSetFloatAttributeDataflowNode::IsA(FSetFloatAttributeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetFloatAttributeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d7c58;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d7c58:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d7c76;
      }
    }
  }
  bVar5 = true;
LAB_14e8d7c76:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d7cb0

FStructOnScope * __thiscall
FSetFloatAttributeDataflowNode::NewStructOnScope(FSetFloatAttributeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetFloatAttributeDataflowNode,
                           (UObject *)pUVar2,L"SetFloatAttributeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d7d30

void __thiscall
FSetFloatAttributeDataflowNode::SerializeInternal
          (FSetFloatAttributeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetFloatAttributeDataflowNode,(UObject *)pUVar1,
                         L"SetFloatAttributeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d7dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d7ea0

FName __thiscall
FSetFloatAttributeDataflowNode::GetDisplayName(FSetFloatAttributeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetFloatAttribute");
  return in_RDX;
}

// GetCategory @ 14e8d7ed0

FName __thiscall FSetFloatAttributeDataflowNode::GetCategory(FSetFloatAttributeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8d7f40

FString * __thiscall
FSetFloatAttributeDataflowNode::GetTags
          (FSetFloatAttributeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d7f70

UScriptStruct * __thiscall
FSetFloatAttributeDataflowNode::TypedScriptStruct(FSetFloatAttributeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetFloatAttributeDataflowNode,(UObject *)pUVar1,
                         L"SetFloatAttributeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetFloatAttributeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d83a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetFloatAttributeDataflowNode::Evaluate
          (FSetFloatAttributeDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  EDataflowSetFloatArrayMethod EVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  undefined1 *puVar10;
  FDataflowInput *pFVar11;
  FManagedArrayCollection *pFVar12;
  TManagedArray<float> *pTVar13;
  uint *puVar14;
  float *pfVar15;
  TManagedArray<int> *pTVar16;
  TManagedArray<UE::Math::TBox<double>_> *pTVar17;
  longlong lVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  undefined1 auStackY_258 [32];
  TArray<float,TSizedDefaultAllocator<32>_> local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  int local_1d0;
  FContext *local_1c8;
  FName local_1c0;
  FSetFloatAttributeDataflowNode *local_1b8;
  TArray<float,TSizedDefaultAllocator<32>_> local_1b0;
  FConnectionReference local_1a0;
  FConnectionReference local_188;
  TVector<double>_u_0 local_170;
  FConnectionReference local_158;
  FManagedArrayCollection local_138;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar12 = &this->Collection;
  local_1c8 = param_1;
  local_1b8 = this;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FManagedArrayCollection *)puVar10 == pFVar12) ||
     (puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (TArray<float,TSizedDefaultAllocator<32>_> *)puVar10 == &this->FloatArray)) {
    uVar23 = 0;
    local_188.ContainerReference = (void *)0x0;
    local_188.Index = -1;
    local_188.Reference = pFVar12;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_188);
    if (pFVar11->Connection != (FDataflowOutput *)0x0) {
      pFVar12 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar12);
      FManagedArrayCollection::FManagedArrayCollection(&local_138,pFVar12);
      if ((this->Attribute).Data.ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)(this->Attribute).Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_1c0,pwVar20);
      bVar8 = FManagedArrayCollection::HasAttribute
                        (&local_138,local_1c0,FTransformCollection::TransformGroup);
      if (bVar8) {
        pTVar13 = FManagedArrayCollection::ModifyAttribute<float>
                            (&local_138,local_1c0,FTransformCollection::TransformGroup);
        iVar9 = (**(code **)(*(longlong *)pTVar13 + 0x60))(pTVar13);
        lVar22 = (longlong)iVar9;
        local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.ArrayNum = 0;
        local_218.ArrayMax = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar9,&local_218.AllocatorInstance,&local_218.ArrayNum,&local_218.ArrayMax);
        EVar4 = this->Method;
        if (EVar4 == Random) {
          puVar14 = (uint *)FDataflowNode::GetValue<int>
                                      ((FDataflowNode *)this,param_1,&this->RandomSeed);
          fVar6 = __real_3f800000;
          uVar21 = 0;
          uVar28 = *puVar14;
          if (0 < lVar22) {
            lVar25 = 0;
            do {
              uVar26 = ~uVar21 >> 0x1f;
              uVar28 = uVar28 * 0xbb38435 + 0x3619636b;
              uVar24 = 0;
              if ((int)uVar21 < *(int *)&pTVar13->field_0x18) {
                uVar24 = uVar26;
              }
              if ((uVar24 == 0) &&
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
              *(float *)(*(longlong *)&pTVar13->field_0x10 + lVar25 * 4) =
                   (float)(uVar28 >> 9 | 0x3f800000) - fVar6;
              uVar24 = 0;
              if ((int)uVar21 < *(int *)&pTVar13->field_0x18) {
                uVar24 = uVar26;
              }
              if ((uVar24 == 0) &&
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
              uVar30 = *(undefined4 *)(*(longlong *)&pTVar13->field_0x10 + lVar25 * 4);
              uVar24 = 0;
              if ((int)uVar21 < local_218.ArrayNum) {
                uVar24 = uVar26;
              }
              if ((uVar24 == 0) &&
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
              uVar21 = uVar21 + 1;
              *(undefined4 *)(local_218.AllocatorInstance.Data + lVar25 * 4) = uVar30;
              lVar25 = lVar25 + 1;
              param_1 = local_1c8;
            } while (lVar25 < lVar22);
          }
        }
        else if (EVar4 == Noise) {
          pfVar15 = FDataflowNode::GetValue<float>((FDataflowNode *)this,param_1,&this->NoiseScale);
          local_1d0 = (int)*pfVar15;
          pTVar16 = FManagedArrayCollection::GetAttribute<int>
                              (&local_138,FGeometryCollection::TransformToGeometryIndexAttribute,
                               FTransformCollection::TransformGroup);
          pTVar17 = FManagedArrayCollection::GetAttribute<UE::Math::TBox<double>_>
                              (&local_138,FGeometryCollection::BoundingBoxAttribute,
                               FGeometryCollection::GeometryGroup);
          fVar7 = __real_3f000000;
          dVar2 = __real_3fe0000000000000;
          fVar6 = __real_3f800000;
          uVar27 = uVar23;
          if (0 < lVar22) {
            do {
              uVar21 = (uint)uVar23;
              uVar24 = ~uVar21 >> 0x1f;
              uVar28 = 0;
              if ((int)uVar21 < *(int *)&pTVar16->field_0x18) {
                uVar28 = uVar24;
              }
              if ((uVar28 == 0) &&
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
              uVar28 = *(uint *)(*(longlong *)&pTVar16->field_0x10 + uVar27 * 4);
              if (uVar28 == 0xffffffff) {
                uVar28 = 0;
                if ((int)uVar21 < *(int *)&pTVar13->field_0x18) {
                  uVar28 = uVar24;
                }
                if ((uVar28 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(undefined4 *)(*(longlong *)&pTVar13->field_0x10 + uVar27 * 4) = 0;
              }
              else {
                uVar26 = 0;
                if ((int)uVar28 < *(int *)&pTVar17->field_0x18) {
                  uVar26 = ~uVar28 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar18 = (longlong)(int)uVar28 * 0x38;
                dVar34 = (double)local_1d0;
                lVar25 = *(longlong *)&pTVar17->field_0x10;
                local_170._s_0.X =
                     (*(double *)(lVar18 + 0x18 + lVar25) + *(double *)(lVar18 + lVar25)) * dVar2 *
                     dVar34;
                local_170._s_0.Y =
                     (*(double *)(lVar18 + 0x20 + lVar25) + *(double *)(lVar18 + 8 + lVar25)) *
                     dVar2 * dVar34;
                local_170._s_0.Z =
                     (*(double *)(lVar18 + 0x28 + lVar25) + *(double *)(lVar18 + 0x10 + lVar25)) *
                     dVar2 * dVar34;
                fVar29 = FMath::PerlinNoise3D((TVector<double> *)&local_170._s_0);
                uVar28 = 0;
                if ((int)uVar21 < *(int *)&pTVar13->field_0x18) {
                  uVar28 = uVar24;
                }
                if ((uVar28 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(float *)(*(longlong *)&pTVar13->field_0x10 + uVar27 * 4) = fVar29 * fVar7 + fVar6;
              }
              uVar23 = (ulonglong)(uVar21 + 1);
              uVar27 = uVar27 + 1;
              this = local_1b8;
              param_1 = local_1c8;
            } while ((longlong)uVar27 < lVar22);
          }
        }
        else if (EVar4 == ByBoundingBox) {
          pTVar16 = FManagedArrayCollection::GetAttribute<int>
                              (&local_138,FGeometryCollection::TransformToGeometryIndexAttribute,
                               FTransformCollection::TransformGroup);
          pTVar17 = FManagedArrayCollection::GetAttribute<UE::Math::TBox<double>_>
                              (&local_138,FGeometryCollection::BoundingBoxAttribute,
                               FGeometryCollection::GeometryGroup);
          uVar28 = 0;
          local_1d8 = 0;
          local_208 = 0.0;
          dStack_200 = 0.0;
          local_1f8 = 0.0;
          dStack_1f0 = 0.0;
          local_1e8 = 0.0;
          dStack_1e0 = 0.0;
          if (0 < lVar22) {
            lVar25 = 0;
            do {
              uVar21 = 0;
              if ((int)uVar28 < *(int *)&pTVar16->field_0x18) {
                uVar21 = ~uVar28 >> 0x1f;
              }
              if ((uVar21 == 0) &&
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
              uVar21 = *(uint *)(*(longlong *)&pTVar16->field_0x10 + lVar25 * 4);
              if (uVar21 != 0xffffffff) {
                uVar24 = 0;
                if ((int)uVar21 < *(int *)&pTVar17->field_0x18) {
                  uVar24 = ~uVar21 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar18 = *(longlong *)&pTVar17->field_0x10;
                lVar19 = (longlong)(int)uVar21 * 0x38;
                if ((char)local_1d8 == '\0') {
                  if (*(char *)(lVar19 + lVar18 + 0x30) != '\0') {
                    pdVar1 = (double *)(lVar19 + 0x10 + lVar18);
                    local_1f8 = *pdVar1;
                    dStack_1f0 = pdVar1[1];
                    local_208 = *(double *)(lVar19 + lVar18);
                    dStack_200 = ((double *)(lVar19 + lVar18))[1];
                    pdVar1 = (double *)(lVar19 + 0x20 + lVar18);
                    local_1e8 = *pdVar1;
                    dStack_1e0 = pdVar1[1];
                    local_1d8 = *(undefined8 *)(lVar19 + 0x30 + lVar18);
                  }
                }
                else if (*(char *)(lVar19 + lVar18 + 0x30) != '\0') {
                  uVar30 = SUB84(local_208,0);
                  uVar31 = (undefined4)((ulonglong)local_208 >> 0x20);
                  dVar2 = *(double *)(lVar19 + lVar18);
                  if (dVar2 <= local_208) {
                    uVar30 = SUB84(dVar2,0);
                    uVar31 = (undefined4)((ulonglong)dVar2 >> 0x20);
                  }
                  dVar2 = *(double *)(lVar19 + 8 + lVar18);
                  uVar32 = SUB84(dVar2,0);
                  uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
                  if (dStack_200 <= dVar2) {
                    uVar32 = SUB84(dStack_200,0);
                    uVar33 = (undefined4)((ulonglong)dStack_200 >> 0x20);
                  }
                  local_208 = (double)CONCAT44(uVar31,uVar30);
                  dVar2 = *(double *)(lVar19 + 0x10 + lVar18);
                  uVar30 = SUB84(dVar2,0);
                  uVar31 = (undefined4)((ulonglong)dVar2 >> 0x20);
                  if (local_1f8 <= dVar2) {
                    uVar30 = SUB84(local_1f8,0);
                    uVar31 = (undefined4)((ulonglong)local_1f8 >> 0x20);
                  }
                  dStack_200 = (double)CONCAT44(uVar33,uVar32);
                  dVar2 = *(double *)(lVar19 + 0x18 + lVar18);
                  uVar32 = SUB84(dVar2,0);
                  uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
                  if (dVar2 <= dStack_1f0) {
                    uVar32 = SUB84(dStack_1f0,0);
                    uVar33 = (undefined4)((ulonglong)dStack_1f0 >> 0x20);
                  }
                  local_1f8 = (double)CONCAT44(uVar31,uVar30);
                  dVar2 = *(double *)(lVar19 + 0x20 + lVar18);
                  uVar30 = SUB84(dVar2,0);
                  uVar31 = (undefined4)((ulonglong)dVar2 >> 0x20);
                  if (dVar2 <= local_1e8) {
                    uVar30 = SUB84(local_1e8,0);
                    uVar31 = (undefined4)((ulonglong)local_1e8 >> 0x20);
                  }
                  dStack_1f0 = (double)CONCAT44(uVar33,uVar32);
                  dVar2 = *(double *)(lVar19 + 0x28 + lVar18);
                  uVar32 = SUB84(dVar2,0);
                  uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
                  if (dVar2 <= dStack_1e0) {
                    uVar32 = SUB84(dStack_1e0,0);
                    uVar33 = (undefined4)((ulonglong)dStack_1e0 >> 0x20);
                  }
                  local_1e8 = (double)CONCAT44(uVar31,uVar30);
                  dStack_1e0 = (double)CONCAT44(uVar33,uVar32);
                }
              }
              dVar2 = __real_3fe0000000000000;
              uVar28 = uVar28 + 1;
              lVar25 = lVar25 + 1;
            } while (lVar25 < lVar22);
            uVar28 = 0;
            lVar25 = 0;
            do {
              uVar24 = ~uVar28 >> 0x1f;
              uVar21 = 0;
              if ((int)uVar28 < *(int *)&pTVar16->field_0x18) {
                uVar21 = uVar24;
              }
              if ((uVar21 == 0) &&
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
              uVar21 = *(uint *)(*(longlong *)&pTVar16->field_0x10 + lVar25 * 4);
              if (uVar21 == 0xffffffff) {
                uVar21 = 0;
                if ((int)uVar28 < *(int *)&pTVar13->field_0x18) {
                  uVar21 = uVar24;
                }
                if ((uVar21 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(undefined4 *)(*(longlong *)&pTVar13->field_0x10 + lVar25 * 4) = 0;
              }
              else {
                uVar26 = 0;
                if ((int)uVar21 < *(int *)&pTVar17->field_0x18) {
                  uVar26 = ~uVar21 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar34 = *(double *)
                          ((longlong)(int)uVar21 * 0x38 + 0x18 + *(longlong *)&pTVar17->field_0x10);
                dVar3 = *(double *)
                         ((longlong)(int)uVar21 * 0x38 + *(longlong *)&pTVar17->field_0x10);
                uVar21 = 0;
                if ((int)uVar28 < *(int *)&pTVar13->field_0x18) {
                  uVar21 = uVar24;
                }
                if ((uVar21 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(float *)(*(longlong *)&pTVar13->field_0x10 + lVar25 * 4) =
                     (float)(((dVar34 + dVar3) * dVar2 - local_208) / (dStack_1f0 - local_208));
              }
              uVar28 = uVar28 + 1;
              lVar25 = lVar25 + 1;
              this = local_1b8;
              param_1 = local_1c8;
            } while (lVar25 < lVar22);
          }
        }
        FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,&local_138,&this->Collection);
        FDataflowNode::
        SetValue<TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                  ((FDataflowNode *)this,param_1,&local_218,&this->FloatArray);
        if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.AllocatorInstance.Data);
        }
        FManagedArrayCollection::~FManagedArrayCollection(&local_138);
        return;
      }
      FManagedArrayCollection::~FManagedArrayCollection(&local_138);
    }
    local_1a0.Reference = &this->Collection;
    local_1a0.Index = -1;
    local_1a0.ContainerReference = (void *)0x0;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1a0);
    if (pFVar11->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,local_1a0.Reference,&this->Collection);
    }
    else {
      local_158.Index = -1;
      local_158.ContainerReference = (void *)0x0;
      local_158.Reference = &this->Collection;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_1a0,&local_158);
    }
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    FDataflowNode::
    SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_1b0,&this->FloatArray);
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
  }
  return;
}

// FSetFloatAttributeDataflowNode @ 14e92b720

FSetFloatAttributeDataflowNode * __thiscall
FSetFloatAttributeDataflowNode::FSetFloatAttributeDataflowNode
          (FSetFloatAttributeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowInput *pFVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FSetFloatAttributeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  (this->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attribute).Data.ArrayNum = 0;
  (this->Attribute).Data.ArrayMax = 0;
  this->Method = Random;
  this->RandomSeed = 0;
  this->NoiseScale = 1.0;
  (this->FloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RandomSeed;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->NoiseScale;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->FloatArray;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  return this;
}

// FSetFloatAttributeDataflowNode @ 14e92b8c0

FSetFloatAttributeDataflowNode * __thiscall
FSetFloatAttributeDataflowNode::FSetFloatAttributeDataflowNode(FSetFloatAttributeDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FSetFloatAttributeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->NoiseScale = 1.0;
  (this->Attribute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attribute).Data.ArrayNum = 0;
  (this->Attribute).Data.ArrayMax = 0;
  this->Method = Random;
  this->RandomSeed = 0;
  (this->FloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  return this;
}

