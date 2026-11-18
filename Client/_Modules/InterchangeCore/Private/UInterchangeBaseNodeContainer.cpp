// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 57

// StaticClass @ 14e303470

UClass * __cdecl UInterchangeBaseNodeContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeBaseNodeContainer",
               &Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseNodeContainer,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeBaseNodeContainer>,
               InternalVTableHelperCtorCaller<UInterchangeBaseNodeContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.InnerSingleton;
}

// UInterchangeBaseNodeContainer @ 14e400e10

UInterchangeBaseNodeContainer * __thiscall
UInterchangeBaseNodeContainer::UInterchangeBaseNodeContainer
          (UInterchangeBaseNodeContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeBaseNodeContainer__6B_;
  *(undefined8 *)&this->Nodes = 0;
  *(undefined8 *)&(this->Nodes).field_0x8 = 0;
  *(undefined8 *)&(this->Nodes).field_0x20 = 0;
  *(undefined4 *)&(this->Nodes).field_0x28 = 0;
  *(undefined4 *)&(this->Nodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->Nodes).field_0x34 = 0;
  *(undefined4 *)&(this->Nodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Nodes).field_0x40 = 0;
  *(undefined4 *)&(this->Nodes).field_0x48 = 0;
  *(undefined8 *)&this->ChildrenCache = 0;
  *(undefined8 *)&(this->ChildrenCache).field_0x8 = 0;
  *(undefined8 *)&(this->ChildrenCache).field_0x20 = 0;
  *(undefined4 *)&(this->ChildrenCache).field_0x28 = 0;
  *(undefined4 *)&(this->ChildrenCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildrenCache).field_0x34 = 0;
  *(undefined4 *)&(this->ChildrenCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChildrenCache).field_0x40 = 0;
  *(undefined4 *)&(this->ChildrenCache).field_0x48 = 0;
  return this;
}

// UInterchangeBaseNodeContainer @ 14e400ea0

UInterchangeBaseNodeContainer * __thiscall
UInterchangeBaseNodeContainer::UInterchangeBaseNodeContainer(UInterchangeBaseNodeContainer *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UInterchangeBaseNodeContainer__6B_;
  *(undefined8 *)&this->Nodes = 0;
  *(undefined8 *)&(this->Nodes).field_0x8 = 0;
  *(undefined8 *)&(this->Nodes).field_0x20 = 0;
  *(undefined4 *)&(this->Nodes).field_0x28 = 0;
  *(undefined4 *)&(this->Nodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->Nodes).field_0x34 = 0;
  *(undefined4 *)&(this->Nodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Nodes).field_0x40 = 0;
  *(undefined4 *)&(this->Nodes).field_0x48 = 0;
  *(undefined8 *)&this->ChildrenCache = 0;
  *(undefined8 *)&(this->ChildrenCache).field_0x8 = 0;
  *(undefined8 *)&(this->ChildrenCache).field_0x20 = 0;
  *(undefined4 *)&(this->ChildrenCache).field_0x28 = 0;
  *(undefined4 *)&(this->ChildrenCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildrenCache).field_0x34 = 0;
  *(undefined4 *)&(this->ChildrenCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChildrenCache).field_0x40 = 0;
  *(undefined4 *)&(this->ChildrenCache).field_0x48 = 0;
  return this;
}

// ~UInterchangeBaseNodeContainer @ 14e4049a0

