// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 10

// Call @ 144540c20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypedElementList<FTypedElementHandle>::GetElementHandles<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  ForElementType<FTypedElementHandle> FVar1;
  FTypedElementInternalData *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<FTypedElementHandle> FVar6;
  undefined8 *puVar7;
  
  FVar1 = *(ForElementType<FTypedElementHandle> *)param_1;
  FVar6 = *(ForElementType<FTypedElementHandle> *)((longlong)FVar1 + 0x80);
  if (*(ForElementType<FTypedElementHandle> *)((longlong)FVar1 + 0x80) ==
      (ForElementType<FTypedElementHandle>)0x0) {
    FVar6 = FVar1;
  }
  if (((ulonglong)FVar6 <= param_2) &&
     (param_2 < (FTypedElementHandle *)
                ((longlong)*(int *)((longlong)FVar1 + 0x8c) * 0x10 + (longlong)FVar6))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)((longlong)FVar1 + 0x88);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x8c)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
                      (0x810,(ForElementType<FTypedElementHandle> *)FVar1,
                       (int *)((longlong)FVar1 + 0x8c));
  }
  *(int *)((longlong)FVar1 + 0x88) = iVar5 + 1;
  FVar6 = *(ForElementType<FTypedElementHandle> *)((longlong)FVar1 + 0x80);
  if (*(ForElementType<FTypedElementHandle> *)((longlong)FVar1 + 0x80) ==
      (ForElementType<FTypedElementHandle>)0x0) {
    FVar6 = FVar1;
  }
  puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + (longlong)FVar6);
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = 0xffffffff;
  this = param_2->DataPtr;
  if (this != (FTypedElementInternalData *)0x0) {
    *puVar7 = this;
    iVar5 = FTypedElementInternalData::AddRef(this,true);
    *(int *)(puVar7 + 1) = iVar5;
  }
  return true;
}

// Call @ 144540c30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TypedElementListObjectUtil::CountObjects'::__l2::<lambda_1>,bool,UObject_*>::
Call(void *param_1,UObject **param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return true;
}

// Call @ 144540c40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTypedElementSelectionSet::DeselectElements'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  byte bVar1;
  bool bVar2;
  FTypedElementSelectionOptions local_18;
  
  bVar1 = **(byte **)((longlong)param_1 + 8);
  local_18._0_8_ = **(undefined8 **)((longlong)param_1 + 0x10);
  local_18.TEDSIntegrationSelectionSetName =
       *(FName *)(*(undefined8 **)((longlong)param_1 + 0x10) + 1);
  bVar2 = UTypedElementSelectionSet::DeselectElement
                    (*(UTypedElementSelectionSet **)param_1,param_2,&local_18);
  **(byte **)((longlong)param_1 + 8) = bVar2 | bVar1;
  return true;
}

// Call @ 144540c90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TypedElementListObjectUtil::ForEachObject'::__l2::<lambda_1>,bool,TTypedElement<ITypedElementObjectInterface>_const_&>
::Call(void *param_1,TTypedElement<ITypedElementObjectInterface> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UClass *this;
  bool bVar3;
  undefined1 uVar4;
  longlong lStackX_8;
  
  pUVar2 = *(UClass **)((longlong)param_1 + 8);
  if (((*(longlong *)param_2 == 0) || (*(longlong **)&param_2->field_0x10 == (longlong *)0x0)) ||
     (lStackX_8 = (**(code **)(**(longlong **)&param_2->field_0x10 + 0x18))(), lStackX_8 == 0)) {
    return true;
  }
  if (pUVar2 != (UClass *)0x0) {
    this = *(UClass **)(lStackX_8 + 0x10);
    iVar1 = (int)pUVar2->_padding_;
    if ((((int)this->_padding_ < iVar1) ||
        ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) != &pUVar2->_padding_))
       && (bVar3 = UClass::ImplementsInterface(this,pUVar2), !bVar3)) {
      return true;
    }
  }
  uVar4 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],&lStackX_8);
  return (bool)uVar4;
}

// Call @ 144540ca0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TypedElementListObjectUtil::ForEachObjectClass'::__l2::<lambda_1>,bool,UClass_*_const_&,int>
::Call(void *param_1,UClass **param_2,int *param_3)

{
  undefined1 uVar1;
  UClass *local_res18 [2];
  
  local_res18[0] = *param_2;
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],local_res18);
  return (bool)uVar1;
}

// Call @ 144540cd0

/* WARNING: Removing unreachable block (ram,0x00014453f81a) */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTypedElementSelectionSet::GetCurrentSelectionState'::__l2::<lambda_1>,bool,TTypedElement<ITypedElementSelectionInterface>_const_&>
::Call(void *param_1,TTypedElement<ITypedElementSelectionInterface> *param_2)

{
  longlong lVar1;
  int iVar2;
  FTypedElementId *pFVar3;
  longlong *aplStackX_10 [3];
  
  (**(code **)(**(longlong **)&param_2->field_0x10 + 0x88))
            (*(longlong **)&param_2->field_0x10,aplStackX_10);
  if (aplStackX_10[0] != (longlong *)0x0) {
    if (*(longlong *)param_2 == 0) {
      pFVar3 = &FTypedElementId::Unset;
    }
    else {
      pFVar3 = (FTypedElementId *)(*(longlong *)param_2 + 8);
    }
    *(byte *)(aplStackX_10[0] + 1) = (pFVar3->field0_0x0)._s_0.TypeId;
    (**(code **)(*aplStackX_10[0] + 0x18))(aplStackX_10[0],param_2);
    if (aplStackX_10[0] != (longlong *)0x0) {
      lVar1 = *(longlong *)param_1;
      iVar2 = *(int *)(lVar1 + 0x10);
      if (iVar2 == *(int *)(lVar1 + 0x14)) {
        iVar2 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar1 + 8),(int *)(lVar1 + 0x14));
      }
      *(int *)(lVar1 + 0x10) = iVar2 + 1;
      *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)iVar2 * 8) = aplStackX_10[0];
    }
  }
  return true;
}

