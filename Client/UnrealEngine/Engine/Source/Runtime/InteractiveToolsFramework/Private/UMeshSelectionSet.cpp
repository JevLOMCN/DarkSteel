// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 12

// StaticClass @ 1496ccbc0

UClass * __cdecl UMeshSelectionSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSelectionSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshSelectionSet",
               &Z_Registration_Info_UClass_UMeshSelectionSet.InnerSingleton,
               StaticRegisterNativesUMeshSelectionSet,0x88,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSelectionSet>,
               InternalVTableHelperCtorCaller<UMeshSelectionSet>,local_res8,
               USelectionSet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSelectionSet.InnerSingleton;
}

// UMeshSelectionSet @ 1496d39e0

UMeshSelectionSet * __thiscall
UMeshSelectionSet::UMeshSelectionSet(UMeshSelectionSet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMeshSelectionSet__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->Faces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Faces).ArrayNum = 0;
  (this->Faces).ArrayMax = 0;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  return this;
}

// UMeshSelectionSet @ 1496d3a40

UMeshSelectionSet * __thiscall UMeshSelectionSet::UMeshSelectionSet(UMeshSelectionSet *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMeshSelectionSet__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->Faces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Faces).ArrayNum = 0;
  (this->Faces).ArrayMax = 0;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  return this;
}

// ~UMeshSelectionSet @ 1496d4960

void __thiscall UMeshSelectionSet::~UMeshSelectionSet(UMeshSelectionSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshSelectionSet__6B_;
  pFVar1 = (this->Groups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Faces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Edges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USelectionSet__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AddIndices @ 1496d6880

void __thiscall
UMeshSelectionSet::AddIndices
          (UMeshSelectionSet *this,EMeshSelectionElementType param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  if (param_1 != Vertex) {
    if (param_1 == Face) {
      lVar8 = 0x68;
      goto LAB_1496d68c0;
    }
    if (param_1 == Edge) {
      lVar8 = 0x58;
      goto LAB_1496d68c0;
    }
    if (param_1 == Group) {
      lVar8 = 0x78;
      goto LAB_1496d68c0;
    }
  }
  lVar8 = 0x48;
LAB_1496d68c0:
  iVar3 = param_2->ArrayNum;
  pFVar1 = (ForAnyElementType *)((longlong)&this->_padding_ + lVar8);
  uVar9 = 0;
  if (0 < (longlong)iVar3) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data + lVar8 * 4;
      if (((pFVar1->Data <= pFVar2) &&
          (pFVar2 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) &&
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
      iVar7 = *(int *)&pFVar1[1].Data;
      if (iVar7 == *(int *)((longlong)&pFVar1[1].Data + 4)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
      }
      *(int *)&pFVar1[1].Data = iVar7 + 1;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
      *(undefined4 *)(pFVar1->Data + (longlong)iVar7 * 4) = *(undefined4 *)pFVar2;
    } while (lVar8 < iVar3);
  }
  USelectionSet::NotifySelectionSetModified((USelectionSet *)this);
  return;
}

// AddIndices @ 1496d6a10

void __thiscall
UMeshSelectionSet::AddIndices
          (UMeshSelectionSet *this,EMeshSelectionElementType param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  ForAnyElementType *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  code *pcVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 local_b8 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  if (param_1 != Vertex) {
    if (param_1 == Face) {
      lVar9 = 0x68;
      goto LAB_1496d6a5d;
    }
    if (param_1 == Edge) {
      lVar9 = 0x58;
      goto LAB_1496d6a5d;
    }
    if (param_1 == Group) {
      lVar9 = 0x78;
      goto LAB_1496d6a5d;
    }
  }
  lVar9 = 0x48;
LAB_1496d6a5d:
  iVar8 = *(int *)&(param_2->Elements).field_0x28;
  puVar3 = &(param_2->Elements).field_0x10;
  iStack_a8 = 0;
  pFVar1 = (ForAnyElementType *)((longlong)&this->_padding_ + lVar9);
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar3;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1496d6add;
      uVar11 = puVar14[lVar9 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_94 = local_res18 + -1 + local_90;
    if (iVar8 < iStack_94) {
      iStack_94 = iVar8;
    }
  }
LAB_1496d6add:
  uVar11 = *(uint *)&(param_2->Elements).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_88 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_2;
  local_a0 = puVar3;
  iStack_8c = iStack_94;
  local_80 = param_2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar3;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1496d6be0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uVar11 = local_res20 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1496d6be0:
  while( true ) {
    pTVar6 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_78.CurrentBitIndex == uVar11) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar6 == param_2))
    break;
    piVar12 = (int *)((longlong)&pFVar1[1].Data + 4);
    local_b8[0] = *(undefined4 *)
                   (*(longlong *)&pTVar6->Elements + (longlong)TStack_78.CurrentBitIndex * 0xc);
    if (((pFVar1->Data <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar1->Data + (longlong)*piVar12 * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = *(int *)&pFVar1[1].Data;
    if (iVar8 == *piVar12) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar1,piVar12);
    }
    *(int *)&pFVar1[1].Data = iVar8 + 1;
    *(undefined4 *)(pFVar1->Data + (longlong)iVar8 * 4) = local_b8[0];
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  USelectionSet::NotifySelectionSetModified((USelectionSet *)this);
  return;
}

// GetElements @ 1496dd020

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UMeshSelectionSet::GetElements(UMeshSelectionSet *this,EMeshSelectionElementType param_1)

{
  if (param_1 != Vertex) {
    if (param_1 == Face) {
      return &this->Faces;
    }
    if (param_1 == Edge) {
      return &this->Edges;
    }
    if (param_1 == Group) {
      return &this->Groups;
    }
  }
  return &this->Vertices;
}

// GetElements @ 1496dd050

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UMeshSelectionSet::GetElements(UMeshSelectionSet *this,EMeshSelectionElementType param_1)

{
  if (param_1 != Vertex) {
    if (param_1 == Face) {
      return &this->Faces;
    }
    if (param_1 == Edge) {
      return &this->Edges;
    }
    if (param_1 == Group) {
      return &this->Groups;
    }
  }
  return &this->Vertices;
}

// GetPrivateStaticClass @ 1496dd960

UClass * __cdecl UMeshSelectionSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSelectionSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MeshSelectionSet",
               &Z_Registration_Info_UClass_UMeshSelectionSet.InnerSingleton,
               StaticRegisterNativesUMeshSelectionSet,0x88,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSelectionSet>,
               InternalVTableHelperCtorCaller<UMeshSelectionSet>,local_res8,
               USelectionSet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSelectionSet.InnerSingleton;
}