void __thiscall
UInterchangeBaseNodeContainer::~UInterchangeBaseNodeContainer(UInterchangeBaseNodeContainer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeBaseNodeContainer__6B_;
  *(undefined4 *)&(this->ChildrenCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChildrenCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildrenCache);
  *(undefined4 *)&(this->Nodes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Nodes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Nodes);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14e405a70

void __thiscall
`UInterchangeBaseNodeContainer::GetNodes'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FString local_18;
  
  lVar2 = **(longlong **)this;
  if (lVar2 != 0) {
    if ((*(int *)(param_2->_padding_ + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2->_padding_ + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = (FScriptContainerElement *)UInterchangeBaseNode::GetUniqueID(param_2,&local_18);
      if ((pFVar3->Data <= pFVar7) &&
         (pFVar7 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      pFVar8 = pFVar3->Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar8 = 0;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
      *(undefined8 *)pFVar7 = 0;
      *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar7 + 8);
      *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar7 + 0xc);
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AddNode @ 14e40f8f0

FString * __thiscall
UInterchangeBaseNodeContainer::AddNode
          (UInterchangeBaseNodeContainer *this,FString *__return_storage_ptr__,
          UInterchangeBaseNode *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  TPairInitializer<FString_const_&,TObjectPtr<UInterchangeBaseNode>_&&> local_res18;
  FString local_48;
  FString *local_38;
  TObjectPtr<UInterchangeBaseNode> **local_30;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId25,"UInterchangeBaseNodeContainer::AddNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x19);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId25);
  }
  if (param_1 == (UInterchangeBaseNode *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    UInterchangeBaseNode::GetUniqueID(param_1,&local_48);
    if ((local_48.Data.ArrayNum == 0) || (local_48.Data.ArrayNum == 1)) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar3 = local_48.Data.ArrayNum + -1;
      FVar1.Data = local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.ArrayNum == 0) {
        iVar3 = 0;
        FVar1.Data = (FScriptContainerElement *)L"";
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
      iVar3 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                          *)&this->Nodes,uVar2,&local_48);
      if (iVar3 == -1) {
        local_res18.Value = (TObjectPtr<UInterchangeBaseNode> *)param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_38 = &local_48;
        local_30 = &local_res18.Value;
        TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UInterchangeBaseNode>_&&>_>
                  ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                    *)&this->Nodes,&local_res18,(bool *)&local_38);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// BreakableIterateNodes @ 14e416a60

void __thiscall
UInterchangeBaseNodeContainer::BreakableIterateNodes
          (UInterchangeBaseNodeContainer *this,
          TFunctionRef<bool___cdecl(FString_const_&,UInterchangeBaseNode_*)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Nodes).field_0x28;
  puVar1 = &(this->Nodes).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Nodes).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e416afe;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14e416afe:
  uVar11 = *(uint *)&(this->Nodes).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->Nodes).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->Nodes).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e416c00;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14e416c00:
  while( true ) {
    if (*(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this->Nodes;
    local_res20 = *(undefined8 *)(lVar9 + 0x10);
    cVar6 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar9,&local_res20);
    if (cVar6 != '\0') {
      return;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ClearNodeParentUid @ 14e4172c0

bool __thiscall
UInterchangeBaseNodeContainer::ClearNodeParentUid
          (UInterchangeBaseNodeContainer *this,FString *param_1)

{
  bool bVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = SetNodeParentUid(this,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ComputeChildrenCache @ 14e417d50

void __thiscall
UInterchangeBaseNodeContainer::ComputeChildrenCache(UInterchangeBaseNodeContainer *this)

{
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ForElementType<unsigned_int> FVar4;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *pTVar5;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  FString *pFVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_178;
  int local_174;
  ForElementType<unsigned_int> local_170;
  ulonglong local_168;
  FString local_160;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  int local_118;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_110;
  FString *local_108;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId411,"UInterchangeBaseNodeContainer::ComputeChildrenCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x19b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId411);
  }
  this_00 = &this->ChildrenCache;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)this_00);
  iVar8 = *(int *)&(this->Nodes).field_0x28;
  local_170 = (ForElementType<unsigned_int>)&(this->Nodes).field_0x10;
  iVar15 = 0;
  iVar14 = 0;
  local_150 = &this->Nodes;
  iVar19 = 0;
  local_168 = 1;
  uStack_144 = 1;
  iStack_134 = iVar19;
  iStack_148 = iVar19;
  local_130 = iVar19;
  if (iVar8 != 0) {
    puVar18 = *(uint **)&(this->Nodes).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_170;
    }
    uStack_144 = *puVar18;
    local_130 = iVar14;
    iStack_148 = iVar14;
    while (uStack_144 == 0) {
      lVar9 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      uStack_144 = 1;
      iStack_134 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14e417e5e;
      uStack_144 = (puVar18 + 1)[lVar9];
    }
    uStack_144 = -uStack_144 & uStack_144;
    uVar2 = (ulonglong)uStack_144 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_120 = (int)lVar9;
    iStack_134 = local_130 + -1 + local_120;
    if (iVar8 < iStack_134) {
      iStack_134 = iVar8;
    }
  }
LAB_14e417e5e:
  uStack_12c = local_54;
  local_178 = *(uint *)&(this->Nodes).field_0x28;
  iStack_128 = *(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34;
  uVar20 = local_178 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uStack_144,iStack_148);
  uStack_138 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_134;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)local_178 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_130;
  uStack_a8 = CONCAT44(uStack_124,iStack_128);
  local_140 = (undefined1 *)local_170;
  local_110 = local_150;
  local_d0 = local_150;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_170;
  if ((((int)local_178 < 0) || (iVar8 < (int)local_178)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar4 = local_170;
  uVar11 = *(int *)((longlong)local_170 + 0x18);
  if (local_178 != uVar11) {
    FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_170 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_170 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_170;
    }
    uVar10 = -1 << ((byte)local_178 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar13;
      uVar20 = uVar20 + 0x20;
      iVar13 = iVar13 + 1;
      local_178 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14e417f90;
      uVar10 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar9 * 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_11c = (int)lVar9;
    local_178 = local_11c + -1 + uVar20;
    if ((int)uVar11 < (int)local_178) {
      local_178 = uVar11;
    }
  }
LAB_14e417f90:
  while( true ) {
    pTVar5 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_c8.CurrentBitIndex == local_178) &&
        ((ForElementType<unsigned_int>)TStack_c8.Array == FVar4)) && (pTVar5 == local_110)) break;
    pFVar12 = (FString *)((longlong)TStack_c8.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
    UInterchangeBaseNode::GetParentUid
              ((UInterchangeBaseNode *)pFVar12[1].Data.AllocatorInstance.Data,&local_160);
    iVar8 = local_160.Data.ArrayNum;
    if (1 < iVar8) {
      iVar13 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar13 = iVar14;
      }
      uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>
                         (iVar13,(wchar_t *)local_160.Data.AllocatorInstance.Data);
      iVar8 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_00,uVar20,&local_160);
      if ((iVar8 == -1) ||
         (lVar9 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x28, lVar9 == 0)) {
        local_108 = &local_160;
        TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this_00,(uint)&local_174,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar20
                   ,(bool *)&local_108);
        lVar9 = *(longlong *)&this_00->field_0x0 + (longlong)local_174 * 0x28;
      }
      if (((*(FString **)(lVar9 + 0x10) <= pFVar12) &&
          (pFVar12 < *(FString **)(lVar9 + 0x10) + *(int *)(lVar9 + 0x1c))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = *(int *)(lVar9 + 0x18);
      if (iVar8 == *(int *)(lVar9 + 0x1c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)(lVar9 + 0x10),(int *)(lVar9 + 0x1c));
      }
      *(int *)(lVar9 + 0x18) = iVar8 + 1;
      ::FString::FString((FString *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar9 + 0x10)),pFVar12);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  puVar1 = &(this->ChildrenCache).field_0x10;
  iVar8 = *(int *)&(this->ChildrenCache).field_0x28;
  iStack_e4 = iVar15;
  if (iVar8 != 0) {
    puVar18 = *(uint **)&(this->ChildrenCache).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar20 = *puVar18;
    iVar19 = iVar15;
    while (uVar20 == 0) {
      lVar9 = (longlong)iVar19;
      iVar15 = iVar15 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_e4 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14e4181b2;
      uVar20 = puVar18[lVar9 + 1];
    }
    local_168 = (ulonglong)(-uVar20 & uVar20);
    uVar2 = local_168 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_118 = (int)lVar9;
    iStack_e4 = iVar15 + -1 + local_118;
    if (iVar8 < iStack_e4) {
      iStack_e4 = iVar8;
    }
  }
LAB_14e4181b2:
  uStack_f4 = (undefined4)local_168;
  iStack_dc = iStack_134;
  iStack_d8 = *(int *)&(this->ChildrenCache).field_0x8 - *(int *)&(this->ChildrenCache).field_0x34;
  uVar20 = *(uint *)&(this->ChildrenCache).field_0x28;
  uStack_e8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_f4,iVar19);
  uVar11 = uVar20 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar20 >> 5;
  TStack_98._28_4_ = iStack_134;
  TStack_98.BaseBitIndex = iVar15;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = this_00;
  iStack_f8 = iVar19;
  local_f0 = puVar1;
  local_e0 = iVar15;
  local_a0 = this_00;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar8 < (int)uVar20)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar10 = *(uint *)&(this->ChildrenCache).field_0x28;
  if (uVar20 != uVar10) {
    puVar17 = *(undefined1 **)&(this->ChildrenCache).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar20 == 0) {
      lVar9 = (longlong)iVar14;
      uVar11 = uVar11 + 0x20;
      iVar14 = iVar14 + 1;
      uVar20 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14e4182d0;
      uVar20 = *(uint *)(puVar17 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar20 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar10 < (int)uVar20) {
      uVar20 = uVar10;
    }
  }
LAB_14e4182d0:
  while( true ) {
    pTVar6 = local_a0;
    if (*(int *)(&local_a0->field_0x0 + 8) - *(int *)(&local_a0->field_0x0 + 0x34) != (int)uStack_78
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_98.CurrentBitIndex == uVar20) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == this_00))
    break;
    InternalReorderChildren
              (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                    (*(longlong *)&pTVar6->field_0x0 +
                    ((longlong)TStack_98.CurrentBitIndex * 5 + 2) * 8));
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetCachedNodeChildrenUids @ 14e43a120

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNodeContainer::GetCachedNodeChildrenUids
          (UInterchangeBaseNodeContainer *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->ChildrenCache,param_1);
  return pTVar1;
}

// GetChildrenCache @ 14e43a130

TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall UInterchangeBaseNodeContainer::GetChildrenCache(UInterchangeBaseNodeContainer *this)

{
  return &this->ChildrenCache;
}

// GetFactoryNode @ 14e43c120

UInterchangeFactoryBaseNode * __thiscall
UInterchangeBaseNodeContainer::GetFactoryNode(UInterchangeBaseNodeContainer *this,FString *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 FVar6;
  bool bVar7;
  FObjectPtr_u_0 local_res10;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId192,"UInterchangeBaseNodeContainer::GetFactoryNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xc0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId192);
  }
  iVar3 = (param_1->Data).ArrayNum;
  if ((iVar3 != 0) && (iVar3 != 1)) {
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>
                      (iVar3 + -1,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
    iVar3 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&this->Nodes,uVar2,param_1);
    if ((iVar3 != -1) && (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&this->Nodes, lVar4 != 0)) {
      local_res10 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(lVar4 + 0x10))->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UInterchangeFactoryBaseNode *)local_res10.Handle == (UInterchangeFactoryBaseNode *)0x0)
        goto LAB_14e43c1f5;
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if ((UInterchangeFactoryBaseNode *)local_res10.Handle != (UInterchangeFactoryBaseNode *)0x0) {
        pUVar5 = UInterchangeFactoryBaseNode::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar5);
        FVar6 = local_res10;
        if (bVar1) goto LAB_14e43c1f7;
      }
    }
  }
LAB_14e43c1f5:
  FVar6.Handle = (UObject *)0x0;
LAB_14e43c1f7:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (UInterchangeFactoryBaseNode *)FVar6.Handle;
}

// GetIsAncestor @ 14e43cdf0

bool __thiscall
UInterchangeBaseNodeContainer::GetIsAncestor
          (UInterchangeBaseNodeContainer *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  UInterchangeBaseNode *this_00;
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  FString local_28;
  FString local_18;
  
  local_28.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    goto LAB_14e43ce67;
  }
  local_28.Data.ArrayMax = 0;
  uVar6 = 0;
  while (uVar2 = (uint)uVar6, 1 < uVar2) {
    iVar3 = uVar2 - 1;
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    if (uVar2 == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    iVar3 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&this->Nodes,uVar2,&local_28);
    if (((iVar3 == -1) || (lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)&this->Nodes, lVar5 == 0))
       || (this_00 = *(UInterchangeBaseNode **)(lVar5 + 0x10),
          this_00 == (UInterchangeBaseNode *)0x0)) break;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UInterchangeBaseNode::GetParentUid(this_00,&local_18);
    uVar6 = local_18.Data._8_8_;
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
    uVar2 = (param_2->Data).ArrayNum;
    uVar4 = local_18.Data.ArrayNum;
    if (uVar2 == uVar4) {
      if (1 < (int)uVar2) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                           (wchar_t *)local_18.Data.AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
        goto LAB_14e43cf25;
      }
LAB_14e43cf9d:
      if (FVar1.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar1.Data);
      }
      bVar7 = true;
      goto LAB_14e43cfb0;
    }
    bVar7 = uVar2 + uVar4 == 1;
LAB_14e43cf25:
    if (bVar7) goto LAB_14e43cf9d;
    local_28.Data.ArrayNum = uVar4;
    if ((uVar4 == 0) && (local_28.Data.ArrayMax == 0)) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,local_28.Data.ArrayMax,(ForAnyElementType *)&local_28,uVar4,
                 &local_28.Data.ArrayMax);
      if (uVar4 != 0) {
        memcpy(local_28.Data.AllocatorInstance.Data,FVar1.Data,(longlong)(int)uVar4 * 2);
      }
      uVar6 = (ulonglong)(uint)local_28.Data.ArrayNum;
    }
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
LAB_14e43ce67:
      uVar6 = (ulonglong)(uint)local_28.Data.ArrayNum;
    }
  }
  bVar7 = false;
LAB_14e43cfb0:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// GetNode @ 14e4400f0

UInterchangeBaseNode * __thiscall
UInterchangeBaseNodeContainer::GetNode(UInterchangeBaseNodeContainer *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  UInterchangeBaseNode *pUVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"UInterchangeBaseNodeContainer::GetNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  iVar2 = (param_1->Data).ArrayNum;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>
                      (iVar2 + -1,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
    iVar2 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&this->Nodes,uVar1,param_1);
    if ((iVar2 != -1) && (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this->Nodes, lVar3 != 0)) {
      pUVar4 = *(UInterchangeBaseNode **)(lVar3 + 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UInterchangeBaseNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      goto LAB_14e44019e;
    }
  }
  pUVar4 = (UInterchangeBaseNode *)0x0;
LAB_14e44019e:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar4;
}

// GetNodeChildren @ 14e4401c0

UInterchangeBaseNode * __thiscall
UInterchangeBaseNodeContainer::GetNodeChildren
          (UInterchangeBaseNodeContainer *this,FString *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UInterchangeBaseNode *pUVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> TStack_18;
  
  GetNodeChildrenUids(this,&TStack_18,param_1);
  if ((param_2 < 0) || (TStack_18.ArrayNum <= param_2)) {
    pUVar6 = (UInterchangeBaseNode *)0x0;
  }
  else {
    pUVar6 = (UInterchangeBaseNode *)0x0;
    uVar3 = 0;
    uVar4 = uVar3;
    if (param_2 < TStack_18.ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UInterchangeBaseNode *)(*pcVar1)();
      return pUVar6;
    }
    pFVar9 = TStack_18.AllocatorInstance.Data + (longlong)param_2 * 0x10;
    if (*(int *)(pFVar9 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar9;
      uVar3 = *(int *)(pFVar9 + 8) - 1;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar3,pwVar8);
    iVar5 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&this->Nodes,uVar4,(FString *)pFVar9);
    if ((((iVar5 != -1) && (lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)&this->Nodes, lVar7 != 0))
        && (pUVar6 = *(UInterchangeBaseNode **)(lVar7 + 0x10),
           UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (pUVar6 != (UInterchangeBaseNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  DestructItems<FString,int>((FString *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
  if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_18.AllocatorInstance.Data);
  }
  return pUVar6;
}

// GetNodeChildren @ 14e4401d0

UInterchangeBaseNode * __thiscall
UInterchangeBaseNodeContainer::GetNodeChildren
          (UInterchangeBaseNodeContainer *this,FString *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UInterchangeBaseNode *pUVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> TStack_18;
  
  GetNodeChildrenUids(this,&TStack_18,param_1);
  if ((param_2 < 0) || (TStack_18.ArrayNum <= param_2)) {
    pUVar6 = (UInterchangeBaseNode *)0x0;
  }
  else {
    pUVar6 = (UInterchangeBaseNode *)0x0;
    uVar3 = 0;
    uVar4 = uVar3;
    if (param_2 < TStack_18.ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UInterchangeBaseNode *)(*pcVar1)();
      return pUVar6;
    }
    pFVar9 = TStack_18.AllocatorInstance.Data + (longlong)param_2 * 0x10;
    if (*(int *)(pFVar9 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar9;
      uVar3 = *(int *)(pFVar9 + 8) - 1;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar3,pwVar8);
    iVar5 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&this->Nodes,uVar4,(FString *)pFVar9);
    if ((((iVar5 != -1) && (lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)&this->Nodes, lVar7 != 0))
        && (pUVar6 = *(UInterchangeBaseNode **)(lVar7 + 0x10),
           UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (pUVar6 != (UInterchangeBaseNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  DestructItems<FString,int>((FString *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
  if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_18.AllocatorInstance.Data);
  }
  return pUVar6;
}

// GetNodeChildrenCount @ 14e4401e0

int __thiscall
UInterchangeBaseNodeContainer::GetNodeChildrenCount
          (UInterchangeBaseNodeContainer *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar1 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->ChildrenCache,param_1);
  if (pTVar1 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    return pTVar1->ArrayNum;
  }
  GetNodeChildrenUids(this,&local_18,param_1);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return local_18.ArrayNum;
}

// GetNodeChildrenInternal @ 14e440250

UInterchangeBaseNode * __thiscall
UInterchangeBaseNodeContainer::GetNodeChildrenInternal
          (UInterchangeBaseNodeContainer *this,FString *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UInterchangeBaseNode *pUVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  GetNodeChildrenUids(this,&local_18,param_1);
  if ((param_2 < 0) || (local_18.ArrayNum <= param_2)) {
    pUVar6 = (UInterchangeBaseNode *)0x0;
  }
  else {
    pUVar6 = (UInterchangeBaseNode *)0x0;
    uVar3 = 0;
    uVar4 = uVar3;
    if (param_2 < local_18.ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UInterchangeBaseNode *)(*pcVar1)();
      return pUVar6;
    }
    pFVar9 = local_18.AllocatorInstance.Data + (longlong)param_2 * 0x10;
    if (*(int *)(pFVar9 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar9;
      uVar3 = *(int *)(pFVar9 + 8) - 1;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar3,pwVar8);
    iVar5 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&this->Nodes,uVar4,(FString *)pFVar9);
    if ((((iVar5 != -1) && (lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)&this->Nodes, lVar7 != 0))
        && (pUVar6 = *(UInterchangeBaseNode **)(lVar7 + 0x10),
           UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (pUVar6 != (UInterchangeBaseNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar6;
}

// GetNodeChildrenUids @ 14e440370

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeBaseNodeContainer::GetNodeChildrenUids
          (UInterchangeBaseNodeContainer *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId286,"UInterchangeBaseNodeContainer::GetNodeChildrenUids",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x11e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId286);
  }
  pTVar3 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->ChildrenCache,param_1);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (pTVar3 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    iVar1 = pTVar3->ArrayNum;
    pFVar2 = (pTVar3->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<FString,FString,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)pFVar2,iVar1);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetNodes @ 14e440580

void __thiscall
UInterchangeBaseNodeContainer::GetNodes
          (UInterchangeBaseNodeContainer *this,UClass *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  UClass *local_res10;
  UClass **local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  UClass ***local_10;
  
  bVar1 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId168,"UInterchangeBaseNodeContainer::GetNodes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xa8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId168);
  }
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_28 = &local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UInterchangeBaseNodeContainer::GetNodes'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
             ::Call;
  local_20 = param_2;
  IterateNodes(this,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_18)
  ;
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetPrivateStaticClass @ 14e4417e0

UClass * __cdecl UInterchangeBaseNodeContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeBaseNodeContainer",
               &Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseNodeContainer,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeBaseNodeContainer>,
               InternalVTableHelperCtorCaller<UInterchangeBaseNodeContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.InnerSingleton;
}

// GetRoots @ 14e442700

void __thiscall
UInterchangeBaseNodeContainer::GetRoots
          (UInterchangeBaseNodeContainer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  FString *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  FString local_a8;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
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
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = *(int *)&(this->Nodes).field_0x28;
  puVar1 = &(this->Nodes).field_0x10;
  iStack_90 = 0;
  pTVar2 = &this->Nodes;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(this->Nodes).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14e4427ae;
      uVar12 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar11;
    if (iVar9 < iStack_7c) {
      iStack_7c = iVar9;
    }
  }
LAB_14e4427ae:
  iStack_70 = *(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34;
  uVar12 = *(uint *)&(this->Nodes).field_0x28;
  uStack_80 = 0xffffffff;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Nodes).field_0x28;
  if (uVar12 != uVar4) {
    puVar15 = *(undefined1 **)&(this->Nodes).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14e4428b0;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14e4428b0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    pFVar14 = (FScriptContainerElement *)
              (*(longlong *)pTVar7 + (longlong)TStack_60.CurrentBitIndex * 0x20);
    pFVar10 = UInterchangeBaseNode::GetParentUid
                        (*(UInterchangeBaseNode **)&pFVar14[0x10].field_0x0,&local_a8);
    uVar17 = (pFVar10->Data).ArrayNum;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (uVar17 < 2) {
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar14) && (pFVar14 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == param_1->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar9 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                         (FString *)pFVar14);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// InternalReorderChildren @ 14e4484d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeBaseNodeContainer::InternalReorderChildren
          (UInterchangeBaseNodeContainer *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  void *_Src;
  code *pcVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  UInterchangeBaseNode *this_00;
  byte bVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ForElementType<unsigned_int> FVar23;
  uint *puVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStackY_258 [32];
  undefined1 local_207;
  FIdentityFunctor local_206 [6];
  uint local_200 [2];
  uint local_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f0;
  undefined4 local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  undefined4 local_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  UInterchangeBaseNodeContainer *local_190;
  FIdentityFunctor *local_188;
  FIdentityFunctor **local_180;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_178;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_140;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar27 = -1 < CpuChannel->Enabled;
  local_190 = this;
  local_178 = param_1;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId444,"UInterchangeBaseNodeContainer::InternalReorderChildren"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x1bc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId444);
  }
  uVar9 = param_1->ArrayNum;
  uVar16 = (ulong64)(int)uVar9;
  uVar22 = 0;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1b0 = 1;
  if (uVar9 == 0) goto LAB_14e448f0e;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar16);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar9);
  uVar18 = 1;
  if (3 < uVar9) {
    uVar14 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1a8 = (undefined4)lVar15;
    uVar18 = 1 << ((byte)lVar15 & 0x1f);
  }
  if ((local_50 == 0) || ((int)local_50 < (int)uVar18)) {
    local_50 = uVar18;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar18 != 0) {
      uVar26 = uVar18;
      if (uVar18 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar26 = 0;
          goto LAB_14e448647;
        }
      }
      else {
LAB_14e448647:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar26,4);
      }
      if (0 < (int)uVar18) {
        uVar21 = (ulonglong)uVar18;
        uVar14 = uVar22;
        do {
          FVar13.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar13.Data = local_58.Data;
          }
          uVar10 = uVar14 & (longlong)(int)uVar18 - 1U;
          uVar14 = uVar14 + 1;
          *(undefined4 *)(FVar13.Data + uVar10 * 4) = 0xffffffff;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    if (local_50 != 0) {
      pTStack_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_1f8 = 0;
      uStack_1f4 = 1;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uVar14 = uVar22;
      if (local_70 != 0) {
        FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar23 = local_78;
        }
        uVar18 = *(uint *)FVar23;
        uVar21 = uVar22;
        while (uVar18 == 0) {
          uStack_1e0 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)uStack_1e0;
          iVar19 = (int)uVar14;
          local_1f8 = iVar19 + 1;
          uVar14 = (ulonglong)local_1f8;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1f8)
          goto LAB_14e44875f;
          uVar18 = ((uint *)((longlong)FVar23 + 4))[iVar19];
        }
        uStack_1f4 = -uVar18 & uVar18;
        uVar14 = (ulonglong)uStack_1f4 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_1a4 = (int)lVar15;
        uStack_1e4 = local_1a4 + -1 + uStack_1e0;
        uVar14 = (ulonglong)uStack_1e4;
        if ((int)local_70 < (int)uStack_1e4) {
LAB_14e44875f:
          uVar14 = (ulonglong)local_70;
          uStack_1e4 = local_70;
        }
      }
      local_1e8 = 0xffffffff;
      local_170 = (longlong *)local_98;
      local_168._padding_ = CONCAT44(uStack_1f4,local_1f8);
      local_168.CurrentBitIndex = uStack_1e4;
      local_168.UnvisitedBitMask = 0xffffffff;
      local_168._28_4_ = uStack_1dc;
      local_168.BaseBitIndex = uStack_1e0;
      local_168.Array = pTStack_1f0;
      if ((int)uVar14 < (int)local_70) {
        do {
          puVar24 = (uint *)((longlong)(int)uVar14 * 0x20 + *local_170);
          uVar18 = local_50 - 1 & *puVar24;
          puVar24[7] = uVar18;
          FVar13.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar13.Data = local_58.Data;
          }
          uVar21 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
          puVar24[6] = *(uint *)(FVar13.Data + uVar21 * 4);
          *(int *)(FVar13.Data + uVar21 * 4) = (int)uVar14;
          local_168.UnvisitedBitMask = local_168.UnvisitedBitMask & ~local_168._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
          uVar14 = (ulonglong)(uint)local_168.CurrentBitIndex;
        } while (local_168.CurrentBitIndex < (local_168.Array)->NumBits);
      }
    }
  }
  if ((int)uVar9 < 1) goto LAB_14e448f0e;
  local_1b8 = 0;
  bVar8 = false;
  uVar17 = uVar16;
  do {
    lVar15 = local_1b8;
    uVar26 = (uint)uVar22;
    uVar18 = 0;
    if ((int)uVar26 < param_1->ArrayNum) {
      uVar18 = ~uVar26 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (param_1->AllocatorInstance).Data + lVar15 * 0x10;
    this_00 = GetNode(local_190,(FString *)pFVar25);
    if ((this_00 == (UInterchangeBaseNode *)0x0) ||
       (local_200[0] = UInterchangeBaseNode::GetDesiredChildIndex(this_00),
       local_200[0] == 0xffffffff)) {
      local_200[0] = uVar26 + (int)uVar17;
    }
    else {
      bVar8 = true;
    }
    if (local_98._8_4_ != local_64) {
      FVar13.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar13.Data = local_58.Data;
      }
      iVar19 = *(int *)(FVar13.Data + (ulonglong)(local_50 - 1 & local_200[0]) * 4);
      while (iVar19 != -1) {
        pFVar12 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar19 * 0x20);
        if (*(uint *)&pFVar12->field_0x0 == local_200[0]) {
          if (pFVar12 != (FScriptContainerElement *)0x0) {
            pFVar12 = pFVar12 + 8;
            goto LAB_14e44891e;
          }
          break;
        }
        iVar19 = *(int *)(pFVar12 + 0x18);
      }
    }
    pFVar12 = (FScriptContainerElement *)
              TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
              ::EmplaceByHash<int_const_&>
                        ((TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
                          *)local_98,local_200[0],(int *)local_200);
LAB_14e44891e:
    if (pFVar12 != pFVar25) {
      iVar19 = *(int *)(pFVar25 + 8);
      pFVar1 = pFVar12 + 0xc;
      _Src = *(void **)&pFVar25->field_0x0;
      *(int *)(pFVar12 + 8) = iVar19;
      if ((iVar19 == 0) && (*(int *)pFVar1 == 0)) {
        *(int *)pFVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,*(int *)pFVar1,(ForAnyElementType *)pFVar12,iVar19,(int *)pFVar1);
        if (iVar19 != 0) {
          memcpy(*(void **)pFVar12,_Src,(longlong)iVar19 * 2);
        }
      }
      uVar17 = (ulong64)uVar9;
    }
    uVar22 = (ulonglong)(uVar26 + 1);
    local_1b8 = local_1b8 + 1;
  } while (local_1b8 < (longlong)uVar16);
  if (!bVar8) goto LAB_14e448f0e;
  local_188 = local_206;
  local_180 = &local_188;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar6 = local_98._0_8_;
    iVar19 = local_98._8_4_ - local_64;
    if ((iVar19 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>::FKeyComparisonClass<_UInterchangeBaseNodeContainer::InternalReorderChildren_::__l2::<lambda_1>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar6,iVar19,local_206[0],
               (FElementCompareClass<TSortableMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>::FKeyComparisonClass<_private:_void___cdecl_UInterchangeBaseNodeContainer::InternalReorderChildren(TArray<FString,TSizedDefaultAllocator<32>_>_&)const_::_2_::<lambda_1>_>_>
                *)&local_180);
  }
  uVar9 = local_50;
  uVar22 = (ulonglong)local_50;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar9 != 0) {
    uVar18 = uVar9;
    if (uVar9 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_14e448a69;
      }
    }
    else {
LAB_14e448a69:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar18,4);
    }
    uVar14 = 0;
    if (0 < (int)uVar9) {
      do {
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar21 = (longlong)(int)uVar9 - 1U & uVar14;
        uVar14 = uVar14 + 1;
        *(undefined4 *)(FVar13.Data + uVar21 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  uVar9 = (uint)local_1b0;
  uVar18 = 0;
  if (local_50 != 0) {
    pTStack_1d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_1d8 = 0;
    uStack_1c4 = 0;
    iStack_1c0 = 0;
    uStack_1d4 = uVar9;
    if (local_70 != 0) {
      FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = local_78;
      }
      uVar26 = *(uint *)FVar23;
      iStack_1c0 = 0;
      local_1d8 = 0;
      while (uVar26 == 0) {
        iStack_1c0 = iStack_1c0 + 0x20;
        lVar15 = (longlong)local_1d8;
        local_1d8 = local_1d8 + 1;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1d8)
        goto LAB_14e448b7a;
        uVar26 = ((uint *)((longlong)FVar23 + 4))[lVar15];
      }
      uStack_1d4 = -uVar26 & uVar26;
      uVar22 = (ulonglong)uStack_1d4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_1a0 = (int)lVar15;
      uStack_1c4 = iStack_1c0 + -1 + local_1a0;
      if ((int)local_70 < (int)uStack_1c4) {
LAB_14e448b7a:
        uStack_1c4 = local_70;
      }
    }
    local_1c8 = 0xffffffff;
    local_148 = (longlong *)local_98;
    local_140._padding_ = CONCAT44(uStack_1d4,local_1d8);
    local_140.CurrentBitIndex = uStack_1c4;
    local_140.UnvisitedBitMask = 0xffffffff;
    local_140._28_4_ = uStack_1bc;
    local_140.BaseBitIndex = iStack_1c0;
    uVar26 = uStack_1c4;
    local_140.Array = pTStack_1d0;
    if ((int)uStack_1c4 < (int)local_70) {
      do {
        puVar24 = (uint *)((longlong)(int)uVar26 * 0x20 + *local_148);
        uVar20 = local_50 - 1 & *puVar24;
        puVar24[7] = uVar20;
        FVar13.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_58.Data;
        }
        uVar22 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar20;
        puVar24[6] = *(uint *)(FVar13.Data + uVar22 * 4);
        *(uint *)(FVar13.Data + uVar22 * 4) = uVar26;
        local_140.UnvisitedBitMask = local_140.UnvisitedBitMask & ~local_140._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_140);
        uVar26 = local_140.CurrentBitIndex;
      } while (local_140.CurrentBitIndex < (local_140.Array)->NumBits);
    }
  }
  piVar2 = &param_1->ArrayMax;
  pFVar25 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar25,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar25,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar26 = local_70;
  uStack_104 = uVar18;
  local_100 = uVar18;
  if (local_70 != 0) {
    FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_78;
    }
    uVar20 = *(uint *)FVar23;
    while (uVar20 == 0) {
      lVar15 = (longlong)(int)uVar18;
      local_100 = local_100 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_104 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_14e448ce0;
      uVar20 = ((uint *)((longlong)FVar23 + 4))[lVar15];
    }
    uVar9 = -uVar20 & uVar20;
    uVar22 = (ulonglong)uVar9 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_19c = (int)lVar15;
    uStack_104 = (local_100 - 1) + local_19c;
    if ((int)local_70 < (int)uStack_104) {
      uStack_104 = local_70;
    }
  }
LAB_14e448ce0:
  local_120 = (longlong *)local_98;
  uVar20 = local_70 & 0xffffffe0;
  uStack_fc = local_a4;
  local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_f8 = local_98._8_4_ - local_64;
  uStack_108 = 0xffffffff;
  TStack_e8.CurrentBitIndex = uStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uVar9,uVar18);
  iVar19 = (int)local_70 >> 5;
  TStack_e8._28_4_ = local_a4;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  bVar11 = (byte)local_70;
  uStack_118 = uVar18;
  uStack_114 = uVar9;
  local_f0 = local_120;
  TStack_e8.Array = local_110;
  if (((int)local_70 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = local_178;
  if (uVar26 != local_70) {
    FVar23 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_78;
    }
    uVar9 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar19 * 4);
    while (uVar9 == 0) {
      lVar15 = (longlong)iVar19;
      uVar20 = uVar20 + 0x20;
      iVar19 = iVar19 + 1;
      uVar26 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14e448df5;
      uVar9 = ((uint *)((longlong)FVar23 + 4))[lVar15];
    }
    uVar22 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    uVar26 = (uVar20 - 1) + local_198;
    if ((int)local_70 < (int)uVar26) {
      uVar26 = local_70;
    }
  }
LAB_14e448df5:
  while( true ) {
    plVar5 = local_f0;
    if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
      local_207 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_207);
    }
    if (((TStack_e8.CurrentBitIndex == uVar26) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar5 == (longlong *)local_98)) break;
    pFVar12 = (FScriptContainerElement *)(*plVar5 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x20);
    pFVar25 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar25 <= pFVar12) && (pFVar12 < pFVar25 + (longlong)*piVar2 * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar19 = pTVar4->ArrayNum;
    if (iVar19 == *piVar2) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar4->AllocatorInstance,piVar2);
    }
    pTVar4->ArrayNum = iVar19 + 1;
    ::FString::FString((FString *)((pTVar4->AllocatorInstance).Data + (longlong)iVar19 * 0x10),
                       (FString *)pFVar12);
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
LAB_14e448f0e:
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsNodeUidValid @ 14e449150

bool __thiscall
UInterchangeBaseNodeContainer::IsNodeUidValid(UInterchangeBaseNodeContainer *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (param_1->Data).ArrayNum;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>
                      (iVar2 + -1,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
    iVar2 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&this->Nodes,uVar1,param_1);
    return iVar2 != -1;
  }
  return false;
}

// IterateNodes @ 14e44c860

void __thiscall
UInterchangeBaseNodeContainer::IterateNodes
          (UInterchangeBaseNodeContainer *this,
          TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Nodes).field_0x28;
  puVar1 = &(this->Nodes).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Nodes).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e44c8fe;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e44c8fe:
  uVar10 = *(uint *)&(this->Nodes).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Nodes).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Nodes).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e44ca00;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e44ca00:
  while( true ) {
    if (*(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this->Nodes;
    local_res20 = *(undefined8 *)(lVar8 + 0x10);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar8,&local_res20);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// LoadFromFile @ 14e44ca90

void __thiscall
UInterchangeBaseNodeContainer::LoadFromFile(UInterchangeBaseNodeContainer *this,FString *param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_e8;
  FLargeMemoryReader local_c8;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId392,"UInterchangeBaseNodeContainer::LoadFromFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x188);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId392);
  }
  TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
           *)&this->Nodes);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FFileHelper::LoadFileToArray(&local_e8,pwVar1,0);
  if (0 < local_e8.ArrayNum) {
    FLargeMemoryReader::FLargeMemoryReader
              (&local_c8,(uchar *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum,None,(FName)0x0)
    ;
    SerializeNodeContainerData(this,(FArchive *)&local_c8);
    FLargeMemoryReader::~FLargeMemoryReader(&local_c8);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReplaceNode @ 14e455990

void __thiscall
UInterchangeBaseNodeContainer::ReplaceNode
          (UInterchangeBaseNodeContainer *this,FString *param_1,UInterchangeFactoryBaseNode *param_2
          )

{
  UInterchangeFactoryBaseNode *pUVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId49,"UInterchangeBaseNodeContainer::ReplaceNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x31);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId49);
  }
  pUVar1 = GetFactoryNode(this,param_1);
  if (pUVar1 != (UInterchangeFactoryBaseNode *)0x0) {
    TMapBase<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
    ::Remove((TMapBase<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
              *)&this->Nodes,param_1);
    AddNode(this,&local_18,(UInterchangeBaseNode *)param_2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SaveToFile @ 14e456c80

void __thiscall
UInterchangeBaseNodeContainer::SaveToFile(UInterchangeBaseNodeContainer *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *_Src;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  bool bVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_e8;
  FLargeMemoryWriter local_c8;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"UInterchangeBaseNodeContainer::SaveToFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
  }
  FLargeMemoryWriter::FLargeMemoryWriter(&local_c8,0,false,(wchar_t *)0x0);
  SerializeNodeContainerData(this,(FArchive *)&local_c8);
  _Src = FLargeMemoryWriter::GetData(&local_c8);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_c8.Data.NumBytes < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_c8.Data.NumBytes);
  }
  pwVar4 = L"";
  if (((_Src == (uchar *)0x0) && (local_c8.Data.NumBytes != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_e8.ArrayNum = local_c8.Data.NumBytes;
  if (local_c8.Data.NumBytes == 0) {
    local_e8.ArrayMax = local_c8.Data.NumBytes;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,local_c8.Data.NumBytes,0,&local_e8.AllocatorInstance,local_c8.Data.NumBytes,
               &local_e8.ArrayMax);
    memcpy(local_e8.AllocatorInstance.Data,_Src,local_c8.Data.NumBytes);
  }
  pIVar3 = IFileManager::Get();
  if ((param_1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FFileHelper::SaveArrayToFile(&local_e8,pwVar4,pIVar3,0);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  FLargeMemoryWriter::~FLargeMemoryWriter(&local_c8);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SerializeNodeContainerData @ 14e457a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall
UInterchangeBaseNodeContainer::SerializeNodeContainerData
          (UInterchangeBaseNodeContainer *this,FArchive *param_1)

{
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  FUObjectItem *pFVar8;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *pTVar9;
  UObject *pUVar10;
  bool bVar11;
  UClass *pUVar12;
  FUObjectItem *pFVar13;
  UClass *pUVar14;
  FCoreRedirectObjectName *pFVar15;
  UInterchangeBaseNode *pUVar16;
  int iVar17;
  FString *pFVar18;
  UObjectBase *pUVar19;
  uint uVar20;
  UObjectBase *pUVar21;
  uint uVar22;
  UObjectBase *pUVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  uint *puVar26;
  undefined1 auStackY_308 [32];
  uint local_298 [2];
  FString local_290;
  undefined1 local_280 [8];
  TIterator local_278;
  undefined8 uStack_260;
  EObjectFlags local_258;
  EInternalObjectFlags EStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  UObjectBase *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  UInterchangeBaseNodeContainer *local_220;
  int local_218;
  undefined1 local_214 [20];
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  FString local_1d0;
  FString *local_1c0;
  UObjectBase **local_1b8;
  FString local_1b0;
  UObject *local_1a0;
  FCoreRedirectObjectName local_198;
  FString local_180;
  FString local_170;
  FString local_160;
  FCoreRedirectObjectName local_150 [2];
  undefined4 local_11c;
  undefined1 local_118 [128];
  TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  this_00 = &this->Nodes;
  local_220 = this;
  local_214._12_8_ = param_1;
  if ((param_1->field_0x28 & 1) != 0) {
    TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
             *)this_00);
  }
  local_298[0] = *(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34;
  plVar25 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar25[1] < (uint *)*plVar25 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_298);
    }
  }
  else {
    local_298[0] = *(uint *)*plVar25;
    *plVar25 = *plVar25 + 4;
  }
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      pUVar21 = (UObjectBase *)0x0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_98.Elements._48_4_ = 0xffffffff;
      pUVar12 = Z_Construct_UClass_UClass_NoRegister();
      local_278.Index = -1;
      local_278.Array = &GUObjectArray;
      local_278.CurrentObject = (FUObjectItem *)0x0;
      FUObjectArray::TIterator::Advance(&local_278);
      local_258 = RF_NoFlags;
      uStack_260 = pUVar12;
      EStack_254 = UE::GetAsyncLoadingInternalFlagsExclusion();
      EStack_254 = EStack_254 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
      if ((pUVar12 == (UClass *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Class",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                              ,0x70,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&(local_278.Array)->ObjObjectsCritical);
      do {
        pFVar8 = local_278.CurrentObject;
        pUVar23 = pUVar21;
        if (local_278.CurrentObject != (FUObjectItem *)0x0) {
          pUVar23 = ((local_278.CurrentObject)->field1_0x8).Object;
        }
        if (((local_258 & pUVar23->ObjectFlags) == RF_NoFlags) &&
           (pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar23->InternalIndex),
           (EStack_254 &
           (EInternalObjectFlags)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x20)) ==
           Borrowed)) {
          pUVar14 = Z_Construct_UClass_UObject_NoRegister();
          if (pUVar12 == pUVar14) break;
          pUVar14 = (pUVar23->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar17 = (int)pUVar12->_padding_;
          if ((iVar17 <= (int)pUVar14->_padding_) &&
             ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar17 * 8) ==
              &pUVar12->_padding_)) break;
        }
        bVar11 = FUObjectArray::TIterator::Advance(&local_278);
        pUVar12 = uStack_260;
        pFVar8 = local_278.CurrentObject;
      } while (bVar11);
joined_r0x00014e457eb0:
      if (pFVar8 != (FUObjectItem *)0x0) {
        pUVar23 = (pFVar8->field1_0x8).Object;
        if (pUVar23 == (UObjectBase *)0x0) {
LAB_14e457efe:
          local_248 = pUVar21;
        }
        else {
          pUVar14 = Z_Construct_UClass_UClass_NoRegister();
          pUVar12 = (pUVar23->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar17 = (int)pUVar14->_padding_;
          if (((int)pUVar12->_padding_ < iVar17) ||
             (local_248 = pUVar23,
             (longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar17 * 8) !=
             &pUVar14->_padding_)) goto LAB_14e457efe;
        }
        if (Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton == (UClass *)0x0) {
          local_214._4_8_ = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/InterchangeCore",L"InterchangeBaseNode",
                     &Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton,
                     UInterchangeBaseNode::StaticRegisterNativesUInterchangeBaseNode,0x60,8,
                     CLASS_Intrinsic,CASTCLASS_None,L"Engine",
                     InternalConstructor<UInterchangeBaseNode>,
                     InternalVTableHelperCtorCaller<UInterchangeBaseNode>,
                     (FUObjectCppClassStaticFunctions *)(local_214 + 4),UObject::StaticClass,
                     UObject::StaticClass);
          if (Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton != (UClass *)0x0)
          goto LAB_14e457f8c;
        }
        else {
LAB_14e457f8c:
          iVar17 = (int)(Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton)->_padding_;
          if ((*(int *)&local_248[1].ClassPrivate.ObjectPtr.field0_0x0 < iVar17) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)&local_248[1].ObjectFlags + (longlong)iVar17 * 8) !=
              &(Z_Registration_Info_UClass_UInterchangeBaseNode.InnerSingleton)->_padding_)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if (bVar11) {
            local_1c0 = UObjectBaseUtility::GetFullName
                                  ((UObjectBaseUtility *)local_248,&local_180,(UObject *)0x0,None);
            local_1b8 = &local_248;
            TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&&,UClass_*_const_&>_>
                      (&local_98,(TPairInitializer<FString_&&,UClass_*_const_&> *)local_214,
                       (bool *)&local_1c0);
            if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Data.AllocatorInstance.Data);
            }
          }
        }
LAB_14e458000:
        do {
          do {
            bVar11 = FUObjectArray::TIterator::Advance(&local_278);
            pFVar8 = local_278.CurrentObject;
            this = local_220;
            param_1 = (FArchive *)local_214._12_8_;
            if (!bVar11) goto joined_r0x00014e457eb0;
            pUVar23 = pUVar21;
            if (local_278.CurrentObject != (FUObjectItem *)0x0) {
              pUVar23 = ((local_278.CurrentObject)->field1_0x8).Object;
            }
          } while ((local_258 & pUVar23->ObjectFlags) != RF_NoFlags);
          pUVar12 = Z_Construct_UClass_UObject_NoRegister();
          if (uStack_260 != pUVar12) {
            pUVar12 = (pUVar23->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
            iVar17 = (int)uStack_260->_padding_;
            if (((int)pUVar12->_padding_ < iVar17) ||
               ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar17 * 8) !=
                &uStack_260->_padding_)) goto LAB_14e458000;
          }
          pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar23->InternalIndex);
          this = local_220;
          param_1 = (FArchive *)local_214._12_8_;
        } while ((EStack_254 &
                 (EInternalObjectFlags)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x20))
                 != Borrowed);
        goto joined_r0x00014e457eb0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_278.Array)->ObjObjectsCritical);
      if (0 < (int)local_298[0]) {
        local_240 = 0;
        pUVar23 = pUVar21;
        do {
          local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_290.Data.ArrayNum = 0;
          local_290.Data.ArrayMax = 0;
          ::operator<<(param_1,&local_290);
          pFVar15 = FCoreRedirectObjectName::FCoreRedirectObjectName(local_150,&local_290);
          FCoreRedirects::GetRedirectedName(&local_198,Type_Class,pFVar15,None);
          if ((local_198.ObjectName != (FName)0x0) ||
             (local_238 = 0, local_198.PackageName != (FName)0x0)) {
            pFVar18 = FCoreRedirectObjectName::ToString(&local_198,&local_170);
            if (&local_290 != pFVar18) {
              if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_290.Data.AllocatorInstance.Data);
              }
              local_290.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
              (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_290.Data.ArrayNum = (pFVar18->Data).ArrayNum;
              local_290.Data.ArrayMax = (pFVar18->Data).ArrayMax;
              (pFVar18->Data).ArrayNum = 0;
              (pFVar18->Data).ArrayMax = 0;
            }
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
          }
          iVar17 = local_290.Data.ArrayNum + -1;
          FVar7.Data = local_290.Data.AllocatorInstance.Data;
          if (local_290.Data.ArrayNum == 0) {
            iVar17 = 0;
            FVar7.Data = (FScriptContainerElement *)L"";
          }
          uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,(wchar_t *)FVar7.Data);
          iVar17 = TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>(&local_98,uVar22,&local_290);
          if (iVar17 == -1) {
            bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4124317512206646932>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
                                ,0x16c,"ClassPerName.Contains(ClassFullName)");
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_290.Data.AllocatorInstance.Data);
            }
            goto LAB_14e4582f4;
          }
          iVar17 = local_290.Data.ArrayNum + -1;
          FVar7.Data = local_290.Data.AllocatorInstance.Data;
          if (local_290.Data.ArrayNum == 0) {
            iVar17 = 0;
            FVar7.Data = (FScriptContainerElement *)L"";
          }
          uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,(wchar_t *)FVar7.Data);
          iVar17 = TSet<TTuple<FString,UClass_*>,TDefaultMapHashableKeyFuncs<FString,UClass_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>(&local_98,uVar22,&local_290);
          pUVar19 = pUVar21;
          if (((iVar17 == -1) ||
              (pUVar19 = (UObjectBase *)((longlong)iVar17 * 0x20 + local_98.Elements._0_8_),
              pUVar19 == (UObjectBase *)0x0)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pUVar12 = (pUVar19->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          local_230 = 0;
          local_228 = 0;
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar14 = UInterchangeBaseNode::StaticClass();
          CheckIsClassChildOf_Internal(pUVar14,pUVar12);
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_118,pUVar12);
          local_118._48_8_ = (FObjectInstancingGraph *)0x0;
          local_118._56_8_ = (UPackage *)0x0;
          local_118._16_4_ = 0;
          local_118._20_4_ = 0;
          local_118._24_4_ = RF_NoFlags;
          local_118._40_8_ = (UObject *)0x0;
          local_118[0x20] = false;
          local_118._8_8_ = this;
          pUVar16 = (UInterchangeBaseNode *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
          if (local_118._64_8_ != 0) {
            plVar25 = (longlong *)(local_118 + 0x50);
            if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
              plVar25 = (longlong *)local_118._104_8_;
            }
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
          (**(code **)(pUVar16->_padding_ + 200))(pUVar16,param_1);
          AddNode(this,&local_160,pUVar16);
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.Data.AllocatorInstance.Data);
          }
          uVar22 = (int)pUVar23 + 1;
          pUVar23 = (UObjectBase *)(ulonglong)uVar22;
        } while ((int)uVar22 < (int)local_298[0]);
      }
      ComputeChildrenCache(this);
LAB_14e4582f4:
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
  }
  else {
    iVar17 = *(int *)&(this->Nodes).field_0x28;
    local_278.CurrentObject = (FUObjectItem *)&(this->Nodes).field_0x10;
    local_278.Index = 0;
    local_278._12_4_ = 1;
    local_258 = 0;
    uStack_260._4_4_ = 0;
    if (iVar17 != 0) {
      puVar26 = *(uint **)&(this->Nodes).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)local_278.CurrentObject;
      }
      uVar22 = *puVar26;
      while (uVar22 == 0) {
        local_278.Index = local_278.Index + 1;
        local_258 = local_258 + 0x20;
        uStack_260._4_4_ = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < local_278.Index)
        goto LAB_14e457bac;
        uVar22 = puVar26[local_278.Index];
      }
      local_278._12_4_ = -uVar22 & uVar22;
      uVar2 = (ulonglong)(uint)local_278._12_4_ * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_218 = (int)lVar5;
      uStack_260._4_4_ = local_258 + -1 + local_218;
      if (iVar17 < uStack_260._4_4_) {
        uStack_260._4_4_ = iVar17;
      }
    }
LAB_14e457bac:
    uVar22 = *(uint *)&(this->Nodes).field_0x28;
    puVar1 = &(this->Nodes).field_0x10;
    EStack_254 = local_11c;
    iStack_250 = *(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34;
    uVar20 = uVar22 & 0xffffffe0;
    TStack_1f8._padding_ = CONCAT44(local_278._12_4_,local_278.Index);
    uStack_260._0_4_ = 0xffffffff;
    iVar17 = (int)uVar22 >> 5;
    TStack_1f8._28_4_ = local_11c;
    TStack_1f8.BaseBitIndex = local_258;
    uStack_1d8 = CONCAT44(uStack_24c,iStack_250);
    TStack_1f8.UnvisitedBitMask = 0xffffffff;
    TStack_1f8.CurrentBitIndex = uStack_260._4_4_;
    local_278.Array = (FUObjectArray *)this_00;
    local_200 = this_00;
    TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_278.CurrentObject;
    if ((((int)uVar22 < 0) || (*(int *)&(this->Nodes).field_0x28 < (int)uVar22)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar3 = *(uint *)&(this->Nodes).field_0x28;
    if (uVar22 != uVar3) {
      puVar4 = *(undefined1 **)&(this->Nodes).field_0x20;
      puVar24 = puVar1;
      if (puVar4 != (undefined1 *)0x0) {
        puVar24 = puVar4;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar17 * 4);
      while (uVar22 == 0) {
        iVar17 = iVar17 + 1;
        uVar20 = uVar20 + 0x20;
        uVar22 = uVar3;
        if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar17)
        goto LAB_14e457cb0;
        uVar22 = *(uint *)(puVar24 + (longlong)iVar17 * 4);
      }
      uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uVar22 = (uVar20 - 1) + (int)lVar5;
      if ((int)uVar3 < (int)uVar22) {
        uVar22 = uVar3;
      }
    }
LAB_14e457cb0:
    while( true ) {
      pTVar9 = local_200;
      if (*(int *)&local_200->field_0x8 - *(int *)(&local_200->field_0x30 + 4) != (int)uStack_1d8) {
        `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_280);
      }
      if (((TStack_1f8.CurrentBitIndex == uVar22) &&
          (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == this_00)) break;
      pFVar18 = (FString *)(*(longlong *)pTVar9 + (longlong)TStack_1f8.CurrentBitIndex * 0x20);
      ::FString::FString(&local_1b0,pFVar18);
      local_1a0 = (UObject *)pFVar18[1].Data.AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_1a0);
      }
      pUVar10 = local_1a0;
      UObjectBaseUtility::GetFullName
                (*(UObjectBaseUtility **)&local_1a0->field_0x10,&local_1d0,(UObject *)0x0,None);
      ::operator<<(param_1,&local_1d0);
      (**(code **)(*(longlong *)pUVar10 + 200))(pUVar10,param_1);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
    }
  }
  return;
}

