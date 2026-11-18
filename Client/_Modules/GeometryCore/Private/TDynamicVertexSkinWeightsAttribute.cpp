// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 31

// ~TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> @ 143369760

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
~TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty(&this->VertexBoneWeights,0);
  pFVar1 = (this->VertexBoneWeights).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Append @ 1433813b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Append
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStackY_98 [32];
  FBoneWeights local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  uVar5 = param_2->NumVertex + param_2->VertexOffset;
  if ((ulonglong)
      ((this->VertexBoneWeights).CurBlock * 0x200 + (this->VertexBoneWeights).CurBlockUsed) <
      (ulonglong)(longlong)(int)uVar5) {
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize(&this->VertexBoneWeights,uVar5);
  }
  iVar6 = 0;
  if (0 < param_2->NumVertex) {
    do {
      cVar2 = (**(code **)(param_1->_padding_ + 0x48))(param_1,iVar6,&local_68,0x40);
      if (cVar2 == '\0') {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1891171441567596233>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                           ,0x137,"Source.CopyOut(Idx, BufferData, BufferSize)");
        if (!bVar3) {
          return false;
        }
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar5 = param_2->VertexOffset + iVar6;
      AnimationCore::FBoneWeights::operator=
                ((FBoneWeights *)
                 ((ulonglong)(uVar5 & 0x1ff) * 0x40 +
                 *(longlong *)
                  ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar5 >> 9) * 8)),&local_68);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2->NumVertex);
  }
  return true;
}

// AppendDefaulted @ 143381ca0

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::AppendDefaulted
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FAppendInfo *param_1)

{
  uchar *puVar1;
  int iVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> *pFVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<UE::AnimationCore::FBoneWeight> local_58;
  
  uVar5 = param_1->NumVertex + param_1->VertexOffset;
  uVar4 = (this->VertexBoneWeights).CurBlock * 0x200 + (this->VertexBoneWeights).CurBlockUsed;
  if (uVar4 < uVar5) {
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize(&this->VertexBoneWeights,uVar5);
    do {
      pFVar3 = (ForElementType<UE::AnimationCore::FBoneWeight> *)
               (*(longlong *)
                 ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 0x40);
      if (pFVar3 != &local_58) {
        iVar2 = *(int *)(pFVar3[1].InlineData + 4);
        puVar1 = pFVar3[1].InlineData + 4;
        pFVar3[1].InlineData[0] = '\0';
        pFVar3[1].InlineData[1] = '\0';
        pFVar3[1].InlineData[2] = '\0';
        pFVar3[1].InlineData[3] = '\0';
        if (iVar2 == 0) {
          puVar1[0] = '\f';
          puVar1[1] = '\0';
          puVar1[2] = '\0';
          puVar1[3] = '\0';
        }
        else {
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                    (4,2,0,iVar2,pFVar3,0,(int *)puVar1);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return;
}

// CheckValidity @ 14338d110

bool __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::CheckValidity
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,bool param_1,
          EValidityCheckFailMode param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((ulonglong)
      (longlong)
      (int)((this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed) <=
      (ulonglong)
      ((this->VertexBoneWeights).CurBlockUsed + (this->VertexBoneWeights).CurBlock * 0x200)) {
    return true;
  }
  if (param_2 == Check) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                       ,0x207,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if (param_2 != Ensure) {
    return false;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1891171441567596023>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                     ,0x209,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// CompactCopy @ 14338ea70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::CompactCopy
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FCompactMaps *param_1,
          TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *param_2)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar7;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStackY_d8 [32];
  ForElementType<UE::AnimationCore::FBoneWeight> local_88;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this->_padding_ = param_2->_padding_;
  if (((ulonglong)(longlong)(param_1->VertMap).ArrayNum <
       (ulonglong)
       ((this->VertexBoneWeights).CurBlockUsed + (this->VertexBoneWeights).CurBlock * 0x200)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactMaps.NumVertexMappings() >= VertexBoneWeights.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                         ,0x87,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar11 = (longlong)(param_1->VertMap).ArrayNum;
  uVar10 = 0;
  local_88.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_50 = 0;
  local_4c = 0xc;
  if (0 < lVar11) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (param_1->VertMap).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(uint *)((param_1->VertMap).AllocatorInstance.Data + lVar12 * 4);
      if (uVar6 != 0xffffffff) {
        FVar8 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                (*(longlong *)
                  ((param_2->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 0x40);
        if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_88 != FVar8) {
          iVar2 = *(int *)((longlong)FVar8 + 0x38);
          if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar8 + 0x30) !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar8 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar8 + 0x30);
          }
          local_50 = iVar2;
          if ((iVar2 == 0) && (local_4c == 0)) {
            local_4c = 0xc;
          }
          else {
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,iVar2,local_4c,&local_88,iVar2,&local_4c);
            FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
            if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar7 = local_88.SecondaryData;
            }
            if (iVar2 != 0) {
              memcpy((void *)FVar7,(void *)FVar8,(longlong)iVar2 << 2);
            }
          }
        }
        iVar2 = local_50;
        FVar8 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                (*(longlong *)
                  ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 0x40);
        if (FVar8 != (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88) {
          lVar9 = (longlong)local_50;
          puVar1 = (uchar *)((longlong)FVar8 + 0x3c);
          iVar3 = *(int *)puVar1;
          *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar8 + 0x38))->
                  InlineData = local_50;
          FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
          if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar7 = local_88.SecondaryData;
          }
          if ((local_50 == 0) && (iVar3 == 0)) {
            puVar1[0] = '\f';
            puVar1[1] = '\0';
            puVar1[2] = '\0';
            puVar1[3] = '\0';
          }
          else {
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,local_50,iVar3,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar8,
                       local_50,(int *)puVar1);
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar8 + 0x30) !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar8 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar8 + 0x30);
            }
            if (iVar2 != 0) {
              memcpy((void *)FVar8,(void *)FVar7,lVar9 << 2);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar11);
  }
  if (local_88.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_88.SecondaryData);
  }
  return;
}

