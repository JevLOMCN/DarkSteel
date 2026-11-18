// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FRedirectTypeMap @ 141fbe380

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FRedirectTypeMap * __thiscall
FCoreRedirects::FRedirectTypeMap::FRedirectTypeMap(FRedirectTypeMap *this,FRedirectTypeMap *param_1)

{
  TArray<TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  ulonglong uVar8;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar9;
  FRedirectTypeMap *pFVar10;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar12;
  int iVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined4 local_res18;
  int local_res20;
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  TPairInitializer<ECoreRedirectFlags_const_&,FCoreRedirects::FRedirectNameMap_*_&&> local_a8;
  FRedirectTypeMap *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  FScriptContainerElement *local_70;
  FRedirectNameMap ***local_68;
  FScriptContainerElement local_60 [32];
  
  uVar15 = 0;
  this_00 = &this->FastIterable;
  *(undefined8 *)&this->Map = 0;
  *(undefined8 *)&(this->Map).field_0x8 = 0;
  *(undefined8 *)&(this->Map).field_0x20 = 0;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  *(undefined4 *)&(this->Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  *(undefined8 *)&(this->Map).field_0x40 = 0;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FastIterable).ArrayNum = 0;
  (this->FastIterable).ArrayMax = 0;
  TArray<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TSizedDefaultAllocator<32>_>
  ::
  Append<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TSizedDefaultAllocator<32>_>
            (this_00,&param_1->FastIterable);
  uVar19 = (this->FastIterable).ArrayNum;
  if (uVar19 <= (uint)(*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34))
  goto LAB_141fbe5ea;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar19);
  if (uVar19 < 4) {
    uVar19 = 1;
  }
  else {
    uVar17 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_res18 = (undefined4)lVar18;
    uVar19 = 1 << ((byte)lVar18 & 0x1f);
  }
  iVar13 = *(int *)&(this->Map).field_0x48;
  if ((iVar13 != 0) && ((int)uVar19 <= iVar13)) goto LAB_141fbe5ea;
  *(uint *)&(this->Map).field_0x48 = uVar19;
  if (*(longlong *)&(this->Map).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Map).field_0x40,0,0,4);
  }
  if (uVar19 != 0) {
    uVar22 = uVar19;
    if (uVar19 < 2) {
      if (*(longlong *)&(this->Map).field_0x40 != 0) {
        uVar22 = 0;
        goto LAB_141fbe46f;
      }
    }
    else {
LAB_141fbe46f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->Map).field_0x40,0,uVar22,4);
    }
    if (0 < (int)uVar19) {
      uVar23 = (ulonglong)uVar19;
      uVar17 = uVar15;
      do {
        puVar2 = *(undefined1 **)&(this->Map).field_0x40;
        puVar14 = &(this->Map).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar14 = puVar2;
        }
        uVar8 = uVar17 & (longlong)(int)uVar19 - 1U;
        uVar17 = uVar17 + 1;
        *(undefined4 *)(puVar14 + uVar8 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (*(int *)&(this->Map).field_0x48 != 0) {
    uVar19 = *(uint *)&(this->Map).field_0x28;
    local_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Map).field_0x10;
    uStack_c4 = 1;
    local_c8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    if (uVar19 != 0) {
      puVar24 = *(uint **)&(this->Map).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)local_90.Array;
      }
      uVar22 = *puVar24;
      uVar17 = uVar15;
      while (uVar22 == 0) {
        uStack_b0 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_b0;
        iVar13 = (int)uVar15;
        local_c8 = iVar13 + 1;
        uVar15 = (ulonglong)local_c8;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_c8)
        goto LAB_141fbe55e;
        uVar22 = puVar24[(longlong)iVar13 + 1];
      }
      uStack_c4 = -uVar22 & uVar22;
      uVar15 = (ulonglong)uStack_c4 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_res20 = (int)lVar18;
      uStack_b4 = local_res20 + -1 + uStack_b0;
      uVar15 = (ulonglong)uStack_b4;
      if ((int)uVar19 < (int)uStack_b4) {
LAB_141fbe55e:
        uVar15 = (ulonglong)uVar19;
        uStack_b4 = uVar19;
      }
    }
    local_90._padding_ = CONCAT44(uStack_c4,local_c8);
    local_90.UnvisitedBitMask = 0xffffffff;
    local_90.CurrentBitIndex = uStack_b4;
    local_90.BaseBitIndex = uStack_b0;
    local_98 = this;
    if ((int)uVar15 < (int)uVar19) {
      do {
        iVar13 = (int)uVar15;
        uVar19 = *(int *)&(this->Map).field_0x48 - 1U &
                 *(uint *)(*(longlong *)&local_98->Map + (longlong)iVar13 * 0x18);
        lVar18 = *(longlong *)&local_98->Map + (longlong)iVar13 * 0x18;
        *(uint *)(lVar18 + 0x14) = uVar19;
        puVar2 = *(undefined1 **)&(this->Map).field_0x40;
        puVar14 = &(this->Map).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar14 = puVar2;
        }
        uVar15 = (longlong)*(int *)&(this->Map).field_0x48 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)(lVar18 + 0x10) = *(undefined4 *)(puVar14 + uVar15 * 4);
        *(int *)(puVar14 + uVar15 * 4) = iVar13;
        local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
        uVar15 = (ulonglong)(uint)local_90.CurrentBitIndex;
      } while (local_90.CurrentBitIndex < (local_90.Array)->NumBits);
    }
  }