// SetChildrenCache @ 14e45afe0

void __thiscall
UInterchangeBaseNodeContainer::SetChildrenCache
          (UInterchangeBaseNodeContainer *this,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_1)

{
  if (CpuChannel->Enabled < 0) {
    TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&this->ChildrenCache);
    TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
    ::Append<FDefaultSetAllocator>(&this->ChildrenCache,param_1);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId431,"UInterchangeBaseNodeContainer::SetChildrenCache",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
             ,0x1af);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId431);
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->ChildrenCache);
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  ::Append<FDefaultSetAllocator>(&this->ChildrenCache,param_1);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// SetNamespace @ 14e45e130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeBaseNodeContainer::SetNamespace
          (UInterchangeBaseNodeContainer *this,FString *param_1,UClass *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar4;
  ForAnyElementType _Str1;
  UInterchangeBaseNodeContainer *this_01;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  byte bVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  ForElementType<unsigned_int> FVar19;
  uint *puVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  UInterchangeBaseNode *pUVar23;
  undefined8 uVar24;
  undefined1 auStack_308 [32];
  char local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6;
  undefined1 local_2e5;
  undefined1 local_2e4 [4];
  uint local_2e0;
  undefined1 local_2dc [4];
  undefined8 local_2d8;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_2d0;
  uint uStack_2c8;
  uint uStack_2c4;
  TBitArray<FDefaultBitArrayAllocator> *local_2c0;
  undefined4 uStack_2b8;
  uint uStack_2b4;
  uint local_2b0;
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined4 uStack_2a4;
  ForElementType<unsigned_int> local_2a0;
  FScriptContainerElement *local_298;
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_290;
  UInterchangeBaseNode *local_280;
  FString local_278;
  UInterchangeBaseNodeContainer *local_268;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_1d8;
  FScriptContainerElement *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110 [2];
  undefined4 local_e4;
  undefined4 local_c4;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_268 = this;
  if (CpuChannel->Enabled < 0) {
    local_2e8 = '\0';
  }
  else {
    local_2e8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId68,"UInterchangeBaseNodeContainer::SetNamespace",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x44);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId68);
  }
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)local_98,*(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34);
  local_260 = &this->Nodes;
  local_210._padding_._0_4_ = 0;
  local_210.CurrentBitIndex = 0;
  local_210.BaseBitIndex = 0;
  local_2d8 = 1;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Nodes).field_0x10;
  local_210._padding_._4_4_ = 1;
  local_210.UnvisitedBitMask = 0xffffffff;
  local_298 = (FScriptContainerElement *)local_260;
  local_210.Array = pTVar18;
  if (*(int *)&(this->Nodes).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
  }
  TStack_258._padding_ = CONCAT44(local_210._padding_._4_4_,(undefined4)local_210._padding_);
  local_238 = CONCAT44(local_238._4_4_,
                       *(int *)&(this->Nodes).field_0x8 - *(int *)&(this->Nodes).field_0x34);
  TStack_258.CurrentBitIndex = local_210.CurrentBitIndex;
  TStack_258.UnvisitedBitMask = local_210.UnvisitedBitMask;
  TStack_258._28_4_ = local_210._28_4_;
  TStack_258.BaseBitIndex = local_210.BaseBitIndex;
  uVar17 = *(uint *)&(this->Nodes).field_0x28;
  local_230._padding_._0_4_ = (int)uVar17 >> 5;
  bVar11 = (byte)uVar17 & 0x1f;
  TStack_258.Array = local_210.Array;
  local_230._padding_._4_4_ = 1 << bVar11;
  local_230.UnvisitedBitMask = -1 << bVar11;
  local_230.BaseBitIndex = uVar17 & 0xffffffe0;
  TStack_1c8.Array = local_210.Array;
  uStack_1a8 = local_238;
  local_230.Array = pTVar18;
  local_230.CurrentBitIndex = uVar17;
  local_1d0 = (FScriptContainerElement *)local_260;
  TStack_1c8._padding_ = TStack_258._padding_;
  TStack_1c8._16_8_ = TStack_258._16_8_;
  TStack_1c8._24_8_ = TStack_258._24_8_;
  if (((int)uVar17 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar15 = local_298;
  if (uVar17 != *(uint *)&(this->Nodes).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
    pFVar15 = local_298;
    uVar17 = local_230.CurrentBitIndex;
    pTVar18 = local_230.Array;
  }
  while( true ) {
    pFVar6 = local_1d0;
    if (*(int *)(local_1d0 + 8) - *(int *)(local_1d0 + 0x34) != (int)uStack_1a8) {
      local_2e7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2e7);
    }
    uVar24 = local_2d8;
    if (((TStack_1c8.CurrentBitIndex == uVar17) && (TStack_1c8.Array == pTVar18)) &&
       (pFVar6 == pFVar15)) break;
    pUVar23 = *(UInterchangeBaseNode **)
               ((longlong)TStack_1c8.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pFVar6);
    if (param_2 == (UClass *)0x0) {
LAB_14e45e375:
      UInterchangeBaseNode::GetUniqueID(pUVar23,&local_140);
      UInterchangeBaseNode::SetNamespace(pUVar23,param_1);
      pFVar10 = UInterchangeBaseNode::GetUniqueID(pUVar23,&local_130);
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString_const_&,FString>
                ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)local_98,&local_140,pFVar10);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar14 = (int)param_2->_padding_;
      if ((iVar14 <= *(int *)(pUVar23->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
          &param_2->_padding_)) goto LAB_14e45e375;
    }
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  }
  uStack_2c8 = 0;
  uVar17 = *(uint *)&(local_268->Nodes).field_0x28;
  local_2c0 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_268->Nodes).field_0x10;
  uStack_2c4 = (uint)local_2d8;
  local_2d0 = &local_268->Nodes;
  uStack_2b4 = uStack_2c8;
  local_2b0 = uStack_2c8;
  if (uVar17 != 0) {
    puVar20 = *(uint **)&(local_268->Nodes).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_2c0;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar12 = (longlong)(int)uStack_2c8;
      local_2b0 = local_2b0 + 0x20;
      uStack_2c8 = uStack_2c8 + 1;
      uStack_2b4 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2c8)
      goto LAB_14e45e480;
      uVar16 = puVar20[lVar12 + 1];
    }
    uStack_2c4 = ~(uVar16 - 1) & uVar16;
    uVar2 = (ulonglong)uStack_2c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1f0 = (int)lVar12;
    uStack_2b4 = local_1f0 + -1 + local_2b0;
    if ((int)uVar17 < (int)uStack_2b4) {
      uStack_2b4 = uVar17;
    }
  }