// CompactInPlace @ 14338ed80

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::CompactInPlace
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FCompactMaps *param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FBoneWeights *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar11 = (longlong)(param_1->VertMap).ArrayNum;
  uVar9 = 0;
  if (0 < lVar11) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < (param_1->VertMap).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)((param_1->VertMap).AllocatorInstance.Data + lVar7 * 4);
      if (uVar4 != 0xffffffff) {
        if ((int)uVar9 < (int)uVar4) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1891171441567596420>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                             ,0x7c,"ToVID <= VID");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          uVar6 = (this->VertexBoneWeights).CurBlock;
          pFVar8 = (FBoneWeights *)
                   ((ulonglong)(uVar9 & 0x1ff) * 0x40 +
                   *(longlong *)
                    ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar9 >> 9) * 8));
          uVar5 = (this->VertexBoneWeights).CurBlockUsed;
          uVar10 = uVar6 * 0x200 + uVar5;
          if (uVar4 == uVar10) {
            if (uVar5 == 0x200) {
              if (uVar6 == (this->VertexBoneWeights).Blocks.ArrayNum - 1U) {
                TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                          (&this->VertexBoneWeights);
              }
              (this->VertexBoneWeights).CurBlock = (this->VertexBoneWeights).CurBlock + 1;
              uVar5 = 0;
              uVar6 = (this->VertexBoneWeights).CurBlock;
              (this->VertexBoneWeights).CurBlockUsed = 0;
            }
            AnimationCore::FBoneWeights::operator=
                      ((FBoneWeights *)
                       ((longlong)(int)uVar5 * 0x40 +
                       *(longlong *)
                        ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                        (longlong)(int)uVar6 * 8)),pFVar8);
            puVar1 = &(this->VertexBoneWeights).CurBlockUsed;
            *puVar1 = *puVar1 + 1;
          }
          else if (uVar10 < uVar4) {
            TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
                      (&this->VertexBoneWeights,uVar4);
            uVar4 = (this->VertexBoneWeights).CurBlockUsed;
            if (uVar4 == 0x200) {
              if ((this->VertexBoneWeights).CurBlock ==
                  (this->VertexBoneWeights).Blocks.ArrayNum - 1U) {
                TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                          (&this->VertexBoneWeights);
              }
              (this->VertexBoneWeights).CurBlock = (this->VertexBoneWeights).CurBlock + 1;
              uVar4 = 0;
              (this->VertexBoneWeights).CurBlockUsed = 0;
            }
            AnimationCore::FBoneWeights::operator=
                      ((FBoneWeights *)
                       ((longlong)(int)uVar4 * 0x40 +
                       *(longlong *)
                        ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                        (longlong)(int)(this->VertexBoneWeights).CurBlock * 8)),pFVar8);
            puVar1 = &(this->VertexBoneWeights).CurBlockUsed;
            *puVar1 = *puVar1 + 1;
          }
          else {
            AnimationCore::FBoneWeights::operator=
                      ((FBoneWeights *)
                       ((ulonglong)(uVar4 & 0x1ff) * 0x40 +
                       *(longlong *)
                        ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar4 >> 9) * 8)),pFVar8);
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar11);
  }
  TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
            (&this->VertexBoneWeights,
             (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed);
  return;
}

// CopyIn @ 1433950c0

bool __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::CopyIn
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  if (param_3 != 0x40) {
    return false;
  }
  AnimationCore::FBoneWeights::operator=
            ((FBoneWeights *)
             ((ulonglong)(param_1 & 0x1ff) * 0x40 +
             *(longlong *)
              ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8)),param_2);
  return true;
}

// CopyOut @ 143395110

bool __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::CopyOut
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0x40) {
    return false;
  }
  lVar4 = (ulonglong)(param_1 & 0x1ff) * 0x40;
  lVar2 = *(longlong *)
           ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  uVar3 = ((undefined8 *)(lVar2 + lVar4))[1];
  *(undefined8 *)param_2 = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)((longlong)param_2 + 8) = uVar3;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar4);
  uVar3 = puVar1[1];
  *(undefined8 *)((longlong)param_2 + 0x10) = *puVar1;
  *(undefined8 *)((longlong)param_2 + 0x18) = uVar3;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar4);
  uVar3 = puVar1[1];
  *(undefined8 *)((longlong)param_2 + 0x20) = *puVar1;
  *(undefined8 *)((longlong)param_2 + 0x28) = uVar3;
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar4);
  uVar3 = puVar1[1];
  *(undefined8 *)((longlong)param_2 + 0x30) = *puVar1;
  *(undefined8 *)((longlong)param_2 + 0x38) = uVar3;
  return true;
}

// CopyThroughMapping @ 143395180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::CopyThroughMapping
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FMeshIndexMappings *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar6;
  FMeshIndexMappings *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  FMeshIndexMappings *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_c8;
  FMeshIndexMappings *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FBoneWeights local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  iVar3 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x28;
  puVar1 = &(param_2->VertexMap).ForwardMap.field_0x10;
  iStack_f8 = 0;
  uStack_f4 = 1;
  local_e0 = 0;
  iStack_e4 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_14339522e;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    iStack_e4 = local_e0 + -1 + local_d0;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_14339522e:
  uVar15 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_d8 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x8 -
              *(int *)&(param_2->VertexMap).ForwardMap.field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_b8.CurrentBitIndex = iStack_e4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_b8._28_4_ = iStack_e4;
  TStack_b8.BaseBitIndex = local_e0;
  uStack_98 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = param_2;
  local_f0 = puVar1;
  iStack_dc = iStack_e4;
  local_c8 = this;
  local_c0 = param_2;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pTVar6 = local_c8;
  uVar4 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143395340;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_cc = (int)lVar11;
    uVar15 = local_cc + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_143395340:
  while( true ) {
    pFVar7 = local_c0;
    if (*(int *)&(local_c0->VertexMap).ForwardMap.field_0x8 -
        *(int *)&(local_c0->VertexMap).ForwardMap.field_0x34 != (int)uStack_98) {
      local_108[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (((TStack_b8.CurrentBitIndex == uVar15) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == param_2))
    break;
    puVar13 = (undefined4 *)
              (*(longlong *)&(pFVar7->VertexMap).ForwardMap +
              (longlong)TStack_b8.CurrentBitIndex * 0x10);
    cVar10 = (**(code **)(param_1->_padding_ + 0x48))(param_1,*puVar13,&local_88,0x40);
    if (cVar10 == '\0') {
      bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1891171441567596256>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                         ,0x120,"Source->CopyOut(MapVID.Key, &BufferData, BufferSize)");
      if (!bVar8) {
        return false;
      }
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    uVar14 = puVar13[1];
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)
               ((ulonglong)(uVar14 & 0x1ff) * 0x40 +
               *(longlong *)
                ((pTVar6->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar14 >> 9) * 8)),&local_88);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  return true;
}

// CopyValue @ 143395440

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::CopyValue
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  FBoneWeights *pFVar4;
  uint uVar5;
  
  this_00 = &this->VertexBoneWeights;
  uVar2 = (this->VertexBoneWeights).CurBlockUsed;
  uVar3 = this_00->CurBlock;
  pFVar4 = (FBoneWeights *)
           ((ulonglong)(param_1 & 0x1ff) * 0x40 +
           *(longlong *)
            ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8));
  uVar5 = uVar3 * 0x200 + uVar2;
  if (param_2 == uVar5) {
    if (uVar2 == 0x200) {
      if (uVar3 == (this->VertexBoneWeights).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar3 = this_00->CurBlock;
      uVar2 = 0;
      (this->VertexBoneWeights).CurBlockUsed = 0;
    }
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)
               ((longlong)(int)uVar2 * 0x40 +
               *(longlong *)
                ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data + (longlong)(int)uVar3 * 8)
               ),pFVar4);
    puVar1 = &(this->VertexBoneWeights).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    return;
  }
  if (uVar5 < (uint)param_2) {
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize(this_00,param_2);
    uVar2 = (this->VertexBoneWeights).CurBlockUsed;
    if (uVar2 == 0x200) {
      if (this_00->CurBlock == (this->VertexBoneWeights).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar2 = 0;
      (this->VertexBoneWeights).CurBlockUsed = 0;
    }
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)
               ((longlong)(int)uVar2 * 0x40 +
               *(longlong *)
                ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                (longlong)(int)this_00->CurBlock * 8)),pFVar4);
    puVar1 = &(this->VertexBoneWeights).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
    return;
  }
  AnimationCore::FBoneWeights::operator=
            ((FBoneWeights *)
             ((ulonglong)(param_2 & 0x1ff) * 0x40 +
             *(longlong *)
              ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_2 >> 9) * 8)),pFVar4);
  return;
}

// GetByteCount @ 1433a2d50

ulong64 __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::GetByteCount
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this)

{
  return (longlong)((this->VertexBoneWeights).Blocks.ArrayNum << 9) << 6;
}

