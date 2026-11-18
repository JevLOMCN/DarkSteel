// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// GatherReferenceInfo @ 1421cd100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::ReferenceChainSearch::FPolicyUObjectHeap::GatherReferenceInfo
          (FPolicyUObjectHeap *this,
          TMap<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FUObjectItem_u_8 FVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TMap<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,0>_>
  *pTVar7;
  bool bVar8;
  FUObjectItem *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined1 *puVar15;
  FUObjectItem *pFVar16;
  uint *puVar17;
  FUObjectItem *pFVar18;
  undefined1 auStackY_2b8 [32];
  undefined1 local_240 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_238;
  TMap<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,0>_>
  *local_228;
  uint uStack_220;
  uint uStack_21c;
  undefined1 *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  uint local_208;
  uint uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  int local_1f8;
  int local_1f4;
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FCollector<1>_>
  local_1f0;
  FUObjectItem_u_8 *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FReferenceInfoSearch local_1d8;
  TMap<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>,0>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  FProcessor local_180 [4];
  FWorkerContext local_140;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_1d8.ObjectToInfoMap = this->ObjectToInfoMap;
  puVar1 = &param_1->field_0x10;
  pFVar18 = (FUObjectItem *)0x0;
  local_1d8._padding_ = 0;
  local_1d8._padding_ = 0;
  uStack_220 = 0;
  uStack_21c = 1;
  uVar3 = *(uint *)&param_1->field_0x28;
  uStack_20c = uStack_220;
  local_208 = uStack_220;
  if (uVar3 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    pFVar9 = pFVar18;
    pFVar16 = pFVar18;
    local_208 = 0;
    uStack_220 = 0;
    while (uVar13 == 0) {
      iVar11 = (int)pFVar9;
      local_208 = (int)pFVar16 + 0x20;
      pFVar16 = (FUObjectItem *)(ulonglong)local_208;
      uStack_220 = iVar11 + 1;
      pFVar9 = (FUObjectItem *)(ulonglong)uStack_220;
      uStack_20c = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_220)
      goto LAB_1421cd1dd;
      uVar13 = puVar17[(longlong)iVar11 + 1];
    }
    uStack_21c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_21c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1f8 = (int)lVar10;
    uStack_20c = (local_208 - 1) + local_1f8;
    if ((int)uVar3 < (int)uStack_20c) {
      uStack_20c = uVar3;
    }
  }
LAB_1421cd1dd:
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_200 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_210 = 0xffffffff;
  TStack_1a8._padding_ = CONCAT44(uStack_21c,uStack_220);
  TStack_1a8.CurrentBitIndex = uStack_20c;
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_1a8._28_4_ = uStack_20c;
  TStack_1a8.BaseBitIndex = local_208;
  uStack_188 = CONCAT44(uStack_1fc,iStack_200);
  local_228 = param_1;
  local_218 = puVar1;
  uStack_204 = uStack_20c;
  local_1d8._padding_ = (longlong)this;
  local_1b0 = param_1;
  TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || ((int)uVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar3) {
    puVar15 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1421cd2e0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1f4 = (int)lVar10;
    uVar13 = local_1f4 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_1421cd2e0:
  while( true ) {
    pTVar7 = local_1b0;
    if (*(int *)&local_1b0->field_0x8 - *(int *)&local_1b0->field_0x34 != (int)uStack_188) {
      local_240[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_240);
    }
    if (((TStack_1a8.CurrentBitIndex == uVar13) &&
        (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1)
       ) {
      DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FThreadData,int>
                ((FThreadData *)local_1d8._padding_,(int)local_1d8._padding_);
      if ((FThreadData *)local_1d8._padding_ != (FThreadData *)0x0) {
        FMemory::Free((void *)local_1d8._padding_);
      }
      return;
    }
    piVar14 = (int *)((longlong)TStack_1a8.CurrentBitIndex * 0x60 + *(longlong *)pTVar7);
    iVar11 = *piVar14;
    if ((iVar11 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar9 = pFVar18;
    if (iVar11 < GUObjectArray.ObjObjects.NumElements) {
      pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar11);
    }
    FVar4 = pFVar9->field1_0x8;
    local_1d8.ReferenceInfoMap =
         (TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>
          *)(piVar14 + 2);
    local_180[0].ThreadIndex = 0;
    local_180[0].This = &local_1d8;
    GC::FWorkerContext::FWorkerContext(&local_140);
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 1;
    local_238.ArrayMax = 0;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_238.AllocatorInstance,1,&local_238.ArrayMax);
    *(FUObjectItem_u_8 *)local_238.AllocatorInstance.Data = FVar4;
    GC::PadObjectArray(&local_238);
    FVar6.Data = local_238.AllocatorInstance.Data;
    iVar11 = local_238.ArrayNum;
    local_1e8 = (FUObjectItem_u_8 *)local_238.AllocatorInstance.Data;
    if ((local_238.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) break;
    iStack_1e0 = iVar11;
    if (((iVar11 != 0) &&
        (bVar8 = UObjectBase::IsValidLowLevel
                           (*(UObjectBase **)(FVar6.Data + (ulonglong)(iVar11 + 0xf) * 8)), !bVar8))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("PaddedObjects.IsEmpty() || PaddedObjects.GetData()[PaddedObjects.Num() + ObjectLookahead - 1]->IsValidLowLevel()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                              ,0x181,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_140.InitialObjects._12_4_ = uStack_1dc;
    local_140.InitialObjects.ArrayNum = iStack_1e0;
    local_1f0.Processor = local_180;
    local_140.InitialObjects.DataPtr = (UObject **)local_1e8;
    GC::
    TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FCollector<1>_>
    ::ProcessObjectArray(&local_1f0,&local_140);
    if ((FUObjectItem_u_8 *)local_238.AllocatorInstance.Data != (FUObjectItem_u_8 *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
    }
    GC::FWorkerContext::~FWorkerContext(&local_140);
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// VertexToObject @ 1421ef850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * __thiscall
UE::ReferenceChainSearch::FPolicyUObjectHeap::VertexToObject(FPolicyUObjectHeap *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FUObjectItem *pFVar4;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  if (param_1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar4 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,param_1);
    return (UObject *)(pFVar4->field1_0x8).Object;
  }
  return _DAT_00000008;
}