LAB_14e45e480:
  local_2a0 = (ForElementType<unsigned_int>)&(local_268->Nodes).field_0x10;
  uStack_2ac = local_e4;
  iStack_2a8 = *(int *)&(local_268->Nodes).field_0x8 - *(int *)&(local_268->Nodes).field_0x34;
  uVar16 = *(uint *)&(local_268->Nodes).field_0x28;
  TStack_168._padding_ = CONCAT44(uStack_2c4,uStack_2c8);
  uVar22 = uVar16 & 0xffffffe0;
  uStack_2b8 = 0xffffffff;
  TStack_168.CurrentBitIndex = uStack_2b4;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  TStack_168._28_4_ = local_e4;
  TStack_168.BaseBitIndex = local_2b0;
  uStack_148 = CONCAT44(uStack_2a4,iStack_2a8);
  iVar14 = (int)uVar16 >> 5;
  local_2e0 = uVar16;
  local_1d8 = local_2d0;
  local_170 = local_2d0;
  TStack_168.Array = local_2c0;
  if ((((int)uVar16 < 0) || ((int)uVar17 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar17 = *(int *)((longlong)local_2a0 + 0x18);
  if (uVar16 != uVar17) {
    FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_2a0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_2a0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_2a0;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar22 = uVar22 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar17;
      local_2e0 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14e45e5c0;
      uVar16 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar12 * 4);
    }
    uVar2 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1ec = (int)lVar12;
    uVar16 = local_1ec + -1 + uVar22;
    local_2e0 = uVar16;
    if ((int)uVar17 < (int)uVar16) {
      uVar16 = uVar17;
      local_2e0 = uVar17;
    }
  }
LAB_14e45e5c0:
  pTVar5 = local_170;
  if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
    local_2e6 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2e6);
  }
  uVar17 = local_70;
  if (((TStack_168.CurrentBitIndex != uVar16) ||
      ((ForElementType<unsigned_int>)TStack_168.Array != local_2a0)) || (pTVar5 != local_1d8)) {
    pUVar23 = *(UInterchangeBaseNode **)
               ((longlong)TStack_168.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar5);
    local_280 = pUVar23;
    UInterchangeBaseNode::GetUniqueID(pUVar23,&local_120);
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    if (((pUVar23->Attributes).Object == (FAttributeStorage *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (pUVar23->Attributes).Object;
    lpCriticalSection = &this_00->StorageMutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
                *)this_00,&local_290);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar14 = local_290.ArrayNum;
    pFVar15 = local_290.AllocatorInstance.Data + (longlong)local_290.ArrayNum * 0x10;
    FVar21.Data = local_290.AllocatorInstance.Data;
    local_298 = pFVar15;
LAB_14e45e6b0:
    if (local_290.ArrayNum != iVar14) {
      local_2e5 = 0;
      `TCheckedPointerIterator<UE::Interchange::FAttributeKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_2e5);
    }
    if (FVar21.Data == pFVar15) goto LAB_14e45ea09;
    iVar8 = (**(code **)(pUVar23->_padding_ + 0x2c8))(pUVar23,FVar21.Data);
    if (iVar8 == 0x12) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::AttributeKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::AttributeKey.Key.Data.ArrayNum = 0;
        ::AttributeKey.Key.Data.ArrayMax = 0;
        ::FString::operator=(&::AttributeKey.Key,L"__UNQ_ID_");
        atexit(`UE::Interchange::FBaseNodeStaticData::UniqueIDKey'::__l2::
               _dynamic_atexit_destructor_for__AttributeKey__);
        _Init_thread_footer(&::_TSS0);
      }
      iVar8 = *(int *)(FVar21.Data + 8);
      if (iVar8 == ::AttributeKey.Key.Data.ArrayNum) {
        if (iVar8 < 2) goto LAB_14e45ea00;
        iVar8 = wcscmp(*(wchar_t **)FVar21.Data,
                       (wchar_t *)::AttributeKey.Key.Data.AllocatorInstance.Data);
        bVar7 = iVar8 == 0;
      }
      else {
        bVar7 = iVar8 + ::AttributeKey.Key.Data.ArrayNum == 1;
      }
      if (!bVar7) {
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_278.Data.ArrayNum = 0;
        local_278.Data.ArrayMax = 0;
        bVar7 = UInterchangeBaseNode::GetStringAttribute(pUVar23,(FString *)FVar21.Data,&local_278);
        uVar17 = local_70;
        if (bVar7) {
          uStack_2c4 = (uint)uVar24;
          uStack_2c8 = 0;
          uStack_2b4 = uStack_2c8;
          local_2b0 = uStack_2c8;
          if (local_70 != 0) {
            puVar20 = (uint *)(local_98 + 0x10);
            if (local_78 != (uint *)0x0) {
              puVar20 = local_78;
            }
            uVar16 = *puVar20;
            local_2b0 = 0;
            uStack_2c8 = 0;
            while (uVar16 == 0) {
              lVar12 = (longlong)(int)uStack_2c8;
              local_2b0 = local_2b0 + 0x20;
              uStack_2c8 = uStack_2c8 + 1;
              uStack_2b4 = local_70;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)uStack_2c8) goto LAB_14e45e800;
              uVar16 = puVar20[lVar12 + 1];
            }
            uStack_2c4 = -uVar16 & uVar16;
            uVar2 = (ulonglong)uStack_2c4 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_1e8 = (int)lVar12;
            uStack_2b4 = (local_2b0 - 1) + local_1e8;
            if ((int)local_70 < (int)uStack_2b4) {
              uStack_2b4 = local_70;
            }
          }
LAB_14e45e800:
          local_2d0 = (TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
                       *)local_98;
          uStack_2ac = local_c4;
          uVar16 = local_70 & 0xffffffe0;
          iStack_2a8 = local_98._8_4_ - local_64;
          local_2c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          uStack_2b8 = 0xffffffff;
          TStack_198.CurrentBitIndex = uStack_2b4;
          TStack_198.UnvisitedBitMask = 0xffffffff;
          TStack_198._padding_ = CONCAT44(uStack_2c4,uStack_2c8);
          iVar8 = (int)local_70 >> 5;
          TStack_198._28_4_ = local_c4;
          TStack_198.BaseBitIndex = local_2b0;
          uStack_178 = CONCAT44(uStack_2a4,iStack_2a8);
          bVar11 = (byte)local_70;
          local_1a0 = local_2d0;
          TStack_198.Array = local_2c0;
          if (((int)local_70 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Str1.Data = local_278.Data.AllocatorInstance.Data;
          if (uVar17 != local_70) {
            puVar20 = (uint *)(local_98 + 0x10);
            if (local_78 != (uint *)0x0) {
              puVar20 = local_78;
            }
            uVar17 = -1 << (bVar11 & 0x1f) & puVar20[iVar8];
            while (uVar17 == 0) {
              lVar12 = (longlong)iVar8;
              uVar16 = uVar16 + 0x20;
              iVar8 = iVar8 + 1;
              uVar17 = local_70;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
              goto LAB_14e45e923;
              uVar17 = puVar20[lVar12 + 1];
            }
            uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_1e4 = (int)lVar12;
            uVar17 = local_1e4 + -1 + uVar16;
            if ((int)local_70 < (int)uVar17) {
              uVar17 = local_70;
            }
          }
LAB_14e45e923:
          iVar8 = local_278.Data.ArrayNum;
          do {
            pTVar5 = local_1a0;
            if (*(int *)&local_1a0->field_0x8 - *(int *)&local_1a0->field_0x34 != (int)uStack_178) {
              local_2e4[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2e4);
            }
            if (((TStack_198.CurrentBitIndex == uVar17) &&
                (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
               (pTVar5 == (TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
                           *)local_98)) goto LAB_14e45e9df;
            lVar12 = *(longlong *)pTVar5;
            puVar1 = (undefined8 *)(lVar12 + (longlong)TStack_198.CurrentBitIndex * 0x28);
            iVar9 = *(int *)(lVar12 + 8 + (longlong)TStack_198.CurrentBitIndex * 0x28);
            if (iVar8 == iVar9) {
              if (iVar8 < 2) goto LAB_14e45e9cf;
              iVar9 = wcscmp((wchar_t *)_Str1.Data,(wchar_t *)*puVar1);
              bVar7 = iVar9 == 0;
            }
            else {
              bVar7 = iVar9 + iVar8 == 1;
            }
            if (bVar7) goto LAB_14e45e9cf;
            TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
          } while( true );
        }
        if (local_278.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_14e45ea00;
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
        FVar21.Data = FVar21.Data + 0x10;
        goto LAB_14e45e6b0;
      }
    }
    goto LAB_14e45ea00;
  }
  uStack_2c8 = 0;
  local_2b0 = 0;
  uStack_2b4 = 0;
  if (local_70 == 0) goto LAB_14e45eae2;
  puVar20 = (uint *)(local_98 + 0x10);
  if (local_78 != (uint *)0x0) {
    puVar20 = local_78;
  }
  uStack_2c4 = *puVar20;
joined_r0x00014e45ea9c:
  if (uStack_2c4 != 0) goto LAB_14e45eab8;
  lVar12 = (longlong)(int)uStack_2c8;
  local_2b0 = local_2b0 + 0x20;
  uStack_2c8 = uStack_2c8 + 1;
  uStack_2b4 = local_70;
  if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2c8)
  goto LAB_14e45eae2;
  uStack_2c4 = puVar20[lVar12 + 1];
  goto joined_r0x00014e45ea9c;
LAB_14e45eae2:
  uStack_2c4 = (uint)local_2d8;
  goto LAB_14e45eae7;
LAB_14e45eab8:
  uStack_2c4 = -uStack_2c4 & uStack_2c4;
  uVar2 = (ulonglong)uStack_2c4 * 2 + 1;
  lVar12 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  local_1e0 = (int)lVar12;
  uStack_2b4 = local_2b0 + -1 + local_1e0;
  if ((int)local_70 < (int)uStack_2b4) {
    uStack_2b4 = local_70;
  }
LAB_14e45eae7:
  local_2d0 = (TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
               *)local_98;
  uStack_2ac = local_a4;
  local_2c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar16 = local_70 & 0xffffffe0;
  iStack_2a8 = local_98._8_4_ - local_64;
  uStack_2b8 = 0xffffffff;
  TStack_258.CurrentBitIndex = uStack_2b4;
  TStack_258.UnvisitedBitMask = 0xffffffff;
  TStack_258._padding_ = CONCAT44(uStack_2c4,uStack_2c8);
  iVar14 = (int)local_70 >> 5;
  TStack_258._28_4_ = local_a4;
  TStack_258.BaseBitIndex = local_2b0;
  local_238 = CONCAT44(uStack_2a4,iStack_2a8);
  bVar11 = (byte)local_70;
  local_260 = local_2d0;
  TStack_258.Array = local_2c0;
  if (((int)local_70 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_01 = local_268;
  if (uVar17 != local_70) {
    puVar20 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar20 = local_78;
    }
    uVar17 = -1 << (bVar11 & 0x1f) & puVar20[iVar14];
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14e45ec03;
      uVar17 = puVar20[lVar12 + 1];
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = (uVar16 - 1) + (int)lVar12;
    if ((int)local_70 < (int)uVar17) {
      uVar17 = local_70;
    }
  }
LAB_14e45ec03:
  do {
    pTVar5 = local_260;
    if ((int)*(longlong *)((longlong)local_260 + 8) - *(int *)((longlong)local_260 + 0x34) !=
        (int)local_238) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2dc);
    }
    cVar4 = local_2e8;
    if (((TStack_258.CurrentBitIndex == uVar17) &&
        (TStack_258.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (pTVar5 == (TMap<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
                   *)local_98)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (cVar4 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    lVar12 = *(longlong *)pTVar5;
    pFVar10 = (FString *)(lVar12 + (longlong)TStack_258.CurrentBitIndex * 0x28);
    iVar14 = *(int *)(lVar12 + 8 + (longlong)TStack_258.CurrentBitIndex * 0x28);
    if ((iVar14 != 0) && (iVar14 != 1)) {
      uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>
                         (iVar14 + -1,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
      iVar14 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                           *)&this_01->Nodes,uVar16,pFVar10);
      if ((iVar14 != -1) &&
         (lVar12 = (longlong)iVar14 * 0x20 + *(longlong *)&this_01->Nodes, lVar12 != 0)) {
        pUVar23 = *(UInterchangeBaseNode **)(lVar12 + 0x10);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar23 != (UInterchangeBaseNode *)0x0) goto LAB_14e45ecc3;
        }
        else if (pUVar23 != (UInterchangeBaseNode *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar23);
LAB_14e45ecc3:
          if (*(int *)&(this_01->Nodes).field_0x8 != *(int *)&(this_01->Nodes).field_0x34) {
            iVar8 = (pFVar10->Data).ArrayNum;
            iVar14 = iVar8 + -1;
            if (iVar8 == 0) {
              pwVar13 = L"";
              iVar14 = 0;
            }
            else {
              pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar13);
            TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&this_01->Nodes,uVar16,pFVar10);
          }
          AddNode(this_01,local_110,pUVar23);
          if (local_110[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110[0].Data.AllocatorInstance.Data);
          }
        }
      }
    }
    TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
  } while( true );