// Initialize @ 1433b7750

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FBoneWeights *param_1)

{
  uchar *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar5;
  code *pcVar6;
  bool bVar7;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  
  if ((this->Parent == (FDynamicMesh3 *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                         ,0x98,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
            (&this->VertexBoneWeights,
             (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar2 = (this->VertexBoneWeights).Blocks.ArrayNum;
  uVar11 = 0;
  if (uVar2 != 0) {
    do {
      if (uVar11 < uVar2 - 1) {
        uVar9 = 0x200;
LAB_1433b7816:
        uVar10 = 0;
        do {
          FVar8 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                  (*(longlong *)
                    ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                    (longlong)(int)uVar11 * 8) + (longlong)(int)uVar10 * 0x40);
          if (FVar8 != (ForElementType<UE::AnimationCore::FBoneWeight>)param_1) {
            FVar5 = (param_1->BoneWeights).AllocatorInstance.SecondaryData;
            puVar1 = (uchar *)((longlong)FVar8 + 0x3c);
            iVar3 = (param_1->BoneWeights).ArrayNum;
            iVar4 = *(int *)puVar1;
            _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)param_1;
            if (FVar5 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              _Src = FVar5;
            }
            *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar8 + 0x38))->
                    InlineData = iVar3;
            if ((iVar3 == 0) && (iVar4 == 0)) {
              puVar1[0] = '\f';
              puVar1[1] = '\0';
              puVar1[2] = '\0';
              puVar1[3] = '\0';
            }
            else {
              Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                        (4,2,iVar3,iVar4,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar8,
                         iVar3,(int *)puVar1);
              if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar8 + 0x30) !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar8 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar8 + 0x30);
              }
              if (iVar3 != 0) {
                memcpy((void *)FVar8,(void *)_Src,(longlong)iVar3 << 2);
              }
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar9);
      }
      else {
        uVar9 = ((this->VertexBoneWeights).CurBlock - (uVar2 - 1)) * 0x200 +
                (this->VertexBoneWeights).CurBlockUsed;
        if (uVar9 != 0) goto LAB_1433b7816;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  FVar8 = (param_1->BoneWeights).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  return;
}

// MakeCompactCopy @ 1433bc770

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::MakeCompactCopy
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FCompactMaps *param_1,FDynamicMesh3 *param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this_01;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this_02;
  FBoneWeights local_48;
  
  this_01 = ::operator_new(0x30);
  this_02 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
  if (this_01 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00 = &this_01->VertexBoneWeights;
    this_01->_padding_ = 0;
    this_01->Parent = param_2;
    this_01->_padding_ =
         (longlong)
         &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->VertexBoneWeights).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->VertexBoneWeights).Blocks.ArrayNum = 0;
    (this_01->VertexBoneWeights).Blocks.ArrayMax = 0;
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
    local_48.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
    local_48.BoneWeights.ArrayNum = 0;
    local_48.BoneWeights.ArrayMax = 0xc;
    local_48.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
    local_48.BoneWeights.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    Initialize(this_01,&local_48);
    this_02 = this_01;
  }
  local_48.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
  local_48.BoneWeights.ArrayNum = 0;
  local_48.BoneWeights.ArrayMax = 0xc;
  local_48.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
  local_48.BoneWeights.AllocatorInstance.SecondaryData =
       (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  Initialize(this_02,&local_48);
  CompactCopy(this_02,param_1,this);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_02;
}

// MakeCopy @ 1433bc870

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::MakeCopy
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FDynamicMesh3 *param_1)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this_01;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar1;
  FBoneWeights local_48;
  
  this_01 = ::operator_new(0x30);
  pTVar1 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
  if (this_01 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00 = &this_01->VertexBoneWeights;
    this_01->_padding_ = 0;
    this_01->Parent = param_1;
    this_01->_padding_ =
         (longlong)
         &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->VertexBoneWeights).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->VertexBoneWeights).Blocks.ArrayNum = 0;
    (this_01->VertexBoneWeights).Blocks.ArrayMax = 0;
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
    local_48.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
    local_48.BoneWeights.ArrayNum = 0;
    local_48.BoneWeights.ArrayMax = 0xc;
    local_48.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
    local_48.BoneWeights.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    Initialize(this_01,&local_48);
    pTVar1 = this_01;
  }
  pTVar1->_padding_ = this->_padding_;
  TDynamicVector<UE::AnimationCore::FBoneWeights,512>::operator=
            (&pTVar1->VertexBoneWeights,&this->VertexBoneWeights);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar1;
}

// MakeNew @ 1433bc940

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::MakeNew
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FDynamicMesh3 *param_1)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this_01;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this_02;
  FBoneWeights local_48;
  
  this_01 = ::operator_new(0x30);
  this_02 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
  if (this_01 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00 = &this_01->VertexBoneWeights;
    this_01->_padding_ = 0;
    this_01->Parent = param_1;
    this_01->_padding_ =
         (longlong)
         &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    (this_01->VertexBoneWeights).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_01->VertexBoneWeights).Blocks.ArrayNum = 0;
    (this_01->VertexBoneWeights).Blocks.ArrayMax = 0;
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
    local_48.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
    local_48.BoneWeights.ArrayNum = 0;
    local_48.BoneWeights.ArrayMax = 0xc;
    local_48.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
    local_48.BoneWeights.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    Initialize(this_01,&local_48);
    this_02 = this_01;
  }
  local_48.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
  local_48.BoneWeights.ArrayNum = 0;
  local_48.BoneWeights.ArrayMax = 0xc;
  local_48.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
  local_48.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
  local_48.BoneWeights.AllocatorInstance.SecondaryData =
       (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  Initialize(this_02,&local_48);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_02;
}

// NewBlankChange @ 1433c08e0

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::NewBlankChange
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(0x28);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &
         ___7__TDynamicVertexSkinWeightsAttributeChange_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_
    ;
    *(undefined8 *)((longlong)TVar1 + 8) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x20) = 0;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// OnCollapseEdge @ 1433c0bf0

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::OnCollapseEdge
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FEdgeCollapseInfo *param_1)

{
  SetBoneWeightsFromLerp
            (this,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,param_1->CollapseT)
  ;
  return;
}

// OnFlipEdge @ 1433c0c30

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::OnFlipEdge
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FEdgeFlipInfo *param_1)

{
  return;
}

// OnMergeEdges @ 1433c0c50

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::OnMergeEdges
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FMergeEdgesInfo *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->RemovedVerts).field0_0x0._s_0.A;
  if (iVar1 != -1) {
    iVar2 = (param_1->KeptVerts).field0_0x0._s_0.A;
    SetBoneWeightsFromLerp(this,iVar2,iVar2,iVar1,param_1->InterpolationT);
  }
  iVar1 = (param_1->RemovedVerts).field0_0x0._s_0.B;
  if (iVar1 != -1) {
    iVar2 = (param_1->KeptVerts).field0_0x0._s_0.B;
    SetBoneWeightsFromLerp(this,iVar2,iVar2,iVar1,param_1->InterpolationT);
  }
  return;
}

// OnMergeVertices @ 1433c0cd0

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::OnMergeVertices
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FMergeVerticesInfo *param_1)

{
  SetBoneWeightsFromLerp
            (this,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->InterpolationT);
  return;
}

// OnNewVertex @ 1433c0d20

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::OnNewVertex
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,int param_1,
          bool param_2)

