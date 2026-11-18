// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 1

// GetAllRows<FWN_SKMReact_TableRow> @ 14acd4ea0

void __thiscall
UDataTable::GetAllRows<FWN_SKMReact_TableRow>
          (UDataTable *this,wchar_t *param_1,
          TArray<FWN_SKMReact_TableRow_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  longlong lVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  undefined8 local_88;
  longlong *local_80;
  int iStack_78;
  uint uStack_74;
  TBitArray<FDefaultBitArrayAllocator> *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  longlong *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_48;
  
  if (Z_Registration_Info_UScriptStruct_FWN_SKMReact_TableRow.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar7 = Z_Construct_UPackage__Script_WN_SKMReact();
    Z_Registration_Info_UScriptStruct_FWN_SKMReact_TableRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_SKMReact_TableRow,(UObject *)pUVar7,
                         L"WN_SKMReact_TableRow");
  }
  bVar5 = CommonTypeCheck(this,Z_Registration_Info_UScriptStruct_FWN_SKMReact_TableRow.
                               OuterSingleton,L"UDataTable::GetAllRows",param_1);
  if (bVar5) {
    lVar8 = (**(code **)(this->_padding_ + 0x2d0))(this);
    uVar9 = (*(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x34)) + param_2->ArrayNum;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar1 = &param_2->ArrayMax;
    if (*piVar1 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    local_80 = (longlong *)(**(code **)(this->_padding_ + 0x2d0))(this);
    iVar6 = (int)local_80[5];
    iStack_78 = 0;
    uStack_74 = 1;
    local_60 = 0;
    local_70 = (TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 2);
    iStack_64 = 0;
    if (iVar6 != 0) {
      pTVar10 = (TBitArray<FDefaultBitArrayAllocator> *)local_80[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)local_80[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = local_70;
      }
      uVar9 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
      while (uVar9 == 0) {
        lVar8 = (longlong)iStack_78;
        local_60 = local_60 + 0x20;
        iStack_78 = iStack_78 + 1;
        iStack_64 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_78) goto LAB_14acd4ff0;
        uVar9 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uStack_74 = -uVar9 & uVar9;
      uVar2 = (ulonglong)uStack_74 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = local_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
        iStack_64 = iVar6;
      }
    }
LAB_14acd4ff0:
    TStack_48._padding_ = CONCAT44(uStack_74,iStack_78);
    uStack_68 = 0xffffffff;
    TStack_48.UnvisitedBitMask = 0xffffffff;
    TStack_48._28_4_ = iStack_64;
    TStack_48.BaseBitIndex = local_60;
    iStack_5c = iStack_64;
    local_50 = local_80;
    TStack_48.Array = local_70;
    TStack_48.CurrentBitIndex = iStack_64;
    if (iStack_64 < (int)local_80[5]) {
      do {
        local_88 = *(undefined8 *)(*local_50 + 8 + (longlong)TStack_48.CurrentBitIndex * 0x18);
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)*piVar1 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_88;
        TStack_48.UnvisitedBitMask = TStack_48.UnvisitedBitMask & ~TStack_48._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_48);
      } while (TStack_48.CurrentBitIndex < (TStack_48.Array)->NumBits);
    }
  }
  return;
}

