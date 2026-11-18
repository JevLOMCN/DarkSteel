// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// Append @ 145e4ba90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FShaderResourceTableMap::Append(FShaderResourceTableMap *this,FShaderResourceTableMap *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FString *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  bool bVar18;
  undefined1 auStack_168 [32];
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_118;
  undefined1 local_117 [15];
  wchar_t *local_108;
  undefined8 uStack_100;
  FString local_f8;
  FString local_e8;
  wchar_t *local_d8;
  undefined8 uStack_d0;
  FShaderResourceTableMap *local_c8;
  undefined1 local_c0 [16];
  uint uStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  FString local_98;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  iVar3 = (this->Resources).ArrayNum;
  uVar9 = 0;
  pFVar15 = (this->Resources).AllocatorInstance.Data;
  pFVar16 = pFVar15 + (longlong)iVar3 * 0x10;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_108 = (wchar_t *)0x0;
  local_c8 = param_1;
  while( true ) {
    if ((this->Resources).ArrayNum != iVar3) {
      local_118 = 0;
      `TCheckedPointerIterator<FUniformResourceEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_118);
    }
    if (pFVar15 == pFVar16) break;
    FVar2 = pFVar15[8];
    if (uVar9 == (byte)FVar2) {
      uVar14 = (uint)(byte)FVar2;
      if ((uVar9 != 0) && ((byte)FVar2 != 0)) {
        uVar7 = uVar14;
        if ((int)uVar9 < (int)uVar14) {
          uVar7 = uVar9;
        }
        iVar8 = wcsncmp(local_108,*(wchar_t **)pFVar15,(longlong)(int)uVar7);
        if (iVar8 != 0) goto LAB_145e4bb66;
      }
      if (uVar9 != uVar14) goto LAB_145e4bb66;
    }
    else {
LAB_145e4bb66:
      local_108 = *(wchar_t **)pFVar15;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)(byte)pFVar15[8]);
      uStack_100 = uStack_d0;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      local_d8 = local_108;
      pFVar10 = ::FString::ConstructFromPtrSize(&local_a8,local_108,(uint)(byte)pFVar15[8]);
      if (&local_f8 != pFVar10) {
        local_f8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_f8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (&local_88,(FString *)local_c0,(bool *)&local_f8);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      uVar9 = (uint)uStack_100;
    }
    pFVar15 = pFVar15 + 0x10;
  }
  bVar18 = false;
  uStack_d0 = 0;
  local_d8 = (wchar_t *)0x0;
  iVar3 = (local_c8->Resources).ArrayNum;
  pFVar15 = (local_c8->Resources).AllocatorInstance.Data;
  local_108 = (wchar_t *)0x0;
  uStack_100 = 0;
  pFVar16 = pFVar15 + (longlong)iVar3 * 0x10;
  uStack_100._0_4_ = 0;
  uVar9 = (uint)uStack_100;
  do {
    if ((local_c8->Resources).ArrayNum != iVar3) {
      local_117[0] = 0;
      `TCheckedPointerIterator<FUniformResourceEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_117);
    }
    if (pFVar15 == pFVar16) {
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    FVar2 = pFVar15[8];
    if (uVar9 == (byte)FVar2) {
      uVar14 = (uint)(byte)FVar2;
      if ((uVar9 != 0) && ((byte)FVar2 != 0)) {
        uVar7 = uVar14;
        if ((int)uVar9 < (int)uVar14) {
          uVar7 = uVar9;
        }
        iVar8 = wcsncmp(local_108,*(wchar_t **)pFVar15,(longlong)(int)uVar7);
        if (iVar8 != 0) goto LAB_145e4bc7d;
      }
      if (uVar9 != uVar14) goto LAB_145e4bc7d;
    }
    else {
LAB_145e4bc7d:
      local_108 = *(wchar_t **)pFVar15;
      uStack_b0 = (uint)(byte)pFVar15[8];
      uStack_100 = CONCAT44(uStack_ac,uStack_b0);
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      local_c0._8_8_ = local_108;
      pFVar10 = ::FString::ConstructFromPtrSize(&local_98,local_108,uStack_b0);
      pFVar12 = (FScriptContainerElement *)0x0;
      iVar8 = 0;
      if (&local_e8 != pFVar10) {
        pFVar12 = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar8 = (pFVar10->Data).ArrayNum;
        local_e8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_e8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
        local_e8.Data.AllocatorInstance.Data = pFVar12;
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      iVar11 = 0;
      if (iVar8 == 0) {
        pwVar17 = L"";
      }
      else {
        iVar11 = iVar8 + -1;
        pwVar17 = (wchar_t *)pFVar12;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar17);
      iVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(&local_88,uVar9,&local_e8);
      if (iVar8 == -1) {
        lVar13 = 0;
      }
      else {
        lVar13 = local_88.Elements._0_8_ + (longlong)iVar8 * 0x18;
      }
      bVar18 = lVar13 != 0;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
      }
      uVar9 = (uint)uStack_100;
    }
    if (!bVar18) {
      pFVar12 = (this->Resources).AllocatorInstance.Data;
      if ((pFVar12 <= pFVar15) &&
         (lVar13 = (longlong)(this->Resources).ArrayMax, pFVar15 < pFVar12 + lVar13 * 0x10)) {
        local_130 = (longlong)(this->Resources).ArrayNum;
        local_128 = 0x10;
        local_148 = pFVar15;
        local_140 = pFVar12;
        local_138 = lVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = (this->Resources).ArrayNum;
      piVar1 = &(this->Resources).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,piVar1);
      }
      (this->Resources).ArrayNum = iVar8 + 1;
      uVar5 = *(undefined8 *)(pFVar15 + 8);
      pFVar12 = (this->Resources).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar12 = *(undefined8 *)pFVar15;
      *(undefined8 *)(pFVar12 + 8) = uVar5;
    }
    pFVar15 = pFVar15 + 0x10;
  } while( true );
}