LAB_14e45ea09:
  DestructItems<UE::Interchange::FAttributeKey,int>
            ((FAttributeKey *)local_290.AllocatorInstance.Data,local_290.ArrayNum);
  if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  uVar16 = local_2e0;
  goto LAB_14e45e5c0;
LAB_14e45e9cf:
  UInterchangeBaseNode::AddStringAttribute(local_280,(FString *)FVar21.Data,(FString *)(puVar1 + 2))
  ;
LAB_14e45e9df:
  pFVar15 = local_298;
  pUVar23 = local_280;
  uVar24 = local_2d8;
  if (_Str1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Str1.Data);
    pFVar15 = local_298;
    pUVar23 = local_280;
    uVar24 = local_2d8;
  }
LAB_14e45ea00:
  FVar21.Data = FVar21.Data + 0x10;
  goto LAB_14e45e6b0;
}

// SetNodeDesiredChildIndex @ 14e45ee00

bool __thiscall
UInterchangeBaseNodeContainer::SetNodeDesiredChildIndex
          (UInterchangeBaseNodeContainer *this,FString *param_1,int *param_2)

{
  int iVar1;
  UInterchangeBaseNode *this_00;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FAttributeKey *pFVar8;
  EAttributeStorageResult EVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  bool bVar13;
  FString local_48;
  TAttributeHandle<int,void> local_38;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId251,
               "UInterchangeBaseNodeContainer::SetNodeDesiredChildIndex",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xfb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId251);
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar11 = L"";
    iVar7 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
  iVar7 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                      *)&this->Nodes,uVar6,param_1);
  if ((iVar7 == -1) || (lVar12 = (longlong)iVar7 * 0x20 + *(longlong *)&this->Nodes, lVar12 == 0)) {
LAB_14e45f004:
    bVar4 = false;
  }
  else {
    this_00 = *(UInterchangeBaseNode **)(lVar12 + 0x10);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UInterchangeBaseNode *)0x0) goto LAB_14e45f004;
    }
    else {
      if (this_00 == (UInterchangeBaseNode *)0x0) goto LAB_14e45f004;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    iVar7 = UInterchangeBaseNode::GetDesiredChildIndex(this_00);
    if (iVar7 != *param_2) {
      if (((this_00->Attributes).Object == (FAttributeStorage *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this_00->Attributes).Object;
      pFVar8 = UE::Interchange::FBaseNodeStaticData::DesiredChildIndexKey();
      EVar9 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                        (pFVar2,pFVar8,param_2,None);
      if ((EVar9 & Operation_Success) != None) {
        if (((this_00->Attributes).Object == (FAttributeStorage *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (this_00->Attributes).Object;
        pFVar8 = UE::Interchange::FBaseNodeStaticData::DesiredChildIndexKey();
        UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_38,pFVar8,pFVar2);
        if ((local_38.AttributeStorage != (FAttributeStorage *)0x0) &&
           (bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                              (local_38.AttributeStorage,&local_38.Key), bVar4)) {
          UE::Interchange::FAttributeStorage::GetAttributeType
                    (local_38.AttributeStorage,&local_38.Key);
        }
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
        }
      }
      UInterchangeBaseNode::GetParentUid(this_00,&local_48);
      if ((1 < (uint)local_48.Data.ArrayNum) &&
         (pTVar10 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                    ::Find((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->ChildrenCache,&local_48),
         pTVar10 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
        InternalReorderChildren(this,pTVar10);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = true;
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// SetNodeParentUid @ 14e45f040

bool __thiscall
UInterchangeBaseNodeContainer::SetNodeParentUid
          (UInterchangeBaseNodeContainer *this,FString *param_1,FString *param_2)

{
  int iVar1;
  UInterchangeBaseNode *this_00;
  FScriptContainerElement *pFVar2;
  FAttributeStorage *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FString *pFVar11;
  FAttributeKey *pFVar12;
  EAttributeStorageResult EVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar17;
  bool bVar18;
  <lambda_1> local_res8;
  FString local_58;
  TAttributeHandle<FString,void> local_48;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId203,"UInterchangeBaseNodeContainer::SetNodeParentUid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xcb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId203);
  }
  uVar10 = (param_2->Data).ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  pwVar16 = L"";
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar14 = L"";
    iVar9 = 0;
  }
  else {
    pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
  iVar9 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                      *)&this->Nodes,uVar8,param_1);
  if ((iVar9 != -1) && (lVar15 = (longlong)iVar9 * 0x20 + *(longlong *)&this->Nodes, lVar15 != 0)) {
    this_00 = *(UInterchangeBaseNode **)(lVar15 + 0x10);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 != (UInterchangeBaseNode *)0x0) goto LAB_14e45f14f;
    }
    else if (this_00 != (UInterchangeBaseNode *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14e45f14f:
      if (1 < uVar10) {
        iVar1 = (param_2->Data).ArrayNum;
        iVar9 = iVar1 + -1;
        if (iVar1 == 0) {
          pwVar14 = L"";
          iVar9 = 0;
        }
        else {
          pwVar14 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
        iVar9 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                            *)&this->Nodes,uVar8,param_2);
        if (iVar9 == -1) goto LAB_14e45f43a;
      }
      UInterchangeBaseNode::GetParentUid(this_00,&local_58);
      if (1 < (uint)local_58.Data.ArrayNum) {
        iVar9 = local_58.Data.ArrayNum - 1;
        FVar5.Data = local_58.Data.AllocatorInstance.Data;
        if (local_58.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar5.Data);
        iVar9 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->ChildrenCache,uVar8,&local_58);
        if (iVar9 != -1) {
          lVar15 = *(longlong *)&this->ChildrenCache + (longlong)iVar9 * 0x28;
          pTVar17 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar15 + 0x10);
          if (lVar15 == 0) {
            pTVar17 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (pTVar17 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
            pFVar2 = (pTVar17->AllocatorInstance).Data;
            if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)pTVar17->ArrayMax * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            local_res8.Item = param_1;
            TArray<FString,TSizedDefaultAllocator<32>_>::
            RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                      (pTVar17,&local_res8);
          }
        }
      }
      if (uVar10 < 2) {
        pFVar11 = &UE::Interchange::FBaseNodeStaticData::ParentIDKey()->Key;
        UInterchangeBaseNode::RemoveAttribute(this_00,pFVar11);
      }
      else {
        if (((this_00->Attributes).Object == (FAttributeStorage *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar3 = (this_00->Attributes).Object;
        pFVar12 = UE::Interchange::FBaseNodeStaticData::ParentIDKey();
        EVar13 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                           (pFVar3,pFVar12,param_2,None);
        if ((EVar13 & Operation_Success) != None) {
          if (((this_00->Attributes).Object == (FAttributeStorage *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pFVar3 = (this_00->Attributes).Object;
          pFVar12 = UE::Interchange::FBaseNodeStaticData::ParentIDKey();
          UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::
          TAttributeHandle<FString,void>(&local_48,pFVar12,pFVar3);
          if ((local_48.AttributeStorage != (FAttributeStorage *)0x0) &&
             (bVar6 = UE::Interchange::FAttributeStorage::ContainAttribute
                                (local_48.AttributeStorage,&local_48.Key), bVar6)) {
            UE::Interchange::FAttributeStorage::GetAttributeType
                      (local_48.AttributeStorage,&local_48.Key);
          }
          if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
          }
        }
        iVar1 = (param_2->Data).ArrayNum;
        iVar9 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar9 = 0;
        }
        else {
          pwVar16 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar16);
        pTVar17 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FString_const_&>
                            ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->ChildrenCache,uVar10,param_2);
        pFVar2 = (pTVar17->AllocatorInstance).Data;
        if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)pTVar17->ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = pTVar17->ArrayNum;
        if (iVar9 == pTVar17->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
        }
        pTVar17->ArrayNum = iVar9 + 1;
        ::FString::FString((FString *)((pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                           param_1);
      }
      bVar6 = true;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      goto LAB_14e45f43c;
    }
  }
LAB_14e45f43a:
  bVar6 = false;
LAB_14e45f43c:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// SetupAndReplaceFactoryNode @ 14e45faa0

void __thiscall
UInterchangeBaseNodeContainer::SetupAndReplaceFactoryNode
          (UInterchangeBaseNodeContainer *this,UInterchangeFactoryBaseNode *param_1,FString *param_2
          ,FString *param_3,EInterchangeNodeContainerType param_4,FString *param_5,FString *param_6)

{
  int iVar1;
  int iVar2;
  
  UInterchangeBaseNode::InitializeNode((UInterchangeBaseNode *)param_1,param_2,param_3,param_4);
  ReplaceNode(this,param_5,param_1);
  iVar1 = (param_6->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    SetNodeParentUid(this,param_2,param_6);
  }
  return;
}

// SetupNode @ 14e45fb20

void __thiscall
UInterchangeBaseNodeContainer::SetupNode
          (UInterchangeBaseNodeContainer *this,UInterchangeBaseNode *param_1,FString *param_2,
          FString *param_3,EInterchangeNodeContainerType param_4,FString *param_5)

{
  int iVar1;
  int iVar2;
  FString local_18;
  
  UInterchangeBaseNode::InitializeNode(param_1,param_2,param_3,param_4);
  AddNode(this,&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = (param_5->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    SetNodeParentUid(this,param_2,param_5);
  }
  return;
}

// StaticRegisterNativesUInterchangeBaseNodeContainer @ 14e45feb0

void __cdecl UInterchangeBaseNodeContainer::StaticRegisterNativesUInterchangeBaseNodeContainer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x15;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddNode @ 14e4694b0

void __cdecl
UInterchangeBaseNodeContainer::execAddNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UInterchangeBaseNode> *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  TPairInitializer<FString_const_&,TObjectPtr<UInterchangeBaseNode>_&&> local_res10;
  UInterchangeBaseNode *local_res20;
  FString local_68;
  FString *local_58;
  UInterchangeBaseNode **local_50;
  undefined1 local_48 [16];
  
  pFVar6 = (FScriptContainerElement *)0x0;
  local_res10.Value = (TObjectPtr<UInterchangeBaseNode> *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10.Value,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10.Value);
  }
  this = local_res10.Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId25,"UInterchangeBaseNodeContainer::AddNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x19);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId25);
  }
  iVar3 = 0;
  FVar5.Data = pFVar6;
  if ((UInterchangeBaseNode *)this != (UInterchangeBaseNode *)0x0) {
    UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this,&local_68);
    if ((local_68.Data.ArrayNum != 0) && (local_68.Data.ArrayNum != 1)) {
      iVar4 = local_68.Data.ArrayNum + -1;
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.ArrayNum == 0) {
        iVar4 = iVar3;
        FVar5.Data = (FScriptContainerElement *)L"";
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar5.Data);
      iVar3 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                          *)(param_1 + 1),uVar2,&local_68);
      if (iVar3 == -1) {
        local_res20 = (UInterchangeBaseNode *)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_58 = &local_68;
        local_50 = &local_res20;
        TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UInterchangeBaseNode>_&&>_>
                  ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                    *)(param_1 + 1),&local_res10,(bool *)&local_58);
      }
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
      iVar3 = local_68.Data.ArrayNum;
      iVar4 = local_68.Data.ArrayMax;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_14e469659;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  iVar4 = iVar3;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14e469659:
  if (param_3 != local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar5.Data;
    *(int *)((longlong)param_3 + 8) = iVar3;
    *(int *)((longlong)param_3 + 0xc) = iVar4;
    FVar5.Data = pFVar6;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// execClearNodeParentUid @ 14e469b90

void __cdecl
UInterchangeBaseNodeContainer::execClearNodeParentUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetNodeParentUid((UInterchangeBaseNodeContainer *)param_1,&local_28,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execComputeChildrenCache @ 14e469c70

void __cdecl
UInterchangeBaseNodeContainer::execComputeChildrenCache
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ComputeChildrenCache((UInterchangeBaseNodeContainer *)param_1);
  return;
}

// execGetFactoryNode @ 14e46c950

void __cdecl
UInterchangeBaseNodeContainer::execGetFactoryNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  UClass *pUVar7;
  FObjectPtr_u_0 FVar8;
  bool bVar10;
  FObjectPtr_u_0 local_res10;
  FString local_18;
  FObjectPtr_u_0 FVar9;
  
  FVar9.Handle = (UObject *)0x0;
  FVar8.Handle = (UObject *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId192,"UInterchangeBaseNodeContainer::GetFactoryNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xc0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId192);
  }
  if ((local_18.Data.ArrayNum != 0) && (local_18.Data.ArrayNum != 1)) {
    iVar5 = local_18.Data.ArrayNum + -1;
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
    iVar5 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)(param_1 + 1),uVar4,&local_18);
    if ((iVar5 != -1) &&
       (lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 1), FVar9.Handle = FVar8.Handle,
       lVar6 != 0)) {
      local_res10 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(lVar6 + 0x10))->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_res10.Handle == (UObject *)0x0) goto LAB_14e46ca9a;
        UE::GC::MarkAsReachable(local_res10.Handle);
      }
      if (local_res10.Handle != (UObject *)0x0) {
        pUVar7 = UInterchangeFactoryBaseNode::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar7);
        if (bVar3) {
          FVar9 = local_res10;
        }
      }
    }
  }