{
  uchar *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<UE::AnimationCore::FBoneWeight> *pFVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<UE::AnimationCore::FBoneWeight> FStack_58;
  
  if (param_1 < 0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1891171441567596094>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                       ,0x1c2,"VertexID >= 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar6 = (this->VertexBoneWeights).CurBlockUsed + (this->VertexBoneWeights).CurBlock * 0x200;
    if ((ulonglong)uVar6 < (longlong)param_1 + 1U) {
      uVar7 = (uint)((longlong)param_1 + 1U);
      TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize(&this->VertexBoneWeights,uVar7);
      for (; uVar6 < uVar7; uVar6 = uVar6 + 1) {
        pFVar5 = (ForElementType<UE::AnimationCore::FBoneWeight> *)
                 (*(longlong *)
                   ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 0x40);
        if (pFVar5 != &FStack_58) {
          iVar2 = *(int *)(pFVar5[1].InlineData + 4);
          puVar1 = pFVar5[1].InlineData + 4;
          pFVar5[1].InlineData[0] = '\0';
          pFVar5[1].InlineData[1] = '\0';
          pFVar5[1].InlineData[2] = '\0';
          pFVar5[1].InlineData[3] = '\0';
          if (iVar2 == 0) {
            puVar1[0] = '\f';
            puVar1[1] = '\0';
            puVar1[2] = '\0';
            puVar1[3] = '\0';
          }
          else {
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,0,iVar2,pFVar5,0,(int *)puVar1);
          }
        }
      }
    }
  }
  return;
}

// OnPokeTriangle @ 1433c0d40

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::OnPokeTriangle
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FPokeTriangleInfo *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int local_18;
  int iStack_14;
  
  uVar1 = *(undefined8 *)&(param_1->TriVertices).field0_0x0;
  iVar2 = (param_1->TriVertices).field0_0x0._s_0.C;
  ResizeAttribStoreIfNeeded(this,param_1->NewVertex);
  iStack_14 = (int)((ulonglong)uVar1 >> 0x20);
  local_18 = (int)uVar1;
  SetBoneWeightsFromBary(this,param_1->NewVertex,local_18,iStack_14,iVar2,&param_1->BaryCoords);
  return;
}

// OnSplitEdge @ 1433c0df0

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::OnSplitEdge
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FEdgeSplitInfo *param_1)

{
  ResizeAttribStoreIfNeeded(this,param_1->NewVertex);
  SetBoneWeightsFromLerp
            (this,param_1->NewVertex,(param_1->OriginalVertices).field0_0x0._s_0.A,
             (param_1->OriginalVertices).field0_0x0._s_0.B,param_1->SplitT);
  return;
}

// OnSplitVertex @ 1433c0e50

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::OnSplitVertex
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FVertexSplitInfo *param_1,TArrayView<int_const_,int> *param_2)

{
  CopyValue(this,param_1->OriginalVertex,param_1->NewVertex);
  return;
}

// ReindexBoneIndicesToSkeleton @ 1433c2200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
ReindexBoneIndicesToSkeleton
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  uchar *puVar1;
  TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong lVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ForAnyElementType FVar15;
  ushort *puVar16;
  FBoneWeight FVar17;
  uint uVar18;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar19;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  void *_Src_00;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint uVar25;
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  undefined1 auStackY_218 [32];
  uint local_1d8 [2];
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> local_1d0;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_1b8;
  uint local_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a8;
  undefined4 local_1a0;
  uint uStack_19c;
  uint uStack_198;
  undefined4 uStack_194;
  FBoneWeightsSettings local_190;
  undefined4 local_180;
  int local_17c;
  TPairInitializer<FName_const_&,int_const_&> local_178;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_168;
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *local_160;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  FScriptContainerElement *local_130;
  uint *local_128;
  undefined1 local_118 [32];
  uint *local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined1 local_e0 [8];
  ForAnyElementType local_d8;
  uint local_d0;
  ForElementType<UE::AnimationCore::FBoneWeight> local_c8;
  int local_90;
  int local_8c;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_00 = &this->VertexBoneWeights;
  if ((this->VertexBoneWeights).CurBlock * 0x200 + (this->VertexBoneWeights).CurBlockUsed == 0) {
    return true;
  }
  uVar12 = param_2->ArrayNum;
  local_1b8 = param_1;
  local_178.Value = (int *)this;
  local_160 = this_00;
  if ((param_1->ArrayNum == uVar12) &&
     (bVar10 = CompareItems<FName,int>
                         ((FName *)(param_1->AllocatorInstance).Data,
                          (FName *)(param_2->AllocatorInstance).Data,param_1->ArrayNum), bVar10)) {
    return true;
  }
  uVar22 = 0;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_f8 = (uint *)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  uVar18 = 1;
  if (uVar12 == 0) goto LAB_1433c24fb;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_118,uVar12);
  if (3 < uVar12) {
    uVar21 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_180 = (undefined4)lVar8;
    uVar18 = 1 << ((byte)lVar8 & 0x1f);
  }
  if ((local_d0 != 0) && ((int)uVar18 <= (int)local_d0)) goto LAB_1433c24fb;
  local_d0 = uVar18;
  if ((ForElementType<FSetElementId>)local_d8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,0,4);
  }
  if (uVar18 != 0) {
    uVar12 = uVar18;
    if (uVar18 < 2) {
      if ((ForElementType<FSetElementId>)local_d8.Data != (ForElementType<FSetElementId>)0x0) {
        uVar12 = 0;
        goto LAB_1433c233f;
      }
    }
    else {
LAB_1433c233f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d8,0,uVar12,4);
    }
    if (0 < (int)uVar18) {
      uVar23 = (ulonglong)uVar18;
      uVar21 = uVar22;
      do {
        FVar15.Data = (FScriptContainerElement *)local_e0;
        if ((ForElementType<FSetElementId>)local_d8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar15.Data = local_d8.Data;
        }
        uVar13 = uVar21 & (longlong)(int)uVar18 - 1U;
        uVar21 = uVar21 + 1;
        *(undefined4 *)((longlong)FVar15.Data + uVar13 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_d0 != 0) {
    pTStack_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
    local_1b0 = 0;
    uStack_1ac = 1;
    uStack_19c = 0;
    uStack_198 = 0;
    uVar21 = uVar22;
    if (local_f0 != 0) {
      puVar24 = (uint *)(local_118 + 0x10);
      if (local_f8 != (uint *)0x0) {
        puVar24 = local_f8;
      }
      uVar12 = *puVar24;
      uVar23 = uVar22;
      while (uVar12 == 0) {
        uStack_198 = (int)uVar23 + 0x20;
        uVar23 = (ulonglong)uStack_198;
        iVar14 = (int)uVar21;
        local_1b0 = iVar14 + 1;
        uVar21 = (ulonglong)local_1b0;
        if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1b0)
        goto LAB_1433c244f;
        uVar12 = puVar24[(longlong)iVar14 + 1];
      }
      uStack_1ac = -uVar12 & uVar12;
      uVar21 = (ulonglong)uStack_1ac * 2 + 1;
      lVar8 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_17c = (int)lVar8;
      uStack_19c = (uStack_198 - 1) + local_17c;
      uVar21 = (ulonglong)uStack_19c;
      if ((int)local_f0 < (int)uStack_19c) {
LAB_1433c244f:
        uVar21 = (ulonglong)local_f0;
        uStack_19c = local_f0;
      }
    }
    local_1a0 = 0xffffffff;
    local_150._padding_ = CONCAT44(uStack_1ac,local_1b0);
    local_150.CurrentBitIndex = uStack_19c;
    local_150.UnvisitedBitMask = 0xffffffff;
    local_150._28_4_ = uStack_194;
    local_150.BaseBitIndex = uStack_198;
    param_1 = local_1b8;
    local_158 = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)local_118;
    local_150.Array = pTStack_1a8;
    if ((int)uVar21 < (int)local_f0) {
      do {
        iVar14 = (int)uVar21;
        uVar6 = *(undefined8 *)(*(longlong *)&local_158->Elements + (longlong)iVar14 * 0x14);
        lVar8 = *(longlong *)&local_158->Elements + (longlong)iVar14 * 0x14;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
        uVar12 = local_d0 - 1 & uVar12 + (int)((ulonglong)uVar6 >> 0x20);
        *(uint *)(lVar8 + 0x10) = uVar12;
        FVar15.Data = (FScriptContainerElement *)local_e0;
        if ((ForElementType<FSetElementId>)local_d8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar15.Data = local_d8.Data;
        }
        uVar21 = (longlong)(int)local_d0 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)((longlong)FVar15.Data + uVar21 * 4);
        *(int *)((longlong)FVar15.Data + uVar21 * 4) = iVar14;
        local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
        uVar21 = (ulonglong)(uint)local_150.CurrentBitIndex;
        param_1 = local_1b8;
      } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
    }
  }
