// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FlushCachedState @ 149f45330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
PCGRuntimeGenChangeDetection::FDetector::FlushCachedState(FDetector *this,UPCGComponent *param_1)

{
  undefined1 *puVar1;
  FDetectionInputs *pFVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  uchar *puVar8;
  undefined8 uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  FDetector *pFVar18;
  bool bVar19;
  UPCGComponent *pUVar20;
  longlong lVar21;
  int iVar22;
  ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs> FVar23;
  uint uVar24;
  ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs> FVar25;
  undefined1 *puVar26;
  uint *puVar27;
  uint uVar28;
  undefined1 auStackY_1108 [32];
  undefined1 local_10b8;
  undefined1 local_10b7 [7];
  FWeakObjectPtr local_10b0;
  FDetector *local_10a8;
  int iStack_10a0;
  uint uStack_109c;
  undefined1 *local_1098;
  undefined4 uStack_1090;
  int iStack_108c;
  int local_1088;
  int iStack_1084;
  int iStack_1080;
  undefined4 uStack_107c;
  int local_1078;
  int local_1074;
  FDetector *local_1070;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1068;
  undefined8 uStack_1048;
  ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs> local_1040;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1108;
  if (param_1 == (UPCGComponent *)0x0) {
    bVar19 = 1 < *(int *)&(this->StateCache).field_0x48;
    if (!bVar19) {
      TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
                        *)this);
    }
    puVar1 = &(this->StateCache).field_0xc;
    *(undefined4 *)&(this->StateCache).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->StateCache).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->StateCache).field_0x34 = 0;
    iVar5 = *(int *)&(this->StateCache).field_0x2c;
    *(undefined4 *)&(this->StateCache).field_0x28 = 0;
    if ((iVar5 < 0) || (0x80 < iVar5)) {
      *(undefined4 *)&(this->StateCache).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->StateCache).field_0x10,0);
    }
    if (bVar19) {
      *(undefined4 *)&(this->StateCache).field_0x48 = 1;
      TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
                *)this);
    }
  }
  else {
    puVar1 = &(this->StateCache).field_0x10;
    local_1040.SecondaryData = (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)0x0;
    uStack_109c = 1;
    iStack_10a0 = 0;
    local_38 = 0;
    local_34 = 0x20;
    local_1088 = 0;
    iVar5 = *(int *)&(this->StateCache).field_0x28;
    iStack_108c = iStack_10a0;
    if (iVar5 != 0) {
      puVar27 = *(uint **)&(this->StateCache).field_0x20;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)puVar1;
      }
      uVar24 = *puVar27;
      local_1088 = 0;
      iStack_10a0 = 0;
      while (uVar24 == 0) {
        lVar21 = (longlong)iStack_10a0;
        local_1088 = local_1088 + 0x20;
        iStack_10a0 = iStack_10a0 + 1;
        iStack_108c = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_10a0) goto LAB_149f4541e;
        uVar24 = puVar27[lVar21 + 1];
      }
      uStack_109c = -uVar24 & uVar24;
      uVar3 = (ulonglong)uStack_109c * 2 + 1;
      lVar21 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_1078 = (int)lVar21;
      iStack_108c = local_1088 + -1 + local_1078;
      if (iVar5 < iStack_108c) {
        iStack_108c = iVar5;
      }
    }