// RemoveIndices @ 1496e46b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMeshSelectionSet::RemoveIndices
          (UMeshSelectionSet *this,EMeshSelectionElementType param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_168 [32];
  int local_138 [2];
  int local_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_128;
  undefined4 local_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_108;
  undefined4 local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  FSparseArrayAllocationInfo local_a0;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar15 = param_2->ArrayNum;
  pFVar18 = (param_2->AllocatorInstance).Data;
  if (((int)uVar15 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar15 == 0) goto LAB_1496e495e;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar15);
  uVar13 = 1;
  if (3 < uVar15) {
    uVar16 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar13 <= (int)local_40)) goto LAB_1496e495e;
  local_40 = uVar13;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar13 != 0) {
    uVar14 = uVar13;
    if (uVar13 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_1496e47bc;
      }
    }
    else {
LAB_1496e47bc:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar14,4);
    }
    if (0 < (int)uVar13) {
      uVar17 = (ulonglong)uVar13;
      uVar16 = 0;
      do {
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar8 = uVar16 & (longlong)(int)uVar13 - 1U;
        uVar16 = uVar16 + 1;
        *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uStack_12c = 1;
    local_130 = 0;
    iStack_11c = 0;
    iStack_118 = 0;
    if (local_60 != 0) {
      FVar12 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_68;
      }
      uVar13 = *(uint *)FVar12;
      iStack_118 = 0;
      local_130 = 0;
      while (uVar13 == 0) {
        iStack_118 = iStack_118 + 0x20;
        lVar11 = (longlong)local_130;
        local_130 = local_130 + 1;
        if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < local_130)
        goto LAB_1496e48be;
        uVar13 = ((uint *)((longlong)FVar12 + 4))[lVar11];
      }
      uStack_12c = -uVar13 & uVar13;
      uVar16 = (ulonglong)uStack_12c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iStack_11c = (int)lVar11 + -1 + iStack_118;
      if (local_60 < iStack_11c) {
LAB_1496e48be:
        iStack_11c = local_60;
      }
    }
    local_120 = 0xffffffff;
    local_f0 = (longlong *)local_88;
    local_e8._padding_ = CONCAT44(uStack_12c,local_130);
    local_e8.CurrentBitIndex = iStack_11c;
    local_e8.UnvisitedBitMask = 0xffffffff;
    local_e8._28_4_ = uStack_114;
    local_e8.BaseBitIndex = iStack_118;
    local_e8.Array = pTStack_128;
    iVar6 = iStack_11c;
    if (iStack_11c < local_60) {
      do {
        uVar13 = local_40 - 1 & *(uint *)(*local_f0 + (longlong)iVar6 * 0xc);
        lVar11 = *local_f0 + (longlong)iVar6 * 0xc;
        *(uint *)(lVar11 + 8) = uVar13;
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar16 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(lVar11 + 4) = *(undefined4 *)(FVar10.Data + uVar16 * 4);
        *(int *)(FVar10.Data + uVar16 * 4) = iVar6;
        local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
        iVar6 = local_e8.CurrentBitIndex;
      } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
    }
  }
