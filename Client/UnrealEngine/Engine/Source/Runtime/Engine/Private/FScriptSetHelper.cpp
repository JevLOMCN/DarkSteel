// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// RemoveElement @ 1476c22f0

bool __thiscall FScriptSetHelper::RemoveElement(FScriptSetHelper *this,void *param_1)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<unsigned_int> FVar11;
  FProperty *local_res8;
  FProperty *local_res18 [2];
  code *local_48;
  FProperty **local_40;
  code *local_38;
  FProperty **local_30;
  
  local_res8 = this->ElementProp;
  local_40 = &local_res8;
  local_30 = local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptSetHelper::RemoveElement'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
             ::Call;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptSetHelper::RemoveElement'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
  local_res18[0] = local_res8;
  uVar6 = TScriptSparseSet<FDefaultSetAllocator>::FindIndex
                    (this->Set,param_1,&this->SetLayout,
                     (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_38,
                     (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_48);
  if (uVar6 == 0xffffffff) {
    return false;
  }
  pTVar1 = this->Set;
  iVar8 = 1;
  if ((-1 < (int)uVar6) && ((int)uVar6 < (pTVar1->Elements).AllocationFlags.NumBits)) {
    FVar11 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar11 +
                  (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_1476c23c9;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(InternalIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x172e,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_1476c23c9:
  if ((this->Set->Elements).Data.ArrayMax < (int)(uVar6 + 1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalIndex + Count <= Set->Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1731,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  DestructItems(this,uVar6,1);
  bVar3 = (byte)uVar6 & 0x1f;
  uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
  do {
    pTVar1 = this->Set;
    if ((-1 < (int)uVar6) && ((int)uVar6 < (pTVar1->Elements).AllocationFlags.NumBits)) {
      if ((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar6) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x8c4,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      FVar11 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
      if (FVar11 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar11;
      }
      uVar7 = uVar6;
      if ((int)uVar6 < 0) {
        uVar7 = uVar6 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar7 >> 5) * 4) & uVar9) != 0) {
        TScriptSparseSet<FDefaultSetAllocator>::RemoveAt(this->Set,uVar6,&this->SetLayout);
        iVar8 = iVar8 + -1;
      }
    }
    uVar6 = uVar6 + 1;
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  } while (iVar8 != 0);
  return true;
}