// Call @ 144540ce0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTypedElementSelectionSet::GetNormalizedElementList'::__l2::<lambda_1>,bool,TTypedElement<ITypedElementSelectionInterface>_const_&>
::Call(void *param_1,TTypedElement<ITypedElementSelectionInterface> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FTypedElementInternalData *this;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  FTypedElementId *pFVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  atomic<int> *paVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 uVar19;
  undefined8 uStack_78;
  TReferenceControllerBase<1> *pTStack_70;
  longlong lStack_68;
  TReferenceControllerBase<1> *pTStack_60;
  FTypedElementInternalData *pFStack_58;
  int iStack_50;
  longlong lStack_48;
  longlong lStack_40;
  TReferenceControllerBase<1> *pTStack_38;
  longlong *plStack_30;
  
  if (*(longlong *)param_2 == 0) {
    pFVar10 = &FTypedElementId::Unset;
  }
  else {
    pFVar10 = (FTypedElementId *)(*(longlong *)param_2 + 8);
  }
  plVar18 = *(longlong **)
             (*(longlong *)param_1 + 0x30 + (ulonglong)(pFVar10->field0_0x0)._s_0.TypeId * 8);
  if (plVar18 == (longlong *)0x0) {
    plVar18 = *(longlong **)(*(longlong *)param_1 + 0x30);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  lVar15 = *(longlong *)((longlong)param_1 + 8);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar14 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar14 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  this = *(FTypedElementInternalData **)param_2;
  iStack_50 = -1;
  pFStack_58 = (FTypedElementInternalData *)0x0;
  if (this != (FTypedElementInternalData *)0x0) {
    iStack_50 = FTypedElementInternalData::AddRef(this,true);
    pFStack_58 = this;
  }
  lStack_48 = *(longlong *)&param_2->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  lStack_40 = lVar15;
  pTStack_38 = pTVar1;
  plStack_30 = plVar18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (((((pFStack_58 == (FTypedElementInternalData *)0x0) || (lStack_48 == 0)) || (lStack_40 == 0))
      || (plStack_30 == (longlong *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SelectionSetElement.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementRuntime\\Private\\Elements\\Framework\\TypedElementSelectionSet.cpp"
                         ,0x1ab,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  plVar18 = plStack_30;
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
  uStack_78 = *(undefined8 *)((longlong)param_1 + 0x20);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    lVar15 = *plStack_30;
    uVar19 = *(undefined8 *)((longlong)param_1 + 0x18);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    uVar19 = *(undefined8 *)((longlong)param_1 + 0x18);
    lVar15 = *plStack_30;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pcVar4 = *(code **)(lVar15 + 0x40);
  pTStack_70 = pTVar1;
  if ((lStack_40 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pTVar7 = pTStack_38;
  lVar15 = lStack_40;
  if (pTStack_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_38->SharedReferenceCount = (atomic<int>)((int)pTStack_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lStack_40 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  lStack_68 = lVar15;
  pTStack_60 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar4)(plVar18,&pFStack_58,&lStack_68,uVar19,&uStack_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  iVar6 = iStack_50;
  if (pFStack_58 != (FTypedElementInternalData *)0x0) {
    lVar15 = (longlong)iStack_50;
    LOCK();
    pFStack_58->RefCount = pFStack_58->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (pFStack_58->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (iStack_50 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar2 = *(longlong *)&lpCriticalSection->References;
      puVar13 = &(lpCriticalSection->References).field_0x10;
      bVar5 = (byte)iVar6 & 0x1f;
      uVar17 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      puVar3 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      puVar16 = puVar13;
      if (puVar3 != (undefined1 *)0x0) {
        puVar16 = puVar3;
      }
      lVar12 = (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5);
      if (((*(uint *)(puVar16 + lVar12 * 4) & uVar17) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar2) =
             iVar6;
      }
      uVar11 = 0xffffffff;
      *(undefined4 *)(lVar15 * 0x108 + lVar2) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar11 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar15 * 0x108 + 4 + lVar2) = uVar11;
      puVar3 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar3 = *(int *)puVar3 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar6;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      puVar3 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar3 != (undefined1 *)0x0) {
        puVar13 = puVar3;
      }
      *(uint *)(puVar13 + lVar12 * 4) = *(uint *)(puVar13 + lVar12 * 4) & ~uVar17;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return true;
}

// Call @ 144540cf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TypedElementListObjectUtil::GetObjects'::__l2::<lambda_1>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  bool bVar1;
  
  bVar1 = `TypedElementListObjectUtil::GetObjects'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 144540d00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TypedElementListObjectUtil::HasObjects'::__l2::<lambda_1>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 144540d10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTypedElementSelectionSet::SelectElements'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  byte bVar1;
  bool bVar2;
  FTypedElementSelectionOptions local_18;
  
  bVar1 = **(byte **)((longlong)param_1 + 8);
  local_18._0_8_ = **(undefined8 **)((longlong)param_1 + 0x10);
  local_18.TEDSIntegrationSelectionSetName =
       *(FName *)(*(undefined8 **)((longlong)param_1 + 0x10) + 1);
  bVar2 = UTypedElementSelectionSet::SelectElement
                    (*(UTypedElementSelectionSet **)param_1,param_2,&local_18);
  **(byte **)((longlong)param_1 + 8) = bVar2 | bVar1;
  return true;
}