LAB_1496e495e:
  pFVar1 = pFVar18 + (longlong)(int)uVar15 * 4;
  iVar6 = local_58;
  do {
    local_58 = iVar6;
    if (pFVar18 == pFVar1) {
      RemoveIndices(this,param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88);
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      bVar5 = local_88._12_4_ != 0;
      local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
      if (bVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = -1;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return;
    }
    if (local_54 == 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                         (int *)(local_88 + 0xc));
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
      FVar12 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_68;
      }
      bVar9 = (byte)iVar7 & 0x1f;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1f;
        bVar9 = bVar9 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar12 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar9 & 0x1f));
    }
    else {
      local_54 = local_54 + -1;
      local_58 = *(int *)(local_88._0_8_ + (longlong)iVar6 * 0xc + 4);
      if (local_54 != 0) {
        *(undefined4 *)(local_88._0_8_ + (longlong)local_58 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,&local_a0,iVar6);
    pvVar4 = local_a0.Pointer;
    if (local_a0.Pointer != (TSparseSetElement<int> *)0x0) {
      *(undefined4 *)local_a0.Pointer = *(undefined4 *)pFVar18;
      *(undefined4 *)((longlong)local_a0.Pointer + 4) = 0xffffffff;
    }
    uVar15 = *(uint *)local_a0.Pointer;
    local_138[0] = local_a0.Index;
    bVar5 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TryReplaceExisting
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,uVar15,
                       local_a0.Pointer,local_138,(bool *)0x0);
    if (!bVar5) {
      uVar14 = 1;
      uVar13 = local_88._8_4_ - local_54;
      if (3 < uVar13) {
        uVar16 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((int)uVar13 < 1) || ((int)uVar14 <= (int)local_40)) {
        uVar15 = local_40 - 1 & uVar15;
        *(uint *)((longlong)pvVar4 + 8) = uVar15;
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar16 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)((longlong)pvVar4 + 4) = *(undefined4 *)(FVar10.Data + uVar16 * 4);
        *(int *)(FVar10.Data + uVar16 * 4) = local_138[0];
      }
      else {
        local_40 = uVar14;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
        }
        if (uVar14 != 0) {
          uVar15 = uVar14;
          if (uVar14 < 2) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              uVar15 = 0;
              goto LAB_1496e4ae2;
            }
          }
          else {
LAB_1496e4ae2:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_48,0,uVar15,4);
          }
          if (0 < (int)uVar14) {
            uVar17 = (ulonglong)uVar14;
            uVar16 = 0;
            do {
              FVar10.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar10.Data = local_48.Data;
              }
              uVar8 = uVar16 & (longlong)(int)uVar14 - 1U;
              uVar16 = uVar16 + 1;
              *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        if (local_40 != 0) {
          pTStack_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
          uStack_10c = 1;
          local_110 = 0;
          iStack_fc = 0;
          iStack_f8 = 0;
          if (local_60 != 0) {
            FVar12 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_68;
            }
            uVar15 = *(uint *)FVar12;
            iStack_f8 = 0;
            local_110 = 0;
            while (uVar15 == 0) {
              iStack_f8 = iStack_f8 + 0x20;
              lVar11 = (longlong)local_110;
              local_110 = local_110 + 1;
              if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < local_110)
              goto LAB_1496e4bee;
              uVar15 = ((uint *)((longlong)FVar12 + 4))[lVar11];
            }
            uStack_10c = -uVar15 & uVar15;
            uVar16 = (ulonglong)uStack_10c * 2 + 1;
            lVar11 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iStack_fc = (int)lVar11 + -1 + iStack_f8;
            if (local_60 < iStack_fc) {
LAB_1496e4bee:
              iStack_fc = local_60;
            }
          }
          local_100 = 0xffffffff;
          local_c8 = (longlong *)local_88;
          local_c0._padding_ = CONCAT44(uStack_10c,local_110);
          local_c0.CurrentBitIndex = iStack_fc;
          local_c0.UnvisitedBitMask = 0xffffffff;
          local_c0._28_4_ = uStack_f4;
          local_c0.BaseBitIndex = iStack_f8;
          local_c0.Array = pTStack_108;
          iVar6 = iStack_fc;
          if (iStack_fc < local_60) {
            do {
              uVar15 = local_40 - 1 & *(uint *)(*local_c8 + (longlong)iVar6 * 0xc);
              lVar11 = *local_c8 + (longlong)iVar6 * 0xc;
              *(uint *)(lVar11 + 8) = uVar15;
              FVar10.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar10.Data = local_48.Data;
              }
              uVar16 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar15;
              *(undefined4 *)(lVar11 + 4) = *(undefined4 *)(FVar10.Data + uVar16 * 4);
              *(int *)(FVar10.Data + uVar16 * 4) = iVar6;
              local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
              iVar6 = local_c0.CurrentBitIndex;
            } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
          }
        }
      }
    }
    pFVar18 = pFVar18 + 4;
    iVar6 = local_58;
  } while( true );
}

