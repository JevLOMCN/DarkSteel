// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 191

// AddUniqueImpl<FPCGKernelAttributeKey_const_&> @ 14972e2f0

int __thiscall
TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FPCGKernelAttributeKey_const_&>
          (TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *this,
          FPCGKernelAttributeKey *param_1)

{
  FPCGKernelAttributeKey *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = Find(this,param_1);
  if (iVar6 == -1) {
    pFVar1 = (FPCGKernelAttributeKey *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = this->ArrayNum;
    if (iVar6 == this->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar6 + 1;
    FVar4 = *(FName *)&(param_1->Identifier).MetadataDomain;
    pFVar2 = (this->AllocatorInstance).Data;
    lVar7 = (longlong)iVar6 * 0x60;
    *(FName *)(pFVar2 + lVar7) = (param_1->Identifier).Name;
    ((FName *)(pFVar2 + lVar7))[1] = FVar4;
    *(FName *)(pFVar2 + lVar7 + 0x10) = (param_1->Identifier).MetadataDomain.DebugName;
    pFVar2[lVar7 + 0x18] = (FScriptContainerElement)param_1->Type;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)(pFVar2 + lVar7 + 0x20),
               (FPCGAttributePropertySelector *)&param_1->Name);
    *(undefined ***)(pFVar2 + lVar7 + 0x20) = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  }
  return iVar6;
}

// AddUniqueImpl<FPCGKernelAttributeKey> @ 14972e400

int __thiscall
TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPCGKernelAttributeKey>
          (TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *this,
          FPCGKernelAttributeKey *param_1)

{
  FPCGKernelAttributeKey *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = Find(this,param_1);
  if (iVar6 == -1) {
    pFVar1 = (FPCGKernelAttributeKey *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = this->ArrayNum;
    if (iVar6 == this->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar6 + 1;
    FVar4 = *(FName *)&(param_1->Identifier).MetadataDomain;
    pFVar2 = (this->AllocatorInstance).Data;
    lVar7 = (longlong)iVar6 * 0x60;
    *(FName *)(pFVar2 + lVar7) = (param_1->Identifier).Name;
    ((FName *)(pFVar2 + lVar7))[1] = FVar4;
    *(FName *)(pFVar2 + lVar7 + 0x10) = (param_1->Identifier).MetadataDomain.DebugName;
    pFVar2[lVar7 + 0x18] = (FScriptContainerElement)param_1->Type;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)(pFVar2 + lVar7 + 0x20),
               (FPCGAttributePropertySelector *)&param_1->Name);
    *(undefined ***)(pFVar2 + lVar7 + 0x20) = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  }
  return iVar6;
}

// operator= @ 14973ec70

TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x38);
    }
  }
  return this;
}

// operator= @ 14973ed10

TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TIntVector4<unsigned_int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// Find @ 149750aa0

int __thiscall
TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::Find
          (TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *this,
          FPCGKernelAttributeKey *param_1)

{
  int iVar1;
  FPCGKernelAttributeKey *pFVar2;
  bool bVar3;
  FPCGKernelAttributeKey *this_00;
  
  pFVar2 = (FPCGKernelAttributeKey *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + iVar1) {
      return -1;
    }
    bVar3 = FPCGKernelAttributeKey::operator==(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)(((longlong)this_00 - (longlong)pFVar2) / 0x60);
}

// Find @ 149750b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_>::Find
          (TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_> *this,
          FPCGTextureBindingInfo *param_1)

{
  int *piVar1;
  uchar uVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  pFVar3 = (this->AllocatorInstance).Data;
  piVar1 = &this->ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)*piVar1 * 0xd0) {
    pFVar15 = pFVar3 + 0x98;
    pFVar16 = pFVar3;
    do {
      if ((((*pFVar16 == (FScriptContainerElement)param_1->ResourceType) &&
           (*(FRHITexture **)(pFVar15 + -0x90) == (param_1->Texture).Reference)) &&
          (*(IPooledRenderTarget **)(pFVar15 + -0x88) == (param_1->ExportedTexture).Reference)) &&
         (((*(int *)(pFVar15 + -0x80) == (param_1->Size).field0_0x0._s_0.X &&
           (*(int *)(pFVar15 + -0x7c) == (param_1->Size).field0_0x0._s_0.Y)) &&
          ((pFVar15[-0x78] == (FScriptContainerElement)param_1->Dimension &&
           (pFVar15[-0x77] == (FScriptContainerElement)param_1->bPointSample)))))) {
        dVar19 = *(double *)(pFVar15 + -0x38) - (param_1->Transform).Translation.ZW.m128d_f64[0];
        dVar21 = *(double *)(pFVar15 + -0x30) - (param_1->Transform).Translation.ZW.m128d_f64[1];
        dVar23 = *(double *)(pFVar15 + -0x48) - (param_1->Transform).Translation.XY.m128d_f64[0];
        dVar25 = *(double *)(pFVar15 + -0x40) - (param_1->Transform).Translation.XY.m128d_f64[1];
        lVar18 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar21,0) & _UNK_15061cc88));
        auVar4._8_4_ = (int)lVar18;
        auVar4._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar19,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar4._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
        iVar13 = movmskpd((int)this,auVar4);
        lVar18 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar25,0) & _UNK_15061cc88));
        auVar9._8_4_ = (int)lVar18;
        auVar9._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar23,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar9._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
        uVar12 = movmskpd((uint)param_1->bPointSample,auVar9);
        uVar14 = iVar13 << 2 | uVar12;
        this = (TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar14;
        if (uVar14 == 0) {
          dVar20 = *(double *)(pFVar15 + -0x58) - (param_1->Transform).Rotation.ZW.m128d_f64[0];
          dVar22 = *(double *)(pFVar15 + -0x50) - (param_1->Transform).Rotation.ZW.m128d_f64[1];
          dVar23 = *(double *)(pFVar15 + -0x58) + (param_1->Transform).Rotation.ZW.m128d_f64[0];
          dVar25 = *(double *)(pFVar15 + -0x50) + (param_1->Transform).Rotation.ZW.m128d_f64[1];
          dVar24 = *(double *)(pFVar15 + -0x68) - (param_1->Transform).Rotation.XY.m128d_f64[0];
          dVar26 = *(double *)(pFVar15 + -0x60) - (param_1->Transform).Rotation.XY.m128d_f64[1];
          dVar19 = *(double *)(pFVar15 + -0x68) + (param_1->Transform).Rotation.XY.m128d_f64[0];
          dVar21 = *(double *)(pFVar15 + -0x60) + (param_1->Transform).Rotation.XY.m128d_f64[1];
          lVar18 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar22,0) & _UNK_15061cc88));
          auVar5._8_4_ = (int)lVar18;
          auVar5._0_8_ = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar20,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar5._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
          iVar13 = movmskpd(0,auVar5);
          lVar18 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar26,0) & _UNK_15061cc88));
          auVar6._8_4_ = (int)lVar18;
          auVar6._0_8_ = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar24,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar6._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
          uVar12 = movmskpd(uVar12,auVar6);
          uVar14 = iVar13 << 2 | uVar12;
          if (uVar14 != 0) {
            lVar18 = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                                       SUB84(dVar25,0) & _UNK_15061cc88));
            auVar7._8_4_ = (int)lVar18;
            auVar7._0_8_ = -(ulonglong)
                            (__real_3f1a36e2e0000000 <
                            (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                             SUB84(dVar23,0) &
                                             (uint)__xmm_7fffffffffffffff7fffffffffffffff));
            auVar7._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
            iVar13 = movmskpd(uVar14,auVar7);
            lVar18 = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                       SUB84(dVar21,0) & _UNK_15061cc88));
            auVar10._8_4_ = (int)lVar18;
            auVar10._0_8_ =
                 -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
            auVar10._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
            uVar12 = movmskpd(uVar12,auVar10);
            uVar14 = iVar13 << 2 | uVar12;
            this = (TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar14;
            if (uVar14 != 0) goto LAB_149750d51;
          }
          dVar19 = *(double *)(pFVar15 + -0x18) - (param_1->Transform).Scale3D.ZW.m128d_f64[0];
          dVar21 = *(double *)(pFVar15 + -0x10) - (param_1->Transform).Scale3D.ZW.m128d_f64[1];
          dVar23 = *(double *)(pFVar15 + -0x28) - (param_1->Transform).Scale3D.XY.m128d_f64[0];
          dVar25 = *(double *)(pFVar15 + -0x20) - (param_1->Transform).Scale3D.XY.m128d_f64[1];
          lVar18 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar21,0) & _UNK_15061cc88));
          auVar8._8_4_ = (int)lVar18;
          auVar8._0_8_ = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar19,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
          iVar13 = movmskpd(0,auVar8);
          lVar18 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar25,0) & _UNK_15061cc88));
          auVar11._8_4_ = (int)lVar18;
          auVar11._0_8_ =
               -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar11._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
          uVar12 = movmskpd(uVar12,auVar11);
          uVar12 = iVar13 << 2 | uVar12;
          this = (TArray<FPCGTextureBindingInfo,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar12;
          if (uVar12 == 0) {
            uVar2 = (param_1->TextureBounds).IsValid;
            if (pFVar15[0x28] == (FScriptContainerElement)0x0) {
              bVar17 = uVar2 == '\0';
            }
            else {
              if (((uVar2 == '\0') ||
                  ((param_1->TextureBounds).Min.field0_0x0._s_0.X != *(double *)(pFVar15 + -8))) ||
                 (((param_1->TextureBounds).Min.field0_0x0._s_0.Y != *(double *)pFVar15 ||
                  ((((param_1->TextureBounds).Min.field0_0x0._s_0.Z != *(double *)(pFVar15 + 8) ||
                    ((param_1->TextureBounds).Max.field0_0x0._s_0.X != *(double *)(pFVar15 + 0x10)))
                   || ((param_1->TextureBounds).Max.field0_0x0._s_0.Y != *(double *)(pFVar15 + 0x18)
                      )))))) goto LAB_149750d51;
              bVar17 = (param_1->TextureBounds).Max.field0_0x0._s_0.Z == *(double *)(pFVar15 + 0x20)
              ;
            }
            if (bVar17) {
              return (int)(((longlong)pFVar16 - (longlong)pFVar3) / 0xd0);
            }
          }
        }
      }