LAB_14e46ca9a:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(FObjectPtr_u_0 *)param_3 = FVar9;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetIsAncestor @ 14e46d3c0

void __cdecl
UInterchangeBaseNodeContainer::execGetIsAncestor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetIsAncestor((UInterchangeBaseNodeContainer *)param_1,&local_18,&local_28);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetNode @ 14e46d820

void __cdecl
UInterchangeBaseNodeContainer::execGetNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  UObject *pUVar6;
  bool bVar7;
  FString local_18;
  
  pUVar6 = (UObject *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"UInterchangeBaseNodeContainer::GetNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if ((local_18.Data.ArrayNum != 0) && (local_18.Data.ArrayNum != 1)) {
    iVar4 = local_18.Data.ArrayNum + -1;
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
    iVar4 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)(param_1 + 1),uVar3,&local_18);
    if ((((iVar4 != -1) &&
         (lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 1), pUVar6 = (UObject *)0x0,
         lVar5 != 0)) &&
        (pUVar6 = *(UObject **)(lVar5 + 0x10), UE::GC::GIsIncrementalReachabilityPending != false))
       && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(UObject **)param_3 = pUVar6;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetNodeChildren @ 14e46d980

void __cdecl
UInterchangeBaseNodeContainer::execGetNodeChildren(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeBaseNode *pUVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetNodeChildrenInternal
                     ((UInterchangeBaseNodeContainer *)param_1,&local_18,local_res10[0]);
  *(UInterchangeBaseNode **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetNodeChildrenCount @ 14e46da80

void __cdecl
UInterchangeBaseNodeContainer::execGetNodeChildrenCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  FProperty *pFVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  FString local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar3.Data);
  iVar5 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)(param_1 + 3),uVar4,&local_28);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)(param_1 + 3) + (longlong)iVar5 * 0x28;
    lVar6 = lVar1 + 0x10;
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      local_18.ArrayNum = *(int *)(lVar6 + 8);
      goto LAB_14e46db7f;
    }
  }
  GetNodeChildrenUids((UInterchangeBaseNodeContainer *)param_1,&local_18,&local_28);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
