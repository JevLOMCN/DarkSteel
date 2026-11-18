// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// ~FModelStreamableBulkData @ 14abbef50

void __thiscall FModelStreamableBulkData::~FModelStreamableBulkData(FModelStreamableBulkData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->FullFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TBulkData<unsigned_char>,int>
            ((TBulkData<unsigned_char> *)(this->StreamableBulkData).AllocatorInstance.Data,
             (this->StreamableBulkData).ArrayNum);
  pFVar1 = (this->StreamableBulkData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RealTimeMorphStreamables).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RealTimeMorphStreamables).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRealTimeMorphStreamable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRealTimeMorphStreamable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FRealTimeMorphStreamable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RealTimeMorphStreamables);
  *(undefined4 *)&(this->ClothingStreamables).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ClothingStreamables).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FClothingStreamable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FClothingStreamable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FClothingStreamable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothingStreamables);
  *(undefined4 *)&(this->ModelStreamables).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ModelStreamables).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableStreamableBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableStreamableBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableStreamableBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Serialize @ 14abef8d0

void __thiscall
FModelStreamableBulkData::Serialize
          (FModelStreamableBulkData *this,FArchive *param_1,UObject *param_2,bool param_3)

{
  int *piVar1;
  FBulkData *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FBulkData *this_00;
  TArray<TBulkData<unsigned_char>,TSizedDefaultAllocator<32>_> *this_01;
  bool bVar10;
  uint local_res8 [2];
  undefined1 local_res20 [8];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2125,"Mutable_FModelStreamableBulkData::Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObject.cpp"
               ,0x84d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2125);
  }
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,FMutableStreamableBlock>,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<unsigned_int,FMutableStreamableBlock>,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>,FDefaultSetAllocator>
                      *)this);
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,FClothingStreamable>,TDefaultMapHashableKeyFuncs<unsigned_int,FClothingStreamable,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<unsigned_int,FClothingStreamable>,TDefaultMapHashableKeyFuncs<unsigned_int,FClothingStreamable,0>,FDefaultSetAllocator>
                      *)&this->ClothingStreamables);
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,FRealTimeMorphStreamable>,TDefaultMapHashableKeyFuncs<unsigned_int,FRealTimeMorphStreamable,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<unsigned_int,FRealTimeMorphStreamable>,TDefaultMapHashableKeyFuncs<unsigned_int,FRealTimeMorphStreamable,0>,FDefaultSetAllocator>
                      *)&this->RealTimeMorphStreamables);
  if (param_3) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    piVar1 = &(this->StreamableBulkData).ArrayNum;
    local_res8[0] = *piVar1;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    uVar5 = local_res8[0];
    this_01 = &this->StreamableBulkData;
    iVar9 = (this->StreamableBulkData).ArrayNum;
    if (iVar9 < (int)local_res8[0]) {
      iVar9 = local_res8[0] - iVar9;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,iVar9,&this_01->AllocatorInstance,piVar1,
                         &(this->StreamableBulkData).ArrayMax);
      DefaultConstructItems<TBulkData<unsigned_char>,int>
                ((this_01->AllocatorInstance).Data + (longlong)iVar7 * 0x28,iVar9);
    }
    else {
      if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
      }
      if ((int)local_res8[0] < iVar9) {
        uVar8 = iVar9 - local_res8[0];
        if (((int)(uVar8 | local_res8[0]) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar8 != 0) {
          TArray<TBulkData<unsigned_char>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_01,uVar5,uVar8);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&this_01->AllocatorInstance,(this->StreamableBulkData).ArrayNum,
                     &(this->StreamableBulkData).ArrayMax);
        }
      }
    }
    iVar9 = (this->StreamableBulkData).ArrayNum;
    this_00 = (FBulkData *)(this_01->AllocatorInstance).Data;
    pFVar2 = this_00 + iVar9;
    while( true ) {
      if ((this->StreamableBulkData).ArrayNum != iVar9) {
        `TCheckedPointerIterator<TBulkData<unsigned_char>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (this_00 == pFVar2) break;
      FBulkData::Serialize(this_00,param_1,param_2,false,1,None);
      this_00 = this_00 + 1;
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