LAB_149750d51:
      pFVar16 = pFVar16 + 0xd0;
      pFVar15 = pFVar15 + 0xd0;
    } while (pFVar16 != pFVar3 + (longlong)*piVar1 * 0xd0);
  }
  return -1;
}

// RemoveAtSwapImpl @ 149774370

void __thiscall
TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x20;
  pvVar2 = *(void **)(_Dst + 0x10);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 0x20,(longlong)iVar3 << 5);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNumZeroed @ 1497768e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar2
      ;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<int_const_,int> @ 14978f2d0

TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::operator=<int_const_,int>
          (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<int_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  int *_Src;
  ForElementType<int> FVar3;
  ForElementType<int> _Dst;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<int>)this;
  if (FVar3 != (ForElementType<int>)0x0) {
    _Dst = FVar3;
  }
  if (iVar2 != 0) {
    memcpy((void *)_Dst,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// AddUniqueImpl<int_const_&> @ 149792f80

int __thiscall
TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<int_const_&>
          (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,int *param_1)

{
  ForElementType<int> FVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<int> FVar6;
  ForElementType<int> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<int>)this;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<int>)((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(int *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<int>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<int>)this;
  if (FVar2 != (ForElementType<int>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<int>)this;
    if (FVar2 != (ForElementType<int>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (int *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    this = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(int *)((longlong)this + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// IndexOfByKey<FString> @ 1497c0a10

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar5 = pFVar3;
  while( true ) {
    if (pFVar5 == pFVar3 + (longlong)iVar1 * 0x10) {
      return -1;
    }
    iVar4 = *(int *)(pFVar5 + 8);
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar4 == iVar2) {
      if (iVar4 < 2) break;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar5,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar6 = iVar4 == 0;
    }
    else {
      bVar6 = iVar4 + iVar2 == 1;
    }
    if (bVar6) break;
    pFVar5 = pFVar5 + 0x10;
  }
  return (int)((longlong)pFVar5 - (longlong)pFVar3 >> 4);
}

// operator= @ 1497e3310

TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *this,
          TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FPCGKernelAttributeKey *pFVar3;
  
  if (this != param_1) {
    DestructItems<FPCGKernelAttributeKey,int>
              ((FPCGKernelAttributeKey *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FPCGKernelAttributeKey *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPCGKernelAttributeKey,FPCGKernelAttributeKey,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Empty @ 1497fff20

void __thiscall
TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1497fff70

void __thiscall
TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1497fffc0

void __thiscall
TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FSoftClassPath,int>
              ((FSoftClassPath *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 149800030

void __thiscall
TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 14982a250

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  ForElementType<UE::Math::TTransform<double>_> FVar1;
  int iVar2;
  void *_Dst;
  ForElementType<UE::Math::TTransform<double>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::Math::TTransform<double>_>)this;
  if (FVar1 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x60 + (longlong)FVar3);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_2 * 0x60 + (longlong)_Dst),(longlong)iVar2 * 0x60);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14982a2c0

void __thiscall
TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  ForElementType<FString> FVar1;
  int iVar2;
  FString *_Dst;
  ForElementType<FString> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FString>)this;
  if (FVar1 != (ForElementType<FString>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FString *)((longlong)param_1 * 0x10 + (longlong)FVar3);
  DestructItems<FString,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14982a350

void __thiscall
TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x78;
  if (*(void **)(_Dst + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x68));
  }
  DestructItems<FString,int>(*(FString **)(_Dst + 0x50),*(int *)(_Dst + 0x58));
  if (*(void **)(_Dst + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x50));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x78,(longlong)iVar2 * 0x78);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 14982e010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<double,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<double,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,int param_1
          ,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<double> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<double> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<double>)0x0) {
      this = (TArray<double,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<double>)this;
        if (FVar2 != (ForElementType<double>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14982e160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x20,(longlong)iVar4 << 5);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,0x10,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14982e290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TQuat<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<UE::Math::TQuat<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<UE::Math::TQuat<double>_> FVar2;
  code *pcVar3;
  bool bVar4;
  void *_Dst;
  int iVar5;
  ForElementType<UE::Math::TQuat<double>_> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
              (0x20,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<UE::Math::TQuat<double>_>)this;
        if (FVar2 != (ForElementType<UE::Math::TQuat<double>_>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x20 + (longlong)FVar6);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x20 + (longlong)_Dst),(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
                    (0x20,0x10,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14982e3e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
SetNum(TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Math::TTransform<double>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                      (0x60,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      this = (TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((void *)((longlong)iVar6 * 0x60 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14982e520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector4<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<UE::Math::TVector4<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<UE::Math::TVector4<double>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  ForElementType<UE::Math::TVector4<double>_> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                      (0x20,0x10,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
      this = (TArray<UE::Math::TVector4<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
    }
    DefaultConstructItems<UE::Math::TVector4<double>,int>
              ((void *)((longlong)iVar5 * 0x20 + (longlong)this),param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<UE::Math::TVector4<double>_>)this;
        if (FVar2 != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x20 + (longlong)FVar7);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar8 * 0x20 + (longlong)_Dst),(longlong)iVar6 << 5);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                    (0x20,0x10,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14982e690

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<UE::Math::TVector<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<UE::Math::TVector<double>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::Math::TVector<double>_> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<UE::Math::TVector<double>_>)this;
        if (FVar2 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 0x18);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x18),(longlong)iVar5 * 0x18
                 );
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                    (0x18,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14982e7e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FString> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FString>)0x0) {
      this = (TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
    }
    memset((void *)((longlong)iVar6 * 0x10 + (longlong)this),0,(longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14982e920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<__int64,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<__int64,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14982ea60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<__int64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<__int64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<__int64> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<__int64> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<__int64>)0x0) {
      this = (TArray<__int64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<__int64>)this;
        if (FVar2 != (ForElementType<__int64>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14982ebe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x20,(longlong)iVar4 << 5);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,0x10,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<__int64,TSizedDefaultAllocator<32>_><__int64_const_,int> @ 14985b830

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
TArray<__int64,TSizedDefaultAllocator<32>_>::
TArray<__int64,TSizedDefaultAllocator<32>_><__int64_const_,int>
          (TArray<__int64,TSizedDefaultAllocator<32>_> *this,TArrayView<__int64_const_,int> *param_1
          )

{
  int iVar1;
  long64 *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return this;
}

// operator=<FPCGDataTypeBaseId_const_,int> @ 14985b8c0

TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_>::operator=<FPCGDataTypeBaseId_const_,int>
          (TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FPCGDataTypeBaseId_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FPCGDataTypeBaseId *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// operator=<__int64_const_,int> @ 14985b950

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
TArray<__int64,TSizedDefaultAllocator<32>_>::operator=<__int64_const_,int>
          (TArray<__int64,TSizedDefaultAllocator<32>_> *this,TArrayView<__int64_const_,int> *param_1
          )

{
  int *piVar1;
  int iVar2;
  long64 *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// AddUniqueImpl<ULandscapeHeightfieldCollisionComponent_*_const_&> @ 14985ced0

int __thiscall
TArray<ULandscapeHeightfieldCollisionComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::AddUniqueImpl<ULandscapeHeightfieldCollisionComponent_*_const_&>
          (TArray<ULandscapeHeightfieldCollisionComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,ULandscapeHeightfieldCollisionComponent **param_1)

{
  ForElementType<ULandscapeHeightfieldCollisionComponent_*> FVar1;
  ForElementType<ULandscapeHeightfieldCollisionComponent_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<ULandscapeHeightfieldCollisionComponent_*> FVar6;
  ForElementType<ULandscapeHeightfieldCollisionComponent_*> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)this;
  if (FVar2 != (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)
          ((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(ULandscapeHeightfieldCollisionComponent **)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)this;
  if (FVar2 != (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)this;
    if (FVar2 != (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (ULandscapeHeightfieldCollisionComponent **)
                   ((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<ULandscapeHeightfieldCollisionComponent_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<ULandscapeHeightfieldCollisionComponent_*>)0x0) {
    this = (TArray<ULandscapeHeightfieldCollisionComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  *(ULandscapeHeightfieldCollisionComponent **)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FPCGDataTypeBaseId_const_&> @ 14985cfe0

int __thiscall
TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPCGDataTypeBaseId_const_&>
          (TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_> *this,FPCGDataTypeBaseId *param_1)

{
  FScriptContainerElement *pFVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UScriptStruct **)pFVar6 == (param_1->Struct).field0_0x0.DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->Struct).field0_0x0.DebugPtr;
  *(UScriptStruct **)&pFVar1[(longlong)iVar5 * 8].field_0x0 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<ULandscapeInfo_*> @ 14985d0f0

int __thiscall
TArray<ULandscapeInfo_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<ULandscapeInfo_*>
          (TArray<ULandscapeInfo_*,TSizedDefaultAllocator<32>_> *this,ULandscapeInfo **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(ULandscapeInfo **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(ULandscapeInfo **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// operator= @ 149891ef0

TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<TSoftObjectPtr<AActor>,int>
              ((TSoftObjectPtr<AActor> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSoftObjectPtr<AActor>,TSoftObjectPtr<AActor>,int>
              ((this->AllocatorInstance).Data,(TSoftObjectPtr<AActor> *)pFVar3,iVar2);
  }
  return this;
}

// operator= @ 149891f90

TArray<FPCGPoint,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *this,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xd0);
    }
  }
  return this;
}

// operator= @ 149892030

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
TArray<__int64,TSizedDefaultAllocator<32>_>::operator=
          (TArray<__int64,TSizedDefaultAllocator<32>_> *this,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// RemoveAtImpl @ 1498d6a40

void __thiscall
TArray<FPCGPoint,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FPCGPoint,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  ForElementType<FPCGPoint> FVar1;
  int iVar2;
  void *_Dst;
  ForElementType<FPCGPoint> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FPCGPoint>)this;
  if (FVar1 != (ForElementType<FPCGPoint>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0xd0 + (longlong)FVar3);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_2 * 0xd0 + (longlong)_Dst),(longlong)iVar2 * 0xd0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 1498dfc70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector2<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<UE::Math::TVector2<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<UE::Math::TVector2<double>_> FVar2;
  code *pcVar3;
  bool bVar4;
  void *_Dst;
  int iVar5;
  ForElementType<UE::Math::TVector2<double>_> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
              (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<UE::Math::TVector2<double>_>)this;
        if (FVar2 != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x10 + (longlong)FVar6);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x10 + (longlong)_Dst),(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1498dfdc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGPoint,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FPCGPoint,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FPCGPoint> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPoint>_>
                      (0xd0,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FPCGPoint>)0x0) {
      this = (TArray<FPCGPoint,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
    }
    DefaultConstructItems<FPCGPoint,int>
              ((void *)((longlong)iVar6 * 0xd0 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPoint>_>
                  (0xd0,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 1498dff00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<bool,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<bool,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<bool> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<bool> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                      (1,1,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<bool>)0x0) {
      this = (TArray<bool,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)iVar5 + (longlong)this),0,(longlong)(param_1 - iVar6));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<bool>)this;
        if (FVar2 != (ForElementType<bool>)0x0) {
          FVar7 = FVar2;
        }
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove((void *)((longlong)FVar7 + (longlong)param_1),
                  (void *)((longlong)(int)uVar8 + (longlong)FVar7 + (longlong)param_1),
                  (longlong)iVar6);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                    (1,1,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1498e0290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1498e03c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<__int64,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<__int64,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1498e04f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<__int64,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<__int64,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<__int64> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<__int64> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
              (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<__int64>)this;
        if (FVar2 != (ForElementType<__int64>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 8);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<TWeakObjectPtr<ALandscape,FWeakObjectPtr>_const_&> @ 14991fd90

int __thiscall
TArray<TWeakObjectPtr<ALandscape,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<ALandscape,FWeakObjectPtr>_const_&>
          (TArray<TWeakObjectPtr<ALandscape,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<ALandscape,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// AddUniqueImpl<FPCGDataTypeBaseId_const_&> @ 14991fe50

int __thiscall
TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FPCGDataTypeBaseId_const_&>
          (TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,FPCGDataTypeBaseId *param_1)

{
  ForElementType<FPCGDataTypeBaseId> FVar1;
  ForElementType<FPCGDataTypeBaseId> FVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FPCGDataTypeBaseId> FVar7;
  ForElementType<FPCGDataTypeBaseId> FVar8;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<FPCGDataTypeBaseId>)this;
  if (FVar2 != (ForElementType<FPCGDataTypeBaseId>)0x0) {
    FVar8 = FVar2;
  }
  FVar1 = (ForElementType<FPCGDataTypeBaseId>)((longlong)FVar8 + (longlong)this->ArrayNum * 8);
  if (FVar8 != FVar1) {
    FVar7 = FVar8;
    do {
      if (*(UScriptStruct **)FVar7 == (param_1->Struct).field0_0x0.DebugPtr) {
        iVar6 = (int)((longlong)FVar7 - (longlong)FVar8 >> 3);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      FVar7 = (ForElementType<FPCGDataTypeBaseId>)((longlong)FVar7 + 8);
    } while (FVar7 != FVar1);
  }
  FVar8 = (ForElementType<FPCGDataTypeBaseId>)this;
  if (FVar2 != (ForElementType<FPCGDataTypeBaseId>)0x0) {
    FVar8 = FVar2;
  }
  if ((ulonglong)FVar8 <= param_1) {
    FVar8 = (ForElementType<FPCGDataTypeBaseId>)this;
    if (FVar2 != (ForElementType<FPCGDataTypeBaseId>)0x0) {
      FVar8 = FVar2;
    }
    if ((param_1 < (FPCGDataTypeBaseId *)((longlong)FVar8 + (longlong)this->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar6 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FPCGDataTypeBaseId>)0x0) {
    this = (TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
           FVar2;
  }
  pUVar3 = (param_1->Struct).field0_0x0.DebugPtr;
  *(UScriptStruct **)((longlong)this + (longlong)iVar6 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return iVar6;
}

// IndexOfByKey<FName> @ 1499ab020

int __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::IndexOfByKey<FName>
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar2 = pFVar1;
    do {
      if (*pFVar2 == *param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1 + this->ArrayNum);
  }
  return -1;
}

// ~TArray<unsigned_char,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>_> @ 1499c5670

void __thiscall
TArray<unsigned_char,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>_>::
~TArray<unsigned_char,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>_>
          (TArray<unsigned_char,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>_> *this)

{
  ForElementType<unsigned_char> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 == (ForElementType<unsigned_char>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<unsigned_char>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// ~TArray<PCGGrammar::FModuleDescriptor,TSizedDefaultAllocator<32>_> @ 1499c5690

void __thiscall
TArray<PCGGrammar::FModuleDescriptor,TSizedDefaultAllocator<32>_>::
~TArray<PCGGrammar::FModuleDescriptor,TSizedDefaultAllocator<32>_>
          (TArray<PCGGrammar::FModuleDescriptor,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<PCGGrammar::FModuleDescriptor,int>
            ((FModuleDescriptor *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<PCGGrammar::FTokenizedModule,TSizedDefaultAllocator<32>_> @ 1499c56d0

void __thiscall
TArray<PCGGrammar::FTokenizedModule,TSizedDefaultAllocator<32>_>::
~TArray<PCGGrammar::FTokenizedModule,TSizedDefaultAllocator<32>_>
          (TArray<PCGGrammar::FTokenizedModule,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<PCGGrammar::FTokenizedModule,int>
            ((FTokenizedModule *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Find @ 1499f27b0

int __thiscall
TArray<TWeakObjectPtr<ALandscape,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<ALandscape,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<ALandscape,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<ALandscape,FWeakObjectPtr>::UEOpEquals<ALandscape,bool>
                      ((TWeakObjectPtr<ALandscape,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// RemoveAtImpl @ 149a0adf0

void __thiscall
TArray<UE::Math::TRotator<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<UE::Math::TRotator<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  void *_Dst;
  ForElementType<UE::Math::TRotator<double>_> FVar1;
  int iVar2;
  ForElementType<UE::Math::TRotator<double>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::Math::TRotator<double>_>)this;
  if (FVar1 != (ForElementType<UE::Math::TRotator<double>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0x18),(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0ae60

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  ForElementType<UE::Math::TTransform<double>_> FVar1;
  int iVar2;
  void *_Dst;
  ForElementType<UE::Math::TTransform<double>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::Math::TTransform<double>_>)this;
  if (FVar1 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x60 + (longlong)FVar3);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_2 * 0x60 + (longlong)_Dst),(longlong)iVar2 * 0x60);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0aed0

void __thiscall
TArray<UE::Math::TVector<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<UE::Math::TVector<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  void *_Dst;
  ForElementType<UE::Math::TVector<double>_> FVar1;
  int iVar2;
  ForElementType<UE::Math::TVector<double>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::Math::TVector<double>_>)this;
  if (FVar1 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0x18),(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0af40

void __thiscall
TArray<FPCGAttributePropertyInputSelector,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPCGAttributePropertyInputSelector,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FPCGAttributePropertyInputSelector *_Dst;
  
  _Dst = (FPCGAttributePropertyInputSelector *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<FPCGAttributePropertyInputSelector,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0afc0

void __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FPCGTaggedData *_Dst;
  
  _Dst = (FPCGTaggedData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x78);
  DestructItems<FPCGTaggedData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x78);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0b030

void __thiscall
TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FSoftClassPath *_Dst;
  
  _Dst = (FSoftClassPath *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<FSoftClassPath,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0b0b0

void __thiscall
TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  ForElementType<FSoftClassPath> FVar1;
  int iVar2;
  FSoftClassPath *_Dst;
  ForElementType<FSoftClassPath> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FSoftClassPath>)this;
  if (FVar1 != (ForElementType<FSoftClassPath>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FSoftClassPath *)((longlong)param_1 * 0x20 + (longlong)FVar3);
  DestructItems<FSoftClassPath,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0b140

void __thiscall
TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  ForElementType<FSoftObjectPath> FVar1;
  int iVar2;
  FSoftObjectPath *_Dst;
  ForElementType<FSoftObjectPath> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FSoftObjectPath>)this;
  if (FVar1 != (ForElementType<FSoftObjectPath>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FSoftObjectPath *)((longlong)param_1 * 0x20 + (longlong)FVar3);
  DestructItems<FSoftObjectPath,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0b1d0

void __thiscall
TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
              *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0b240

void __thiscall
TArray<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
              *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0b2b0

void __thiscall
TArray<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *)_Dst,
             param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0b320

void __thiscall
TArray<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,int>
            ((TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> *)
             _Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149a0b390

void __thiscall
TArray<FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  ForElementType<FString> FVar1;
  int iVar2;
  FString *_Dst;
  ForElementType<FString> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FString>)this;
  if (FVar1 != (ForElementType<FString>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FString *)((longlong)param_1 * 0x10 + (longlong)FVar3);
  DestructItems<FString,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 149a0c7b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FSoftClassPath,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x20,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 149a0c8e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSoftClassPath> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
                      (0x20,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FSoftClassPath>)0x0) {
      this = (TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)
             FVar3;
    }
    DefaultConstructItems<FSoftClassPath,int>
              ((void *)((longlong)iVar6 * 0x20 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
                  (0x20,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 149a0ca20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSoftObjectPath> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                      (0x20,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FSoftObjectPath>)0x0) {
      this = (TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)
             FVar3;
    }
    DefaultConstructItems<FSoftObjectPath,int>
              ((void *)((longlong)iVar6 * 0x20 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                  (0x20,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 149a0cb60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FString> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FString>)0x0) {
      this = (TArray<FString,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
    }
    memset((void *)((longlong)iVar6 * 0x10 + (longlong)this),0,(longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0cca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<unsigned_char,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<unsigned_char> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_char> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<unsigned_char>)this;
        if (FVar2 != (ForElementType<unsigned_char>)0x0) {
          FVar6 = FVar2;
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)((longlong)FVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)FVar6 + (longlong)param_1),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0cde0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<int> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 4);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0cf20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<float,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<float> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<float> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
              (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<float>)this;
        if (FVar2 != (ForElementType<float>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 4);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0d060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<double,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<double,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<double> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<double> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
              (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<double>)this;
        if (FVar2 != (ForElementType<double>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 8);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0d1a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x20,(longlong)iVar4 << 5);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,0x10,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0d2d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TQuat<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<UE::Math::TQuat<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<UE::Math::TQuat<double>_> FVar2;
  code *pcVar3;
  bool bVar4;
  void *_Dst;
  int iVar5;
  ForElementType<UE::Math::TQuat<double>_> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
              (0x20,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<UE::Math::TQuat<double>_>)this;
        if (FVar2 != (ForElementType<UE::Math::TQuat<double>_>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x20 + (longlong)FVar6);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x20 + (longlong)_Dst),(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
                    (0x20,0x10,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0d420

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x18,(longlong)iVar4 * 0x18);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0d560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TRotator<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<UE::Math::TRotator<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
              (0x18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar5 = iVar2 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar5 != 0) && (RemoveAtImpl(this,param_1,uVar5), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
                  (0x18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0d680

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar5 = iVar2 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar5 != 0) && (RemoveAtImpl(this,param_1,uVar5), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0d7a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x10,(longlong)iVar4 << 4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0d8d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector2<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<UE::Math::TVector2<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<UE::Math::TVector2<double>_> FVar2;
  code *pcVar3;
  bool bVar4;
  void *_Dst;
  int iVar5;
  ForElementType<UE::Math::TVector2<double>_> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
              (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<UE::Math::TVector2<double>_>)this;
        if (FVar2 != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x10 + (longlong)FVar6);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x10 + (longlong)_Dst),(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0da20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector4<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<UE::Math::TVector4<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<UE::Math::TVector4<double>_> FVar2;
  code *pcVar3;
  bool bVar4;
  void *_Dst;
  int iVar5;
  ForElementType<UE::Math::TVector4<double>_> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
              (0x20,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<UE::Math::TVector4<double>_>)this;
        if (FVar2 != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x20 + (longlong)FVar6);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x20 + (longlong)_Dst),(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
                    (0x20,0x10,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0db70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<UE::Math::TVector<double>,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar5 = iVar2 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar5 != 0) && (RemoveAtImpl(this,param_1,uVar5), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                  (0x18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0dc90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0ddc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FName,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<FName,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FName> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FName> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<FName>)this;
        if (FVar2 != (ForElementType<FName>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 8);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149a0df10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<bool,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<bool,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,int param_1
          ,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<bool> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<bool> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
              (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<bool>)this;
        if (FVar2 != (ForElementType<bool>)0x0) {
          FVar6 = FVar2;
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)((longlong)FVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)FVar6 + (longlong)param_1),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<AActor_*,int> @ 149a18ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=<AActor_*,int>
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *this,TArrayView<AActor_*,int> *param_1)

{
  int *piVar1;
  int iVar2;
  AActor **_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// operator=<UActorComponent_*,int> @ 149a18f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::operator=<UActorComponent_*,int>
          (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UActorComponent_*,int> *param_1)

{
  int *piVar1;
  int iVar2;
  UActorComponent **_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// operator= @ 149ad3bd0

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FPCGTaggedData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FPCGTaggedData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// RemoveAt @ 149b244c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  UPCGData *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FPCGDataPtrWrapper *this_00;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (FPCGDataPtrWrapper *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x78);
  this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
  pUVar1 = this_00[5].Data.field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGData *)0x0) {
    FMemory::Free(pUVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this_00 + 1));
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(this_00);
  iVar5 = this->ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(this_00,&this_00[7].WeakData,(longlong)iVar5 * 0x78);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 149b245d0

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  ForElementType<UE::Math::TTransform<double>_> FVar1;
  int iVar2;
  void *_Dst;
  ForElementType<UE::Math::TTransform<double>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::Math::TTransform<double>_>)this;
  if (FVar1 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x60 + (longlong)FVar3);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_2 * 0x60 + (longlong)_Dst),(longlong)iVar2 * 0x60);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149b24640

void __thiscall
TArray<UE::Math::TVector<double>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<UE::Math::TVector<double>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  void *_Dst;
  ForElementType<UE::Math::TVector<double>_> FVar1;
  int iVar2;
  ForElementType<UE::Math::TVector<double>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::Math::TVector<double>_>)this;
  if (FVar1 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0x18),(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149b246b0

void __thiscall
TArray<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian> FVar1;
  int iVar2;
  void *_Dst;
  ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
           )this;
  if (FVar1 != (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                )0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x140 + (longlong)FVar3);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_2 * 0x140 + (longlong)_Dst),(longlong)iVar2 * 0x140);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149b24720

void __thiscall
TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FPCGAttributePropertySelector *_Dst;
  
  _Dst = (FPCGAttributePropertySelector *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<FPCGAttributePropertySelector,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149b247a0

void __thiscall
TArray<FSoftClassPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FSoftClassPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  ForElementType<FSoftClassPath> FVar1;
  int iVar2;
  FSoftClassPath *_Dst;
  ForElementType<FSoftClassPath> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FSoftClassPath>)this;
  if (FVar1 != (ForElementType<FSoftClassPath>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FSoftClassPath *)((longlong)param_1 * 0x20 + (longlong)FVar3);
  DestructItems<FSoftClassPath,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149b24830

void __thiscall
TArray<FSoftObjectPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FSoftObjectPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  ForElementType<FSoftObjectPath> FVar1;
  int iVar2;
  FSoftObjectPath *_Dst;
  ForElementType<FSoftObjectPath> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FSoftObjectPath>)this;
  if (FVar1 != (ForElementType<FSoftObjectPath>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FSoftObjectPath *)((longlong)param_1 * 0x20 + (longlong)FVar3);
  DestructItems<FSoftObjectPath,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149b248c0

void __thiscall
TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *_Dst;
  
  _Dst = (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 149b25ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TFixedAllocator<256>_>::SetNum
          (TArray<int,TFixedAllocator<256>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<int> *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<int>_>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).InlineData + iVar4,0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b26010

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TFixedAllocator<256>_>::SetNum
          (TArray<float,TFixedAllocator<256>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<float> *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<float>_>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).InlineData + iVar4,0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<float>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b26160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<float> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<float> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<float>)0x0) {
      this = (TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<float>)this;
        if (FVar2 != (ForElementType<float>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b262b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<double,TFixedAllocator<256>_>::SetNum
          (TArray<double,TFixedAllocator<256>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<double> *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<double>_>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).InlineData + iVar4,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<double>_>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b26400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x18,(longlong)iVar4 * 0x18);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b26540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TRotator<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<UE::Math::TRotator<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<UE::Math::TRotator<double>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::Math::TRotator<double>_> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
              (0x18,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<UE::Math::TRotator<double>_>)this;
        if (FVar2 != (ForElementType<UE::Math::TRotator<double>_>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 0x18);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x18),(longlong)iVar5 * 0x18
                 );
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
                    (0x18,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b26690

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TTransform<double>,TFixedAllocator<256>_>::SetNum
          (TArray<UE::Math::TTransform<double>,TFixedAllocator<256>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTypeCompatibleBytes<UE::Math::TTransform<double>_> *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TTransform<double>_>_>
                      (0x60,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((this->AllocatorInstance).InlineData + iVar4,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 * 0x60);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TTransform<double>_>_>
                    (0x60,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b267f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector4<double>,TFixedAllocator<256>_>::SetNum
          (TArray<UE::Math::TVector4<double>,TFixedAllocator<256>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TTypeCompatibleBytes<UE::Math::TVector4<double>_> *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector4<double>_>_>
                      (0x20,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Math::TVector4<double>,int>
              ((this->AllocatorInstance).InlineData + iVar4,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector4<double>_>_>
                    (0x20,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b26940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FPCGAttributePropertySelector,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x40,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 149b26a70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSoftClassPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FSoftClassPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSoftClassPath> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
                      (0x20,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FSoftClassPath>)0x0) {
      this = (TArray<FSoftClassPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             FVar3;
    }
    DefaultConstructItems<FSoftClassPath,int>
              ((void *)((longlong)iVar6 * 0x20 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
                  (0x20,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 149b26bb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSoftObjectPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FSoftObjectPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSoftObjectPath> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                      (0x20,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FSoftObjectPath>)0x0) {
      this = (TArray<FSoftObjectPath,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             FVar3;
    }
    DefaultConstructItems<FSoftObjectPath,int>
              ((void *)((longlong)iVar6 * 0x20 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                  (0x20,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 149b26cf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::SetNum(TArray<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x20,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 149b26e20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FName,TFixedAllocator<256>_>::SetNum
          (TArray<FName,TFixedAllocator<256>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<FName> *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FName>_>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).InlineData + iVar4,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<FName>_>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b26f70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FName> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FName> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (8,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FName>)0x0) {
      this = (TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FName>)this;
        if (FVar2 != (ForElementType<FName>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149b270d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<__int64,TFixedAllocator<256>_>::SetNum
          (TArray<__int64,TFixedAllocator<256>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<__int64> *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<__int64>_>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).InlineData + iVar4,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).InlineData + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<__int64>_>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149b27220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<int,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<int> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 4);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149b27360

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar5 = iVar2 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar5 != 0) && (RemoveAtImpl(this,param_1,uVar5), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149b27480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<bool,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<bool,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<bool> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<bool> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
              (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<bool>)this;
        if (FVar2 != (ForElementType<bool>)0x0) {
          FVar6 = FVar2;
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)((longlong)FVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)FVar6 + (longlong)param_1),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 149b27710

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 149b27860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<double,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<double,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<double> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<double> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<double>)0x0) {
      this = (TArray<double,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<double>)this;
        if (FVar2 != (ForElementType<double>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<FPCGKernelAttributeDesc_const_,int> @ 149b331f0

TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>::
operator=<FPCGKernelAttributeDesc_const_,int>
          (TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FPCGKernelAttributeDesc_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FPCGKernelAttributeDesc *pFVar3;
  
  DestructItems<FPCGKernelAttributeDesc,int>
            ((FPCGKernelAttributeDesc *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x78,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// AddUniqueImpl<FPCGKernelAttributeDesc_const_&> @ 149b35880

int __thiscall
TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FPCGKernelAttributeDesc_const_&>
          (TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *this,
          FPCGKernelAttributeDesc *param_1)

{
  FPCGKernelAttributeDesc *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FPCGKernelAttributeDesc *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
              ((FPCGKernelAttributeDesc *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x78),
               param_1);
  }
  return iVar4;
}

// AddUniqueImpl<TSoftObjectPtr<AActor>_> @ 149b35950

int __thiscall
TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TSoftObjectPtr<AActor>_>
          (TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *this,
          TSoftObjectPtr<AActor> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x28)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x28;
    *(undefined8 *)pFVar1 = *(undefined8 *)&param_1->SoftObjectPtr;
    uVar3 = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x10;
    *(undefined8 *)(pFVar1 + 8) = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x8;
    *(undefined8 *)(pFVar1 + 0x10) = uVar3;
    *(undefined8 *)(pFVar1 + 0x18) = 0;
    *(undefined8 *)(pFVar1 + 0x18) = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18 = 0;
    *(undefined4 *)(pFVar1 + 0x20) = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x20;
    *(undefined4 *)(pFVar1 + 0x24) = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x24;
    *(undefined8 *)&(param_1->SoftObjectPtr).field_0x20 = 0;
  }
  return iVar5;
}

// Append<FPCGPinProperties,TSizedDefaultAllocator<32>_> @ 149b35b80

void __thiscall
TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>::
Append<FPCGPinProperties,TSizedDefaultAllocator<32>_>
          (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x30,
               (FPCGPinProperties *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// Append<FPCGTaggedData,TSizedDefaultAllocator<32>_> @ 149b35c20

void __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
Append<FPCGTaggedData,TSizedDefaultAllocator<32>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x78,
               (FPCGTaggedData *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// Find @ 149b8a220

int __thiscall
TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *this,
          TSoftObjectPtr<AActor> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x28) {
    pFVar4 = pFVar2;
    do {
      bVar3 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(pFVar4 + 8),
                         (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
      if (bVar3) {
        return (int)(((longlong)pFVar4 - (longlong)pFVar2) / 0x28);
      }
      pFVar4 = pFVar4 + 0x28;
    } while (pFVar4 != pFVar2 + (longlong)iVar1 * 0x28);
  }
  return -1;
}

// Find @ 149b8a2b0

int __thiscall
TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>::Find
          (TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *this,
          FPCGKernelAttributeDesc *param_1)

{
  int iVar1;
  FPCGKernelAttributeDesc *pFVar2;
  bool bVar3;
  longlong lVar4;
  FPCGKernelAttributeDesc *this_00;
  
  pFVar2 = (FPCGKernelAttributeDesc *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + iVar1) {
      return -1;
    }
    bVar3 = FPCGKernelAttributeDesc::operator==(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)this_00 - (longlong)pFVar2),8) +
          ((longlong)this_00 - (longlong)pFVar2);
  return (int)(lVar4 >> 6) - (int)(lVar4 >> 0x3f);
}

// SetNum @ 149b97ed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> *this,int param_1
          ,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// CopyToEmpty<FPCGPoint,int> @ 149bb7a30

void __thiscall
TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::CopyToEmpty<FPCGPoint,int>
          (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *this,FPCGPoint *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xd0,0x10,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0xd0);
  }
  return;
}

// operator= @ 149bea4a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::operator=
          (TArray<int,TSizedDefaultAllocator<32>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// operator= @ 149bea500

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)(this->AllocatorInstance).Data,this->ArrayNum);
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// RemoveAtImpl @ 149c332f0

void __thiscall
TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FPCGDataCollection *_Dst;
  
  _Dst = (FPCGDataCollection *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FPCGDataCollection,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149c33370

void __thiscall
TArray<FPCGSkinnedMeshPackedCustomData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPCGSkinnedMeshPackedCustomData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FPCGSkinnedMeshPackedCustomData *_Dst;
  int iVar1;
  
  _Dst = (FPCGSkinnedMeshPackedCustomData *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FPCGSkinnedMeshPackedCustomData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 149c333f0

void __thiscall
TArray<FPCGSkinnedMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<FPCGSkinnedMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x30;
  DestructItems<FPCGSkinnedMeshPackedCustomData,int>
            (*(FPCGSkinnedMeshPackedCustomData **)(_Dst + 0x20),*(int *)(_Dst + 0x28));
  if (*(void **)(_Dst + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x20));
  }
  DestructItems<FPCGSkinnedMeshInstanceList,int>
            (*(FPCGSkinnedMeshInstanceList **)(_Dst + 0x10),*(int *)(_Dst + 0x18));
  if (*(void **)(_Dst + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x10));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x30,(longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// AddUniqueImpl<UPCGDebugDrawComponent_*_const_&> @ 149c3cbd0

int __thiscall
TArray<UPCGDebugDrawComponent_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UPCGDebugDrawComponent_*_const_&>
          (TArray<UPCGDebugDrawComponent_*,TSizedDefaultAllocator<32>_> *this,
          UPCGDebugDrawComponent **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UPCGDebugDrawComponent **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UPCGDebugDrawComponent **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// operator= @ 149c4e0a0

TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSoftObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
              ((TSoftObjectPtr<UMaterialInterface> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSoftObjectPtr<UMaterialInterface>,TSoftObjectPtr<UMaterialInterface>,int>
              ((this->AllocatorInstance).Data,(TSoftObjectPtr<UMaterialInterface> *)pFVar3,iVar2);
  }
  return this;
}

// RemoveAtImpl @ 149c85680

void __thiscall
TArray<FPCGPackedCustomData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPCGPackedCustomData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FPCGPackedCustomData *_Dst;
  int iVar1;
  
  _Dst = (FPCGPackedCustomData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FPCGPackedCustomData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 149c85700

void __thiscall
TArray<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x40;
  DestructItems<FPCGPackedCustomData,int>
            (*(FPCGPackedCustomData **)(_Dst + 0x20),*(int *)(_Dst + 0x28));
  if (*(void **)(_Dst + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x20));
  }
  DestructItems<FPCGMeshInstanceList,int>
            (*(FPCGMeshInstanceList **)(_Dst + 0x10),*(int *)(_Dst + 0x18));
  if (*(void **)(_Dst + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x10));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x40,(longlong)iVar2 << 6);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 149c8c7a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<FConstStructView> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  ForElementType<FConstStructView> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
                      (0x10,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FConstStructView>)0x0) {
      this = (TArray<FConstStructView,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    DefaultConstructItems<FConstStructView,int>
              ((void *)((longlong)iVar5 * 0x10 + (longlong)this),param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FConstStructView>)this;
        if (FVar2 != (ForElementType<FConstStructView>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x10 + (longlong)FVar7);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar8 * 0x10 + (longlong)_Dst),(longlong)iVar6 << 4);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
                    (0x10,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<unsigned___int64_const_&> @ 149c97f50

int __thiscall
TArray<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<unsigned___int64_const_&>
          (TArray<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *this,
          ulong64 *param_1)

{
  ForElementType<unsigned___int64> FVar1;
  ForElementType<unsigned___int64> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned___int64> FVar6;
  ForElementType<unsigned___int64> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<unsigned___int64>)this;
  if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<unsigned___int64>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(ulong64 *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<unsigned___int64>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<unsigned___int64>)this;
  if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<unsigned___int64>)this;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (ulong64 *)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
    this = (TArray<unsigned___int64,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *)
           FVar2;
  }
  *(ulong64 *)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FPCGGrammarResult::FLog> @ 149c98070

int __thiscall
TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPCGGrammarResult::FLog>
          (TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_> *this,FLog *param_1)

{
  FText *this_00;
  FLog *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FLog *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    this_00 = (FText *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18);
    FText::FText(this_00,&param_1->Message);
    *(ELogType *)&this_00[1].TextData.Reference = param_1->Verbosity;
  }
  return iVar4;
}

// AddUniqueImpl<FPCGStack> @ 149c98150

int __thiscall
TArray<FPCGStack,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPCGStack>
          (TArray<FPCGStack,TSizedDefaultAllocator<32>_> *this,FPCGStack *param_1)

{
  FScriptContainerElement *pFVar1;
  FPCGStack *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar2 = (FPCGStack *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x18;
    *(ulong64 *)pFVar1 = param_1->GraphExecutionTaskId;
    *(undefined8 *)(pFVar1 + 8) = 0;
    *(FScriptContainerElement **)(pFVar1 + 8) = (param_1->StackFrames).AllocatorInstance.Data;
    (param_1->StackFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar1 + 0x10) = (param_1->StackFrames).ArrayNum;
    *(int *)(pFVar1 + 0x14) = (param_1->StackFrames).ArrayMax;
    (param_1->StackFrames).ArrayNum = 0;
    (param_1->StackFrames).ArrayMax = 0;
  }
  return iVar5;
}

// AddUniqueImpl<unsigned___int64> @ 149c98240

int __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,ulong64 *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(ulong64 *)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(ulong64 *)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// operator= @ 149ca6820

TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::operator=
          (TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForElementType<FPCGComponentRef> FVar1;
  ForElementType<FPCGComponentRef> FVar2;
  
  if (this != param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<FPCGComponentRef>)this;
    if (FVar1 != (ForElementType<FPCGComponentRef>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<FPCGComponentRef,int>((FPCGComponentRef *)FVar2,this->ArrayNum);
    if ((param_1->AllocatorInstance).SecondaryData == (ForElementType<FPCGComponentRef>)0x0) {
      memmove(this,param_1,0x500);
    }
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FPCGComponentRef>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->AllocatorInstance).SecondaryData = (param_1->AllocatorInstance).SecondaryData;
    (param_1->AllocatorInstance).SecondaryData = (ForElementType<FPCGComponentRef>)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0x10;
  }
  return this;
}

// operator= @ 149ca68e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *this,
          TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FPCGGraphTask *pFVar3;
  
  if (this != param_1) {
    DestructItems<FPCGGraphTask,int>((FPCGGraphTask *)(this->AllocatorInstance).Data,this->ArrayNum)
    ;
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FPCGGraphTask *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x148,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPCGGraphTask,FPCGGraphTask,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Find @ 149cc4f60

int __thiscall
TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_>::Find
          (TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_> *this,FLog *param_1)

{
  int iVar1;
  FText *pFVar2;
  bool bVar3;
  FText *this_00;
  
  pFVar2 = (FText *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == (FText *)((longlong)pFVar2 + (longlong)iVar1 * 0x18)) {
      return -1;
    }
    bVar3 = FText::EqualTo(this_00,&param_1->Message,Default);
    if ((bVar3) && (*(ELogType *)&this_00[1].TextData.Reference == param_1->Verbosity)) break;
    this_00 = (FText *)&this_00[1].Flags;
  }
  return (int)(((longlong)this_00 - (longlong)pFVar2) / 0x18);
}

// Find @ 149cc5000

int __thiscall
TArray<FPCGStack,TSizedDefaultAllocator<32>_>::Find
          (TArray<FPCGStack,TSizedDefaultAllocator<32>_> *this,FPCGStack *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  iVar6 = this->ArrayNum;
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar9 = pFVar1;
  do {
    if (pFVar9 == pFVar1 + (longlong)iVar6 * 0x18) {
      return -1;
    }
    if (*(int *)(pFVar9 + 0x10) == (param_1->StackFrames).ArrayNum) {
      uVar8 = 0;
      if (*(int *)(pFVar9 + 0x10) < 1) {
LAB_149cc5128:
        return (int)(((longlong)pFVar9 - (longlong)pFVar1) / 0x18);
      }
      lVar10 = 0;
      while( true ) {
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(pFVar9 + 0x10)) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        lVar2 = *(longlong *)(pFVar9 + 8);
        uVar7 = 0;
        if ((int)uVar8 < (param_1->StackFrames).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar3 = (param_1->StackFrames).AllocatorInstance.Data;
        bVar5 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)(lVar10 + 8 + lVar2),
                           (FSoftObjectPath *)(pFVar3 + lVar10 + 8));
        if ((!bVar5) || (*(int *)(lVar2 + 0x28 + lVar10) != *(int *)(pFVar3 + lVar10 + 0x28)))
        break;
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x30;
        if (*(int *)(pFVar9 + 0x10) <= (int)uVar8) goto LAB_149cc5128;
      }
    }
    pFVar9 = pFVar9 + 0x18;
  } while( true );
}

// RemoveAtImpl @ 149cd6a60

void __thiscall
TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FPCGGraphScheduleTask *_Dst;
  
  _Dst = (FPCGGraphScheduleTask *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FPCGGraphScheduleTask,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 149cd6ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FPCGGraphTask *_Dst;
  
  _Dst = (FPCGGraphTask *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x148);
  DestructItems<FPCGGraphTask,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x148);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 149cd6b60

void __thiscall
TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::RemoveAtSwapImpl
          (TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1)

{
  ForElementType<FPCGComponentRef> FVar1;
  void *_Dst;
  ForElementType<FPCGComponentRef> FVar2;
  int iVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar2 = (ForElementType<FPCGComponentRef>)this;
  if (FVar1 != (ForElementType<FPCGComponentRef>)0x0) {
    FVar2 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x50 + (longlong)FVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)(this->ArrayNum - iVar3) * 0x50 + (longlong)FVar2),
            (longlong)iVar3 * 0x50);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 149cd6c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPCGGraphScheduleTask,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x30;
  DestructItems<FPCGGraphTask,int>(*(FPCGGraphTask **)_Dst,*(int *)(_Dst + 8));
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x30,(longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 149cd6cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FPCGGraphTask *this_00;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FPCGGraphTask *)(pFVar1 + (longlong)param_1 * 0x148);
  FPCGGraphTask::~FPCGGraphTask(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x148,(longlong)iVar2 * 0x148);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 149cd6d40

void __thiscall
TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPCGGraphTaskInput,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x80;
  if ((_Dst[0x70] != (FScriptContainerElement)0x0) && (*(void **)(_Dst + 0x50) != (void *)0x0)) {
    FMemory::Free(*(void **)(_Dst + 0x50));
  }
  if ((_Dst[0x38] != (FScriptContainerElement)0x0) && (*(void **)(_Dst + 0x18) != (void *)0x0)) {
    FMemory::Free(*(void **)(_Dst + 0x18));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x80,(longlong)iVar2 << 7);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 149cd6de0

void __thiscall
TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNumZeroed @ 149cdc940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGCrc,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<FPCGCrc,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FPCGCrc> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FPCGCrc> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_>
                      (8,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FPCGCrc>)0x0) {
      this = (TArray<FPCGCrc,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FPCGCrc>)this;
        if (FVar2 != (ForElementType<FPCGCrc>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_>
                    (8,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// RemoveAtImpl @ 149d61f20

void __thiscall
TArray<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> *_Dst;
  
  _Dst = (TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSwap @ 149d61fb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,UPCGNode **param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(UPCGNode **)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// SetNum @ 149d63910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FPCGPoint,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0xd0,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xd0;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0xd0,(longlong)iVar5 * 0xd0);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd0,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149d63a60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGPoint,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xd0;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0xd0,(longlong)iVar4 * 0xd0);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd0,0x10,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FSoftClassPath_const_&> @ 149dcbf40

int __thiscall
TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FSoftClassPath_const_&>
          (TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          FSoftClassPath *param_1)

{
  ForElementType<FSoftClassPath> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSoftClassPath> FVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<FSoftClassPath>)this;
    if (FVar1 != (ForElementType<FSoftClassPath>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= param_1) {
      FVar5 = (ForElementType<FSoftClassPath>)this;
      if (FVar1 != (ForElementType<FSoftClassPath>)0x0) {
        FVar5 = FVar1;
      }
      if ((param_1 < (FSoftClassPath *)((longlong)this->ArrayMax * 0x20 + (longlong)FVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
                        (0x820,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FSoftClassPath>)0x0) {
      this = (TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)
             FVar1;
    }
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)((longlong)iVar4 * 0x20 + (longlong)this),
               (FSoftObjectPath *)param_1);
  }
  return iVar4;
}

// AddUniqueImpl<FSoftObjectPath_const_&> @ 149dcc050

int __thiscall
TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FSoftObjectPath_const_&>
          (TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          FSoftObjectPath *param_1)

{
  ForElementType<FSoftObjectPath> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSoftObjectPath> FVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<FSoftObjectPath>)this;
    if (FVar1 != (ForElementType<FSoftObjectPath>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= param_1) {
      FVar5 = (ForElementType<FSoftObjectPath>)this;
      if (FVar1 != (ForElementType<FSoftObjectPath>)0x0) {
        FVar5 = FVar1;
      }
      if ((param_1 < (FSoftObjectPath *)((longlong)this->ArrayMax * 0x20 + (longlong)FVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
                        (0x820,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FSoftObjectPath>)0x0) {
      this = (TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)
             FVar1;
    }
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)((longlong)iVar4 * 0x20 + (longlong)this),param_1);
  }
  return iVar4;
}

// AddUniqueImpl<FString_const_&> @ 149dcc160

int __thiscall
TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FString_const_&>
          (TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          FString *param_1)

{
  ForElementType<FString> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FString> FVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<FString>)this;
    if (FVar1 != (ForElementType<FString>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= param_1) {
      FVar5 = (ForElementType<FString>)this;
      if (FVar1 != (ForElementType<FString>)0x0) {
        FVar5 = FVar1;
      }
      if ((param_1 < (FString *)((longlong)this->ArrayMax * 0x10 + (longlong)FVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FString>)0x0) {
      this = (TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
    }
    ::FString::FString((FString *)((longlong)iVar4 * 0x10 + (longlong)this),param_1);
  }
  return iVar4;
}

// Empty @ 149e554f0

void __thiscall
TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 149e55960

int __thiscall
TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::Find
          (TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          FSoftClassPath *param_1)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSoftClassPath> FVar3;
  
  FVar3 = (this->AllocatorInstance).SecondaryData;
  iVar1 = this->ArrayNum;
  if (FVar3 != (ForElementType<FSoftClassPath>)0x0) {
    this = (TArray<FSoftClassPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)
           FVar3;
  }
  FVar3 = (ForElementType<FSoftClassPath>)this;
  while( true ) {
    if (FVar3 == (ForElementType<FSoftClassPath>)((longlong)iVar1 * 0x20 + (longlong)this)) {
      return -1;
    }
    bVar2 = FSoftObjectPath::operator==((FSoftObjectPath *)FVar3,(FSoftObjectPath *)param_1);
    if (bVar2) break;
    FVar3 = (ForElementType<FSoftClassPath>)((longlong)FVar3 + 0x20);
  }
  return (int)((longlong)FVar3 - (longlong)this >> 5);
}

// Find @ 149e559f0

int __thiscall
TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::Find
          (TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          FSoftObjectPath *param_1)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSoftObjectPath> FVar3;
  
  FVar3 = (this->AllocatorInstance).SecondaryData;
  iVar1 = this->ArrayNum;
  if (FVar3 != (ForElementType<FSoftObjectPath>)0x0) {
    this = (TArray<FSoftObjectPath,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)
           FVar3;
  }
  FVar3 = (ForElementType<FSoftObjectPath>)this;
  while( true ) {
    if (FVar3 == (ForElementType<FSoftObjectPath>)((longlong)iVar1 * 0x20 + (longlong)this)) {
      return -1;
    }
    bVar2 = FSoftObjectPath::operator==((FSoftObjectPath *)FVar3,param_1);
    if (bVar2) break;
    FVar3 = (ForElementType<FSoftObjectPath>)((longlong)FVar3 + 0x20);
  }
  return (int)((longlong)FVar3 - (longlong)this >> 5);
}

// Find @ 149e55a80

int __thiscall
TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::Find
          (TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ForElementType<FString> FVar4;
  bool bVar5;
  
  FVar4 = (this->AllocatorInstance).SecondaryData;
  iVar1 = this->ArrayNum;
  if (FVar4 != (ForElementType<FString>)0x0) {
    this = (TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)FVar4;
  }
  FVar4 = (ForElementType<FString>)this;
  while( true ) {
    if (FVar4 == (ForElementType<FString>)((longlong)iVar1 * 0x10 + (longlong)this)) {
      return -1;
    }
    iVar3 = *(int *)((longlong)FVar4 + 8);
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar3 == iVar2) {
      if (iVar3 < 2) break;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)FVar4,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar3 + iVar2 == 1;
    }
    if (bVar5) break;
    FVar4 = (ForElementType<FString>)((longlong)FVar4 + 0x10);
  }
  return (int)((longlong)FVar4 - (longlong)this >> 4);
}

// FindLast @ 149e55fd0

int __thiscall
TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::FindLast
          (TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *this,FSoftClassPath *param_1)

{
  FSoftObjectPath *pFVar1;
  bool bVar2;
  FSoftObjectPath *this_00;
  
  pFVar1 = (FSoftObjectPath *)(this->AllocatorInstance).Data;
  this_00 = pFVar1 + this->ArrayNum;
  do {
    if (this_00 == pFVar1) {
      return -1;
    }
    this_00 = this_00 + -1;
    bVar2 = FSoftObjectPath::operator==(this_00,(FSoftObjectPath *)param_1);
  } while (!bVar2);
  return (int)((longlong)this_00 - (longlong)pFVar1 >> 5);
}

// FindLast @ 149e56050

int __thiscall
TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::FindLast
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *this,FSoftObjectPath *param_1)

{
  FSoftObjectPath *pFVar1;
  bool bVar2;
  FSoftObjectPath *this_00;
  
  pFVar1 = (FSoftObjectPath *)(this->AllocatorInstance).Data;
  this_00 = pFVar1 + this->ArrayNum;
  do {
    if (this_00 == pFVar1) {
      return -1;
    }
    this_00 = this_00 + -1;
    bVar2 = FSoftObjectPath::operator==(this_00,param_1);
  } while (!bVar2);
  return (int)((longlong)this_00 - (longlong)pFVar1 >> 5);
}

// FindLast @ 149e560d0

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::FindLast
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar2 + (longlong)this->ArrayNum * 0x10;
  do {
    if (pFVar4 == pFVar2) {
      return -1;
    }
    iVar3 = *(int *)(pFVar4 + -8);
    pFVar4 = pFVar4 + -0x10;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) break;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar4,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar1 + iVar3 == 1;
    }
  } while (!bVar5);
  return (int)((longlong)pFVar4 - (longlong)pFVar2 >> 4);
}

// Init @ 149e73610

void __thiscall
TArray<__int64,TSizedDefaultAllocator<32>_>::Init
          (TArray<__int64,TSizedDefaultAllocator<32>_> *this,long64 *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)*piVar1 * 8)) {
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
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      *(long64 *)((this->AllocatorInstance).Data + (longlong)iVar5 * 8) = *param_1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// RemoveAtImpl @ 149e84e50

void __thiscall
TArray<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>
  *_Dst;
  
  _Dst = (TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>
          *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<TMap<int,TSoftObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSoftObjectPtr<UMaterialInterface>,0>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 149e8f8a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<__int64_const_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<__int64_const_*> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<__int64_const_*>)0x0) {
      this = (TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<__int64_const_*>)this;
        if (FVar2 != (ForElementType<__int64_const_*>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149e8fa00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<__int64_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<__int64_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<__int64_*> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
              (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<__int64_*>)this;
        if (FVar2 != (ForElementType<__int64_*>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 8);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149e8fb40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<__int64_const_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<__int64_const_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<__int64_const_*> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>_>
              (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<__int64_const_*>)this;
        if (FVar2 != (ForElementType<__int64_const_*>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 8);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>_>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<unsigned_int_const_&> @ 149ee4cc0

int __thiscall
TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<unsigned_int_const_&>
          (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *this,
          uint *param_1)

{
  ForElementType<unsigned_int> FVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  ForElementType<unsigned_int> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<unsigned_int>)this;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<unsigned_int>)((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(uint *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<unsigned_int>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<unsigned_int>)this;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (uint *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(uint *)((longlong)this + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<UPCGNode_*_const_&> @ 149ee4dd0

int __thiscall
TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UPCGNode_*_const_&>
          (TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *this,UPCGNode **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UPCGNode **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UPCGNode **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// Append<TArrayView<FPCGCrc_const_,int>_const_&> @ 149ee4ed0

void __thiscall
TArray<FPCGCrc,TSizedDefaultAllocator<32>_>::Append<TArrayView<FPCGCrc_const_,int>_const_&>
          (TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *this,TArrayView<FPCGCrc_const_,int> *param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1->DataPtr,(longlong)iVar1 << 3)
  ;
  return;
}

// Append<TArrayView<FPCGTaggedData_const_,int>_const_&> @ 149ee4f80

void __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
Append<TArrayView<FPCGTaggedData_const_,int>_const_&>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FPCGTaggedData_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
            ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x78,param_1->DataPtr,iVar1);
  return;
}

// operator= @ 149ef0050

TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::operator=
          (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  int *piVar3;
  ForElementType<unsigned_int> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = &this->ArrayMax;
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      param_1 = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)
                FVar2;
    }
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0xd;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 149ef0100

TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UPCGManagedResource>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UPCGManagedResource>,TObjectPtr<UPCGManagedResource>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UPCGManagedResource> *)pFVar2,iVar1);
  }
  return this;
}

// Remove @ 149f10070

int __thiscall
TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::Remove
          (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *this,
          uint *param_1)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<unsigned_int>)this;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (uint *)((longlong)FVar5 + (longlong)this->ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar6 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar1;
  }
  iVar10 = 0;
  bVar3 = *(uint *)FVar5 != *param_1;
  lVar7 = 0;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar9 = iVar8 + 1;
    if (lVar7 < lVar6) {
      do {
        if (bVar3 != (*(uint *)((longlong)FVar5 + lVar7 * 4) != *param_1)) break;
        iVar9 = iVar9 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar6);
    }
    if (bVar3 != false) {
      if (iVar10 != iVar8) {
        memmove((int *)((longlong)FVar5 + (longlong)iVar10 * 4),
                (int *)((longlong)FVar5 + (longlong)iVar8 * 4),(longlong)(iVar9 - iVar8) << 2);
      }
      iVar10 = iVar10 + (iVar9 - iVar8);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar8 = iVar9;
    if (lVar6 <= lVar7) {
      this->ArrayNum = iVar10;
      return iVar4 - iVar10;
    }
  } while( true );
}

// SetNum @ 149f12480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FPCGDataCollection,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x30,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// AddUniqueImpl<FPCGDataTypeIdentifier> @ 149f20ba0

int __thiscall
TArray<FPCGDataTypeIdentifier,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FPCGDataTypeIdentifier>
          (TArray<FPCGDataTypeIdentifier,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,FPCGDataTypeIdentifier *param_1)

{
  ForElementType<FPCGDataTypeIdentifier> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FPCGDataTypeIdentifier> FVar5;
  longlong lVar6;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<FPCGDataTypeIdentifier>)this;
    if (FVar1 != (ForElementType<FPCGDataTypeIdentifier>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= param_1) {
      FVar5 = (ForElementType<FPCGDataTypeIdentifier>)this;
      if (FVar1 != (ForElementType<FPCGDataTypeIdentifier>)0x0) {
        FVar5 = FVar1;
      }
      if ((param_1 < (FPCGDataTypeIdentifier *)((longlong)FVar5 + (longlong)this->ArrayMax * 0x18))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeIdentifier>_>
                        (0x818,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FPCGDataTypeIdentifier>)0x0) {
      this = (TArray<FPCGDataTypeIdentifier,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              *)FVar1;
    }
    lVar6 = (longlong)iVar4;
    *(undefined8 *)((longlong)this + lVar6 * 0x18) = 0;
    *(FScriptContainerElement **)((longlong)this + lVar6 * 0x18) =
         (param_1->Ids).AllocatorInstance.Data;
    (param_1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((uchar *)((longlong)this + 8) + lVar6 * 0x18) = (param_1->Ids).ArrayNum;
    *(int *)((uchar *)((longlong)this + 0xc) + lVar6 * 0x18) = (param_1->Ids).ArrayMax;
    (param_1->Ids).ArrayNum = 0;
    (param_1->Ids).ArrayMax = 0;
    *(int *)((uchar *)((longlong)this + 0x10) + lVar6 * 0x18) = param_1->CustomSubtype;
  }
  return iVar4;
}

// Append<unsigned___int64,TSizedDefaultAllocator<32>_> @ 149f20cd0

void __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
Append<unsigned___int64,TSizedDefaultAllocator<32>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
            (longlong)iVar1 << 3);
    param_1->ArrayNum = 0;
  }
  return;
}

// CopyToEmpty<char8_t,int> @ 149f21040

void __thiscall
TArray<char8_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<char8_t,int>
          (TArray<char8_t,TSizedDefaultAllocator<32>_> *this,uchar *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2);
  }
  return;
}

// operator() @ 149f36980

bool __thiscall
`TArray<PCGRuntimeGenChangeDetection::FDetectionInputs,TSizedDefaultAllocator<32>_>::Remove'::__l2::
<lambda_1>::operator()(void *this,FDetectionInputs *param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = *(int **)this;
  if (((*(int *)param_1 == *piVar1) && (*(int *)&param_1->field_0x4 == piVar1[1])) &&
     (*(longlong *)&param_1->field_0x8 == *(longlong *)(piVar1 + 2))) {
    bVar2 = FPCGRuntimeGenerationRadii::operator==
                      ((FPCGRuntimeGenerationRadii *)&param_1->field_0x10,
                       (FPCGRuntimeGenerationRadii *)(piVar1 + 4));
    if (((bVar2) && ((float)piVar1[0x1c] == *(float *)&param_1->field_0x70)) &&
       ((param_1->field_0x74 == (char)piVar1[0x1d] && (*(int *)&param_1->field_0x78 == piVar1[0x1e])
        ))) {
      return true;
    }
  }
  return false;
}

// Find @ 149f447d0

int __thiscall
TArray<FPCGDataTypeIdentifier,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::Find
          (TArray<FPCGDataTypeIdentifier,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,FPCGDataTypeIdentifier *param_1)

{
  int iVar1;
  bool bVar2;
  ForElementType<FPCGDataTypeIdentifier> FVar3;
  ForElementType<FPCGDataTypeIdentifier> FVar4;
  
  FVar3 = (this->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<FPCGDataTypeIdentifier>)this;
  if (FVar3 != (ForElementType<FPCGDataTypeIdentifier>)0x0) {
    FVar4 = FVar3;
  }
  iVar1 = this->ArrayNum;
  FVar3 = FVar4;
  while( true ) {
    if (FVar3 == (ForElementType<FPCGDataTypeIdentifier>)((longlong)FVar4 + (longlong)iVar1 * 0x18))
    {
      return -1;
    }
    bVar2 = FPCGDataTypeIdentifier::IsIdentical((FPCGDataTypeIdentifier *)FVar3,param_1);
    if (bVar2) break;
    FVar3 = (ForElementType<FPCGDataTypeIdentifier>)((longlong)FVar3 + 0x18);
  }
  return (int)(((longlong)FVar3 - (longlong)FVar4) / 0x18);
}

// Remove @ 149f5cd30

int __thiscall
TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UPCGEdge>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UPCGEdge> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UPCGEdge **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UPCGEdge **)(pFVar1 + lVar6 * 8) != (param_1->field0_0x0).DebugPtr)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAt @ 149f5dc00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
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
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x88;
  if (*(void **)(_Dst + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x78));
  }
  *(undefined4 *)(_Dst + 0x68) = 0;
  if (*(void **)(_Dst + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(_Dst + 0x20));
  if (*(void **)(_Dst + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 8));
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x88,(longlong)iVar4 * 0x88);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 149f5dde0

void __thiscall
TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (*(void **)(pFVar1 + (longlong)param_1 * 0x28 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + (longlong)param_1 * 0x28 + 0x18));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x28,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x28,
            (longlong)iVar2 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 149f5de70

void __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  UPCGData *pUVar2;
  int iVar3;
  FPCGDataPtrWrapper *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FPCGDataPtrWrapper *)(pFVar1 + (longlong)param_1 * 0x78);
  this_00[5].WeakData.WeakPtr.ObjectIndex = 0;
  pUVar2 = this_00[5].Data.field0_0x0.DebugPtr;
  if (pUVar2 != (UPCGData *)0x0) {
    FMemory::Free(pUVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this_00 + 1));
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(this_00);
  iVar3 = ~param_1 + this->ArrayNum;
  if (1 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar3) * 0x78,(longlong)iVar3 * 0x78);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 149f60ce0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGPoint_*,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FPCGPoint_*,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2
          )

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 149f60e20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPCGPoint_const_*,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FPCGPoint_const_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 149f61060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TArray<unsigned_int,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>_> *)FVar2
      ;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// CopyToEmpty<FPCGMeshSelectorWeightedEntry,int> @ 14a014110

void __thiscall
TArray<FPCGMeshSelectorWeightedEntry,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FPCGMeshSelectorWeightedEntry,int>
          (TArray<FPCGMeshSelectorWeightedEntry,TSizedDefaultAllocator<32>_> *this,
          FPCGMeshSelectorWeightedEntry *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x288,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FPCGMeshSelectorWeightedEntry,FPCGMeshSelectorWeightedEntry,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

