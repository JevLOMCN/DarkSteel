// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 2

// FindOrAddImpl<unsigned_int_const_&> @ 14de20790

FInstancedPropertyBag * __thiscall
TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FInstancedPropertyBag *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FInstancedPropertyBag>,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FInstancedPropertyBag *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindChecked @ 14de262e0

FInstancedPropertyBag * __thiscall
TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
::FindChecked(TMapBase<unsigned_int,FInstancedPropertyBag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FInstancedPropertyBag,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FInstancedPropertyBag *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FInstancedPropertyBag *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FInstancedPropertyBag *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FInstancedPropertyBag *)(*pcVar1)();
  return pFVar4;
}

