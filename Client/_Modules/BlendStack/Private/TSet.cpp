// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 3

// Move<TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>_> @ 14a85fde0

void __cdecl
TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
          *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    if (*(void **)&param_1->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->Elements);
    }
    _Src = &(param_2->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = *(undefined8 *)&param_2->Elements;
    _Dst = &(param_1->Elements).field_0x10;
    *(undefined8 *)&param_2->Elements = 0;
    *(undefined4 *)&(param_1->Elements).field_0x8 = *(undefined4 *)&(param_2->Elements).field_0x8;
    *(undefined4 *)&(param_1->Elements).field_0xc = *(undefined4 *)&(param_2->Elements).field_0xc;
    *(undefined8 *)&(param_2->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_2->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(param_1->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(param_1->Elements).field_0x20 =
           *(undefined8 *)&(param_2->Elements).field_0x20;
      *(undefined8 *)&(param_2->Elements).field_0x20 = 0;
      *(undefined4 *)&(param_1->Elements).field_0x28 =
           *(undefined4 *)&(param_2->Elements).field_0x28;
      *(undefined4 *)&(param_1->Elements).field_0x2c =
           *(undefined4 *)&(param_2->Elements).field_0x2c;
      *(undefined8 *)&(param_2->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = *(undefined4 *)&(param_2->Elements).field_0x30;
    *(undefined4 *)&(param_1->Elements).field_0x34 = *(undefined4 *)&(param_2->Elements).field_0x34;
    *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  }
  if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(param_1->Hash).InlineData = *(undefined4 *)(param_2->Hash).InlineData;
  }
  FVar2 = (param_1->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (param_1->Hash).SecondaryData = (param_2->Hash).SecondaryData;
  (param_2->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = param_2->HashSize;
  param_2->HashSize = 0;
  return;
}

// operator= @ 14a862770

TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
                  *param_1)

{
  uint uVar1;
  ForElementType<FSetElementId> _Dst;
  ForElementType<FSetElementId> _Src;
  uint uVar2;
  
  if (this == param_1) {
    return this;
  }
  uVar1 = param_1->HashSize;
  uVar2 = uVar1;
  if (uVar1 < 2) {
    if ((this->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14a8627cb;
    uVar2 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar2,4);
LAB_14a8627cb:
  _Src = (param_1->Hash).SecondaryData;
  _Dst = (this->Hash).SecondaryData;
  if (uVar1 != 0) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      _Src = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    if (_Dst == (ForElementType<FSetElementId>)0x0) {
      _Dst = (ForElementType<FSetElementId>)&this->Hash;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)(int)uVar1 << 2);
  }
  this->HashSize = uVar1;
  TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=(&this->Elements,&param_1->Elements);
  return this;
}

// RemoveByIndex @ 14a868880

void __thiscall
TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
RemoveByIndex(TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14a8688f2;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a8688f2:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x14;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x10) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + ((longlong)iVar2 * 5 + 3) * 4);
  }
  *piVar7 = *(int *)(lVar1 + 0xc);
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

