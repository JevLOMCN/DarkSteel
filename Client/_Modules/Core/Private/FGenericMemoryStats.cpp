// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Add @ 1416264a0

void __thiscall
FGenericMemoryStats::Add(FGenericMemoryStats *this,TStringView<wchar_t> *param_1,ulong64 param_2)

{
  int *piVar1;
  ForElementType<TStringBuilderWithBuffer<wchar_t,64>_> FVar2;
  int iVar3;
  ForElementType<TStringBuilderWithBuffer<wchar_t,64>_> FVar4;
  TStringBuilderBase<wchar_t> *this_00;
  ulong64 local_res18;
  wchar_t *local_28;
  undefined4 local_20;
  wchar_t **local_18;
  ulong64 *local_10;
  
  iVar3 = (this->Descriptions).ArrayNum;
  piVar1 = &(this->Descriptions).ArrayMax;
  local_res18 = param_2;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringBuilderWithBuffer<wchar_t,64>_>_>
                      (0x8a0,(ForElementType<TStringBuilderWithBuffer<wchar_t,64>_> *)this,piVar1);
  }
  (this->Descriptions).ArrayNum = iVar3 + 1;
  FVar2 = (this->Descriptions).AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<TStringBuilderWithBuffer<wchar_t,64>_>)this;
  if (FVar2 != (ForElementType<TStringBuilderWithBuffer<wchar_t,64>_>)0x0) {
    FVar4 = FVar2;
  }
  this_00 = (TStringBuilderBase<wchar_t> *)((longlong)iVar3 * 0xa0 + (longlong)FVar4);
  this_00->bIsDynamic = false;
  this_00->bIsExternal = false;
  this_00->Base = (wchar_t *)(this_00 + 1);
  this_00->CurPos = (wchar_t *)(this_00 + 1);
  this_00->End = (wchar_t *)(this_00 + 5);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (this_00,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  local_28 = this_00->Base;
  local_18 = &local_28;
  local_20 = (undefined4)((longlong)this_00->CurPos - (longlong)local_28 >> 1);
  local_10 = &local_res18;
  TSet<TTuple<TStringView<wchar_t>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned___int64,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Emplace<TPairInitializer<TStringView<wchar_t>_const_&,unsigned___int64_const_&>_>
            ((TSet<TTuple<TStringView<wchar_t>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned___int64,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)&this->Data,
             (TPairInitializer<TStringView<wchar_t>_const_&,unsigned___int64_const_&> *)
             &stack0x00000008,(bool *)&local_18);
  return;
}