LAB_1433c24fb:
  iVar14 = param_2->ArrayNum;
  local_1d8[0] = 0;
  uVar21 = uVar22;
  if (0 < iVar14) {
    do {
      uVar18 = (uint)uVar21;
      uVar12 = 0;
      if ((int)uVar18 < iVar14) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      pFVar7 = (param_2->AllocatorInstance).Data;
      lVar8 = *(longlong *)(pFVar7 + (longlong)(int)uVar18 * 8);
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar8);
      if (local_118._8_4_ != local_e4) {
        FVar15.Data = (FScriptContainerElement *)local_e0;
        if ((ForElementType<FSetElementId>)local_d8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar15.Data = local_d8.Data;
        }
        for (iVar14 = *(int *)((longlong)FVar15.Data +
                              (ulonglong)(local_d0 - 1 & (int)((ulonglong)lVar8 >> 0x20) + uVar12) *
                              4); iVar14 != -1;
            iVar14 = *(int *)(local_118._0_8_ + 0xc + (longlong)iVar14 * 0x14)) {
          if (*(longlong *)(local_118._0_8_ + (longlong)iVar14 * 0x14) == lVar8) {
            bVar10 = false;
            goto LAB_1433c2a07;
          }
        }
      }
      local_128 = local_1d8;
      local_130 = pFVar7 + (longlong)(int)uVar18 * 8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)local_118,&local_178,(bool *)&local_130);
      iVar14 = param_2->ArrayNum;
      local_1d8[0] = local_1d8[0] + 1;
      uVar21 = (ulonglong)local_1d8[0];
    } while ((int)local_1d8[0] < iVar14);
  }
  local_1d0.CurBlock = 0;
  local_1d0.CurBlockUsed = 0;
  local_1d0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Blocks.ArrayNum = 0;
  local_1d0.Blocks.ArrayMax = 0;
  TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(&local_1d0);
  TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
            (&local_1d0,this_00->CurBlock * 0x200 + (this->VertexBoneWeights).CurBlockUsed);
  local_190.MaxWeightCount = 0xc;
  local_190.WeightThreshold = 1;
  local_190.DefaultBoneIndex = 0;
  local_190.bHasDefaultBoneIndex = false;
  local_190.bBlendZeroInfluence = true;
  local_190.NormalizeType = None;
  if (this_00->CurBlock * 0x200 + (this->VertexBoneWeights).CurBlockUsed != 0) {
    do {
      uVar12 = (uint)uVar22;
      lVar8 = (uVar22 >> 9) * 8;
      _Src_00 = (void *)((ulonglong)(uVar12 & 0x1ff) * 0x40 +
                        *(longlong *)
                         ((((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)
                           ((longlong)local_178.Value + 0x18))->Blocks).AllocatorInstance.Data +
                         lVar8));
      local_c8.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      iVar14 = *(int *)((longlong)_Src_00 + 0x38);
      local_90 = iVar14;
      if (*(void **)((longlong)_Src_00 + 0x30) != (void *)0x0) {
        _Src_00 = *(void **)((longlong)_Src_00 + 0x30);
      }
      if (iVar14 == 0) {
        local_8c = 0xc;
        iVar14 = 0;
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                  (4,2,iVar14,0,&local_c8,iVar14,&local_8c);
        FVar19 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar19 = local_c8.SecondaryData;
        }
        memcpy((void *)FVar19,_Src_00,(longlong)iVar14 << 2);
        iVar14 = local_90;
      }
      uVar22 = 0;
      if (iVar14 != 0) {
        local_88.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        local_88.ArrayNum = 0;
        local_88.ArrayMax = 0xc;
        uVar21 = uVar22;
        if (0 < iVar14) {
          do {
            uVar25 = (uint)uVar22;
            uVar18 = 0;
            if ((int)uVar25 < iVar14) {
              uVar18 = ~uVar25 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            FVar19 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
            if (local_c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar19 = local_c8.SecondaryData;
            }
            if (param_1->ArrayNum <= (int)(uint)*(ushort *)(uVar21 + (longlong)FVar19)) {
LAB_1433c2818:
              if (local_88.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
              }
              if (local_c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FMemory::Free((void *)local_c8.SecondaryData);
              }
              bVar10 = false;
              goto LAB_1433c29e5;
            }
            uVar4 = *(ushort *)(uVar21 + 2 + (longlong)FVar19);
            lVar20 = *(longlong *)
                      ((param_1->AllocatorInstance).Data +
                      (ulonglong)*(ushort *)(uVar21 + (longlong)FVar19) * 8);
            uVar18 = ::GetTypeHash((FNameEntryId)(uint)lVar20);
            if (local_118._8_4_ == local_e4) goto LAB_1433c2818;
            FVar15.Data = (FScriptContainerElement *)local_e0;
            if ((ForElementType<FSetElementId>)local_d8.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar15.Data = local_d8.Data;
            }
            iVar14 = *(int *)((longlong)FVar15.Data +
                             (ulonglong)(local_d0 - 1 & (int)((ulonglong)lVar20 >> 0x20) + uVar18) *
                             4);
            while( true ) {
              if (iVar14 == -1) goto LAB_1433c2818;
              lVar3 = local_118._0_8_ + (longlong)iVar14 * 0x14;
              if (*(longlong *)(local_118._0_8_ + (longlong)iVar14 * 0x14) == lVar20) break;
              iVar14 = *(int *)(lVar3 + 0xc);
            }
            puVar16 = (ushort *)(lVar3 + 8);
            if (lVar3 == 0) {
              puVar16 = (ushort *)0x0;
            }
            if (puVar16 == (ushort *)0x0) goto LAB_1433c2818;
            local_168.Container = &local_88;
            FVar17.RawWeight = uVar4;
            FVar17.BoneIndex = *puVar16;
            AnimationCore::
            TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
            ::
            AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                      (&local_168,FVar17,&local_190);
            iVar14 = local_88.ArrayNum;
            FVar19 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                     ((ulonglong)(uVar12 & 0x1ff) * 0x40 +
                     *(longlong *)(local_1d0.Blocks.AllocatorInstance.Data + lVar8));
            if (FVar19 != (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88) {
              lVar20 = (longlong)local_88.ArrayNum;
              puVar1 = (uchar *)((longlong)FVar19 + 0x3c);
              iVar5 = *(int *)puVar1;
              *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar19 + 0x38))
                      ->InlineData = local_88.ArrayNum;
              _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
              if (local_88.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                _Src = local_88.AllocatorInstance.SecondaryData;
              }
              if ((local_88.ArrayNum == 0) && (iVar5 == 0)) {
                puVar1[0] = '\f';
                puVar1[1] = '\0';
                puVar1[2] = '\0';
                puVar1[3] = '\0';
                param_1 = local_1b8;
              }
              else {
                Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                          (4,2,local_88.ArrayNum,iVar5,
                           (ForElementType<UE::AnimationCore::FBoneWeight> *)FVar19,
                           local_88.ArrayNum,(int *)puVar1);
                if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar19 + 0x30) !=
                    (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                  FVar19 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)
                            ((longlong)FVar19 + 0x30);
                }
                param_1 = local_1b8;
                if (iVar14 != 0) {
                  memcpy((void *)FVar19,(void *)_Src,lVar20 << 2);
                  param_1 = local_1b8;
                }
              }
            }
            uVar22 = (ulonglong)(uVar25 + 1);
            uVar21 = uVar21 + 4;
            this_00 = local_160;
            iVar14 = local_90;
          } while ((int)(uVar25 + 1) < local_90);
        }
        if (local_88.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
        }
      }
      if (local_c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_c8.SecondaryData);
      }
      uVar22 = (ulonglong)(uVar12 + 1);
    } while ((ulonglong)(longlong)(int)(uVar12 + 1) <
             (ulonglong)(this_00->CurBlock * 0x200 + this_00->CurBlockUsed));
  }
  if (this_00 != &local_1d0) {
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty(this_00,0);
    pTVar2 = &this_00->Blocks;
    this_00->CurBlock = local_1d0.CurBlock;
    this_00->CurBlockUsed = local_1d0.CurBlockUsed;
    if (pTVar2 != &local_1d0.Blocks) {
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar2->AllocatorInstance).Data = local_1d0.Blocks.AllocatorInstance.Data;
      (this_00->Blocks).ArrayNum = local_1d0.Blocks.ArrayNum;
      (this_00->Blocks).ArrayMax = local_1d0.Blocks.ArrayMax;
      local_1d0.Blocks.ArrayNum = 0;
      local_1d0.Blocks.ArrayMax = 0;
      local_1d0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_1d0.CurBlock = 0;
    local_1d0.CurBlockUsed = 0;
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(&local_1d0);
  }
  bVar10 = true;
