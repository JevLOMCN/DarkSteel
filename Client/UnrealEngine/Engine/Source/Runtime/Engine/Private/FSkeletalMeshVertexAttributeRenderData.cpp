// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// ~FSkeletalMeshVertexAttributeRenderData @ 1475a9f60

void __thiscall
FSkeletalMeshVertexAttributeRenderData::~FSkeletalMeshVertexAttributeRenderData
          (FSkeletalMeshVertexAttributeRenderData *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->Buffers).field_0x28;
  puVar1 = &(this->Buffers).field_0x10;
  iVar13 = 0;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->Buffers).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1475a9ffd;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_1475a9ffd:
  uVar12 = *(uint *)&(this->Buffers).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar8,iVar13);
  TStack_50.CurrentBitIndex = iVar9;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_50._28_4_ = iVar9;
  TStack_50.BaseBitIndex = iVar15;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->Buffers).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->Buffers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1475aa100;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_1475aa100:
  while( true ) {
    if (*(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34 != (int)uStack_30)
    {
      `TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar12) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar4 = *(undefined8 **)
              (*(longlong *)&this->Buffers + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  *(undefined4 *)&(this->Buffers).field_0x48 = 0;
  pvVar5 = *(void **)&(this->Buffers).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddAttribute @ 1475b1290

bool __thiscall
FSkeletalMeshVertexAttributeRenderData::AddAttribute
          (FSkeletalMeshVertexAttributeRenderData *this,FName param_1,
          ESkeletalMeshVertexAttributeDataType param_2,int param_3,int param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*> *pTVar8;
  undefined1 *puVar9;
  EPixelFormat EVar10;
  FSkeletalMeshAttributeVertexBuffer *this_00;
  FRenderResource *local_res8;
  FName local_res10;
  FName *local_48;
  FRenderResource **local_40;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28;
  
  iVar3 = param_4;
  local_res10 = param_1;
  if ((3 < param_4 - 1U) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponentCount >= 1 && InComponentCount <= 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletalMeshVertexAttribute.cpp"
                         ,0x2c,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  FVar2 = local_res10;
  uVar6 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (*(int *)&(this->Buffers).field_0x8 != *(int *)&(this->Buffers).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Buffers).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Buffers).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->Buffers).field_0x48 - 1U & FVar2.Number + uVar6) * 4)
    ;
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->Buffers + (longlong)iVar7 * 0x18) == FVar2) {
          pTVar8 = TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
                           *)this,local_res10);
          if ((pTVar8 == (TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          this_00 = *(FSkeletalMeshAttributeVertexBuffer **)&pTVar8->field_0x8;
          goto LAB_1475b1418;
        }
        iVar7 = *(int *)(*(longlong *)&this->Buffers + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  local_res8 = ::operator_new(0x50);
  if (local_res8 != (FRenderResource *)0x0) {
    FRenderResource::FRenderResource(local_res8);
    local_res8->_padding_ = (longlong)&___7FSkeletalMeshAttributeVertexBuffer__6B_;
    local_res8[1]._padding_ = 0;
    local_res8[1].OwnerName.ComparisonIndex = 0;
    local_res8[1].OwnerName.Number = 0;
    local_res8[1].ResourceName.ComparisonIndex.Value = 0;
    local_res8[1].ListIndex = 0;
    local_res8[1].FeatureLevel = '\0';
    local_res8[1].InitPhase = Pre;
    local_res8[1].ResourceState = Default;
    local_res8[1].field_0x1f = 0;
    local_res8[2]._padding_ = 0;
    local_res8[2].OwnerName.ComparisonIndex.Value = 0;
  }
  local_48 = &local_res10;
  local_40 = &local_res8;
  TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FSkeletalMeshAttributeVertexBuffer_*_&&>_>
            ((TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,FSkeletalMeshAttributeVertexBuffer_*_&&> *)
                     &param_4,(bool *)&local_48);
  this_00 = *(FSkeletalMeshAttributeVertexBuffer **)
             (*(longlong *)&this->Buffers + 8 + (longlong)param_4 * 0x18);
LAB_1475b1418:
  EVar10 = PF_Unknown;
  if (param_2 == Float) {
    EVar10 = PF_R32_FLOAT;
  }
  else if (param_2 == HalfFloat) {
    EVar10 = PF_R16F;
  }
  else if (param_2 == NUInt8) {
    EVar10 = PF_R8;
  }
  local_38 = (param_5->AllocatorInstance).Data;
  iVar7 = param_5->ArrayNum;
  if ((iVar7 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar7;
  local_28.DataPtr = (float *)local_38;
  iStack_30 = iVar7;
  FSkeletalMeshAttributeVertexBuffer::Init(this_00,EVar10,param_3,iVar3,&local_28);
  return true;
}

// CleanUp @ 1475b9930

void __thiscall
FSkeletalMeshVertexAttributeRenderData::CleanUp(FSkeletalMeshVertexAttributeRenderData *this)

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
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->Buffers).field_0x28;
  puVar1 = &(this->Buffers).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Buffers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475b99cd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1475b99cd:
  uVar10 = *(uint *)&(this->Buffers).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Buffers).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Buffers).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475b9ad0;
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
LAB_1475b9ad0:
  while( true ) {
    if (*(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34 != (int)uStack_30)
    {
      `TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FSkeletalMeshAttributeVertexBuffer::CleanUp
              (*(FSkeletalMeshAttributeVertexBuffer **)
                (*(longlong *)&this->Buffers + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// GetAttributeBuffer @ 1475d1e40

FSkeletalMeshAttributeVertexBuffer * __thiscall
FSkeletalMeshVertexAttributeRenderData::GetAttributeBuffer
          (FSkeletalMeshVertexAttributeRenderData *this,FName param_1)

{
  TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*> *pTVar1;
  undefined8 *puVar2;
  
  pTVar1 = TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar2 = (undefined8 *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    return (FSkeletalMeshAttributeVertexBuffer *)*puVar2;
  }
  return (FSkeletalMeshAttributeVertexBuffer *)0x0;
}

// GetResourceSize @ 1475dd1b0

int __thiscall
FSkeletalMeshVertexAttributeRenderData::GetResourceSize
          (FSkeletalMeshVertexAttributeRenderData *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar7 = *(int *)&(this->Buffers).field_0x28;
  puVar1 = &(this->Buffers).field_0x10;
  iVar10 = 0;
  iVar12 = 0;
  uVar5 = 1;
  iVar13 = 0;
  iVar6 = 0;
  if (iVar7 != 0) {
    puVar14 = *(uint **)&(this->Buffers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    iVar13 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      iVar6 = iVar7;
      if ((int)((iVar7 + -1 >> 0x1f & 0x1fU) + iVar7 + -1) >> 5 < iVar12) goto LAB_1475dd24d;
      uVar11 = puVar14[lVar8 + 1];
    }
    uVar5 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar6 = local_res10 + -1 + iVar13;
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
  }
LAB_1475dd24d:
  uVar11 = *(uint *)&(this->Buffers).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar12);
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar7 < (int)uVar11)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  uVar5 = *(uint *)&(this->Buffers).field_0x28;
  iVar7 = 0;
  if (uVar11 != uVar5) {
    puVar9 = *(undefined1 **)&(this->Buffers).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar12 * 4);
    while (iVar7 = iVar10, uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar12) goto LAB_1475dd350;
      uVar11 = *(uint *)(puVar9 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar5 < (int)uVar11) {
      uVar11 = uVar5;
    }
  }
LAB_1475dd350:
  while( true ) {
    if (*(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34 != (int)uStack_40)
    {
      `TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar12 = FSkeletalMeshAttributeVertexBuffer::GetResourceSize
                       (*(FSkeletalMeshAttributeVertexBuffer **)
                         (*(longlong *)&this->Buffers + 8 +
                         (longlong)TStack_60.CurrentBitIndex * 0x18));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    iVar7 = iVar7 + iVar12;
  }
  return iVar7;
}

// InitResources @ 1475e0590

void __thiscall
FSkeletalMeshVertexAttributeRenderData::InitResources(FSkeletalMeshVertexAttributeRenderData *this)

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
  int local_res10;
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletalMeshVertexAttribute.cpp"
                         ,0x54,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = *(int *)&(this->Buffers).field_0x28;
  puVar1 = &(this->Buffers).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Buffers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475e065d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1475e065d:
  uVar10 = *(uint *)&(this->Buffers).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Buffers).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Buffers).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475e0760;
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
LAB_1475e0760:
  while( true ) {
    if (*(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34 != (int)uStack_30)
    {
      `TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    BeginInitResource(*(FRenderResource **)
                       (*(longlong *)&this->Buffers + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18
                       ),(FRenderCommandPipe *)0x0);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ReleaseResources @ 1475f1570

void __thiscall
FSkeletalMeshVertexAttributeRenderData::ReleaseResources
          (FSkeletalMeshVertexAttributeRenderData *this)

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
  int local_res10;
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletalMeshVertexAttribute.cpp"
                         ,0x5d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = *(int *)&(this->Buffers).field_0x28;
  puVar1 = &(this->Buffers).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Buffers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475f163d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1475f163d:
  uVar10 = *(uint *)&(this->Buffers).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Buffers).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Buffers).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1475f1740;
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
LAB_1475f1740:
  while( true ) {
    if (*(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34 != (int)uStack_30)
    {
      `TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    BeginReleaseResource
              (*(FRenderResource **)
                (*(longlong *)&this->Buffers + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18),
               (FRenderCommandPipe *)0x0);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// Serialize @ 1475f9840

void __thiscall
FSkeletalMeshVertexAttributeRenderData::Serialize
          (FSkeletalMeshVertexAttributeRenderData *this,FArchive *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  FSkeletalMeshVertexAttributeRenderData *pFVar8;
  bool bVar9;
  FSkeletalMeshAttributeVertexBuffer *this_00;
  longlong lVar10;
  int iVar11;
  FSkeletalMeshAttributeVertexBuffer *this_01;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  FSkeletalMeshAttributeVertexBuffer *pFVar16;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  undefined8 local_c8;
  FSkeletalMeshAttributeVertexBuffer *local_c0;
  FSkeletalMeshVertexAttributeRenderData *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TPairInitializer<FName_const_&,FSkeletalMeshAttributeVertexBuffer_*_const_&> local_88;
  FSkeletalMeshVertexAttributeRenderData *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  undefined8 *local_48;
  FSkeletalMeshAttributeVertexBuffer **local_40;
  
  if ((param_1->field_0x28 & 1) == 0) {
    local_res20[0] = *(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34;
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    iVar4 = *(int *)&(this->Buffers).field_0x28;
    puVar1 = &(this->Buffers).field_0x10;
    iStack_b0 = 0;
    uStack_ac = 1;
    local_98 = 0;
    iStack_9c = 0;
    if (iVar4 != 0) {
      puVar13 = *(uint **)&(this->Buffers).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)puVar1;
      }
      uVar14 = *puVar13;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_1475f9a3d;
        uVar14 = puVar13[lVar10 + 1];
      }
      uStack_ac = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_ac * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_88.Key._4_4_ = (int)lVar10;
      iStack_9c = local_98 + -1 + local_88.Key._4_4_;
      if (iVar4 < iStack_9c) {
        iStack_9c = iVar4;
      }
    }
LAB_1475f9a3d:
    uVar14 = *(uint *)&(this->Buffers).field_0x28;
    uVar15 = uVar14 & 0xffffffe0;
    iStack_90 = *(int *)&(this->Buffers).field_0x8 - *(int *)&(this->Buffers).field_0x34;
    uStack_a0 = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
    TStack_70.CurrentBitIndex = iStack_9c;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar14 >> 5;
    TStack_70._28_4_ = iStack_9c;
    TStack_70.BaseBitIndex = local_98;
    uStack_50 = CONCAT44(uStack_8c,iStack_90);
    local_b8 = this;
    local_a8 = puVar1;
    iStack_94 = iStack_9c;
    local_78 = this;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar5 = *(uint *)&(this->Buffers).field_0x28;
    if (uVar14 != uVar5) {
      puVar12 = *(undefined1 **)&(this->Buffers).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1475f9b40;
        uVar14 = *(uint *)(puVar12 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar14 = (int)lVar10 + -1 + uVar15;
      if ((int)uVar5 < (int)uVar14) {
        uVar14 = uVar5;
      }
    }
LAB_1475f9b40:
    while( true ) {
      pFVar8 = local_78;
      if (*(int *)&(local_78->Buffers).field_0x8 - *(int *)&(local_78->Buffers).field_0x34 !=
          (int)uStack_50) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_70.CurrentBitIndex == uVar14) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar8 == this))
      break;
      puVar2 = (undefined8 *)
               (*(longlong *)&pFVar8->Buffers + (longlong)TStack_70.CurrentBitIndex * 0x18);
      local_88.Value = (FSkeletalMeshAttributeVertexBuffer **)*puVar2;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_88.Value);
      FSkeletalMeshAttributeVertexBuffer::Serialize
                ((FSkeletalMeshAttributeVertexBuffer *)puVar2[1],param_1);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
  }
  else {
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
             *)this);
    pFVar16 = (FSkeletalMeshAttributeVertexBuffer *)0x0;
    if (0 < (int)local_res18[0]) {
      do {
        if ((param_1->field_0x29 & 2) != 0) {
          return;
        }
        local_c8 = 0;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_c8);
        this_00 = ::operator_new(0x50);
        this_01 = (FSkeletalMeshAttributeVertexBuffer *)0x0;
        if (this_00 != (FSkeletalMeshAttributeVertexBuffer *)0x0) {
          FRenderResource::FRenderResource((FRenderResource *)this_00);
          this_00->_padding_ = (longlong)&___7FSkeletalMeshAttributeVertexBuffer__6B_;
          (this_00->ValueBuffer).VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
          (this_00->ValueBuffer).VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
          (this_00->ValueBuffer).Size = 0;
          this_00->ValueData = (FSkeletalMeshVertexDataInterface *)0x0;
          this_00->ComponentCount = 0;
          this_00->PixelFormat = 0;
          this_00->ComponentStride = 0;
          this_01 = this_00;
        }
        local_c0 = this_01;
        FSkeletalMeshAttributeVertexBuffer::Serialize(this_01,param_1);
        local_48 = &local_c8;
        local_40 = &local_c0;
        TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FSkeletalMeshAttributeVertexBuffer_*_const_&>_>
                  ((TSet<TTuple<FName,FSkeletalMeshAttributeVertexBuffer_*>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshAttributeVertexBuffer_*,0>,FDefaultSetAllocator>
                    *)this,&local_88,(bool *)&local_48);
        uVar14 = (int)pFVar16 + 1;
        local_c0->_padding_ =
             (longlong)SkeletalMeshResourceNames::SkeletalMeshAttributeVertexBufferName;
        pFVar16 = (FSkeletalMeshAttributeVertexBuffer *)(ulonglong)uVar14;
      } while ((int)uVar14 < (int)local_res18[0]);
    }
  }
  return;
}