LAB_149f4541e:
    uVar24 = *(uint *)&(this->StateCache).field_0x28;
    uVar28 = uVar24 & 0xffffffe0;
    iStack_1080 = *(int *)&(this->StateCache).field_0x8 - *(int *)&(this->StateCache).field_0x34;
    uStack_1090 = 0xffffffff;
    TStack_1068._padding_ = CONCAT44(uStack_109c,iStack_10a0);
    TStack_1068.CurrentBitIndex = iStack_108c;
    TStack_1068.UnvisitedBitMask = 0xffffffff;
    iVar22 = (int)uVar24 >> 5;
    TStack_1068._28_4_ = iStack_108c;
    TStack_1068.BaseBitIndex = local_1088;
    uStack_1048 = CONCAT44(uStack_107c,iStack_1080);
    local_10a8 = this;
    local_1098 = puVar1;
    iStack_1084 = iStack_108c;
    local_1070 = this;
    TStack_1068.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar24 < 0) || (iVar5 < (int)uVar24)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar6 = *(uint *)&(this->StateCache).field_0x28;
    if (uVar24 != uVar6) {
      puVar26 = *(undefined1 **)&(this->StateCache).field_0x20;
      if (puVar26 == (undefined1 *)0x0) {
        puVar26 = puVar1;
      }
      uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar22 * 4);
      while (uVar24 == 0) {
        lVar21 = (longlong)iVar22;
        uVar28 = uVar28 + 0x20;
        iVar22 = iVar22 + 1;
        uVar24 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_149f45520;
        uVar24 = *(uint *)(puVar26 + lVar21 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_1074 = (int)lVar21;
      uVar24 = local_1074 + -1 + uVar28;
      if ((int)uVar6 < (int)uVar24) {
        uVar24 = uVar6;
      }
    }
LAB_149f45520:
    while( true ) {
      pFVar18 = local_1070;
      if (*(int *)&(local_1070->StateCache).field_0x8 - *(int *)&(local_1070->StateCache).field_0x34
          != (int)uStack_1048) {
        local_10b8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_10b8);
      }
      iVar5 = local_38;
      if (((TStack_1068.CurrentBitIndex == uVar24) &&
          (TStack_1068.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pFVar18 == this)) break;
      FVar23 = (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)
               (*(longlong *)&pFVar18->StateCache + (longlong)TStack_1068.CurrentBitIndex * 0xd0);
      local_10b0.ObjectIndex = *(int *)FVar23;
      local_10b0.ObjectSerialNumber = *(int *)((longlong)FVar23 + 4);
      pUVar20 = (UPCGComponent *)FWeakObjectPtr::Get(&local_10b0);
      if ((pUVar20 == (UPCGComponent *)0x0) || (pUVar20 == param_1)) {
        FVar25 = (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)&local_1040;
        if (local_1040.SecondaryData !=
            (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)0x0) {
          FVar25 = local_1040.SecondaryData;
        }
        if ((ulonglong)FVar25 <= (ulonglong)FVar23) {
          FVar25 = (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)&local_1040;
          if (local_1040.SecondaryData !=
              (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)0x0) {
            FVar25 = local_1040.SecondaryData;
          }
          if (((ulonglong)FVar23 < (ulonglong)((longlong)local_34 * 0x80 + (longlong)FVar25)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>_>
                               (0x880,&local_1040,&local_34);
        }
        puVar8 = (uchar *)((longlong)FVar23 + 8);
        uVar10 = puVar8[0];
        uVar11 = puVar8[1];
        uVar12 = puVar8[2];
        uVar13 = puVar8[3];
        uVar14 = puVar8[4];
        uVar15 = puVar8[5];
        uVar16 = puVar8[6];
        uVar17 = puVar8[7];
        FVar25 = (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)&local_1040;
        if (local_1040.SecondaryData !=
            (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)0x0) {
          FVar25 = local_1040.SecondaryData;
        }
        lVar21 = (longlong)local_38 * 0x80;
        pFVar2 = (FDetectionInputs *)(lVar21 + (longlong)FVar25);
        *(undefined8 *)pFVar2 = *(undefined8 *)FVar23;
        pFVar2->field_0x8 = uVar10;
        pFVar2->field_0x9 = uVar11;
        pFVar2->field_0xa = uVar12;
        pFVar2->field_0xb = uVar13;
        pFVar2->field_0xc = uVar14;
        pFVar2->field_0xd = uVar15;
        pFVar2->field_0xe = uVar16;
        pFVar2->field_0xf = uVar17;
        uVar9 = *(undefined8 *)((longlong)FVar23 + 0x18);
        puVar4 = (undefined8 *)(lVar21 + 0x10 + (longlong)FVar25);
        *puVar4 = *(undefined8 *)((longlong)FVar23 + 0x10);
        puVar4[1] = uVar9;
        uVar9 = *(undefined8 *)((longlong)FVar23 + 0x28);
        puVar4 = (undefined8 *)(lVar21 + 0x20 + (longlong)FVar25);
        *puVar4 = *(undefined8 *)((longlong)FVar23 + 0x20);
        puVar4[1] = uVar9;
        uVar9 = *(undefined8 *)((longlong)FVar23 + 0x38);
        puVar4 = (undefined8 *)(lVar21 + 0x30 + (longlong)FVar25);
        *puVar4 = *(undefined8 *)((longlong)FVar23 + 0x30);
        puVar4[1] = uVar9;
        uVar9 = *(undefined8 *)((longlong)FVar23 + 0x48);
        puVar4 = (undefined8 *)(lVar21 + 0x40 + (longlong)FVar25);
        *puVar4 = *(undefined8 *)((longlong)FVar23 + 0x40);
        puVar4[1] = uVar9;
        uVar9 = *(undefined8 *)((longlong)FVar23 + 0x58);
        puVar4 = (undefined8 *)(lVar21 + 0x50 + (longlong)FVar25);
        *puVar4 = *(undefined8 *)((longlong)FVar23 + 0x50);
        puVar4[1] = uVar9;
        uVar9 = *(undefined8 *)((longlong)FVar23 + 0x68);
        puVar4 = (undefined8 *)(lVar21 + 0x60 + (longlong)FVar25);
        *puVar4 = *(undefined8 *)((longlong)FVar23 + 0x60);
        puVar4[1] = uVar9;
        uVar9 = *(undefined8 *)((longlong)FVar23 + 0x78);
        puVar4 = (undefined8 *)(lVar21 + 0x70 + (longlong)FVar25);
        *puVar4 = *(undefined8 *)((longlong)FVar23 + 0x70);
        puVar4[1] = uVar9;
        local_38 = local_38 + 1;
      }
      TStack_1068.UnvisitedBitMask = TStack_1068.UnvisitedBitMask & ~TStack_1068._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1068);
    }
    FVar23 = (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)&local_1040;
    if (local_1040.SecondaryData !=
        (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)0x0) {
      FVar23 = local_1040.SecondaryData;
    }
    FVar25 = (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)
             ((longlong)local_38 * 0x80 + (longlong)FVar23);
    while( true ) {
      if (local_38 != iVar5) {
        `TCheckedPointerIterator<PCGRuntimeGenChangeDetection::FDetectionInputs,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_10b7);
      }
      if (FVar23 == FVar25) break;
      TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
                *)this,(FDetectionInputs *)FVar23);
      FVar23 = (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)
               ((longlong)FVar23 + 0x80);
    }
    if (local_1040.SecondaryData !=
        (ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>)0x0) {
      FMemory::Free((void *)local_1040.SecondaryData);
    }
  }
  return;
}

// IsCellScanRequired @ 149f51ce0

bool __thiscall
PCGRuntimeGenChangeDetection::FDetector::IsCellScanRequired
          (FDetector *this,FDetectionInputs *param_1)

{
  int iVar1;
  FDetectionInputs *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  FCachedState *this_00;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FDetectionInputs *local_res8;
  FDetectionInputs *local_res10;
  
  pFVar2 = (FDetectionInputs *)(this->InputsPendingDeletion).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->InputsPendingDeletion).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar1 = (this->InputsPendingDeletion).ArrayNum;
  local_res8 = param_1;
  if (iVar1 != 0) {
    pFVar2 = (FDetectionInputs *)(this->InputsPendingDeletion).AllocatorInstance.Data;
    iVar13 = 0;
    bVar5 = `TArray<PCGRuntimeGenChangeDetection::FDetectionInputs,TSizedDefaultAllocator<32>_>::
            Remove'::__l2::<lambda_1>::operator()(&local_res8,pFVar2);
    bVar5 = !bVar5;
    iVar11 = 0;
    do {
      iVar4 = iVar11;
      do {
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) break;
        bVar7 = `TArray<PCGRuntimeGenChangeDetection::FDetectionInputs,TSizedDefaultAllocator<32>_>
                ::Remove'::__l2::<lambda_1>::operator()(&local_res8,pFVar2 + iVar4);
      } while (bVar5 == !bVar7);
      if (bVar5 != false) {
        if (iVar13 != iVar11) {
          memmove(pFVar2 + iVar13,pFVar2 + iVar11,(longlong)(iVar4 - iVar11) << 7);
        }
        iVar13 = iVar13 + (iVar4 - iVar11);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar11 = iVar4;
    } while (iVar4 < iVar1);
    (this->InputsPendingDeletion).ArrayNum = iVar13;
    param_1 = local_res10;
  }
  uVar9 = *(uint *)&param_1->field_0x4;
  uVar10 = *(int *)param_1 - uVar9 ^ uVar9 >> 0xd;
  uVar8 = (-0x61c88647 - uVar10) - uVar9 ^ uVar10 << 8;
  uVar12 = (uVar9 - uVar10) - uVar8 ^ uVar8 >> 0xd;
  uVar10 = (uVar10 - uVar12) - uVar8 ^ uVar12 >> 0xc;
  uVar9 = (uVar8 - uVar10) - uVar12 ^ uVar10 << 0x10;
  uVar12 = (uVar12 - uVar9) - uVar10 ^ uVar9 >> 5;
  uVar8 = (uVar10 - uVar12) - uVar9 ^ uVar12 >> 3;
  uVar9 = (uVar9 - uVar8) - uVar12 ^ uVar8 << 10;
  uVar8 = (uVar12 - uVar9) - uVar8 ^ uVar9 >> 0xf;
  uVar9 = ((uint)(*(ulonglong *)&param_1->field_0x8 >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)&param_1->field_0x8 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar8 = (uVar8 >> 2) + (uVar9 >> 0x10 ^ uVar9) + uVar8 * 0x40 + -0x61c88647 ^ uVar8;
  uVar9 = ::GetTypeHash((FPCGRuntimeGenerationRadii *)&param_1->field_0x10);
  uVar8 = uVar8 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 + uVar9 ^ uVar8;
  uVar8 = uVar8 * 0x40 + *(int *)&param_1->field_0x70 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar8;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + (uint)(byte)param_1->field_0x74 + uVar8 * 0x40 ^ uVar8;
  this_00 = TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
            ::FindOrAddImpl<PCGRuntimeGenChangeDetection::FDetectionInputs_const_&>
                      ((TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
                        *)this,*(int *)&param_1->field_0x78 +
                               uVar8 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar8,param_1);
  bVar5 = FCachedState::ShouldScanCells(this_00,param_1);
  return bVar5;
}

// OnCellsScanned @ 149f56690

void __thiscall
PCGRuntimeGenChangeDetection::FDetector::OnCellsScanned(FDetector *this,FDetectionInputs *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  FCachedState *pFVar5;
  FCachedState *pFVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_28 [32];
  
  uVar9 = *(uint *)&param_1->field_0x4;
  uVar10 = *(int *)param_1 - uVar9 ^ uVar9 >> 0xd;
  uVar8 = (-0x61c88647 - uVar10) - uVar9 ^ uVar10 << 8;
  uVar11 = (uVar9 - uVar8) - uVar10 ^ uVar8 >> 0xd;
  uVar10 = (uVar10 - uVar11) - uVar8 ^ uVar11 >> 0xc;
  uVar9 = (uVar8 - uVar10) - uVar11 ^ uVar10 << 0x10;
  uVar11 = (uVar11 - uVar9) - uVar10 ^ uVar9 >> 5;
  uVar10 = (uVar10 - uVar11) - uVar9 ^ uVar11 >> 3;
  uVar8 = (uVar9 - uVar10) - uVar11 ^ uVar10 << 10;
  uVar9 = ((uint)(*(ulonglong *)&param_1->field_0x8 >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)&param_1->field_0x8 >> 4)) * -0x7a143595;
  uVar8 = (uVar11 - uVar8) - uVar10 ^ uVar8 >> 0xf;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar8 = (uVar8 >> 2) + (uVar9 >> 0x10 ^ uVar9) + uVar8 * 0x40 + -0x61c88647 ^ uVar8;
  uVar9 = ::GetTypeHash((FPCGRuntimeGenerationRadii *)&param_1->field_0x10);
  uVar8 = uVar8 * 0x40 + (uVar8 >> 2) + uVar9 + 0x9e3779b9 ^ uVar8;
  uVar8 = uVar8 * 0x40 + *(int *)&param_1->field_0x70 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar8;
  uVar8 = (byte)param_1->field_0x74 + 0x9e3779b9 + uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8;
  pFVar5 = TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
           ::FindOrAddImpl<PCGRuntimeGenChangeDetection::FDetectionInputs_const_&>
                     ((TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
                       *)this,*(int *)&param_1->field_0x78 + -0x61c88647 +
                              uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8,param_1);
  pFVar6 = (FCachedState *)
           (**(code **)(**(longlong **)&param_1->field_0x8 + 0x18))
                     (*(longlong **)&param_1->field_0x8,local_28);
  if (pFVar6 != pFVar5) {
    if ((pFVar6->GenSourcePosition).bIsSet == false) {
      if ((pFVar5->GenSourcePosition).bIsSet != false) {
        (pFVar5->GenSourcePosition).bIsSet = false;
      }
    }
    else {
      uVar1 = *(undefined4 *)((longlong)&(pFVar6->GenSourcePosition).TypedValue.field0_0x0 + 4);
      uVar2 = *(undefined4 *)((longlong)&(pFVar6->GenSourcePosition).TypedValue.field0_0x0 + 8);
      uVar3 = *(undefined4 *)((longlong)&(pFVar6->GenSourcePosition).TypedValue.field0_0x0 + 0xc);
      *(undefined4 *)&(pFVar5->GenSourcePosition).TypedValue.field0_0x0 =
           *(undefined4 *)&(pFVar6->GenSourcePosition).TypedValue.field0_0x0;
      *(undefined4 *)((longlong)&(pFVar5->GenSourcePosition).TypedValue.field0_0x0 + 4) = uVar1;
      *(undefined4 *)((longlong)&(pFVar5->GenSourcePosition).TypedValue.field0_0x0 + 8) = uVar2;
      *(undefined4 *)((longlong)&(pFVar5->GenSourcePosition).TypedValue.field0_0x0 + 0xc) = uVar3;
      (pFVar5->GenSourcePosition).TypedValue.field0_0x0._s_0.Z =
           (pFVar6->GenSourcePosition).TypedValue.field0_0x0._s_0.Z;
      (pFVar5->GenSourcePosition).bIsSet = true;
    }
  }
  if (param_1->field_0x74 != '\0') {
    pdVar7 = (double *)
             (**(code **)(**(longlong **)&param_1->field_0x8 + 0x20))
                       (*(longlong **)&param_1->field_0x8,local_28);
    if ((TOptional<UE::Math::TVector<double>_> *)pdVar7 == &pFVar5->GenSourceDirection)
    goto LAB_149f56881;
    if (*(char *)(pdVar7 + 3) != '\0') {
      dVar4 = pdVar7[1];
      (pFVar5->GenSourceDirection).TypedValue.field0_0x0._s_0.X = *pdVar7;
      (pFVar5->GenSourceDirection).TypedValue.field0_0x0._s_0.Y = dVar4;
      (pFVar5->GenSourceDirection).TypedValue.field0_0x0._s_0.Z = pdVar7[2];
      (pFVar5->GenSourceDirection).bIsSet = true;
      goto LAB_149f56881;
    }
  }
  if ((pFVar5->GenSourceDirection).bIsSet != false) {
    (pFVar5->GenSourceDirection).bIsSet = false;
  }
LAB_149f56881:
  pFVar5->GenerationRadiusMultiplier = *(float *)&param_1->field_0x70;
  return;
}

// PostTick @ 149f58120

void __thiscall PCGRuntimeGenChangeDetection::FDetector::PostTick(FDetector *this)

{
  int iVar1;
  FDetectionInputs *pFVar2;
  FDetectionInputs *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InputsPendingDeletion).ArrayNum;
  pFVar2 = (FDetectionInputs *)(this->InputsPendingDeletion).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->InputsPendingDeletion).ArrayNum != iVar1) {
      `TCheckedPointerIterator<PCGRuntimeGenChangeDetection::FDetectionInputs,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState>,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>,FDefaultSetAllocator>
              *)this,pFVar2);
    pFVar2 = pFVar2 + 1;
  }
  (this->InputsPendingDeletion).ArrayNum = 0;
  if ((this->InputsPendingDeletion).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,&(this->InputsPendingDeletion).AllocatorInstance,0,
               &(this->InputsPendingDeletion).ArrayMax);
  }
  return;
}

// PreTick @ 149f582b0

void __thiscall PCGRuntimeGenChangeDetection::FDetector::PreTick(FDetector *this)

{
  TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<PCGRuntimeGenChangeDetection::FDetectionInputs,PCGRuntimeGenChangeDetection::FDetector::FCachedState,0>_>
              *)this,&this->InputsPendingDeletion);
  return;
}