LAB_1433c29e5:
  TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty(&local_1d0,0);
  if (local_1d0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Blocks.AllocatorInstance.Data);
  }
LAB_1433c2a07:
  local_d0 = 0;
  if ((ForElementType<FSetElementId>)local_d8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_d8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  return bVar10;
}

// Reparent @ 1433c4bf0

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Reparent
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FDynamicMesh3 *param_1)

{
  this->Parent = param_1;
  return;
}

// ResizeAttribStoreIfNeeded @ 1433c6f30

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
ResizeAttribStoreIfNeeded
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  uchar *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<UE::AnimationCore::FBoneWeight> *pFVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<UE::AnimationCore::FBoneWeight> local_58;
  
  if (param_1 < 0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1891171441567596094>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexSkinWeightsAttribute.h"
                       ,0x1c2,"VertexID >= 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar6 = (this->VertexBoneWeights).CurBlockUsed + (this->VertexBoneWeights).CurBlock * 0x200;
    if ((ulonglong)uVar6 < (longlong)param_1 + 1U) {
      uVar7 = (uint)((longlong)param_1 + 1U);
      TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize(&this->VertexBoneWeights,uVar7);
      for (; uVar6 < uVar7; uVar6 = uVar6 + 1) {
        pFVar5 = (ForElementType<UE::AnimationCore::FBoneWeight> *)
                 (*(longlong *)
                   ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 0x40);
        if (pFVar5 != &local_58) {
          iVar2 = *(int *)(pFVar5[1].InlineData + 4);
          puVar1 = pFVar5[1].InlineData + 4;
          pFVar5[1].InlineData[0] = '\0';
          pFVar5[1].InlineData[1] = '\0';
          pFVar5[1].InlineData[2] = '\0';
          pFVar5[1].InlineData[3] = '\0';
          if (iVar2 == 0) {
            puVar1[0] = '\f';
            puVar1[1] = '\0';
            puVar1[2] = '\0';
            puVar1[3] = '\0';
          }
          else {
            Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,0,iVar2,pFVar5,0,(int *)puVar1);
          }
        }
      }
    }
  }
  return;
}

