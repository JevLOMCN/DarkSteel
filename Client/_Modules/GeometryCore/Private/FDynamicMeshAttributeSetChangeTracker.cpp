// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 8

// SaveElement<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,UE::Geometry::TDynamicMeshAttributeChange<float,4>_> @ 14343bc70

void __thiscall
UE::Geometry::FDynamicMeshAttributeSetChangeTracker::
SaveElement<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,UE::Geometry::TDynamicMeshAttributeChange<float,4>_>
          (FDynamicMeshAttributeSetChangeTracker *this,int param_1,FElementState *param_2,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_3,
          TDynamicMeshAttributeChange<float,4> *param_4)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_1 < param_2->MaxElementID) {
    if (((param_1 < 0) || ((param_2->ChangedElements).NumBits <= param_1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar4 = (param_2->ChangedElements).AllocatorInstance.SecondaryData;
    uVar5 = 1 << ((byte)param_1 & 0x1f);
    lVar6 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5);
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)&param_2->ChangedElements;
    }
    if ((*(uint *)((longlong)FVar4 + lVar6 * 4) & uVar5) == 0) {
      if (((param_1 < 0) || ((param_2->StartElements).NumBits <= param_1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar4 = (param_2->StartElements).AllocatorInstance.SecondaryData;
      if (FVar4 == (ForElementType<unsigned_int>)0x0) {
        FVar4 = (ForElementType<unsigned_int>)&param_2->StartElements;
      }
      if ((*(uint *)((longlong)FVar4 + lVar6 * 4) & uVar5) != 0) {
        TDynamicMeshAttributeChange<float,4>::SaveInitialElement
                  (param_4,(TDynamicMeshOverlay<float,4> *)param_3,param_1);
        if (((param_1 < 0) || ((param_2->ChangedElements).NumBits <= param_1)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar4 = (param_2->ChangedElements).AllocatorInstance.SecondaryData;
        if (FVar4 == (ForElementType<unsigned_int>)0x0) {
          FVar4 = (ForElementType<unsigned_int>)&param_2->ChangedElements;
        }
        puVar1 = (uint *)((longlong)FVar4 + lVar6 * 4);
        *puVar1 = *puVar1 | uVar5;
      }
    }
  }
  return;
}

// FDynamicMeshAttributeSetChangeTracker @ 143452540

FDynamicMeshAttributeSetChangeTracker * __thiscall
UE::Geometry::FDynamicMeshAttributeSetChangeTracker::FDynamicMeshAttributeSetChangeTracker
          (FDynamicMeshAttributeSetChangeTracker *this,FDynamicMeshAttributeSet *param_1)

{
  (this->UVStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVStates).ArrayNum = 0;
  (this->UVStates).ArrayMax = 0;
  (this->NormalStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalStates).ArrayNum = 0;
  (this->NormalStates).ArrayMax = 0;
  (this->ColorState).StartElements.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->Change = (FDynamicMeshAttributeChangeSet *)0x0;
  (this->ColorState).StartElements.NumBits = 0;
  (this->ColorState).StartElements.MaxBits = 0x80;
  (this->ColorState).ChangedElements.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->ColorState).ChangedElements.NumBits = 0;
  (this->ColorState).ChangedElements.MaxBits = 0x80;
  this->Attribs = param_1;
  return this;
}

// BeginChange @ 143474110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSetChangeTracker::BeginChange
          (FDynamicMeshAttributeSetChangeTracker *this)

{
  FRefCountVector *pFVar1;
  int *piVar2;
  TArray<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>::FChangeTriangleAttribute,TSizedDefaultAllocator<32>_>
  *pTVar3;
  uint *puVar4;
  longlong lVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  short sVar7;
  FDynamicMeshAttributeSet *pFVar8;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  FDynamicMeshAttributeChangeSet *pFVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  ForElementType<unsigned_int> *pFVar22;
  ForElementType<unsigned_int> FVar23;
  ForElementType<unsigned_int> FVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  TArray<TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar30;
  ulonglong uVar31;
  TArray<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>,TSizedDefaultAllocator<32>_>
  *this_00;
  ulonglong uVar32;
  ForElementType<unsigned_int> *pFVar33;
  longlong lVar34;
  longlong lVar35;
  FScriptContainerElement *pFVar36;
  uint uVar37;
  undefined8 *local_78;
  undefined8 *local_70;
  IndexIterator local_68;
  IndexIterator local_58;
  
  if ((this->Change != (FDynamicMeshAttributeChangeSet *)0x0) &&
     (bVar15 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1327787060794229096>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                          ,0x168,"Change == nullptr"), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar19 = ::operator_new(0xe8);
  if (pFVar19 == (FDynamicMeshAttributeChangeSet *)0x0) {
    pFVar19 = (FDynamicMeshAttributeChangeSet *)0x0;
  }
  else {
    memset(pFVar19,0,0xe8);
  }
  this->Change = pFVar19;
  iVar16 = (**(code **)(this->Attribs->_padding_ + 0xa8))();
  TArray<UE::Geometry::TDynamicMeshAttributeChange<float,2>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Change->UVChanges,iVar16,Default);
  iVar17 = (**(code **)(this->Attribs->_padding_ + 0xb8))();
  TArray<UE::Geometry::TDynamicMeshAttributeChange<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Change->NormalChanges,iVar17,Default);
  if ((this->UVStates).ArrayNum < iVar16) {
    TArray<UE::Geometry::FDynamicMeshAttributeSetChangeTracker::FElementState,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->UVStates,iVar16,Default);
  }
  uVar37 = 0;
  if (0 < iVar16) {
    lVar34 = 0;
    lVar35 = 0;
    do {
      uVar26 = 0;
      if ((int)uVar37 < (this->UVStates).ArrayNum) {
        uVar26 = ~uVar37 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar36 = (this->UVStates).AllocatorInstance.Data + lVar35;
      pFVar8 = this->Attribs;
      if (((int)uVar37 < (pFVar8->UVLayers).Array.ArrayNum) && (-1 < (int)uVar37)) {
        if (((int)uVar37 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar21 = *(longlong *)((pFVar8->UVLayers).Array.AllocatorInstance.Data + lVar34 * 8);
      }
      else {
        lVar21 = 0;
      }
      pFVar1 = (FRefCountVector *)(lVar21 + 8);
      iVar25 = *(int *)(lVar21 + 0xc) + *(int *)(lVar21 + 8) * 0x200;
      *(int *)pFVar36 = iVar25;
      *(int *)(pFVar36 + 0x20) = iVar25;
      uVar26 = iVar25 + 0x1fU >> 5;
      if (iVar25 + 0x1fU >> 5 != 0) {
        if (*(int *)(pFVar36 + 0x24) + 0x1fU >> 5 < uVar26) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation((ForElementType<unsigned_int> *)(pFVar36 + 8),0,uVar26,4);
          *(uint *)(pFVar36 + 0x24) = uVar26 << 5;
        }
        pFVar20 = pFVar36 + 8;
        if (*(FScriptContainerElement **)(pFVar36 + 0x18) != (FScriptContainerElement *)0x0) {
          pFVar20 = *(FScriptContainerElement **)(pFVar36 + 0x18);
        }
        memset(pFVar20,0,(ulonglong)uVar26 << 2);
        TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits
                  ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar36 + 8));
      }
      *(int *)(pFVar36 + 0x40) = *(int *)pFVar36;
      uVar26 = *(int *)pFVar36 + 0x1f;
      uVar27 = uVar26 >> 5;
      if (uVar26 >> 5 != 0) {
        if (*(int *)(pFVar36 + 0x44) + 0x1fU >> 5 < uVar27) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation((ForElementType<unsigned_int> *)(pFVar36 + 0x28),0,uVar27,4);
          *(uint *)(pFVar36 + 0x44) = uVar27 << 5;
        }
        pFVar20 = pFVar36 + 0x28;
        if (*(FScriptContainerElement **)(pFVar36 + 0x38) != (FScriptContainerElement *)0x0) {
          pFVar20 = *(FScriptContainerElement **)(pFVar36 + 0x38);
        }
        memset(pFVar20,0,(ulonglong)uVar27 << 2);
        TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits
                  ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar36 + 0x28));
      }
      FRefCountVector::IndexIterator::IndexIterator
                (&local_68,pFVar1,0,(pFVar1->RefCounts).CurBlock * 0x200 + *(int *)(lVar21 + 0xc));
      iVar25 = *(int *)(lVar21 + 0xc) + (pFVar1->RefCounts).CurBlock * 0x200;
      FRefCountVector::IndexIterator::IndexIterator(&local_58,pFVar1,iVar25,iVar25);
      uVar14 = local_68._12_4_;
      uVar26 = local_58._8_4_;
      if (local_68._8_4_ != local_58._8_4_) {
        do {
          uVar13 = local_68._8_4_;
          if ((((int)local_68._8_4_ < 0) || (*(int *)(pFVar36 + 0x20) <= (int)local_68._8_4_)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar20 = pFVar36 + 8;
          if (*(FScriptContainerElement **)(pFVar36 + 0x18) != (FScriptContainerElement *)0x0) {
            pFVar20 = *(FScriptContainerElement **)(pFVar36 + 0x18);
          }
          uVar27 = uVar13;
          if ((int)uVar13 < 0) {
            uVar27 = uVar13 + 0x1f;
          }
          local_68._8_4_ = uVar13 + 1;
          *(uint *)(pFVar20 + (longlong)((int)uVar27 >> 5) * 4) =
               *(uint *)(pFVar20 + (longlong)((int)uVar27 >> 5) * 4) | 1 << ((byte)uVar13 & 0x1f);
          if ((int)local_68._8_4_ < (int)uVar14) {
            do {
              lVar21 = (ulonglong)(local_68._8_4_ & 0x1ff) * 2;
              uVar26 = local_58._8_4_;
              if ((*(short *)(lVar21 + *(longlong *)
                                        (*(longlong *)(local_68._0_8_ + 8) +
                                        (ulonglong)((uint)local_68._8_4_ >> 9) * 8)) != 0) &&
                 (*(short *)(lVar21 + *(longlong *)
                                       (*(longlong *)(local_68._0_8_ + 8) +
                                       (ulonglong)((uint)local_68._8_4_ >> 9) * 8)) != -1)) break;
              local_68._8_4_ = local_68._8_4_ + 1;
            } while ((int)local_68._8_4_ < (int)uVar14);
          }
        } while (local_68._8_4_ != uVar26);
      }
      uVar37 = uVar37 + 1;
      lVar34 = lVar34 + 1;
      lVar35 = lVar35 + 0x48;
    } while (lVar34 < iVar16);
  }
  if ((this->NormalStates).ArrayNum < iVar17) {
    TArray<UE::Geometry::FDynamicMeshAttributeSetChangeTracker::FElementState,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->NormalStates,iVar17,Default);
  }
  uVar37 = 0;
  if (0 < iVar17) {
    lVar35 = 0;
    lVar34 = 0;
    do {
      uVar26 = 0;
      if ((int)uVar37 < (this->NormalStates).ArrayNum) {
        uVar26 = ~uVar37 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar36 = (this->NormalStates).AllocatorInstance.Data + lVar34;
      pFVar8 = this->Attribs;
      if (((int)uVar37 < (pFVar8->NormalLayers).Array.ArrayNum) && (-1 < (int)uVar37)) {
        if (((int)uVar37 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar21 = *(longlong *)((pFVar8->NormalLayers).Array.AllocatorInstance.Data + lVar35 * 8);
      }
      else {
        lVar21 = 0;
      }
      pFVar33 = (ForElementType<unsigned_int> *)(pFVar36 + 8);
      iVar16 = *(int *)(lVar21 + 0xc) + *(int *)(lVar21 + 8) * 0x200;
      *(int *)pFVar36 = iVar16;
      *(int *)(pFVar36 + 0x20) = iVar16;
      uVar26 = iVar16 + 0x1fU >> 5;
      if (iVar16 + 0x1fU >> 5 != 0) {
        if (*(int *)(pFVar36 + 0x24) + 0x1fU >> 5 < uVar26) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(pFVar33,0,uVar26,4);
          *(uint *)(pFVar36 + 0x24) = uVar26 << 5;
        }
        pFVar22 = pFVar33;
        if (*(ForElementType<unsigned_int> **)(pFVar36 + 0x18) !=
            (ForElementType<unsigned_int> *)0x0) {
          pFVar22 = *(ForElementType<unsigned_int> **)(pFVar36 + 0x18);
        }
        memset(pFVar22,0,(ulonglong)uVar26 << 2);
        uVar27 = *(int *)(pFVar36 + 0x20) >> 0x1f & 0x1f;
        uVar26 = *(int *)(pFVar36 + 0x20) + uVar27;
        iVar16 = (uVar26 & 0x1f) - uVar27;
        if (iVar16 != 0) {
          if (*(ForElementType<unsigned_int> **)(pFVar36 + 0x18) !=
              (ForElementType<unsigned_int> *)0x0) {
            pFVar33 = *(ForElementType<unsigned_int> **)(pFVar36 + 0x18);
          }
          *(uint *)(pFVar33->InlineData + (longlong)((int)uVar26 >> 5) * 4) =
               *(uint *)(pFVar33->InlineData + (longlong)((int)uVar26 >> 5) * 4) &
               0xffffffffU >> (0x20U - (char)iVar16 & 0x1f);
        }
      }
      pFVar33 = (ForElementType<unsigned_int> *)(pFVar36 + 0x28);
      *(int *)(pFVar36 + 0x40) = *(int *)pFVar36;
      uVar26 = *(int *)pFVar36 + 0x1f;
      uVar27 = uVar26 >> 5;
      if (uVar26 >> 5 != 0) {
        if (*(int *)(pFVar36 + 0x44) + 0x1fU >> 5 < uVar27) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(pFVar33,0,uVar27,4);
          *(uint *)(pFVar36 + 0x44) = uVar27 << 5;
        }
        pFVar22 = pFVar33;
        if (*(ForElementType<unsigned_int> **)(pFVar36 + 0x38) !=
            (ForElementType<unsigned_int> *)0x0) {
          pFVar22 = *(ForElementType<unsigned_int> **)(pFVar36 + 0x38);
        }
        memset(pFVar22,0,(ulonglong)uVar27 << 2);
        uVar27 = *(int *)(pFVar36 + 0x40) >> 0x1f & 0x1f;
        uVar26 = *(int *)(pFVar36 + 0x40) + uVar27;
        iVar16 = (uVar26 & 0x1f) - uVar27;
        if (iVar16 != 0) {
          if (*(ForElementType<unsigned_int> **)(pFVar36 + 0x38) !=
              (ForElementType<unsigned_int> *)0x0) {
            pFVar33 = *(ForElementType<unsigned_int> **)(pFVar36 + 0x38);
          }
          *(uint *)(pFVar33->InlineData + (longlong)((int)uVar26 >> 5) * 4) =
               *(uint *)(pFVar33->InlineData + (longlong)((int)uVar26 >> 5) * 4) &
               0xffffffffU >> (0x20U - (char)iVar16 & 0x1f);
        }
      }
      uVar26 = 0;
      uVar27 = *(int *)(lVar21 + 8) * 0x200 + *(int *)(lVar21 + 0xc);
      if ((uVar27 == 0) || ((ushort)(*(short *)**(undefined8 **)(lVar21 + 0x10) - 1U) < 0xfffe)) {
LAB_14347479f:
        bVar15 = uVar26 == uVar27;
      }
      else {
        uVar26 = 1;
        bVar15 = uVar27 == 1;
        if (1 < (int)uVar27) {
          do {
            sVar7 = *(short *)((*(undefined8 **)(lVar21 + 0x10))[uVar26 >> 9] +
                              (ulonglong)(uVar26 & 0x1ff) * 2);
            if ((sVar7 != 0) && (sVar7 != -1)) break;
            uVar26 = uVar26 + 1;
          } while ((int)uVar26 < (int)uVar27);
          goto LAB_14347479f;
        }
      }
      if (!bVar15) {
LAB_1434747a7:
        do {
          if ((((int)uVar26 < 0) || (*(int *)(pFVar36 + 0x20) <= (int)uVar26)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar20 = pFVar36 + 8;
          if (*(FScriptContainerElement **)(pFVar36 + 0x18) != (FScriptContainerElement *)0x0) {
            pFVar20 = *(FScriptContainerElement **)(pFVar36 + 0x18);
          }
          uVar18 = uVar26;
          if ((int)uVar26 < 0) {
            uVar18 = uVar26 + 0x1f;
          }
          uVar28 = uVar26 + 1;
          *(uint *)(pFVar20 + (longlong)((int)uVar18 >> 5) * 4) =
               *(uint *)(pFVar20 + (longlong)((int)uVar18 >> 5) * 4) | 1 << ((byte)uVar26 & 0x1f);
          uVar26 = uVar28;
          if ((int)uVar28 < (int)uVar27) {
            do {
              lVar5 = (ulonglong)(uVar26 >> 9) * 8;
              lVar12 = (ulonglong)(uVar26 & 0x1ff) * 2;
              if ((*(short *)(lVar12 + *(longlong *)(lVar5 + *(longlong *)(lVar21 + 0x10))) != 0) &&
                 (*(short *)(lVar12 + *(longlong *)(*(longlong *)(lVar21 + 0x10) + lVar5)) != -1))
              goto LAB_1434747a7;
              uVar26 = uVar26 + 1;
            } while ((int)uVar26 < (int)uVar27);
          }
        } while (uVar26 != uVar27);
      }
      uVar37 = uVar37 + 1;
      lVar35 = lVar35 + 1;
      lVar34 = lVar34 + 0x48;
    } while (lVar35 < iVar17);
  }
  if ((this->Attribs->ColorLayer).Ptr ==
      (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) goto LAB_143474b37;
  pFVar19 = this->Change;
  if ((pFVar19->ColorChange).bIsSet != false) {
    TDynamicMeshAttributeChange<float,4>::~TDynamicMeshAttributeChange<float,4>
              (&(pFVar19->ColorChange).TypedValue);
  }
  (pFVar19->ColorChange).TypedValue.OldElements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (pFVar19->ColorChange).TypedValue.OldElements.ArrayNum = 0;
  (pFVar19->ColorChange).TypedValue.OldElements.ArrayMax = 0;
  (pFVar19->ColorChange).TypedValue.OldElementData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (pFVar19->ColorChange).TypedValue.OldElementData.ArrayNum = 0;
  (pFVar19->ColorChange).TypedValue.OldElementData.ArrayMax = 0;
  (pFVar19->ColorChange).TypedValue.OldTriangles.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (pFVar19->ColorChange).TypedValue.OldTriangles.ArrayNum = 0;
  (pFVar19->ColorChange).TypedValue.OldTriangles.ArrayMax = 0;
  (pFVar19->ColorChange).TypedValue.NewElements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (pFVar19->ColorChange).TypedValue.NewElements.ArrayNum = 0;
  (pFVar19->ColorChange).TypedValue.NewElements.ArrayMax = 0;
  (pFVar19->ColorChange).TypedValue.NewElementData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (pFVar19->ColorChange).TypedValue.NewElementData.ArrayNum = 0;
  (pFVar19->ColorChange).TypedValue.NewElementData.ArrayMax = 0;
  (pFVar19->ColorChange).TypedValue.NewTriangles.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (pFVar19->ColorChange).TypedValue.NewTriangles.ArrayNum = 0;
  (pFVar19->ColorChange).TypedValue.NewTriangles.ArrayMax = 0;
  (pFVar19->ColorChange).bIsSet = true;
  pTVar6 = &(this->ColorState).StartElements;
  pTVar9 = (this->Attribs->ColorLayer).Ptr;
  iVar16 = *(int *)&pTVar9->field_0x8 * 0x200 + *(int *)&pTVar9->field_0xc;
  (this->ColorState).MaxElementID = iVar16;
  (this->ColorState).StartElements.NumBits = iVar16;
  uVar37 = iVar16 + 0x1fU >> 5;
  if (iVar16 + 0x1fU >> 5 != 0) {
    if ((this->ColorState).StartElements.MaxBits + 0x1fU >> 5 < uVar37) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar6->AllocatorInstance,0,uVar37,4);
      (this->ColorState).StartElements.MaxBits = uVar37 << 5;
    }
    FVar23 = (this->ColorState).StartElements.AllocatorInstance.SecondaryData;
    if (FVar23 == (ForElementType<unsigned_int>)0x0) {
      FVar23 = (ForElementType<unsigned_int>)pTVar6;
    }
    memset((void *)FVar23,0,(ulonglong)uVar37 << 2);
    iVar16 = (this->ColorState).StartElements.NumBits;
    uVar26 = iVar16 >> 0x1f & 0x1f;
    uVar37 = iVar16 + uVar26;
    iVar16 = (uVar37 & 0x1f) - uVar26;
    if (iVar16 != 0) {
      FVar23 = (this->ColorState).StartElements.AllocatorInstance.SecondaryData;
      if (FVar23 == (ForElementType<unsigned_int>)0x0) {
        FVar23 = (ForElementType<unsigned_int>)pTVar6;
      }
      puVar4 = (uint *)((longlong)FVar23 + (longlong)((int)uVar37 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (-(char)iVar16 & 0x1fU);
    }
  }
  iVar16 = (this->ColorState).MaxElementID;
  pTVar6 = &(this->ColorState).ChangedElements;
  (this->ColorState).ChangedElements.NumBits = iVar16;
  uVar37 = iVar16 + 0x1f;
  uVar26 = uVar37 >> 5;
  if (uVar37 >> 5 != 0) {
    if ((this->ColorState).ChangedElements.MaxBits + 0x1fU >> 5 < uVar26) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar6->AllocatorInstance,0,uVar26,4);
      (this->ColorState).ChangedElements.MaxBits = uVar26 << 5;
    }
    FVar23 = (this->ColorState).ChangedElements.AllocatorInstance.SecondaryData;
    if (FVar23 == (ForElementType<unsigned_int>)0x0) {
      FVar23 = (ForElementType<unsigned_int>)pTVar6;
    }
    memset((void *)FVar23,0,(ulonglong)uVar26 << 2);
    iVar16 = (this->ColorState).ChangedElements.NumBits;
    uVar26 = iVar16 >> 0x1f & 0x1f;
    uVar37 = iVar16 + uVar26;
    iVar16 = (uVar37 & 0x1f) - uVar26;
    if (iVar16 != 0) {
      FVar23 = (this->ColorState).ChangedElements.AllocatorInstance.SecondaryData;
      if (FVar23 == (ForElementType<unsigned_int>)0x0) {
        FVar23 = (ForElementType<unsigned_int>)pTVar6;
      }
      puVar4 = (uint *)((longlong)FVar23 + (longlong)((int)uVar37 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar16 & 0x1f);
    }
  }
  uVar37 = *(int *)&pTVar9->field_0x8 * 0x200 + *(int *)&pTVar9->field_0xc;
  uVar29 = 0;
  if ((uVar37 == 0) ||
     (uVar29 = 0, (ushort)(*(short *)**(undefined8 **)&pTVar9->field_0x10 - 1U) < 0xfffe)) {
LAB_143474a7f:
    uVar26 = (uint)uVar29;
  }
  else {
    uVar29 = 1;
    uVar26 = 1;
    if (1 < (int)uVar37) {
      do {
        sVar7 = *(short *)((*(undefined8 **)&pTVar9->field_0x10)[uVar29 >> 9] +
                          (ulonglong)((uint)uVar29 & 0x1ff) * 2);
        if ((sVar7 != 0) && (sVar7 != -1)) break;
        uVar26 = (uint)uVar29 + 1;
        uVar29 = (ulonglong)uVar26;
      } while ((int)uVar26 < (int)uVar37);
      goto LAB_143474a7f;
    }
  }
joined_r0x000143474a81:
  uVar31 = uVar29;
  if (uVar26 != uVar37) {
    while( true ) {
      iVar16 = (int)uVar31;
      if (((iVar16 < 0) || ((this->ColorState).StartElements.NumBits <= iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar23 = (this->ColorState).StartElements.AllocatorInstance.SecondaryData;
      FVar24 = (ForElementType<unsigned_int>)&(this->ColorState).StartElements;
      if (FVar23 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = FVar23;
      }
      iVar17 = iVar16;
      if (iVar16 < 0) {
        iVar17 = iVar16 + 0x1f;
      }
      puVar4 = (uint *)((longlong)FVar24 + (longlong)(iVar17 >> 5) * 4);
      uVar26 = iVar16 + 1;
      uVar29 = (ulonglong)uVar26;
      *puVar4 = *puVar4 | 1 << ((byte)uVar31 & 0x1f);
      if ((int)uVar37 <= (int)uVar26) break;
      while( true ) {
        lVar35 = (ulonglong)((uint)uVar29 & 0x1ff) * 2;
        lVar34 = *(longlong *)((uVar29 >> 9) * 8 + *(longlong *)&pTVar9->field_0x10);
        if ((*(short *)(lVar35 + lVar34) != 0) &&
           (uVar31 = uVar29, *(short *)(lVar35 + lVar34) != -1)) break;
        uVar26 = (uint)uVar29 + 1;
        uVar29 = (ulonglong)uVar26;
        if ((int)uVar37 <= (int)uVar26) goto joined_r0x000143474a81;
      }
    }
    goto joined_r0x000143474a81;
  }
LAB_143474b37:
  uVar29 = 0;
  if ((this->Attribs->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    pFVar19 = this->Change;
    pTVar3 = &(pFVar19->MaterialIDAttribChange).TypedValue.NewTriangleAttributes;
    if ((pFVar19->MaterialIDAttribChange).bIsSet != false) {
      (pFVar19->MaterialIDAttribChange).TypedValue._padding_ =
           (longlong)&___7__FDynamicMeshTriangleAttributeChange_H_00_Geometry_UE__6B_;
      pFVar36 = (pTVar3->AllocatorInstance).Data;
      if (pFVar36 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar36);
      }
      pFVar36 = (pFVar19->MaterialIDAttribChange).TypedValue.OldTriangleAttributes.AllocatorInstance
                .Data;
      if (pFVar36 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar36);
      }
    }
    (pFVar19->MaterialIDAttribChange).TypedValue._padding_ =
         (longlong)&___7__FDynamicMeshTriangleAttributeChange_H_00_Geometry_UE__6B_;
    (pFVar19->MaterialIDAttribChange).TypedValue.OldTriangleAttributes.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar19->MaterialIDAttribChange).TypedValue.OldTriangleAttributes.ArrayNum = 0;
    (pFVar19->MaterialIDAttribChange).TypedValue.OldTriangleAttributes.ArrayMax = 0;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar19->MaterialIDAttribChange).TypedValue.NewTriangleAttributes.ArrayNum = 0;
    (pFVar19->MaterialIDAttribChange).TypedValue.NewTriangleAttributes.ArrayMax = 0;
    (pFVar19->MaterialIDAttribChange).bIsSet = true;
  }
  uVar37 = (**(code **)(this->Attribs->_padding_ + 200))();
  if (0 < (int)uVar37) {
    pFVar19 = this->Change;
    this_00 = &pFVar19->PolygroupChanges;
    iVar16 = (pFVar19->PolygroupChanges).ArrayNum;
    piVar2 = &(pFVar19->PolygroupChanges).ArrayNum;
    if (iVar16 < (int)uVar37) {
      iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x28,8,uVar37 - iVar16,&this_00->AllocatorInstance,piVar2,
                          &(pFVar19->PolygroupChanges).ArrayMax);
      DefaultConstructItems<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar17 * 0x28,uVar37 - iVar16);
    }
    else if ((int)uVar37 < iVar16) {
      uVar26 = iVar16 - uVar37;
      if (((int)(uVar26 | uVar37) < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (uVar26 != 0) {
        TArray<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar37,uVar26);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&this_00->AllocatorInstance,*piVar2,&(pFVar19->PolygroupChanges).ArrayMax)
        ;
      }
    }
  }
  iVar16 = (**(code **)(this->Attribs->_padding_ + 0xd8))();
  uVar31 = uVar29;
  uVar32 = uVar29;
  if (0 < iVar16) {
    do {
      pFVar8 = this->Attribs;
      uVar26 = (uint)uVar32;
      pFVar19 = this->Change;
      pTVar30 = &pFVar19->WeightChanges;
      uVar37 = 0;
      if ((int)uVar26 < (pFVar8->WeightLayers).Array.ArrayNum) {
        uVar37 = ~uVar26 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      plVar10 = *(longlong **)((pFVar8->WeightLayers).Array.AllocatorInstance.Data + uVar31 * 8);
      pFVar20 = (FScriptContainerElement *)(**(code **)(*plVar10 + 0x88))(plVar10,&local_78);
      pFVar36 = (pTVar30->AllocatorInstance).Data;
      if (((pFVar36 <= pFVar20) &&
          (pFVar20 < pFVar36 + (longlong)(pFVar19->WeightChanges).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar17 = (pFVar19->WeightChanges).ArrayNum;
      piVar2 = &(pFVar19->WeightChanges).ArrayMax;
      if (iVar17 == *piVar2) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar30->AllocatorInstance,piVar2);
      }
      (pFVar19->WeightChanges).ArrayNum = iVar17 + 1;
      *(undefined8 *)((pTVar30->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar20;
      *(undefined8 *)pFVar20 = 0;
      if (local_78 != (undefined8 *)0x0) {
        (**(code **)*local_78)(local_78,1);
      }
      uVar31 = uVar31 + 1;
      uVar32 = (ulonglong)(uVar26 + 1);
    } while ((longlong)uVar31 < (longlong)iVar16);
  }
  lVar34 = (longlong)(int)this->Attribs->_padding_;
  uVar31 = uVar29;
  if (0 < lVar34) {
    do {
      pFVar8 = this->Attribs;
      uVar26 = (uint)uVar31;
      pFVar19 = this->Change;
      pTVar30 = &pFVar19->RegisteredAttributeChanges;
      uVar37 = 0;
      if ((int)uVar26 < (int)pFVar8->_padding_) {
        uVar37 = ~uVar26 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      plVar10 = *(longlong **)(pFVar8->_padding_ + uVar29 * 8);
      pFVar20 = (FScriptContainerElement *)(**(code **)(*plVar10 + 0x88))(plVar10,&local_70);
      pFVar36 = (pTVar30->AllocatorInstance).Data;
      if (((pFVar36 <= pFVar20) &&
          (pFVar20 < pFVar36 + (longlong)(pFVar19->RegisteredAttributeChanges).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar16 = (pFVar19->RegisteredAttributeChanges).ArrayNum;
      piVar2 = &(pFVar19->RegisteredAttributeChanges).ArrayMax;
      if (iVar16 == *piVar2) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar30->AllocatorInstance,piVar2);
      }
      (pFVar19->RegisteredAttributeChanges).ArrayNum = iVar16 + 1;
      *(undefined8 *)((pTVar30->AllocatorInstance).Data + (longlong)iVar16 * 8) =
           *(undefined8 *)pFVar20;
      *(undefined8 *)pFVar20 = 0;
      if (local_70 != (undefined8 *)0x0) {
        (**(code **)*local_70)(local_70,1);
      }
      uVar29 = uVar29 + 1;
      uVar31 = (ulonglong)(uVar26 + 1);
    } while ((longlong)uVar29 < lVar34);
  }
  return;
}

// EndChange @ 1434b5c00

TUniquePtr<UE::Geometry::FDynamicMeshAttributeChangeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet>_>
 __thiscall
UE::Geometry::FDynamicMeshAttributeSetChangeTracker::EndChange
          (FDynamicMeshAttributeSetChangeTracker *this)

{
  FDynamicMeshAttributeChangeSet *in_RDX;
  
  (in_RDX->UVChanges).AllocatorInstance.Data = (FScriptContainerElement *)this->Change;
  return (TUniquePtr<UE::Geometry::FDynamicMeshAttributeChangeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeChangeSet>_>
          )in_RDX;
}

// SaveInitialTriangle @ 14351d080

void __thiscall
UE::Geometry::FDynamicMeshAttributeSetChangeTracker::SaveInitialTriangle
          (FDynamicMeshAttributeSetChangeTracker *this,int param_1)

{
  int *piVar1;
  FElementState *pFVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  FDynamicMeshAttributeChangeSet *pFVar7;
  FDynamicMeshAttributeSet *pFVar8;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  TDynamicMeshAttributeChange<float,2> *this_00;
  TDynamicMeshOverlay<float,2> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  TDynamicMeshAttributeChange<float,3> *this_01;
  TDynamicMeshOverlay<float,3> *pTVar18;
  TOptional<UE::Geometry::TDynamicMeshAttributeChange<float,4>_> *pTVar19;
  uint uVar20;
  TOptional<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>_> *pTVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong local_d8;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar24 = 0;
  iVar13 = (**(code **)(this->Attribs->_padding_ + 0xa8))();
  local_70 = (longlong)iVar13;
  if (0 < local_70) {
    uVar28 = (ulonglong)((uint)(param_1 * 3) >> 9) << 3;
    uVar26 = (ulonglong)(param_1 * 3 & 0x1ff) << 2;
    local_d8 = 0;
    local_80 = uVar28;
    local_78 = uVar26;
    do {
      pFVar7 = this->Change;
      uVar27 = ~uVar24 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar24 < (pFVar7->UVChanges).ArrayNum) {
        uVar20 = uVar27;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this_00 = (TDynamicMeshAttributeChange<float,2> *)
                ((pFVar7->UVChanges).AllocatorInstance.Data + local_d8 * 0x60);
      pFVar8 = this->Attribs;
      if (((int)uVar24 < (pFVar8->UVLayers).Array.ArrayNum) && (-1 < (int)uVar24)) {
        if (((int)uVar24 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar15 = *(TDynamicMeshOverlay<float,2> **)
                   ((pFVar8->UVLayers).Array.AllocatorInstance.Data + local_d8 * 8);
      }
      else {
        pTVar15 = (TDynamicMeshOverlay<float,2> *)0x0;
      }
      pFVar25 = (pTVar15->ElementTriangles).Blocks.AllocatorInstance.Data;
      iVar13 = *(int *)(uVar26 + *(longlong *)(pFVar25 + uVar28));
      if (-1 < iVar13) {
        uVar20 = param_1 * 3 + 1;
        uVar22 = param_1 * 3 + 2;
        local_a0 = (ulonglong)(uVar20 >> 9) * 8;
        local_98 = (ulonglong)(uVar20 & 0x1ff) * 4;
        iVar5 = *(int *)(local_98 + *(longlong *)(pFVar25 + local_a0));
        local_88 = (ulonglong)(uVar22 & 0x1ff) * 4;
        local_90 = (ulonglong)(uVar22 >> 9) * 8;
        iVar6 = *(int *)(local_88 + *(longlong *)(pFVar25 + local_90));
        uVar20 = 0;
        if ((int)uVar24 < (this->UVStates).ArrayNum) {
          uVar20 = uVar27;
        }
        if ((uVar20 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar17 = local_d8 * 0x48;
        pFVar25 = (this->UVStates).AllocatorInstance.Data + lVar17;
        if (iVar13 < *(int *)pFVar25) {
          if (((iVar13 < 0) || (*(int *)(pFVar25 + 0x40) <= iVar13)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar23 = pFVar25 + 0x28;
          if (*(FScriptContainerElement **)(pFVar25 + 0x38) != (FScriptContainerElement *)0x0) {
            pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x38);
          }
          uVar20 = 1 << ((byte)iVar13 & 0x1f);
          iVar14 = iVar13;
          if (iVar13 < 0) {
            iVar14 = iVar13 + 0x1f;
          }
          lVar16 = (longlong)(iVar14 >> 5);
          if ((*(uint *)(pFVar23 + lVar16 * 4) & uVar20) == 0) {
            if (((iVar13 < 0) || (*(int *)(pFVar25 + 0x20) <= iVar13)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar23 = pFVar25 + 8;
            if (*(FScriptContainerElement **)(pFVar25 + 0x18) != (FScriptContainerElement *)0x0) {
              pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x18);
            }
            if ((*(uint *)(pFVar23 + lVar16 * 4) & uVar20) != 0) {
              TDynamicMeshAttributeChange<float,2>::SaveInitialElement(this_00,pTVar15,iVar13);
              if (((iVar13 < 0) || (*(int *)(pFVar25 + 0x40) <= iVar13)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar23 = pFVar25 + 0x28;
              if (*(FScriptContainerElement **)(pFVar25 + 0x38) != (FScriptContainerElement *)0x0) {
                pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x38);
              }
              *(uint *)(pFVar23 + lVar16 * 4) = *(uint *)(pFVar23 + lVar16 * 4) | uVar20;
            }
          }
        }
        uVar20 = 0;
        if ((int)uVar24 < (this->UVStates).ArrayNum) {
          uVar20 = uVar27;
        }
        if ((uVar20 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar25 = (this->UVStates).AllocatorInstance.Data + lVar17;
        if (iVar5 < *(int *)pFVar25) {
          if (((iVar5 < 0) || (*(int *)(pFVar25 + 0x40) <= iVar5)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar23 = pFVar25 + 0x28;
          if (*(FScriptContainerElement **)(pFVar25 + 0x38) != (FScriptContainerElement *)0x0) {
            pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x38);
          }
          uVar20 = 1 << ((byte)iVar5 & 0x1f);
          iVar13 = iVar5;
          if (iVar5 < 0) {
            iVar13 = iVar5 + 0x1f;
          }
          lVar16 = (longlong)(iVar13 >> 5);
          if ((*(uint *)(pFVar23 + lVar16 * 4) & uVar20) == 0) {
            if (((iVar5 < 0) || (*(int *)(pFVar25 + 0x20) <= iVar5)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar23 = pFVar25 + 8;
            if (*(FScriptContainerElement **)(pFVar25 + 0x18) != (FScriptContainerElement *)0x0) {
              pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x18);
            }
            if ((*(uint *)(pFVar23 + lVar16 * 4) & uVar20) != 0) {
              TDynamicMeshAttributeChange<float,2>::SaveInitialElement(this_00,pTVar15,iVar5);
              if (((iVar5 < 0) || (*(int *)(pFVar25 + 0x40) <= iVar5)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar23 = pFVar25 + 0x28;
              if (*(FScriptContainerElement **)(pFVar25 + 0x38) != (FScriptContainerElement *)0x0) {
                pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x38);
              }
              *(uint *)(pFVar23 + lVar16 * 4) = *(uint *)(pFVar23 + lVar16 * 4) | uVar20;
            }
          }
        }
        uVar20 = 0;
        if ((int)uVar24 < (this->UVStates).ArrayNum) {
          uVar20 = uVar27;
        }
        if ((uVar20 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar25 = (this->UVStates).AllocatorInstance.Data + lVar17;
        if (iVar6 < *(int *)pFVar25) {
          if (((iVar6 < 0) || (*(int *)(pFVar25 + 0x40) <= iVar6)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar23 = pFVar25 + 0x28;
          if (*(FScriptContainerElement **)(pFVar25 + 0x38) != (FScriptContainerElement *)0x0) {
            pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x38);
          }
          uVar20 = 1 << ((byte)iVar6 & 0x1f);
          iVar13 = iVar6;
          if (iVar6 < 0) {
            iVar13 = iVar6 + 0x1f;
          }
          lVar17 = (longlong)(iVar13 >> 5);
          if ((*(uint *)(pFVar23 + lVar17 * 4) & uVar20) == 0) {
            if (((iVar6 < 0) || (*(int *)(pFVar25 + 0x20) <= iVar6)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar23 = pFVar25 + 8;
            if (*(FScriptContainerElement **)(pFVar25 + 0x18) != (FScriptContainerElement *)0x0) {
              pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x18);
            }
            if ((*(uint *)(pFVar23 + lVar17 * 4) & uVar20) != 0) {
              TDynamicMeshAttributeChange<float,2>::SaveInitialElement(this_00,pTVar15,iVar6);
              if (((iVar6 < 0) || (*(int *)(pFVar25 + 0x40) <= iVar6)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar23 = pFVar25 + 0x28;
              if (*(FScriptContainerElement **)(pFVar25 + 0x38) != (FScriptContainerElement *)0x0) {
                pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x38);
              }
              *(uint *)(pFVar23 + lVar17 * 4) = *(uint *)(pFVar23 + lVar17 * 4) | uVar20;
            }
          }
        }
        uVar26 = local_78;
        uVar28 = local_80;
        pFVar25 = (pTVar15->ElementTriangles).Blocks.AllocatorInstance.Data;
        uStack_b8 = *(undefined4 *)(local_98 + *(longlong *)(pFVar25 + local_a0));
        uStack_b4 = *(undefined4 *)(local_88 + *(longlong *)(pFVar25 + local_90));
        uStack_bc = *(undefined4 *)(local_78 + *(longlong *)(pFVar25 + local_80));
        pFVar25 = (this_00->OldTriangles).AllocatorInstance.Data;
        local_c0 = param_1;
        if (((pFVar25 <= (FScriptContainerElement *)&local_c0) &&
            ((FScriptContainerElement *)&local_c0 <
             pFVar25 + (longlong)(this_00->OldTriangles).ArrayMax * 0x10)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar13 = (this_00->OldTriangles).ArrayNum;
        piVar1 = &(this_00->OldTriangles).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&(this_00->OldTriangles).AllocatorInstance,piVar1);
        }
        (this_00->OldTriangles).ArrayNum = iVar13 + 1;
        pFVar25 = (this_00->OldTriangles).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        *(ulonglong *)pFVar25 = CONCAT44(uStack_bc,local_c0);
        *(ulonglong *)(pFVar25 + 8) = CONCAT44(uStack_b4,uStack_b8);
      }
      uVar24 = uVar24 + 1;
      local_d8 = local_d8 + 1;
    } while (local_d8 < local_70);
  }
  uVar24 = 0;
  iVar13 = (**(code **)(this->Attribs->_padding_ + 0xb8))();
  local_60 = (longlong)iVar13;
  if (0 < local_60) {
    uVar20 = param_1 * 3;
    lVar16 = 0;
    local_98 = (ulonglong)(uVar20 >> 9);
    lVar17 = local_98 * 8;
    local_a0 = (ulonglong)(uVar20 & 0x1ff);
    local_70 = local_a0 * 4;
    local_68 = lVar17;
    do {
      uVar22 = ~uVar24 >> 0x1f;
      pFVar7 = this->Change;
      uVar27 = 0;
      if ((int)uVar24 < (pFVar7->NormalChanges).ArrayNum) {
        uVar27 = uVar22;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this_01 = (TDynamicMeshAttributeChange<float,3> *)
                ((pFVar7->NormalChanges).AllocatorInstance.Data + lVar16 * 0x60);
      pFVar8 = this->Attribs;
      if (((int)uVar24 < (pFVar8->NormalLayers).Array.ArrayNum) && (-1 < (int)uVar24)) {
        if (((int)uVar24 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar18 = *(TDynamicMeshOverlay<float,3> **)
                   ((pFVar8->NormalLayers).Array.AllocatorInstance.Data + lVar16 * 8);
      }
      else {
        pTVar18 = (TDynamicMeshOverlay<float,3> *)0x0;
      }
      pFVar25 = (pTVar18->ElementTriangles).Blocks.AllocatorInstance.Data;
      iVar13 = *(int *)(local_70 + *(longlong *)(pFVar25 + lVar17));
      if (-1 < iVar13) {
        local_80 = (ulonglong)(uVar20 + 1 & 0x1ff);
        local_78 = (ulonglong)(uVar20 + 1 >> 9);
        iVar5 = *(int *)(*(longlong *)(pFVar25 + local_78 * 8) + local_80 * 4);
        local_90 = (ulonglong)(uVar20 + 2 & 0x1ff);
        local_88 = (ulonglong)(uVar20 + 2 >> 9);
        iVar6 = *(int *)(*(longlong *)(pFVar25 + local_88 * 8) + local_90 * 4);
        uVar27 = 0;
        if ((int)uVar24 < (this->NormalStates).ArrayNum) {
          uVar27 = uVar22;
        }
        if ((uVar27 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar25 = (this->NormalStates).AllocatorInstance.Data;
        if (iVar13 < *(int *)(pFVar25 + lVar16 * 0x48)) {
          if (((iVar13 < 0) || (*(int *)(pFVar25 + lVar16 * 0x48 + 0x40) <= iVar13)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar23 = pFVar25 + lVar16 * 0x48 + 0x28;
          if (*(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x38) !=
              (FScriptContainerElement *)0x0) {
            pFVar23 = *(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x38);
          }
          uVar27 = 1 << ((byte)iVar13 & 0x1f);
          lVar17 = (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5);
          if ((*(uint *)(pFVar23 + lVar17 * 4) & uVar27) == 0) {
            if (((iVar13 < 0) || (*(int *)(pFVar25 + lVar16 * 0x48 + 0x20) <= iVar13)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar23 = pFVar25 + lVar16 * 0x48 + 8;
            if (*(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x18) !=
                (FScriptContainerElement *)0x0) {
              pFVar23 = *(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x18);
            }
            if ((*(uint *)(pFVar23 + lVar17 * 4) & uVar27) != 0) {
              TDynamicMeshAttributeChange<float,3>::SaveInitialElement(this_01,pTVar18,iVar13);
              if (((iVar13 < 0) || (*(int *)(pFVar25 + lVar16 * 0x48 + 0x40) <= iVar13)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar23 = pFVar25 + lVar16 * 0x48 + 0x28;
              if (*(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x38) !=
                  (FScriptContainerElement *)0x0) {
                pFVar23 = *(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x38);
              }
              *(uint *)(pFVar23 + lVar17 * 4) = *(uint *)(pFVar23 + lVar17 * 4) | uVar27;
            }
          }
        }
        uVar27 = 0;
        if ((int)uVar24 < (this->NormalStates).ArrayNum) {
          uVar27 = uVar22;
        }
        if ((uVar27 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar25 = (this->NormalStates).AllocatorInstance.Data;
        if (iVar5 < *(int *)(pFVar25 + lVar16 * 0x48)) {
          if (((iVar5 < 0) || (*(int *)(pFVar25 + lVar16 * 0x48 + 0x40) <= iVar5)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar23 = pFVar25 + lVar16 * 0x48 + 0x28;
          if (*(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x38) !=
              (FScriptContainerElement *)0x0) {
            pFVar23 = *(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x38);
          }
          uVar27 = 1 << ((byte)iVar5 & 0x1f);
          lVar17 = (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5);
          if ((*(uint *)(pFVar23 + lVar17 * 4) & uVar27) == 0) {
            if (((iVar5 < 0) || (*(int *)(pFVar25 + lVar16 * 0x48 + 0x20) <= iVar5)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar23 = pFVar25 + lVar16 * 0x48 + 8;
            if (*(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x18) !=
                (FScriptContainerElement *)0x0) {
              pFVar23 = *(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x18);
            }
            if ((*(uint *)(pFVar23 + lVar17 * 4) & uVar27) != 0) {
              TDynamicMeshAttributeChange<float,3>::SaveInitialElement(this_01,pTVar18,iVar5);
              if (((iVar5 < 0) || (*(int *)(pFVar25 + lVar16 * 0x48 + 0x40) <= iVar5)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar23 = pFVar25 + lVar16 * 0x48 + 0x28;
              if (*(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x38) !=
                  (FScriptContainerElement *)0x0) {
                pFVar23 = *(FScriptContainerElement **)(pFVar25 + lVar16 * 0x48 + 0x38);
              }
              *(uint *)(pFVar23 + lVar17 * 4) = *(uint *)(pFVar23 + lVar17 * 4) | uVar27;
            }
          }
        }
        uVar27 = 0;
        if ((int)uVar24 < (this->NormalStates).ArrayNum) {
          uVar27 = uVar22;
        }
        if ((uVar27 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar25 = (this->NormalStates).AllocatorInstance.Data + lVar16 * 0x48;
        if (iVar6 < *(int *)pFVar25) {
          if (((iVar6 < 0) || (*(int *)(pFVar25 + 0x40) <= iVar6)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar23 = pFVar25 + 0x28;
          if (*(FScriptContainerElement **)(pFVar25 + 0x38) != (FScriptContainerElement *)0x0) {
            pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x38);
          }
          uVar27 = 1 << ((byte)iVar6 & 0x1f);
          lVar17 = (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5);
          if ((*(uint *)(pFVar23 + lVar17 * 4) & uVar27) == 0) {
            if (((iVar6 < 0) || (*(int *)(pFVar25 + 0x20) <= iVar6)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar23 = pFVar25 + 8;
            if (*(FScriptContainerElement **)(pFVar25 + 0x18) != (FScriptContainerElement *)0x0) {
              pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x18);
            }
            if ((*(uint *)(pFVar23 + lVar17 * 4) & uVar27) != 0) {
              TDynamicMeshAttributeChange<float,3>::SaveInitialElement(this_01,pTVar18,iVar6);
              if (((iVar6 < 0) || (*(int *)(pFVar25 + 0x40) <= iVar6)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar12)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar23 = pFVar25 + 0x28;
              if (*(FScriptContainerElement **)(pFVar25 + 0x38) != (FScriptContainerElement *)0x0) {
                pFVar23 = *(FScriptContainerElement **)(pFVar25 + 0x38);
              }
              *(uint *)(pFVar23 + lVar17 * 4) = *(uint *)(pFVar23 + lVar17 * 4) | uVar27;
            }
          }
        }
        pFVar25 = (pTVar18->ElementTriangles).Blocks.AllocatorInstance.Data;
        uStack_a8 = *(undefined4 *)(*(longlong *)(pFVar25 + local_78 * 8) + local_80 * 4);
        uStack_a4 = *(undefined4 *)(*(longlong *)(pFVar25 + local_88 * 8) + local_90 * 4);
        uStack_ac = *(undefined4 *)(*(longlong *)(pFVar25 + local_98 * 8) + local_a0 * 4);
        pFVar25 = (this_01->OldTriangles).AllocatorInstance.Data;
        local_b0 = param_1;
        if (((pFVar25 <= (FScriptContainerElement *)&local_b0) &&
            ((FScriptContainerElement *)&local_b0 <
             pFVar25 + (longlong)(this_01->OldTriangles).ArrayMax * 0x10)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar13 = (this_01->OldTriangles).ArrayNum;
        piVar1 = &(this_01->OldTriangles).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&(this_01->OldTriangles).AllocatorInstance,piVar1);
        }
        (this_01->OldTriangles).ArrayNum = iVar13 + 1;
        pFVar25 = (this_01->OldTriangles).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        *(ulonglong *)pFVar25 = CONCAT44(uStack_ac,local_b0);
        *(ulonglong *)(pFVar25 + 8) = CONCAT44(uStack_a4,uStack_a8);
        lVar17 = local_68;
      }
      uVar24 = uVar24 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < local_60);
  }
  pFVar7 = this->Change;
  if ((pFVar7->ColorChange).bIsSet != false) {
    pTVar19 = &pFVar7->ColorChange;
    uVar24 = param_1 * 3;
    pTVar9 = (this->Attribs->ColorLayer).Ptr;
    lVar17 = *(longlong *)&pTVar9->field_0x78;
    local_60 = (ulonglong)(uVar24 >> 9) * 8;
    local_68 = (ulonglong)(uVar24 & 0x1ff) * 4;
    iVar13 = *(int *)(local_68 + *(longlong *)(local_60 + lVar17));
    if (-1 < iVar13) {
      uVar28 = (ulonglong)(uVar24 + 1 >> 9);
      lVar16 = (ulonglong)(uVar24 + 1 & 0x1ff) * 4;
      pFVar2 = &this->ColorState;
      iVar5 = *(int *)(lVar16 + *(longlong *)(lVar17 + uVar28 * 8));
      lVar3 = (ulonglong)(uVar24 + 2 & 0x1ff) * 4;
      lVar4 = (ulonglong)(uVar24 + 2 >> 9) * 8;
      iVar6 = *(int *)(lVar3 + *(longlong *)(lVar4 + lVar17));
      SaveElement<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,UE::Geometry::TDynamicMeshAttributeChange<float,4>_>
                (this,iVar13,pFVar2,pTVar9,&pTVar19->TypedValue);
      SaveElement<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,UE::Geometry::TDynamicMeshAttributeChange<float,4>_>
                (this,iVar5,pFVar2,pTVar9,&pTVar19->TypedValue);
      SaveElement<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,UE::Geometry::TDynamicMeshAttributeChange<float,4>_>
                (this,iVar6,pFVar2,pTVar9,&pTVar19->TypedValue);
      lVar17 = *(longlong *)&pTVar9->field_0x78;
      pFVar25 = (pFVar7->ColorChange).TypedValue.OldTriangles.AllocatorInstance.Data;
      uStack_50 = *(undefined4 *)(lVar16 + *(longlong *)(lVar17 + uVar28 * 8));
      uStack_4c = *(undefined4 *)(lVar3 + *(longlong *)(lVar4 + lVar17));
      uStack_54 = *(undefined4 *)(local_68 + *(longlong *)(local_60 + lVar17));
      local_58 = param_1;
      if (((pFVar25 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar25 + (longlong)(pFVar7->ColorChange).TypedValue.OldTriangles.ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar13 = (pFVar7->ColorChange).TypedValue.OldTriangles.ArrayNum;
      piVar1 = &(pFVar7->ColorChange).TypedValue.OldTriangles.ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&(pFVar7->ColorChange).TypedValue.OldTriangles.AllocatorInstance,
                            piVar1);
      }
      (pFVar7->ColorChange).TypedValue.OldTriangles.ArrayNum = iVar13 + 1;
      pFVar25 = (pFVar7->ColorChange).TypedValue.OldTriangles.AllocatorInstance.Data +
                (longlong)iVar13 * 0x10;
      *(ulonglong *)pFVar25 = CONCAT44(uStack_54,local_58);
      *(ulonglong *)(pFVar25 + 8) = CONCAT44(uStack_4c,uStack_50);
    }
  }
  if ((this->Change->MaterialIDAttribChange).bIsSet != false) {
    pTVar21 = &this->Change->MaterialIDAttribChange;
    (**(code **)((pTVar21->TypedValue)._padding_ + 8))
              (pTVar21,(this->Attribs->MaterialIDAttrib).Ptr,param_1);
  }
  uVar24 = 0;
  iVar13 = (**(code **)(this->Attribs->_padding_ + 200))();
  if (0 < (longlong)iVar13) {
    lVar17 = 0;
    lVar16 = 0;
    do {
      pFVar7 = this->Change;
      uVar20 = 0;
      if ((int)uVar24 < (pFVar7->PolygroupChanges).ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar25 = (pFVar7->PolygroupChanges).AllocatorInstance.Data + lVar16;
      pcVar11 = *(code **)(*(longlong *)pFVar25 + 8);
      pFVar8 = this->Attribs;
      uVar20 = 0;
      if ((int)uVar24 < (pFVar8->PolygroupLayers).Array.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (*pcVar11)(pFVar25,*(undefined8 *)
                          ((pFVar8->PolygroupLayers).Array.AllocatorInstance.Data + lVar17 * 8),
                 param_1);
      uVar24 = uVar24 + 1;
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x28;
    } while (lVar17 < iVar13);
  }
  uVar24 = 0;
  lVar17 = (longlong)(int)this->Attribs->_padding_;
  if (0 < lVar17) {
    lVar16 = 0;
    do {
      pFVar7 = this->Change;
      uVar20 = 0;
      if ((int)uVar24 < (pFVar7->RegisteredAttributeChanges).ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      plVar10 = *(longlong **)
                 ((pFVar7->RegisteredAttributeChanges).AllocatorInstance.Data + lVar16 * 8);
      pcVar11 = *(code **)(*plVar10 + 8);
      pFVar8 = this->Attribs;
      uVar20 = 0;
      if ((int)uVar24 < (int)pFVar8->_padding_) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (*pcVar11)(plVar10,*(undefined8 *)(pFVar8->_padding_ + lVar16 * 8),param_1);
      uVar24 = uVar24 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < lVar17);
  }
  uVar24 = 0;
  iVar13 = (**(code **)(this->Attribs->_padding_ + 0xd8))();
  if (0 < iVar13) {
    lVar17 = 0;
    do {
      pFVar7 = this->Change;
      uVar20 = 0;
      if ((int)uVar24 < (pFVar7->WeightChanges).ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      plVar10 = *(longlong **)((pFVar7->WeightChanges).AllocatorInstance.Data + lVar17 * 8);
      pcVar11 = *(code **)(*plVar10 + 8);
      pFVar8 = this->Attribs;
      uVar20 = 0;
      if ((int)uVar24 < (pFVar8->WeightLayers).Array.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (*pcVar11)(plVar10,*(undefined8 *)
                          ((pFVar8->WeightLayers).Array.AllocatorInstance.Data + lVar17 * 8),param_1
                );
      uVar24 = uVar24 + 1;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar13);
  }
  return;
}

// SaveInitialVertex @ 14351e700

void __thiscall
UE::Geometry::FDynamicMeshAttributeSetChangeTracker::SaveInitialVertex
          (FDynamicMeshAttributeSetChangeTracker *this,int param_1)

{
  FDynamicMeshAttributeChangeSet *pFVar1;
  longlong *plVar2;
  FDynamicMeshAttributeSet *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar8 = 0;
  lVar10 = (longlong)(int)this->Attribs->_padding_;
  if (0 < lVar10) {
    lVar9 = 0;
    do {
      pFVar1 = this->Change;
      uVar6 = 0;
      if ((int)uVar8 < (pFVar1->RegisteredAttributeChanges).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      plVar2 = *(longlong **)
                ((pFVar1->RegisteredAttributeChanges).AllocatorInstance.Data + lVar9 * 8);
      pcVar4 = *(code **)(*plVar2 + 0x10);
      pFVar3 = this->Attribs;
      uVar6 = 0;
      if ((int)uVar8 < (int)pFVar3->_padding_) {
        uVar6 = ~uVar8 >> 0x1f;
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
      (*pcVar4)(plVar2,*(undefined8 *)(pFVar3->_padding_ + lVar9 * 8),param_1);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar10);
  }
  uVar8 = 0;
  iVar7 = (**(code **)(this->Attribs->_padding_ + 0xd8))();
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      pFVar1 = this->Change;
      uVar6 = 0;
      if ((int)uVar8 < (pFVar1->WeightChanges).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      plVar2 = *(longlong **)((pFVar1->WeightChanges).AllocatorInstance.Data + lVar10 * 8);
      pcVar4 = *(code **)(*plVar2 + 0x10);
      pFVar3 = this->Attribs;
      uVar6 = 0;
      if ((int)uVar8 < (pFVar3->WeightLayers).Array.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      (*pcVar4)(plVar2,*(undefined8 *)
                        ((pFVar3->WeightLayers).Array.AllocatorInstance.Data + lVar10 * 8),param_1);
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar7);
  }
  return;
}

// StoreAllFinalTriangles @ 14354cb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshAttributeSetChangeTracker::StoreAllFinalTriangles
          (FDynamicMeshAttributeSetChangeTracker *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TOptional<UE::Geometry::TDynamicMeshAttributeChange<float,4>_> *this_00;
  uint uVar2;
  int iVar3;
  FDynamicMeshAttributeChangeSet *pFVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  TDynamicMeshOverlay<float,4> *pTVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  TOptional<UE::Geometry::FDynamicMeshTriangleAttributeChange<int,1>_> *pTVar15;
  ForElementType<FSetElementId> FVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  TDynamicMeshAttributeChange<float,2> *this_01;
  TDynamicMeshAttributeChange<float,3> *this_02;
  uint uVar19;
  longlong lVar20;
  TDynamicMeshOverlay<float,2> *pTVar21;
  TDynamicMeshOverlay<float,3> *pTVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_198 [32];
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146 [6];
  FDynamicMeshAttributeSetChangeTracker *local_140;
  uint local_138;
  TArray<int,TSizedDefaultAllocator<32>_> *local_130;
  FScriptContainerElement *local_128;
  int local_120;
  int local_11c;
  int local_118 [2];
  longlong local_110;
  longlong local_108;
  int local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FScriptContainerElement *local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0 [2];
  uint local_b8;
  uint local_b4;
  uint local_b0 [2];
  uint local_a8;
  uint local_a4;
  uint local_a0 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar19 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_138 = 0;
  local_140 = this;
  local_130 = param_1;
  iVar12 = (**(code **)(this->Attribs->_padding_ + 0xa8))();
  local_128 = (FScriptContainerElement *)(longlong)iVar12;
  if (0 < (longlong)local_128) {
    local_110 = 0;
    local_108 = 0;
    do {
      lVar20 = local_108;
      lVar18 = local_110;
      pFVar4 = this->Change;
      uVar13 = 0;
      if ((int)uVar19 < (pFVar4->UVChanges).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = this->Attribs;
      this_01 = (TDynamicMeshAttributeChange<float,2> *)
                ((pFVar4->UVChanges).AllocatorInstance.Data + lVar20);
      if (((int)uVar19 < (pFVar5->UVLayers).Array.ArrayNum) && (-1 < (int)uVar19)) {
        if (((int)uVar19 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar21 = *(TDynamicMeshOverlay<float,2> **)
                   ((pFVar5->UVLayers).Array.AllocatorInstance.Data + lVar18 * 8);
      }
      else {
        pTVar21 = (TDynamicMeshOverlay<float,2> *)0x0;
      }
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(&local_98);
        bVar11 = (longlong)local_98.Elements._8_8_ < 0;
        local_98.Elements._8_8_ = local_98.Elements._8_8_ & 0xffffffff00000000;
        if (bVar11) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)&local_98,0,(int *)&local_98.Elements.field_0xc);
        }
        local_98.Elements._48_4_ = 0xffffffff;
        local_98.Elements._52_4_ = 0;
        local_98.Elements._40_4_ = 0;
      }
      pFVar17 = (local_130->AllocatorInstance).Data;
      iVar12 = local_130->ArrayNum;
      pFVar23 = pFVar17 + (longlong)iVar12 * 4;
      param_1 = local_130;
      local_d0 = pFVar23;
      while( true ) {
        if (param_1->ArrayNum != iVar12) {
          local_148 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_148);
        }
        if (pFVar17 == pFVar23) break;
        iVar14 = *(int *)pFVar17;
        pFVar6 = (pTVar21->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar13 = iVar14 * 3;
        uVar19 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 >> 9) * 8) +
                          (ulonglong)(uVar13 & 0x1ff) * 4);
        if (-1 < (int)uVar19) {
          uVar2 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                           (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
          uVar13 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                            (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
          local_c8 = uVar19;
          local_c4 = uVar2;
          local_c0[0] = uVar13;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            for (iVar3 = *(int *)((longlong)FVar16 +
                                 (ulonglong)(local_98.HashSize - 1U & uVar19) * 4); iVar3 != -1;
                iVar3 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar3 * 0xc)) {
              if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar3 * 0xc) == uVar19)
              goto LAB_14354ce55;
            }
          }
          TDynamicMeshAttributeChange<float,2>::StoreFinalElement(this_01,pTVar21,uVar19);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_120,(bool *)&local_c8);
LAB_14354ce55:
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            for (iVar3 = *(int *)((longlong)FVar16 + (ulonglong)(local_98.HashSize - 1U & uVar2) * 4
                                 ); iVar3 != -1;
                iVar3 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar3 * 0xc)) {
              if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar3 * 0xc) == uVar2)
              goto LAB_14354cec5;
            }
          }
          TDynamicMeshAttributeChange<float,2>::StoreFinalElement(this_01,pTVar21,uVar2);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_120,(bool *)&local_c4);
LAB_14354cec5:
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            for (iVar3 = *(int *)((longlong)FVar16 +
                                 (ulonglong)(local_98.HashSize - 1U & uVar13) * 4); iVar3 != -1;
                iVar3 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar3 * 0xc)) {
              if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar3 * 0xc) == uVar13)
              goto LAB_14354cf29;
            }
          }
          TDynamicMeshAttributeChange<float,2>::StoreFinalElement(this_01,pTVar21,uVar13);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_120,(bool *)local_c0);
LAB_14354cf29:
          pFVar23 = (pTVar21->ElementTriangles).Blocks.AllocatorInstance.Data;
          uVar19 = iVar14 * 3;
          uStack_f8 = *(undefined4 *)
                       (*(longlong *)(pFVar23 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                       (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
          uStack_f4 = *(undefined4 *)
                       (*(longlong *)(pFVar23 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                       (ulonglong)(uVar19 + 2 & 0x1ff) * 4);
          uStack_fc = *(undefined4 *)
                       (*(longlong *)(pFVar23 + (ulonglong)(uVar19 >> 9) * 8) +
                       (ulonglong)(uVar19 & 0x1ff) * 4);
          pFVar23 = (this_01->NewTriangles).AllocatorInstance.Data;
          local_100 = iVar14;
          if (((pFVar23 <= (FScriptContainerElement *)&local_100) &&
              ((FScriptContainerElement *)&local_100 <
               pFVar23 + (longlong)(this_01->NewTriangles).ArrayMax * 0x10)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar14 = (this_01->NewTriangles).ArrayNum;
          piVar1 = &(this_01->NewTriangles).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&(this_01->NewTriangles).AllocatorInstance,piVar1);
          }
          (this_01->NewTriangles).ArrayNum = iVar14 + 1;
          pFVar23 = (this_01->NewTriangles).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
          *(ulonglong *)pFVar23 = CONCAT44(uStack_fc,local_100);
          *(ulonglong *)(pFVar23 + 8) = CONCAT44(uStack_f4,uStack_f8);
          pFVar23 = local_d0;
          param_1 = local_130;
        }
        pFVar17 = pFVar17 + 4;
      }
      uVar19 = local_138 + 1;
      local_110 = local_110 + 1;
      local_108 = local_108 + 0x60;
      this = local_140;
      local_138 = uVar19;
    } while (local_110 < (longlong)local_128);
  }
  uVar19 = 0;
  local_138 = 0;
  iVar12 = (**(code **)(this->Attribs->_padding_ + 0xb8))();
  local_d0 = (FScriptContainerElement *)(longlong)iVar12;
  if (0 < (longlong)local_d0) {
    local_108 = 0;
    local_110 = 0;
    do {
      lVar20 = local_108;
      lVar18 = local_110;
      pFVar4 = this->Change;
      uVar13 = 0;
      if ((int)uVar19 < (pFVar4->NormalChanges).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = this->Attribs;
      this_02 = (TDynamicMeshAttributeChange<float,3> *)
                ((pFVar4->NormalChanges).AllocatorInstance.Data + lVar18);
      if (((int)uVar19 < (pFVar5->NormalLayers).Array.ArrayNum) && (-1 < (int)uVar19)) {
        if (((int)uVar19 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar22 = *(TDynamicMeshOverlay<float,3> **)
                   ((pFVar5->NormalLayers).Array.AllocatorInstance.Data + lVar20 * 8);
      }
      else {
        pTVar22 = (TDynamicMeshOverlay<float,3> *)0x0;
      }
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(&local_98);
        bVar11 = (longlong)local_98.Elements._8_8_ < 0;
        local_98.Elements._8_8_ = local_98.Elements._8_8_ & 0xffffffff00000000;
        if (bVar11) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)&local_98,0,(int *)&local_98.Elements.field_0xc);
        }
        local_98.Elements._48_4_ = 0xffffffff;
        local_98.Elements._52_4_ = 0;
        local_98.Elements._40_4_ = 0;
      }
      pFVar17 = (local_130->AllocatorInstance).Data;
      iVar12 = local_130->ArrayNum;
      pFVar23 = pFVar17 + (longlong)iVar12 * 4;
      param_1 = local_130;
      local_128 = pFVar23;
      while( true ) {
        if (param_1->ArrayNum != iVar12) {
          local_147 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_147);
        }
        if (pFVar17 == pFVar23) break;
        iVar14 = *(int *)pFVar17;
        pFVar6 = (pTVar22->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar13 = iVar14 * 3;
        uVar19 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 >> 9) * 8) +
                          (ulonglong)(uVar13 & 0x1ff) * 4);
        if (-1 < (int)uVar19) {
          uVar2 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                           (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
          uVar13 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                            (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
          local_b8 = uVar19;
          local_b4 = uVar2;
          local_b0[0] = uVar13;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            for (iVar3 = *(int *)((longlong)FVar16 +
                                 (ulonglong)(local_98.HashSize - 1U & uVar19) * 4); iVar3 != -1;
                iVar3 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar3 * 0xc)) {
              if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar3 * 0xc) == uVar19)
              goto LAB_14354d2c2;
            }
          }
          TDynamicMeshAttributeChange<float,3>::StoreFinalElement(this_02,pTVar22,uVar19);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_11c,(bool *)&local_b8);
LAB_14354d2c2:
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            for (iVar3 = *(int *)((longlong)FVar16 + (ulonglong)(local_98.HashSize - 1U & uVar2) * 4
                                 ); iVar3 != -1;
                iVar3 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar3 * 0xc)) {
              if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar3 * 0xc) == uVar2)
              goto LAB_14354d329;
            }
          }
          TDynamicMeshAttributeChange<float,3>::StoreFinalElement(this_02,pTVar22,uVar2);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_11c,(bool *)&local_b4);
LAB_14354d329:
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            for (iVar3 = *(int *)((longlong)FVar16 +
                                 (ulonglong)(local_98.HashSize - 1U & uVar13) * 4); iVar3 != -1;
                iVar3 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar3 * 0xc)) {
              if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar3 * 0xc) == uVar13)
              goto LAB_14354d38a;
            }
          }
          TDynamicMeshAttributeChange<float,3>::StoreFinalElement(this_02,pTVar22,uVar13);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_11c,(bool *)local_b0);
LAB_14354d38a:
          pFVar23 = (pTVar22->ElementTriangles).Blocks.AllocatorInstance.Data;
          uVar19 = iVar14 * 3;
          uStack_e8 = *(undefined4 *)
                       (*(longlong *)(pFVar23 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                       (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
          uStack_e4 = *(undefined4 *)
                       (*(longlong *)(pFVar23 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                       (ulonglong)(uVar19 + 2 & 0x1ff) * 4);
          uStack_ec = *(undefined4 *)
                       (*(longlong *)(pFVar23 + (ulonglong)(uVar19 >> 9) * 8) +
                       (ulonglong)(uVar19 & 0x1ff) * 4);
          pFVar23 = (this_02->NewTriangles).AllocatorInstance.Data;
          local_f0 = iVar14;
          if (((pFVar23 <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 <
               pFVar23 + (longlong)(this_02->NewTriangles).ArrayMax * 0x10)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar14 = (this_02->NewTriangles).ArrayNum;
          piVar1 = &(this_02->NewTriangles).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&(this_02->NewTriangles).AllocatorInstance,piVar1);
          }
          (this_02->NewTriangles).ArrayNum = iVar14 + 1;
          pFVar23 = (this_02->NewTriangles).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
          *(ulonglong *)pFVar23 = CONCAT44(uStack_ec,local_f0);
          *(ulonglong *)(pFVar23 + 8) = CONCAT44(uStack_e4,uStack_e8);
          pFVar23 = local_128;
          param_1 = local_130;
        }
        pFVar17 = pFVar17 + 4;
      }
      uVar19 = local_138 + 1;
      local_108 = local_108 + 1;
      local_110 = local_110 + 0x60;
      this = local_140;
      local_138 = uVar19;
    } while (local_108 < (longlong)local_d0);
  }
  pFVar4 = this->Change;
  if ((pFVar4->ColorChange).bIsSet != false) {
    this_00 = &pFVar4->ColorChange;
    pTVar7 = (TDynamicMeshOverlay<float,4> *)(this->Attribs->ColorLayer).Ptr;
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(&local_98);
      uVar10 = local_98.Elements._8_8_;
      local_98.Elements._8_8_ = local_98.Elements._8_8_ & 0xffffffff00000000;
      if ((longlong)uVar10 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&local_98,0,(int *)&local_98.Elements.field_0xc);
      }
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Elements._40_4_ = 0;
    }
    pFVar17 = (param_1->AllocatorInstance).Data;
    iVar12 = param_1->ArrayNum;
    pFVar23 = pFVar17 + (longlong)iVar12 * 4;
    local_128 = pFVar23;
    while( true ) {
      if (param_1->ArrayNum != iVar12) {
        local_146[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_146);
      }
      this = local_140;
      if (pFVar17 == pFVar23) break;
      iVar14 = *(int *)pFVar17;
      pFVar6 = (pTVar7->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar13 = iVar14 * 3;
      uVar19 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 >> 9) * 8) +
                        (ulonglong)(uVar13 & 0x1ff) * 4);
      if (-1 < (int)uVar19) {
        uVar2 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                         (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
        uVar13 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                          (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
        local_a8 = uVar19;
        local_a4 = uVar2;
        local_a0[0] = uVar13;
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_98.Hash.SecondaryData;
          }
          for (iVar3 = *(int *)((longlong)FVar16 + (ulonglong)(local_98.HashSize - 1U & uVar19) * 4)
              ; iVar3 != -1; iVar3 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar3 * 0xc))
          {
            if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar3 * 0xc) == uVar19)
            goto LAB_14354d651;
          }
        }
        TDynamicMeshAttributeChange<float,4>::StoreFinalElement(&this_00->TypedValue,pTVar7,uVar19);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,local_118,(bool *)&local_a8);
LAB_14354d651:
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_98.Hash.SecondaryData;
          }
          for (iVar3 = *(int *)((longlong)FVar16 + (ulonglong)(local_98.HashSize - 1U & uVar2) * 4);
              iVar3 != -1; iVar3 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar3 * 0xc)) {
            if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar3 * 0xc) == uVar2)
            goto LAB_14354d6b7;
          }
        }
        TDynamicMeshAttributeChange<float,4>::StoreFinalElement(&this_00->TypedValue,pTVar7,uVar2);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,local_118,(bool *)&local_a4);
LAB_14354d6b7:
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_98.Hash.SecondaryData;
          }
          for (iVar3 = *(int *)((longlong)FVar16 + (ulonglong)(local_98.HashSize - 1U & uVar13) * 4)
              ; iVar3 != -1; iVar3 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar3 * 0xc))
          {
            if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar3 * 0xc) == uVar13)
            goto LAB_14354d718;
          }
        }
        TDynamicMeshAttributeChange<float,4>::StoreFinalElement(&this_00->TypedValue,pTVar7,uVar13);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,local_118,(bool *)local_a0);
LAB_14354d718:
        pFVar23 = (pTVar7->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar19 = iVar14 * 3;
        uStack_d8 = *(undefined4 *)
                     (*(longlong *)(pFVar23 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                     (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
        uStack_d4 = *(undefined4 *)
                     (*(longlong *)(pFVar23 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                     (ulonglong)(uVar19 + 2 & 0x1ff) * 4);
        uStack_dc = *(undefined4 *)
                     (*(longlong *)(pFVar23 + (ulonglong)(uVar19 >> 9) * 8) +
                     (ulonglong)(uVar19 & 0x1ff) * 4);
        pFVar23 = (pFVar4->ColorChange).TypedValue.NewTriangles.AllocatorInstance.Data;
        local_e0 = iVar14;
        if (((pFVar23 <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 <
             pFVar23 + (longlong)(pFVar4->ColorChange).TypedValue.NewTriangles.ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (pFVar4->ColorChange).TypedValue.NewTriangles.ArrayNum;
        piVar1 = &(pFVar4->ColorChange).TypedValue.NewTriangles.ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&(pFVar4->ColorChange).TypedValue.NewTriangles.AllocatorInstance
                              ,piVar1);
        }
        (pFVar4->ColorChange).TypedValue.NewTriangles.ArrayNum = iVar14 + 1;
        pFVar23 = (pFVar4->ColorChange).TypedValue.NewTriangles.AllocatorInstance.Data +
                  (longlong)iVar14 * 0x10;
        *(ulonglong *)pFVar23 = CONCAT44(uStack_dc,local_e0);
        *(ulonglong *)(pFVar23 + 8) = CONCAT44(uStack_d4,uStack_d8);
        pFVar23 = local_128;
        param_1 = local_130;
      }
      pFVar17 = pFVar17 + 4;
    }
  }
  if ((this->Change->MaterialIDAttribChange).bIsSet != false) {
    pTVar15 = &this->Change->MaterialIDAttribChange;
    (**(code **)((pTVar15->TypedValue)._padding_ + 0x18))
              (pTVar15,(this->Attribs->MaterialIDAttrib).Ptr,param_1);
  }
  uVar19 = 0;
  iVar12 = (**(code **)(this->Attribs->_padding_ + 200))();
  local_128 = (FScriptContainerElement *)(longlong)iVar12;
  if (0 < (longlong)local_128) {
    lVar18 = 0;
    lVar20 = 0;
    do {
      pFVar4 = this->Change;
      uVar13 = 0;
      if ((int)uVar19 < (pFVar4->PolygroupChanges).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar23 = (pFVar4->PolygroupChanges).AllocatorInstance.Data + lVar20;
      pcVar9 = *(code **)(*(longlong *)pFVar23 + 0x18);
      pFVar5 = local_140->Attribs;
      uVar13 = 0;
      if ((int)uVar19 < (pFVar5->PolygroupLayers).Array.ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (*pcVar9)(pFVar23,*(undefined8 *)
                         ((pFVar5->PolygroupLayers).Array.AllocatorInstance.Data + lVar18 * 8),
                local_130);
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 1;
      lVar20 = lVar20 + 0x28;
      this = local_140;
    } while (lVar18 < (longlong)local_128);
  }
  uVar19 = 0;
  lVar18 = (longlong)(int)this->Attribs->_padding_;
  if (0 < lVar18) {
    lVar20 = 0;
    do {
      pFVar4 = this->Change;
      uVar13 = 0;
      if ((int)uVar19 < (pFVar4->RegisteredAttributeChanges).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      plVar8 = *(longlong **)
                ((pFVar4->RegisteredAttributeChanges).AllocatorInstance.Data + lVar20 * 8);
      pcVar9 = *(code **)(*plVar8 + 0x18);
      pFVar5 = local_140->Attribs;
      uVar13 = 0;
      if ((int)uVar19 < (int)pFVar5->_padding_) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (*pcVar9)(plVar8,*(undefined8 *)(pFVar5->_padding_ + lVar20 * 8),local_130);
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 1;
      this = local_140;
    } while (lVar20 < lVar18);
  }
  uVar19 = 0;
  iVar12 = (**(code **)(this->Attribs->_padding_ + 0xd8))();
  if (0 < iVar12) {
    lVar18 = 0;
    do {
      pFVar4 = this->Change;
      uVar13 = 0;
      if ((int)uVar19 < (pFVar4->WeightChanges).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      plVar8 = *(longlong **)((pFVar4->WeightChanges).AllocatorInstance.Data + lVar18 * 8);
      pcVar9 = *(code **)(*plVar8 + 0x18);
      pFVar5 = local_140->Attribs;
      uVar13 = 0;
      if ((int)uVar19 < (pFVar5->WeightLayers).Array.ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (*pcVar9)(plVar8,*(undefined8 *)
                        ((pFVar5->WeightLayers).Array.AllocatorInstance.Data + lVar18 * 8),local_130
               );
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 1;
      this = local_140;
    } while (lVar18 < iVar12);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// StoreAllFinalVertices @ 14354e520

void __thiscall
UE::Geometry::FDynamicMeshAttributeSetChangeTracker::StoreAllFinalVertices
          (FDynamicMeshAttributeSetChangeTracker *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  FDynamicMeshAttributeChangeSet *pFVar1;
  longlong *plVar2;
  FDynamicMeshAttributeSet *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar8 = 0;
  lVar10 = (longlong)(int)this->Attribs->_padding_;
  if (0 < lVar10) {
    lVar9 = 0;
    do {
      pFVar1 = this->Change;
      uVar6 = 0;
      if ((int)uVar8 < (pFVar1->RegisteredAttributeChanges).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      plVar2 = *(longlong **)
                ((pFVar1->RegisteredAttributeChanges).AllocatorInstance.Data + lVar9 * 8);
      pcVar4 = *(code **)(*plVar2 + 0x20);
      pFVar3 = this->Attribs;
      uVar6 = 0;
      if ((int)uVar8 < (int)pFVar3->_padding_) {
        uVar6 = ~uVar8 >> 0x1f;
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
      (*pcVar4)(plVar2,*(undefined8 *)(pFVar3->_padding_ + lVar9 * 8),param_1);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar10);
  }
  uVar8 = 0;
  iVar7 = (**(code **)(this->Attribs->_padding_ + 0xd8))();
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      pFVar1 = this->Change;
      uVar6 = 0;
      if ((int)uVar8 < (pFVar1->WeightChanges).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      plVar2 = *(longlong **)((pFVar1->WeightChanges).AllocatorInstance.Data + lVar10 * 8);
      pcVar4 = *(code **)(*plVar2 + 0x20);
      pFVar3 = this->Attribs;
      uVar6 = 0;
      if ((int)uVar8 < (pFVar3->WeightLayers).Array.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      (*pcVar4)(plVar2,*(undefined8 *)
                        ((pFVar3->WeightLayers).Array.AllocatorInstance.Data + lVar10 * 8),param_1);
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar7);
  }
  return;
}

