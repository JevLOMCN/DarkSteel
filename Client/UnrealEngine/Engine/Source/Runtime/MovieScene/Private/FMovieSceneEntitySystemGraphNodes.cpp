// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 1461014f0

UScriptStruct * __cdecl FMovieSceneEntitySystemGraphNodes::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNodes.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNodes.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes,
                         (UObject *)pUVar1,L"MovieSceneEntitySystemGraphNodes");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraphNodes.OuterSingleton;
}

// AddStructReferencedObjects @ 1461236f0

void __thiscall
FMovieSceneEntitySystemGraphNodes::AddStructReferencedObjects
          (FMovieSceneEntitySystemGraphNodes *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  FReferenceCollector *local_res10;
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  iVar3 = *(int *)&(this->Array).field_0x28;
  puVar1 = &(this->Array).field_0x10;
  uStack_84 = 1;
  local_88 = 0;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Array).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar9 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar7 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1461237aa;
      uVar9 = puVar11[lVar7 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    iStack_74 = local_res18 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_1461237aa:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Array).field_0x28;
  local_40 = *(int *)&(this->Array).field_0x8 - *(int *)&(this->Array).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar8 = (int)uVar9 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar12 = uVar9 & 0xffffffe0;
  local_res10 = param_1;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Array).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Array).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_146123890;
      uVar9 = *(uint *)(puVar10 + lVar7 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_146123890:
  while( true ) {
    if (*(int *)&(this->Array).field_0x8 - *(int *)&(this->Array).field_0x34 != local_40) {
      `TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(local_res10->_padding_ + 0x88))
              (local_res10,
               *(longlong *)&this->Array + ((longlong)local_60.CurrentBitIndex * 5 + 4) * 8,0,0);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