// SetBoneWeightsFromBary @ 1433c71f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
SetBoneWeightsFromBary
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,int param_4,TVector<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  longlong lVar4;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStackY_188 [32];
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_148;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_140;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_138;
  FBoneWeightsSettings local_130;
  FBoneWeightsSettings local_120;
  FBoneWeights local_108;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar9 = (float)(param_5->field0_0x0)._s_0.X;
  fVar8 = (float)(param_5->field0_0x0)._s_0.Y;
  fVar7 = (float)(param_5->field0_0x0)._s_0.Z;
  uVar2 = param_2;
  if ((((float)((uint)(fVar9 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) ||
      (uVar2 = param_3,
      (float)((uint)(fVar8 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77)) ||
     (uVar2 = param_4,
     (float)((uint)(fVar7 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
     __real_322bcc77)) {
    if (param_1 != uVar2) {
      pFVar1 = (this->VertexBoneWeights).Blocks.AllocatorInstance.Data;
      AnimationCore::FBoneWeights::operator=
                ((FBoneWeights *)
                 ((ulonglong)(param_1 & 0x1ff) * 0x40 +
                 *(longlong *)(pFVar1 + (ulonglong)((uint)param_1 >> 9) * 8)),
                 (FBoneWeights *)
                 ((ulonglong)(uVar2 & 0x1ff) * 0x40 +
                 *(longlong *)(pFVar1 + (ulonglong)(uVar2 >> 9) * 8)));
    }
  }
  else {
    pFVar1 = (this->VertexBoneWeights).Blocks.AllocatorInstance.Data;
    local_130.bHasDefaultBoneIndex = false;
    local_130.bBlendZeroInfluence = true;
    local_130._14_2_ = 0;
    local_130.NormalizeType = Always;
    fVar8 = fVar7 + fVar8;
    local_130.MaxWeightCount = 0xc;
    local_130.WeightThreshold = 1;
    local_130.DefaultBoneIndex = 0;
    pTVar5 = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              *)((ulonglong)(param_4 & 0x1ff) * 0x40 +
                *(longlong *)(pFVar1 + (ulonglong)((uint)param_4 >> 9) * 8));
    pTVar6 = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              *)((ulonglong)(param_3 & 0x1ff) * 0x40 +
                *(longlong *)(pFVar1 + (ulonglong)((uint)param_3 >> 9) * 8));
    pTVar3 = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              *)((ulonglong)(param_2 & 0x1ff) * 0x40 +
                *(longlong *)(pFVar1 + (ulonglong)((uint)param_2 >> 9) * 8));
    if ((float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      AnimationCore::FBoneWeights::FBoneWeights(&local_108,(FBoneWeights *)pTVar3);
    }
    else {
      local_120.MaxWeightCount = pTVar5->ArrayNum + pTVar6->ArrayNum;
      if (local_120.MaxWeightCount < 1) {
        local_120.MaxWeightCount = 1;
      }
      local_120.WeightThreshold = 1;
      local_120.DefaultBoneIndex = 0;
      local_120.bHasDefaultBoneIndex = false;
      local_120.bBlendZeroInfluence = true;
      local_120.NormalizeType = None;
      local_88.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0
      ;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0xc;
      local_148.Container = pTVar5;
      local_140.Container = pTVar6;
      local_138.Container = &local_88;
      AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::
      Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                (&local_138,&local_140,&local_148,fVar7 / fVar8,&local_120);
      local_148.Container = &local_c8;
      local_c8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0
      ;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0xc;
      local_140.Container = &local_88;
      local_138.Container = pTVar3;
      AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::
      Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                (&local_148,&local_140,&local_138,fVar9,&local_130);
      lVar4 = (longlong)local_c8.ArrayNum;
      local_108.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
      if (local_c8.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        _Src = local_c8.AllocatorInstance.SecondaryData;
      }
      local_108.BoneWeights.ArrayNum = local_c8.ArrayNum;
      if (local_c8.ArrayNum == 0) {
        local_108.BoneWeights.ArrayMax = 0xc;
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                  (4,2,local_c8.ArrayNum,0,
                   (ForElementType<UE::AnimationCore::FBoneWeight> *)&local_108,local_c8.ArrayNum,
                   &local_108.BoneWeights.ArrayMax);
        _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_108;
        if (local_108.BoneWeights.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          _Dst = local_108.BoneWeights.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,(void *)_Src,lVar4 << 2);
      }
      if (local_c8.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
      }
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
    }
    AnimationCore::FBoneWeights::operator=
              ((FBoneWeights *)
               ((ulonglong)(param_1 & 0x1ff) * 0x40 +
               *(longlong *)
                ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_1 >> 9) * 8)),&local_108);
    if (local_108.BoneWeights.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_108.BoneWeights.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// SetBoneWeightsFromLerp @ 1433c7540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
SetBoneWeightsFromLerp
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,double param_4)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar2;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *_Dst;
  undefined1 auStackY_c8 [32];
  FBoneWeightsSettings local_98;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_88;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_80;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_78 [2];
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (__real_3ff0000000000000 <= param_4) {
    param_4 = __real_3ff0000000000000;
  }
  pFVar1 = (this->VertexBoneWeights).Blocks.AllocatorInstance.Data;
  local_98.bHasDefaultBoneIndex = false;
  local_98.bBlendZeroInfluence = true;
  local_98._14_2_ = 0;
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  local_98.NormalizeType = Always;
  local_98.MaxWeightCount = 0xc;
  local_98.WeightThreshold = 1;
  local_98.DefaultBoneIndex = 0;
  local_88.Container =
       (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
        *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_3 >> 9) * 8) +
          (ulonglong)(param_3 & 0x1ff) * 0x40);
  local_78[0].Container = &local_68;
  local_80.Container =
       (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
        *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_2 >> 9) * 8) +
          (ulonglong)(param_2 & 0x1ff) * 0x40);
  local_68.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0xc;
  AnimationCore::
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::
  Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
            (local_78,&local_80,&local_88,(float)param_4,&local_98);
  _Dst = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)
              ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x40);
  if (_Dst != &local_68) {
    if (local_68.AllocatorInstance.SecondaryData ==
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      memmove(_Dst,&local_68,0x30);
    }
    FVar2 = (_Dst->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    (_Dst->AllocatorInstance).SecondaryData = local_68.AllocatorInstance.SecondaryData;
    local_68.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    _Dst->ArrayNum = local_68.ArrayNum;
    _Dst->ArrayMax = local_68.ArrayMax;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0xc;
  }
  if (local_68.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return;
}

// TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> @ 143450a80

TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,
          FDynamicMesh3 *param_1,bool param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  FBoneWeights local_48;
  
  this->Parent = param_1;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  this_00 = &this->VertexBoneWeights;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->VertexBoneWeights).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexBoneWeights).Blocks.ArrayNum = 0;
  (this->VertexBoneWeights).Blocks.ArrayMax = 0;
  TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
  if (param_2) {
    local_48.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
    local_48.BoneWeights.ArrayNum = 0;
    local_48.BoneWeights.ArrayMax = 0xc;
    local_48.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
    local_48.BoneWeights.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    Initialize(this,&local_48);
  }
  return this;
}

// Serialize @ 143528d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Serialize
          (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this,FArchive *param_1,
          FCompactMaps *param_2,bool param_3)