// RemoveIndices @ 1496e4dc0

void __thiscall
UMeshSelectionSet::RemoveIndices
          (UMeshSelectionSet *this,EMeshSelectionElementType param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<FSetElementId> FVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 local_res10 [8];
  uint local_48 [2];
  ForAnyElementType local_40;
  int local_38;
  int aiStack_34 [3];
  
  if (param_1 != Vertex) {
    if (param_1 == Face) {
      lVar8 = 0x68;
      goto LAB_1496e4e02;
    }
    if (param_1 == Edge) {
      lVar8 = 0x58;
      goto LAB_1496e4e02;
    }
    if (param_1 == Group) {
      lVar8 = 0x78;
      goto LAB_1496e4e02;
    }
  }
  lVar8 = 0x48;
LAB_1496e4e02:
  pFVar1 = (ForAnyElementType *)((longlong)&this->_padding_ + lVar8);
  uVar11 = (*(int *)((longlong)&this->_padding_ + lVar8) - *(int *)&(param_2->Elements).field_0x8) +
           *(int *)&(param_2->Elements).field_0x34;
  local_40.Data = (FScriptContainerElement *)0x0;
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  local_38 = 0;
  aiStack_34[0] = 0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&local_40,0,aiStack_34);
  }
  pFVar10 = pFVar1->Data;
  iVar3 = *(int *)&pFVar1[1].Data;
  pFVar2 = pFVar10 + (longlong)iVar3 * 4;
  do {
    if (*(int *)&pFVar1[1].Data != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar2) {
      if (pFVar1 != &local_40) {
        if (pFVar1->Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1->Data);
        }
        pFVar1->Data = local_40.Data;
        *(int *)&pFVar1[1].Data = local_38;
        *(int *)((longlong)&pFVar1[1].Data + 4) = aiStack_34[0];
        local_38 = 0;
        aiStack_34[0] = 0;
        local_40.Data = (FScriptContainerElement *)0x0;
      }
      USelectionSet::NotifySelectionSetModified((USelectionSet *)this);
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
      return;
    }
    local_48[0] = *(uint *)pFVar10;
    if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
      FVar4 = (param_2->Hash).SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)&param_2->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar4;
      }
      iVar7 = *(int *)((longlong)FVar9 + (ulonglong)(param_2->HashSize - 1U & local_48[0]) * 4);
      if (iVar7 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_2->Elements + (longlong)iVar7 * 0xc) == local_48[0])
          goto LAB_1496e4f77;
          iVar7 = *(int *)(*(longlong *)&param_2->Elements + 4 + (longlong)iVar7 * 0xc);
        } while (iVar7 != -1);
      }
    }
    if ((local_40.Data <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 < local_40.Data + (longlong)aiStack_34[0] * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_38 == aiStack_34[0]) {
      local_38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_40,aiStack_34);
    }
    lVar8 = (longlong)local_38;
    local_38 = local_38 + 1;
    *(uint *)(local_40.Data + lVar8 * 4) = local_48[0];
LAB_1496e4f77:
    pFVar10 = pFVar10 + 4;
  } while( true );
}

// StaticRegisterNativesUMeshSelectionSet @ 1496e6730

void __cdecl UMeshSelectionSet::StaticRegisterNativesUMeshSelectionSet(void)

{
  return;
}