// FixupOnLoad @ 145e55170

void __thiscall
FShaderResourceTableMap::FixupOnLoad
          (FShaderResourceTableMap *this,
          TMap<FString,FUniformBufferEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>_>
          *param_1)

{
  undefined1 *puVar1;
  wchar_t *pwVar2;
  uint uVar3;
  longlong *plVar4;
  wchar_t *_Str;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 *puVar16;
  uint uVar17;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  ulonglong uVar15;
  ulonglong uVar18;
  
  uVar3 = *(uint *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  uVar13 = 0;
  uVar14 = 0;
  uVar7 = 1;
  uVar17 = 0;
  uVar8 = uVar14;
  if (uVar3 != 0) {
    puVar19 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar8 = *puVar19;
    uVar15 = uVar13;
    uVar18 = uVar13;
    uVar17 = 0;
    uVar14 = 0;
    while (uVar8 == 0) {
      iVar12 = (int)uVar15;
      uVar17 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)uVar17;
      uVar14 = iVar12 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar8 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_145e5521d;
      uVar8 = puVar19[(longlong)iVar12 + 1];
    }
    uVar7 = -uVar8 & uVar8;
    uVar15 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar8 = (uVar17 - 1) + local_res20;
    if ((int)uVar3 < (int)uVar8) {
      uVar8 = uVar3;
    }
  }
LAB_145e5521d:
  uVar9 = *(uint *)&param_1->field_0x28;
  uVar20 = uVar9 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,uVar14);
  TStack_68.CurrentBitIndex = uVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar9 >> 5;
  TStack_68._28_4_ = uVar8;
  TStack_68.BaseBitIndex = uVar17;
  uStack_48 = CONCAT44(uStack_74,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || ((int)uVar3 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar9 != uVar3) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar20 = uVar20 + 0x20;
      iVar12 = iVar12 + 1;
      uVar9 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145e55320;
      uVar17 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar9 = (int)lVar11 + -1 + uVar20;
    if ((int)uVar3 < (int)uVar9) {
      uVar9 = uVar3;
    }
  }
LAB_145e55320:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar9) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x40 + 0x20 + *(longlong *)param_1);
    if ((plVar4 != (longlong *)0x0) && ((int)plVar4[1] != 0)) {
      _Str = (wchar_t *)*plVar4;
      pwVar2 = _Str + (int)plVar4[1];
      for (; _Str < pwVar2; _Str = _Str + ((int)sVar10 + 1)) {
        if (((this->Resources).ArrayNum <= (int)uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(wchar_t **)((this->Resources).AllocatorInstance.Data + uVar13 * 0x10) = _Str;
        sVar10 = wcslen(_Str);
        uVar13 = (ulonglong)(ushort)((short)uVar13 + 1);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