LAB_141fbe5ea:
  local_res10 = (this->FastIterable).ArrayNum;
  uVar15 = (ulonglong)(int)local_res10;
  pFVar26 = (this_00->AllocatorInstance).Data;
  pFVar25 = pFVar26 + uVar15 * 0x68;
  pFVar20 = pFVar26 + 0x58;
  while( true ) {
    if ((this->FastIterable).ArrayNum != (int)uVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar26 == pFVar25) break;
    local_a8.Value = (FRedirectNameMap **)(pFVar20 + -0x50);
    local_68 = &local_a8.Value;
    local_70 = pFVar26;
    TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_ECoreRedirectFlags_const_&,FCoreRedirects::FRedirectNameMap_*_&&>_>
              (this,&local_a8,(bool *)&local_70);
    if (*(longlong *)pFVar20 != 0) {
      pTVar9 = ::operator_new(0x480,0x40);
      pTVar12 = (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0;
      pTVar21 = pTVar12;
      if (pTVar9 != (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar9[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar9[3].ArrayNum = 0;
        pTVar9[3].ArrayMax = 0;
        *(undefined8 *)((longlong)&pTVar9[0x44].AllocatorInstance.Data + 2) = 0;
        *(undefined8 *)((longlong)&pTVar9[0x44].ArrayNum + 2) = 0;
        *(undefined8 *)((longlong)&pTVar9[0x45].AllocatorInstance.Data + 2) = 0;
        *(undefined8 *)((longlong)&pTVar9[0x45].ArrayNum + 2) = 0;
        *(undefined8 *)((longlong)&pTVar9[0x46].AllocatorInstance.Data + 2) = 0;
        *(undefined8 *)((longlong)&pTVar9[0x46].ArrayNum + 2) = 0;
        *(undefined8 *)((longlong)&pTVar9[0x47].AllocatorInstance.Data + 2) = 0;
        *(undefined4 *)((longlong)&pTVar9[0x47].ArrayNum + 2) = 0;
        *(undefined2 *)((longlong)&pTVar9[0x47].ArrayMax + 2) = 0;
        (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar9->ArrayNum = 0;
        pTVar9->ArrayMax = 0;
        pTVar9[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar9[1].ArrayNum = 0;
        pTVar9[1].ArrayMax = 0;
        pTVar9[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar9[2].ArrayNum = 0;
        pTVar9[2].ArrayMax = 0;
        *(undefined2 *)&pTVar9[4].AllocatorInstance.Data = 0x10;
        memset((void *)((longlong)&pTVar9[4].AllocatorInstance.Data + 2),0xff,0x200);
        memset((void *)((longlong)&pTVar9[0x24].AllocatorInstance.Data + 2),0xff,0x200);
        pTVar21 = pTVar9;
      }
      if ((*(longlong *)pFVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FRedirectTypeMap *)(*pcVar3)();
        return pFVar10;
      }
      pTVar9 = *(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> **)pFVar20;
      TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::operator=(pTVar21,pTVar9);
      TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::operator=(pTVar21 + 1,pTVar9 + 1);
      TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::operator=(pTVar21 + 2,pTVar9 + 2);
      lVar18 = 8;
      pTVar9 = pTVar9 + 4;
      pTVar6 = pTVar21 + 4;
      do {
        pTVar16 = pTVar6;
        pTVar11 = pTVar9;
        iVar13 = pTVar11->ArrayNum;
        iVar5 = pTVar11->ArrayMax;
        (pTVar16->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
        pTVar16->ArrayNum = iVar13;
        pTVar16->ArrayMax = iVar5;
        iVar13 = pTVar11[1].ArrayNum;
        iVar5 = pTVar11[1].ArrayMax;
        pTVar16[1].AllocatorInstance.Data = pTVar11[1].AllocatorInstance.Data;
        pTVar16[1].ArrayNum = iVar13;
        pTVar16[1].ArrayMax = iVar5;
        iVar13 = pTVar11[2].ArrayNum;
        iVar5 = pTVar11[2].ArrayMax;
        pTVar16[2].AllocatorInstance.Data = pTVar11[2].AllocatorInstance.Data;
        pTVar16[2].ArrayNum = iVar13;
        pTVar16[2].ArrayMax = iVar5;
        iVar13 = pTVar11[3].ArrayNum;
        iVar5 = pTVar11[3].ArrayMax;
        pTVar16[3].AllocatorInstance.Data = pTVar11[3].AllocatorInstance.Data;
        pTVar16[3].ArrayNum = iVar13;
        pTVar16[3].ArrayMax = iVar5;
        iVar13 = pTVar11[4].ArrayNum;
        iVar5 = pTVar11[4].ArrayMax;
        pTVar16[4].AllocatorInstance.Data = pTVar11[4].AllocatorInstance.Data;
        pTVar16[4].ArrayNum = iVar13;
        pTVar16[4].ArrayMax = iVar5;
        iVar13 = pTVar11[5].ArrayNum;
        iVar5 = pTVar11[5].ArrayMax;
        pTVar16[5].AllocatorInstance.Data = pTVar11[5].AllocatorInstance.Data;
        pTVar16[5].ArrayNum = iVar13;
        pTVar16[5].ArrayMax = iVar5;
        iVar13 = pTVar11[6].ArrayNum;
        iVar5 = pTVar11[6].ArrayMax;
        pTVar16[6].AllocatorInstance.Data = pTVar11[6].AllocatorInstance.Data;
        pTVar16[6].ArrayNum = iVar13;
        pTVar16[6].ArrayMax = iVar5;
        iVar13 = pTVar11[7].ArrayNum;
        iVar5 = pTVar11[7].ArrayMax;
        pTVar16[7].AllocatorInstance.Data = pTVar11[7].AllocatorInstance.Data;
        pTVar16[7].ArrayNum = iVar13;
        pTVar16[7].ArrayMax = iVar5;
        lVar18 = lVar18 + -1;
        pTVar9 = pTVar11 + 8;
        pTVar6 = pTVar16 + 8;
      } while (lVar18 != 0);
      iVar13 = pTVar11[8].ArrayNum;
      iVar5 = pTVar11[8].ArrayMax;
      pTVar16[8].AllocatorInstance.Data = pTVar11[8].AllocatorInstance.Data;
      pTVar16[8].ArrayNum = iVar13;
      pTVar16[8].ArrayMax = iVar5;
      iVar13 = pTVar11[9].ArrayNum;
      iVar5 = pTVar11[9].ArrayMax;
      pTVar16[9].AllocatorInstance.Data = pTVar11[9].AllocatorInstance.Data;
      pTVar16[9].ArrayNum = iVar13;
      pTVar16[9].ArrayMax = iVar5;
      iVar13 = pTVar11[10].ArrayNum;
      iVar5 = pTVar11[10].ArrayMax;
      pTVar16[10].AllocatorInstance.Data = pTVar11[10].AllocatorInstance.Data;
      pTVar16[10].ArrayNum = iVar13;
      pTVar16[10].ArrayMax = iVar5;
      uVar4 = *(undefined4 *)((longlong)&pTVar11[0xb].AllocatorInstance.Data + 4);
      iVar13 = pTVar11[0xb].ArrayNum;
      iVar5 = pTVar11[0xb].ArrayMax;
      *(undefined4 *)&pTVar16[0xb].AllocatorInstance.Data =
           *(undefined4 *)&pTVar11[0xb].AllocatorInstance.Data;
      *(undefined4 *)((longlong)&pTVar16[0xb].AllocatorInstance.Data + 4) = uVar4;
      pTVar16[0xb].ArrayNum = iVar13;
      pTVar16[0xb].ArrayMax = iVar5;
      pTVar9 = ::operator_new(0x18);
      if (pTVar9 != (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar9->ArrayNum = 1;
        (pTVar9->AllocatorInstance).Data =
             (FScriptContainerElement *)
             &
             ___7__TReferenceControllerWithDeleter_UFWildcardData_FCoreRedirects__U__DefaultDeleter_UFWildcardData_FCoreRedirects___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar9->ArrayMax = 1;
        pTVar9[1].AllocatorInstance.Data = (FScriptContainerElement *)pTVar21;
        pTVar12 = pTVar9;
      }
      if (pFVar20 != local_60) {
        *(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> **)pFVar20 = pTVar21;
        pTVar21 = *(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> **)(pFVar20 + 8);
        if (pTVar12 != pTVar21) {
          pTVar9 = (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0;
          *(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> **)(pFVar20 + 8) = pTVar12;
          pTVar12 = (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0;
          if (pTVar21 != (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0) {
            LOCK();
            piVar1 = &pTVar21->ArrayNum;
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            pTVar12 = pTVar9;
            if (iVar13 == 1) {
              (**(code **)(pTVar21->AllocatorInstance).Data)(pTVar21);
              LOCK();
              piVar1 = &pTVar21->ArrayMax;
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)((pTVar21->AllocatorInstance).Data + 8))(pTVar21,1);
              }
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar12);
    }
    uVar15 = (ulonglong)local_res10;
    pFVar26 = pFVar26 + 0x68;
    pFVar20 = pFVar20 + 0x68;
  }
  return this;
}

// operator= @ 141fc0b30

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FRedirectTypeMap * __thiscall
FCoreRedirects::FRedirectTypeMap::operator=(FRedirectTypeMap *this,FRedirectTypeMap *param_1)

{
  TArray<TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  atomic<int> *paVar4;
  atomic<int> aVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  int iVar12;
  FRedirectTypeMap *pFVar13;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar16;
  ulonglong uVar17;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *pTVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  uint local_res10;
  TPairInitializer<ECoreRedirectFlags_const_&,FCoreRedirects::FRedirectNameMap_*_&&> local_res18;
  FScriptContainerElement *local_68;
  FRedirectNameMap ***local_60;
  FScriptContainerElement local_58 [24];
  
  uVar6 = (param_1->FastIterable).ArrayNum;
  pTVar1 = &this->FastIterable;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  piVar2 = &(this->FastIterable).ArrayNum;
  DestructItems<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int>
            ((TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap> *)
             (pTVar1->AllocatorInstance).Data,(this->FastIterable).ArrayNum);
  piVar3 = &(this->FastIterable).ArrayMax;
  *piVar2 = 0;
  if (*piVar3 != uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,uVar6,&pTVar1->AllocatorInstance,0,piVar3);
  }
  if ((pTVar1 == &param_1->FastIterable) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FRedirectTypeMap *)(*pcVar8)();
    return pFVar13;
  }
  iVar7 = (param_1->FastIterable).ArrayNum;
  if (iVar7 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x68,8,iVar7,&pTVar1->AllocatorInstance,piVar2,piVar3);
    ConstructItems<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x68,
               (TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap> *)
               (param_1->FastIterable).AllocatorInstance.Data,iVar7);
  }
  TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>,FDefaultSetAllocator>
  ::Empty(this,(this->FastIterable).ArrayNum);
  pFVar23 = (pTVar1->AllocatorInstance).Data;
  local_res10 = *piVar2;
  uVar17 = (ulonglong)(int)local_res10;
  pFVar20 = pFVar23 + 0x58;
  pFVar22 = pFVar23 + uVar17 * 0x68;
  while( true ) {
    if (*piVar2 != (int)uVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar23 == pFVar22) break;
    local_res18.Value = (FRedirectNameMap **)(pFVar20 + -0x50);
    local_60 = &local_res18.Value;
    local_68 = pFVar23;
    TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_ECoreRedirectFlags_const_&,FCoreRedirects::FRedirectNameMap_*_&&>_>
              (this,&local_res18,(bool *)&local_68);
    if (*(longlong *)pFVar20 != 0) {
      pTVar14 = ::operator_new(0x480,0x40);
      pTVar16 = (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0;
      pTVar21 = pTVar16;
      if (pTVar14 != (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar14[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar14[3].ArrayNum = 0;
        pTVar14[3].ArrayMax = 0;
        *(undefined8 *)((longlong)&pTVar14[0x44].AllocatorInstance.Data + 2) = 0;
        *(undefined8 *)((longlong)&pTVar14[0x44].ArrayNum + 2) = 0;
        *(undefined8 *)((longlong)&pTVar14[0x45].AllocatorInstance.Data + 2) = 0;
        *(undefined8 *)((longlong)&pTVar14[0x45].ArrayNum + 2) = 0;
        *(undefined8 *)((longlong)&pTVar14[0x46].AllocatorInstance.Data + 2) = 0;
        *(undefined8 *)((longlong)&pTVar14[0x46].ArrayNum + 2) = 0;
        *(undefined8 *)((longlong)&pTVar14[0x47].AllocatorInstance.Data + 2) = 0;
        *(undefined4 *)((longlong)&pTVar14[0x47].ArrayNum + 2) = 0;
        *(undefined2 *)((longlong)&pTVar14[0x47].ArrayMax + 2) = 0;
        (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar14->ArrayNum = 0;
        pTVar14->ArrayMax = 0;
        pTVar14[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar14[1].ArrayNum = 0;
        pTVar14[1].ArrayMax = 0;
        pTVar14[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar14[2].ArrayNum = 0;
        pTVar14[2].ArrayMax = 0;
        *(undefined2 *)&pTVar14[4].AllocatorInstance.Data = 0x10;
        memset((void *)((longlong)&pTVar14[4].AllocatorInstance.Data + 2),0xff,0x200);
        memset((void *)((longlong)&pTVar14[0x24].AllocatorInstance.Data + 2),0xff,0x200);
        pTVar21 = pTVar14;
      }
      if ((*(longlong *)pFVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FRedirectTypeMap *)(*pcVar8)();
        return pFVar13;
      }
      pTVar14 = *(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> **)pFVar20;
      TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::operator=(pTVar21,pTVar14);
      TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::operator=(pTVar21 + 1,pTVar14 + 1);
      TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::operator=(pTVar21 + 2,pTVar14 + 2);
      lVar19 = 8;
      pTVar14 = pTVar14 + 4;
      pTVar10 = pTVar21 + 4;
      do {
        pTVar18 = pTVar10;
        pTVar15 = pTVar14;
        iVar7 = pTVar15->ArrayNum;
        iVar12 = pTVar15->ArrayMax;
        (pTVar18->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
        pTVar18->ArrayNum = iVar7;
        pTVar18->ArrayMax = iVar12;
        iVar7 = pTVar15[1].ArrayNum;
        iVar12 = pTVar15[1].ArrayMax;
        pTVar18[1].AllocatorInstance.Data = pTVar15[1].AllocatorInstance.Data;
        pTVar18[1].ArrayNum = iVar7;
        pTVar18[1].ArrayMax = iVar12;
        iVar7 = pTVar15[2].ArrayNum;
        iVar12 = pTVar15[2].ArrayMax;
        pTVar18[2].AllocatorInstance.Data = pTVar15[2].AllocatorInstance.Data;
        pTVar18[2].ArrayNum = iVar7;
        pTVar18[2].ArrayMax = iVar12;
        iVar7 = pTVar15[3].ArrayNum;
        iVar12 = pTVar15[3].ArrayMax;
        pTVar18[3].AllocatorInstance.Data = pTVar15[3].AllocatorInstance.Data;
        pTVar18[3].ArrayNum = iVar7;
        pTVar18[3].ArrayMax = iVar12;
        iVar7 = pTVar15[4].ArrayNum;
        iVar12 = pTVar15[4].ArrayMax;
        pTVar18[4].AllocatorInstance.Data = pTVar15[4].AllocatorInstance.Data;
        pTVar18[4].ArrayNum = iVar7;
        pTVar18[4].ArrayMax = iVar12;
        iVar7 = pTVar15[5].ArrayNum;
        iVar12 = pTVar15[5].ArrayMax;
        pTVar18[5].AllocatorInstance.Data = pTVar15[5].AllocatorInstance.Data;
        pTVar18[5].ArrayNum = iVar7;
        pTVar18[5].ArrayMax = iVar12;
        iVar7 = pTVar15[6].ArrayNum;
        iVar12 = pTVar15[6].ArrayMax;
        pTVar18[6].AllocatorInstance.Data = pTVar15[6].AllocatorInstance.Data;
        pTVar18[6].ArrayNum = iVar7;
        pTVar18[6].ArrayMax = iVar12;
        iVar7 = pTVar15[7].ArrayNum;
        iVar12 = pTVar15[7].ArrayMax;
        pTVar18[7].AllocatorInstance.Data = pTVar15[7].AllocatorInstance.Data;
        pTVar18[7].ArrayNum = iVar7;
        pTVar18[7].ArrayMax = iVar12;
        lVar19 = lVar19 + -1;
        pTVar14 = pTVar15 + 8;
        pTVar10 = pTVar18 + 8;
      } while (lVar19 != 0);
      iVar7 = pTVar15[8].ArrayNum;
      iVar12 = pTVar15[8].ArrayMax;
      pTVar18[8].AllocatorInstance.Data = pTVar15[8].AllocatorInstance.Data;
      pTVar18[8].ArrayNum = iVar7;
      pTVar18[8].ArrayMax = iVar12;
      iVar7 = pTVar15[9].ArrayNum;
      iVar12 = pTVar15[9].ArrayMax;
      pTVar18[9].AllocatorInstance.Data = pTVar15[9].AllocatorInstance.Data;
      pTVar18[9].ArrayNum = iVar7;
      pTVar18[9].ArrayMax = iVar12;
      iVar7 = pTVar15[10].ArrayNum;
      iVar12 = pTVar15[10].ArrayMax;
      pTVar18[10].AllocatorInstance.Data = pTVar15[10].AllocatorInstance.Data;
      pTVar18[10].ArrayNum = iVar7;
      pTVar18[10].ArrayMax = iVar12;
      uVar9 = *(undefined4 *)((longlong)&pTVar15[0xb].AllocatorInstance.Data + 4);
      iVar7 = pTVar15[0xb].ArrayNum;
      iVar12 = pTVar15[0xb].ArrayMax;
      *(undefined4 *)&pTVar18[0xb].AllocatorInstance.Data =
           *(undefined4 *)&pTVar15[0xb].AllocatorInstance.Data;
      *(undefined4 *)((longlong)&pTVar18[0xb].AllocatorInstance.Data + 4) = uVar9;
      pTVar18[0xb].ArrayNum = iVar7;
      pTVar18[0xb].ArrayMax = iVar12;
      pTVar14 = ::operator_new(0x18);
      if (pTVar14 != (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0) {
        *(atomic<int> *)&pTVar14->ArrayNum = (atomic<int>)0x1;
        (pTVar14->AllocatorInstance).Data =
             (FScriptContainerElement *)
             &
             ___7__TReferenceControllerWithDeleter_UFWildcardData_FCoreRedirects__U__DefaultDeleter_UFWildcardData_FCoreRedirects___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        *(atomic<int> *)&pTVar14->ArrayMax = (atomic<int>)0x1;
        pTVar14[1].AllocatorInstance.Data = (FScriptContainerElement *)pTVar21;
        pTVar16 = pTVar14;
      }
      if (pFVar20 != local_58) {
        *(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> **)pFVar20 = pTVar21;
        pTVar21 = *(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> **)(pFVar20 + 8);
        if (pTVar16 != pTVar21) {
          pTVar14 = (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0;
          *(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> **)(pFVar20 + 8) = pTVar16;
          pTVar16 = (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0;
          if (pTVar21 != (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *)0x0) {
            LOCK();
            paVar4 = (atomic<int> *)&pTVar21->ArrayNum;
            aVar5 = *paVar4;
            *paVar4 = (atomic<int>)((int)*paVar4 + -1);
            UNLOCK();
            pTVar16 = pTVar14;
            if (aVar5 == (atomic<int>)0x1) {
              (**(code **)(pTVar21->AllocatorInstance).Data)(pTVar21);
              LOCK();
              paVar4 = (atomic<int> *)&pTVar21->ArrayMax;
              aVar5 = *paVar4;
              *paVar4 = (atomic<int>)((int)*paVar4 + -1);
              UNLOCK();
              if (aVar5 == (atomic<int>)0x1) {
                (**(code **)((pTVar21->AllocatorInstance).Data + 8))(pTVar21,1);
              }
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar16);
    }
    uVar17 = (ulonglong)local_res10;
    pFVar23 = pFVar23 + 0x68;
    pFVar20 = pFVar20 + 0x68;
  }
  return this;
}

// Empty @ 141fca1b0

void __thiscall FCoreRedirects::FRedirectTypeMap::Empty(FRedirectTypeMap *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = 1 < *(int *)&(this->Map).field_0x48;
  if (!bVar4) {
    TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  puVar1 = &(this->Map).field_0xc;
  *(undefined4 *)&(this->Map).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  iVar3 = *(int *)&(this->Map).field_0x2c;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->Map).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Map).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->Map).field_0x48 = 1;
    TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>,FDefaultSetAllocator>
    ::Rehash(this);
  }
  DestructItems<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int>
            ((TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap> *)
             (this->FastIterable).AllocatorInstance.Data,(this->FastIterable).ArrayNum);
  piVar2 = &(this->FastIterable).ArrayMax;
  (this->FastIterable).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->FastIterable).AllocatorInstance,0,piVar2);
  }
  return;
}

// Find @ 141fcba10

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FRedirectNameMap * __thiscall
FCoreRedirects::FRedirectTypeMap::Find(FRedirectTypeMap *this,ECoreRedirectFlags param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
    puVar3 = *(undefined1 **)&(this->Map).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->Map).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->Map).field_0x48 - Type_Object & param_1) *
                              4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->Map + (longlong)iVar2 * 0x18;
        if (*(ECoreRedirectFlags *)(*(longlong *)&this->Map + (longlong)iVar2 * 0x18) == param_1) {
          if (lVar1 == 0) {
            return (FRedirectNameMap *)0x0;
          }
          return *(FRedirectNameMap **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FRedirectNameMap *)0x0;
}

// FindOrAdd @ 141fcbda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FRedirectNameMap * __thiscall
FCoreRedirects::FRedirectTypeMap::FindOrAdd(FRedirectTypeMap *this,ECoreRedirectFlags param_1)

{
  int *piVar1;
  int iVar2;
  FRedirectNameMap **ppFVar3;
  FWildcardData *pFVar4;
  FRedirectNameMap *this_00;
  FScriptContainerElement *pFVar5;
  FWildcardData *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  ECoreRedirectFlags local_d0 [2];
  TRawPtrProxy<FCoreRedirects::FWildcardData> local_c8;
  TPairInitializer<ECoreRedirectFlags_const_&,FCoreRedirects::FRedirectNameMap_*_&&> local_c0;
  TRawPtrProxy<FCoreRedirects::FWildcardData> *local_b0;
  undefined1 local_a8 [24];
  undefined8 uStack_90;
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  FRedirectNameMap *local_70;
  ForElementType<FSetElementId> local_68;
  FRedirectNameMap *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d0[0] = param_1;
  ppFVar3 = TMapBase<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>_>
            ::FindOrAddImpl<enum_ECoreRedirectFlags_const_&>(this,param_1,local_d0);
  this_00 = *ppFVar3;
  if (this_00 == (FRedirectNameMap *)0x0) {
    piVar1 = &(this->FastIterable).ArrayMax;
    pFVar5 = (this->FastIterable).AllocatorInstance.Data;
    iVar2 = (this->FastIterable).ArrayNum;
    local_a8._16_8_ = 0;
    uStack_90 = 0;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (ForElementType<FSetElementId>)0x0;
    local_58 = 0;
    uStack_50 = 0;
    local_70 = this_00;
    local_60 = this_00;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,&(this->FastIterable).AllocatorInstance,piVar1);
    }
    pFVar8 = (this->FastIterable).AllocatorInstance.Data + (longlong)iVar2 * 0x68;
    (this->FastIterable).ArrayNum = iVar2 + 1;
    this_00 = (FRedirectNameMap *)(pFVar8 + 8);
    *(ECoreRedirectFlags *)pFVar8 = local_d0[0];
    TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00,
               (TSet<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)local_a8);
    *(undefined8 *)(pFVar8 + 0x58) = local_58;
    *(undefined8 *)(pFVar8 + 0x60) = uStack_50;
    uStack_50 = 0;
    local_58 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_60 = (FRedirectNameMap *)((ulonglong)local_60 & 0xffffffff00000000);
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a8,0,local_a8._8_4_);
    iVar2 = SUB84(local_a8._8_8_,4);
    local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_80 = 0;
    if (0x80 < local_7c) {
      local_7c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    if ((this->FastIterable).AllocatorInstance.Data == pFVar5) {
      *ppFVar3 = this_00;
    }
    else {
      TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>,FDefaultSetAllocator>
      ::Reset(this);
      iVar2 = (this->FastIterable).ArrayNum;
      pFVar5 = (this->FastIterable).AllocatorInstance.Data;
      pFVar7 = pFVar5 + (longlong)iVar2 * 0x68;
      while( true ) {
        if ((this->FastIterable).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_d8);
        }
        if (pFVar5 == pFVar7) break;
        local_c8.Object = (FWildcardData *)(pFVar5 + 8);
        local_b0 = &local_c8;
        local_c0.Value = (FRedirectNameMap **)pFVar5;
        TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<enum_ECoreRedirectFlags_const_&,FCoreRedirects::FRedirectNameMap_*_&&>_>
                  (this,&local_c0,(bool *)&local_c0.Value);
        pFVar5 = pFVar5 + 0x68;
      }
    }
    pFVar6 = (FWildcardData *)0x0;
    if ((local_d0[0] & Option_MatchSubstring) != None) {
      pFVar4 = ::operator_new(0x480,0x40);
      if (pFVar4 != (FWildcardData *)0x0) {
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        *(undefined8 *)&(pFVar4->PredictMatch).field_0x402 = 0;
        *(undefined8 *)&(pFVar4->PredictMatch).field_0x40a = 0;
        *(undefined8 *)&(pFVar4->PredictMatch).field_0x412 = 0;
        *(undefined8 *)&(pFVar4->PredictMatch).field_0x41a = 0;
        *(undefined8 *)&(pFVar4->PredictMatch).field_0x422 = 0;
        *(undefined8 *)&(pFVar4->PredictMatch).field_0x42a = 0;
        *(undefined8 *)&(pFVar4->PredictMatch).field_0x432 = 0;
        *(undefined4 *)&(pFVar4->PredictMatch).field_0x43a = 0;
        *(undefined2 *)&(pFVar4->PredictMatch).field_0x43e = 0;
        (pFVar4->Substrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->Substrings).ArrayNum = 0;
        (pFVar4->Substrings).ArrayMax = 0;
        (pFVar4->Prefixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->Prefixes).ArrayNum = 0;
        (pFVar4->Prefixes).ArrayMax = 0;
        (pFVar4->Suffixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->Suffixes).ArrayNum = 0;
        (pFVar4->Suffixes).ArrayMax = 0;
        (pFVar4->PredictMatch).MinimumWordLength = 0x10;
        memset((pFVar4->PredictMatch).BitApproxTable,0xff,0x200);
        memset((pFVar4->PredictMatch).PredictMatchTable,0xff,0x200);
        pFVar6 = pFVar4;
      }
      local_c8.Object = pFVar6;
      TSharedPtr<FCoreRedirects::FWildcardData,1>::operator=<FCoreRedirects::FWildcardData>
                ((TSharedPtr<FCoreRedirects::FWildcardData,1> *)(pFVar8 + 0x58),&local_c8);
    }
  }
  return this_00;
}