LAB_14e46db7f:
  *(int *)param_3 = local_18.ArrayNum;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetNodeChildrenUids @ 14e46dbb0

void __cdecl
UInterchangeBaseNodeContainer::execGetNodeChildrenUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  FProperty *pFVar2;
  FString *pFVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  ForAnyElementType local_38;
  undefined8 local_30;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId286,"UInterchangeBaseNodeContainer::GetNodeChildrenUids",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x11e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId286);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar7.Data);
  iVar5 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)(param_1 + 3),uVar4,&local_28);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)(param_1 + 3) + (longlong)iVar5 * 0x28;
    puVar6 = (undefined8 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 != (undefined8 *)0x0) {
      local_38.Data = (FScriptContainerElement *)0x0;
      iVar5 = *(int *)(puVar6 + 1);
      pFVar3 = (FString *)*puVar6;
      local_30 = CONCAT44(local_30._4_4_,iVar5);
      if (iVar5 == 0) {
        local_30 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar5,0,&local_38,iVar5,(int *)((longlong)&local_30 + 4));
        ConstructItems<FString,FString,int>(local_38.Data,pFVar3,iVar5);
      }
      goto joined_r0x00014e46dd27;
    }
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
joined_r0x00014e46dd27:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (param_3 != &local_38) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FString,int>((FString *)local_38.Data,(int)local_30);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetNodes @ 14e46de00

