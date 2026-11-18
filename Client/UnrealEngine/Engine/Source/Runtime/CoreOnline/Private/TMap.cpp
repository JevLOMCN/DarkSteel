// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 1

// Append<FDefaultSetAllocator> @ 1446111f0

void __thiscall
TMap<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
::Append<FDefaultSetAllocator>
          (TMap<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
           *this,TMap<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1446112ad;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_1446112ad:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1446113b0;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1446113b0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x30;
    local_a0 = local_a8 + 0x10;
    TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>_>
              ((TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>
                        *)&stack0x00000018,(bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