{
  FBoneWeight FVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FNameEntryId FVar13;
  int iVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FBoneWeight *pFVar15;
  longlong lVar16;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FBoneWeights *pFVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  FScriptContainerElement *_Dst;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool local_res20 [8];
  uint local_c4;
  uint local_c0 [2];
  ulonglong local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> local_a0;
  FBoneWeightsSettings local_88;
  FNameEntryId local_78;
  uint uStack_74;
  uint local_70;
  undefined4 uStack_6c;
  FNameEntryId local_68;
  uint uStack_64;
  uint local_60;
  undefined4 uStack_5c;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_48 [2];
  
  local_res20[0] = param_3;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  ::operator<<(param_1,local_res20);
  if ((param_2 == (FCompactMaps *)0x0) || ((param_2->VertMap).ArrayNum == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  bVar9 = param_1->field_0x28 & 1;
  if (local_res20[0] == false) {
    if ((bVar9 != 0) || (!bVar11)) {
      TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Serialize<0,0>
                (&this->VertexBoneWeights,param_1);
      return;
    }
    uVar21 = 0;
    local_a0.CurBlock = 0;
    local_a0.CurBlockUsed = 0;
    local_a0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Blocks.ArrayNum = 0;
    local_a0.Blocks.ArrayMax = 0;
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(&local_a0);
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
              (&local_a0,(this->Parent->VertexRefCounts).UsedCount);
    iVar20 = (this->VertexBoneWeights).CurBlock * 0x200 + (this->VertexBoneWeights).CurBlockUsed;
    uVar26 = uVar21;
    if (0 < iVar20) {
      do {
        uVar12 = FCompactMaps::GetVertexMapping(param_2,(int)uVar21);
        if (uVar12 != 0xffffffff) {
          AnimationCore::FBoneWeights::operator=
                    ((FBoneWeights *)
                     ((ulonglong)(uVar12 & 0x1ff) * 0x40 +
                     *(longlong *)
                      (local_a0.Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8)),
                     (FBoneWeights *)
                     ((ulonglong)((uint)uVar26 & 0x1ff) * 0x40 +
                     *(longlong *)
                      ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data + (uVar21 >> 9) * 8))
                    );
        }
        uVar12 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar12;
        uVar26 = uVar26 + 1;
      } while ((int)uVar12 < iVar20);
    }
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Serialize<0,0>(&local_a0,param_1);
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty(&local_a0,0);
    FVar18.Data = local_a0.Blocks.AllocatorInstance.Data;
  }
  else {
    uVar26 = 0;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    if (bVar9 == 0) {
      uVar21 = uVar26;
      if (bVar11) {
        iVar20 = (this->VertexBoneWeights).CurBlock * 0x200 + (this->VertexBoneWeights).CurBlockUsed
        ;
        uVar22 = uVar26;
        uVar25 = uVar26;
        if (0 < iVar20) {
          do {
            iVar14 = FCompactMaps::GetVertexMapping(param_2,(int)uVar22);
            if (iVar14 != -1) {
              uVar21 = uVar21 + (longlong)
                                *(int *)(*(longlong *)
                                          ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                                          (uVar22 >> 9) * 8) + 0x38 +
                                        (ulonglong)((uint)uVar25 & 0x1ff) * 0x40);
            }
            uVar12 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar12;
            uVar25 = uVar25 + 1;
          } while ((int)uVar12 < iVar20);
        }
        uVar12 = (this->Parent->VertexRefCounts).UsedCount;
      }
      else {
        uVar12 = (this->VertexBoneWeights).CurBlockUsed;
        uVar22 = uVar26;
        while (uVar24 = (uint)uVar22, uVar24 != (this->VertexBoneWeights).CurBlock * 0x200 + uVar12)
        {
          uVar21 = uVar21 + (longlong)
                            *(int *)(*(longlong *)
                                      ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                                      (uVar22 >> 9) * 8) + 0x38 + (ulonglong)(uVar24 & 0x1ff) * 0x40
                                    );
          uVar22 = (ulonglong)(uVar24 + 1);
        }
        uVar12 = (this->VertexBoneWeights).CurBlock * 0x200 + uVar12;
      }
      local_b8 = uVar21 & 0xffffffff;
      iVar20 = (int)uVar21;
      if (uVar21 != local_b8) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar20 = (int)local_b8;
      }
      local_c4 = iVar20 + 1 + uVar12;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_b0,local_c4,Default);
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c4,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_c4);
        }
      }
      else {
        local_c4 = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      *(uint *)local_b0.AllocatorInstance.Data = uVar12;
      _Dst = local_b0.AllocatorInstance.Data + 4;
      if (bVar11) {
        lVar16 = (longlong)
                 (int)((this->VertexBoneWeights).CurBlock * 0x200 +
                      (this->VertexBoneWeights).CurBlockUsed);
        uVar21 = uVar26;
        if (0 < lVar16) {
          do {
            uVar24 = (uint)uVar21;
            uVar12 = 0;
            if ((int)uVar24 < (param_2->VertMap).ArrayNum) {
              uVar12 = ~uVar24 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)((param_2->VertMap).AllocatorInstance.Data + uVar26 * 4) != -1) {
              pFVar17 = (FBoneWeights *)
                        ((ulonglong)(uVar24 & 0x1ff) * 0x40 +
                        *(longlong *)
                         ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data +
                         (uVar21 >> 9) * 8));
              uVar12 = (pFVar17->BoneWeights).ArrayNum;
              *(uint *)_Dst = uVar12;
              _Dst = _Dst + 4;
              local_b8 = CONCAT44(local_b8._4_4_,uVar12);
              if (0 < (int)uVar12) {
                pFVar15 = AnimationCore::FBoneWeights::operator[](pFVar17,0);
                lVar23 = (longlong)(int)local_b8;
                memcpy(_Dst,pFVar15,lVar23 * 4);
                _Dst = _Dst + lVar23 * 4;
              }
            }
            uVar26 = uVar26 + 1;
            uVar21 = (ulonglong)(uVar24 + 1);
          } while ((longlong)uVar26 < lVar16);
        }
      }
      else {
        uVar12 = (this->VertexBoneWeights).CurBlock;
        uVar24 = (this->VertexBoneWeights).CurBlockUsed;
        while (uVar19 = (uint)uVar26, uVar19 != uVar12 * 0x200 + uVar24) {
          pFVar17 = (FBoneWeights *)
                    ((ulonglong)(uVar19 & 0x1ff) * 0x40 +
                    *(longlong *)
                     ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data + (uVar26 >> 9) * 8));
          uVar2 = (pFVar17->BoneWeights).ArrayNum;
          *(uint *)_Dst = uVar2;
          _Dst = _Dst + 4;
          if (0 < (int)uVar2) {
            pFVar15 = AnimationCore::FBoneWeights::operator[](pFVar17,0);
            memcpy(_Dst,pFVar15,(longlong)(int)uVar2 * 4);
            _Dst = _Dst + (longlong)(int)uVar2 * 4;
          }
          uVar26 = (ulonglong)(uVar19 + 1);
        }
      }
      FVar13 = FNameEntryId::FromValidEName((EName)local_50);
      uStack_64 = 0;
      local_68.Value = *(uint *)CONCAT44(extraout_var_01,FVar13.Value);
      FVar13 = FNameEntryId::FromValidEName((EName)local_4c);
      local_60 = *(uint *)CONCAT44(extraout_var_02,FVar13.Value);
      FVar7.Number = uStack_64;
      FVar7.ComparisonIndex.Value = local_68.Value;
      uStack_5c = 0;
      FVar8.Number = 0;
      FVar8.ComparisonIndex.Value = local_60;
      FArchive::SerializeCompressedNew
                (param_1,local_b0.AllocatorInstance.Data,(longlong)local_b0.ArrayNum << 2,FVar8,
                 FVar7,COMPRESS_NoFlags,false,(long64 *)0x0);
      FVar18.Data = local_b0.AllocatorInstance.Data;
    }
    else {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_c0,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_c0);
        }
      }
      else {
        local_c0[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_b0,local_c0[0],Default);
      FVar13 = FNameEntryId::FromValidEName((EName)local_58);
      uStack_74 = 0;
      local_78.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
      FVar13 = FNameEntryId::FromValidEName((EName)local_54);
      local_70 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
      FVar5.Number = uStack_74;
      FVar5.ComparisonIndex.Value = local_78.Value;
      uStack_6c = 0;
      FVar6.Number = 0;
      FVar6.ComparisonIndex.Value = local_70;
      FArchive::SerializeCompressedNew
                (param_1,local_b0.AllocatorInstance.Data,(longlong)local_b0.ArrayNum << 2,FVar6,
                 FVar5,COMPRESS_NoFlags,false,(long64 *)0x0);
      pFVar15 = (FBoneWeight *)(local_b0.AllocatorInstance.Data + 4);
      TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Resize
                (&this->VertexBoneWeights,*(uint *)local_b0.AllocatorInstance.Data);
      uVar12 = (this->VertexBoneWeights).CurBlock;
      uVar24 = (this->VertexBoneWeights).CurBlockUsed;
      local_88.MaxWeightCount = 0xc;
      local_88.WeightThreshold = 1;
      local_88.DefaultBoneIndex = 0;
      local_88.bHasDefaultBoneIndex = false;
      local_88.bBlendZeroInfluence = true;
      local_88.NormalizeType = None;
      while (uVar19 = (uint)uVar26, FVar18.Data = local_b0.AllocatorInstance.Data,
            uVar19 != uVar12 * 0x200 + uVar24) {
        FVar1 = *pFVar15;
        pFVar15 = pFVar15 + 1;
        if (0 < (int)FVar1) {
          uVar21 = (ulonglong)(uint)FVar1;
          local_48[0].Container =
               (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                *)((ulonglong)(uVar19 & 0x1ff) * 0x40 +
                  *(longlong *)
                   ((this->VertexBoneWeights).Blocks.AllocatorInstance.Data + (uVar26 >> 9) * 8));
          do {
            FVar1 = *pFVar15;
            pFVar15 = pFVar15 + 1;
            AnimationCore::
            TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
            ::
            AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                      (local_48,FVar1,&local_88);
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        uVar26 = (ulonglong)(uVar19 + 1);
      }
    }
  }
  if (FVar18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  return;
}

