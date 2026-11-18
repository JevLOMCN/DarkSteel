// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 3

// StaticStruct @ 14237abd0

UScriptStruct * __cdecl FNodeHierarchyData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNodeHierarchyData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FNodeHierarchyData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyData,(UObject *)pUVar1,
                         L"NodeHierarchyData");
  }
  return Z_Registration_Info_UScriptStruct_FNodeHierarchyData.OuterSingleton;
}

// operator= @ 14237ebe0

FNodeHierarchyData * __thiscall
FNodeHierarchyData::operator=(FNodeHierarchyData *this,FNodeHierarchyData *param_1)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  undefined1 *puVar3;
  undefined1 *this_01;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  void *_Dst;
  void *_Src;
  uint uVar7;
  
  if (this != param_1) {
    iVar4 = (param_1->Nodes).ArrayNum;
    piVar1 = &(this->Nodes).ArrayMax;
    pFVar6 = (param_1->Nodes).AllocatorInstance.Data;
    (this->Nodes).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,*piVar1,(ForAnyElementType *)this,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((this->Nodes).AllocatorInstance.Data,pFVar6,(longlong)iVar4 << 4);
      }
    }
  }
  pTVar2 = &this->Transforms;
  if (pTVar2 != &param_1->Transforms) {
    iVar4 = (param_1->Transforms).ArrayNum;
    piVar1 = &(this->Transforms).ArrayMax;
    pFVar6 = (param_1->Transforms).AllocatorInstance.Data;
    (this->Transforms).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 * 0x60);
      }
    }
  }
  this_00 = &this->NodeNameToIndexMapping;
  if (this_00 == &param_1->NodeNameToIndexMapping) {
    return this;
  }
  uVar5 = *(uint *)&(param_1->NodeNameToIndexMapping).field_0x48;
  uVar7 = uVar5;
  if (uVar5 < 2) {
    if (*(longlong *)&(this->NodeNameToIndexMapping).field_0x40 == 0) goto LAB_14237ed06;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->NodeNameToIndexMapping).field_0x40,0,uVar7,4);
LAB_14237ed06:
  _Src = *(void **)&(param_1->NodeNameToIndexMapping).field_0x40;
  _Dst = *(void **)&(this->NodeNameToIndexMapping).field_0x40;
  if (uVar5 != 0) {
    if (_Src == (void *)0x0) {
      _Src = &(param_1->NodeNameToIndexMapping).field_0x38;
    }
    if (_Dst == (void *)0x0) {
      _Dst = &(this->NodeNameToIndexMapping).field_0x38;
    }
    memcpy(_Dst,_Src,(longlong)(int)uVar5 << 2);
  }
  *(uint *)&(this->NodeNameToIndexMapping).field_0x48 = uVar5;
  iVar4 = *(int *)&(param_1->NodeNameToIndexMapping).field_0x8;
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)this_00,iVar4);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,iVar4,(ForAnyElementType *)this_00,
             (int *)&(this->NodeNameToIndexMapping).field_0x8,
             (int *)&(this->NodeNameToIndexMapping).field_0xc);
  puVar3 = &(param_1->NodeNameToIndexMapping).field_0x10;
  this_01 = &(this->NodeNameToIndexMapping).field_0x10;
  *(undefined4 *)&(this->NodeNameToIndexMapping).field_0x30 =
       *(undefined4 *)&(param_1->NodeNameToIndexMapping).field_0x30;
  *(undefined4 *)&(this->NodeNameToIndexMapping).field_0x34 =
       *(undefined4 *)&(param_1->NodeNameToIndexMapping).field_0x34;
  if (this_01 != puVar3) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar3);
  }
  if (iVar4 != 0) {
    memcpy(*(void **)this_00,*(void **)&param_1->NodeNameToIndexMapping,(longlong)iVar4 * 0x14);
  }
  return this;
}

// BuildNodeNameToIndexMapping @ 142380ad0

void __thiscall FNodeHierarchyData::BuildNodeNameToIndexMapping(FNodeHierarchyData *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  TKeyInitializer<FName_const_&> local_res8;
  FScriptContainerElement *local_res10;
  
  bVar3 = 1 < *(int *)&(this->NodeNameToIndexMapping).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)&this->NodeNameToIndexMapping);
  }
  puVar1 = &(this->NodeNameToIndexMapping).field_0xc;
  *(undefined4 *)&(this->NodeNameToIndexMapping).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->NodeNameToIndexMapping,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NodeNameToIndexMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeNameToIndexMapping).field_0x34 = 0;
  iVar5 = *(int *)&(this->NodeNameToIndexMapping).field_0x2c;
  *(undefined4 *)&(this->NodeNameToIndexMapping).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->NodeNameToIndexMapping).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NodeNameToIndexMapping).field_0x10,0)
    ;
  }
  if (bVar3) {
    *(undefined4 *)&(this->NodeNameToIndexMapping).field_0x48 = 1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->NodeNameToIndexMapping);
  }
  iVar5 = (this->Nodes).ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res10 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->NodeNameToIndexMapping,&local_res8,(bool *)&local_res10);
      *(uint *)(*(longlong *)&this->NodeNameToIndexMapping + 8 +
               (longlong)(int)local_res8.Key * 0x14) = uVar6;
      uVar6 = uVar6 + 1;
      iVar5 = (this->Nodes).ArrayNum;
    } while ((int)uVar6 < iVar5);
  }
  if ((iVar5 != *(int *)&(this->NodeNameToIndexMapping).field_0x8 -
                *(int *)&(this->NodeNameToIndexMapping).field_0x34) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Nodes.Num() == NodeNameToIndexMapping.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\NodeHierarchy.h"
                         ,0xc1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