void __cdecl
UInterchangeBaseNodeContainer::execGetNodes(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  ForAnyElementType *pFVar3;
  bool bVar4;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined8 *local_38;
  ForAnyElementType *local_30;
  code *local_28;
  undefined8 **local_20;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar3 = &local_48;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar3 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10[0];
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId168,"UInterchangeBaseNodeContainer::GetNodes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xa8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId168);
  }
  DestructItems<FString,int>((FString *)pFVar3->Data,*(int *)&pFVar3[1].Data);
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,pFVar3,0,piVar1);
  }
  local_38 = &local_res20;
  local_20 = &local_38;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UInterchangeBaseNodeContainer::GetNodes'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
             ::Call;
  local_30 = pFVar3;
  IterateNodes((UInterchangeBaseNodeContainer *)param_1,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_28);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  DestructItems<FString,int>((FString *)local_48.Data,(int)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// execGetRoots @ 14e46e150

void __cdecl
UInterchangeBaseNodeContainer::execGetRoots(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetRoots((UInterchangeBaseNodeContainer *)param_1,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execIsNodeUidValid @ 14e46fb50

void __cdecl
UInterchangeBaseNodeContainer::execIsNodeUidValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_18.Data.ArrayNum == 0) || (local_18.Data.ArrayNum == 1)) {
    bVar5 = false;
  }
  else {
    iVar4 = local_18.Data.ArrayNum + -1;
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
    iVar4 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)(param_1 + 1),uVar3,&local_18);
    bVar5 = iVar4 != -1;
  }
  *(bool *)param_3 = bVar5;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execLoadFromFile @ 14e46fcb0

void __cdecl
UInterchangeBaseNodeContainer::execLoadFromFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  wchar_t *local_f8;
  undefined8 local_f0;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_e8;
  FLargeMemoryReader local_c8;
  
  local_f8 = (wchar_t *)0x0;
  local_f0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId392,"UInterchangeBaseNodeContainer::LoadFromFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x188);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId392);
  }
  TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
           *)(param_1 + 1));
  local_e8.ArrayMax = 0;
  pwVar2 = L"";
  if ((int)local_f0 != 0) {
    pwVar2 = local_f8;
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  FFileHelper::LoadFileToArray(&local_e8,pwVar2,0);
  if (local_e8.ArrayNum < 1) {
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  else {
    FLargeMemoryReader::FLargeMemoryReader
              (&local_c8,(uchar *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum,None,(FName)0x0)
    ;
    SerializeNodeContainerData((UInterchangeBaseNodeContainer *)param_1,(FArchive *)&local_c8);
    FLargeMemoryReader::~FLargeMemoryReader(&local_c8);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free(local_f8);
  }
  return;
}

// execRemoveNode @ 14e4700b0

void __cdecl
UInterchangeBaseNodeContainer::execRemoveNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[1].field_0x8 != *(int *)&param_1[2].field_0xc) {
    iVar4 = local_18.Data.ArrayNum + -1;
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
    TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                *)(param_1 + 1),uVar3,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execReplaceNode @ 14e470820

void __cdecl
UInterchangeBaseNodeContainer::execReplaceNode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInterchangeFactoryBaseNode *local_res10;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UInterchangeFactoryBaseNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReplaceNode((UInterchangeBaseNodeContainer *)param_1,&local_18,local_res10);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execReset @ 14e470910

void __cdecl
UInterchangeBaseNodeContainer::execReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
           *)(param_1 + 1));
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)(param_1 + 3));
  return;
}

// execResetChildrenCache @ 14e470950

void __cdecl
UInterchangeBaseNodeContainer::execResetChildrenCache
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)(param_1 + 3));
  return;
}

// execSaveToFile @ 14e4709a0

void __cdecl
UInterchangeBaseNodeContainer::execSaveToFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar *_Src;
  IFileManager *pIVar4;
  wchar_t *pwVar5;
  bool bVar6;
  wchar_t *local_f8;
  undefined8 local_f0;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_e8;
  FLargeMemoryWriter local_c8;
  
  local_f8 = (wchar_t *)0x0;
  local_f0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId381,"UInterchangeBaseNodeContainer::SaveToFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0x17d);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId381);
  }
  FLargeMemoryWriter::FLargeMemoryWriter(&local_c8,0,false,(wchar_t *)0x0);
  SerializeNodeContainerData((UInterchangeBaseNodeContainer *)param_1,(FArchive *)&local_c8);
  _Src = FLargeMemoryWriter::GetData(&local_c8);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_c8.Data.NumBytes < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_c8.Data.NumBytes);
  }
  if (((_Src == (uchar *)0x0) && (local_c8.Data.NumBytes != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_e8.ArrayNum = local_c8.Data.NumBytes;
  if (local_c8.Data.NumBytes == 0) {
    local_e8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,local_c8.Data.NumBytes,0,&local_e8.AllocatorInstance,local_c8.Data.NumBytes,
               &local_e8.ArrayMax);
    memcpy(local_e8.AllocatorInstance.Data,_Src,local_c8.Data.NumBytes);
  }
  pIVar4 = IFileManager::Get();
  pwVar5 = L"";
  if ((int)local_f0 != 0) {
    pwVar5 = local_f8;
  }
  FFileHelper::SaveArrayToFile(&local_e8,pwVar5,pIVar4,0);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  FLargeMemoryWriter::~FLargeMemoryWriter(&local_c8);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free(local_f8);
  }
  return;
}

// execSetNamespace @ 14e473b70

void __cdecl
UInterchangeBaseNodeContainer::execSetNamespace(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *local_res10;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetNamespace((UInterchangeBaseNodeContainer *)param_1,&local_18,local_res10);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetNodeDesiredChildIndex @ 14e473c60

void __cdecl
UInterchangeBaseNodeContainer::execSetNodeDesiredChildIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar3 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetNodeDesiredChildIndex((UInterchangeBaseNodeContainer *)param_1,&local_18,piVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetNodeParentUid @ 14e473d60

void __cdecl
UInterchangeBaseNodeContainer::execSetNodeParentUid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetNodeParentUid((UInterchangeBaseNodeContainer *)param_1,&local_18,&local_28);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

