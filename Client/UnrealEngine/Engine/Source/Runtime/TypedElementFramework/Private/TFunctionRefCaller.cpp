// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 98

// Call @ 142c7db70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypedElementList<FScriptTypedElementHandle>::Append'::__l5::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
::Call(void *param_1,FScriptTypedElementHandle *param_2)

{
  TTypedElementList<FScriptTypedElementHandle> *this;
  FScriptTypedElementInternalDataPtr local_res8 [4];
  
  local_res8[0].ControlBlock = (param_2->InternalData).ControlBlock;
  this = *(TTypedElementList<FScriptTypedElementHandle> **)param_1;
  if (local_res8[0].ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    (local_res8[0].ControlBlock)->WeakRefCount = (local_res8[0].ControlBlock)->WeakRefCount + 1;
  }
  TTypedElementList<FScriptTypedElementHandle>::AddElementImpl
            (this,(FScriptTypedElementHandle *)local_res8);
  if (local_res8[0].ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    (local_res8[0].ControlBlock)->WeakRefCount = (local_res8[0].ControlBlock)->WeakRefCount + -1;
    if ((local_res8[0].ControlBlock)->WeakRefCount == 0) {
      ::operator_delete(local_res8[0].ControlBlock,0x10);
    }
  }
  return true;
}

// Call @ 142ca7230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::ICoreProvider::AddColumn<FTypedElementLabelColumn>'::__l2::<lambda_1>,void,void_*,UScriptStruct_const_&>
::Call(void *param_1,void **param_2,UScriptStruct *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *param_2;
  puVar2 = *(undefined8 **)param_1;
  *puVar1 = 0;
  *puVar1 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  return;
}

// Call @ 142ca7260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::ICoreProvider::AddColumn<FWidgetPurposeReferenceColumn>'::__l2::<lambda_1>,void,void_*,UScriptStruct_const_&>
::Call(void *param_1,void **param_2,UScriptStruct *param_3)

{
  *(undefined8 *)*param_2 = **(undefined8 **)param_1;
  return;
}

// Call @ 142ca7280

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::VerifyWithDynamicColumn<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Editor::DataStorage::Queries::FConditions::
          VerifyWithDynamicColumn<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'
          ::__l2::<lambda_1>::operator()
                    (param_1,*param_2,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)param_3->WeakPtr);
  return bVar1;
}

// Call @ 142ca72a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::VerifyWithDynamicColumn<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Editor::DataStorage::Queries::FConditions::
          VerifyWithDynamicColumn<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'
          ::__l2::<lambda_1>::operator()
                    (param_1,*param_2,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)param_3->WeakPtr);
  return bVar1;
}

// Call @ 142ca72c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::VerifyWithDynamicColumn<UE::Editor::DataStorage::Queries::FColumnBase,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_2>_>'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Editor::DataStorage::Queries::FConditions::
          VerifyWithDynamicColumn<UE::Editor::DataStorage::Queries::FColumnBase,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_2>_>'
          ::__l2::<lambda_1>::operator()
                    (param_1,*param_2,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)param_3->WeakPtr);
  return bVar1;
}

// Call @ 142ca72e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::VerifyWithDynamicColumn<UE::Editor::DataStorage::Queries::FColumnBase,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Editor::DataStorage::Queries::FConditions::
          VerifyWithDynamicColumn<UE::Editor::DataStorage::Queries::FColumnBase,`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l16::<lambda_3>_>'
          ::__l2::<lambda_1>::operator()
                    (param_1,*param_2,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)param_3->WeakPtr);
  return bVar1;
}

// Call @ 142ca7300

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TypedElementUtil::BatchElementsByType'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this;
  FTypedElementInternalData *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  byte *pbVar5;
  ForElementType<FSetElementId> FVar6;
  FScriptContainerElement *pFVar7;
  FTypedElementId *pFVar8;
  byte abStackX_8 [8];
  int aiStackX_10 [2];
  byte *pbStackX_18;
  
  this = *(TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           **)param_1;
  if (param_2->DataPtr == (FTypedElementInternalData *)0x0) {
    pFVar8 = &FTypedElementId::Unset;
  }
  else {
    pFVar8 = &param_2->DataPtr->Id;
  }
  abStackX_8[0] = (pFVar8->field0_0x0)._s_0.TypeId;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    ((ulonglong)(this->HashSize - 1) & (ulonglong)abStackX_8[0]) * 4);
    if (iVar4 != -1) {
      do {
        pbVar5 = (byte *)((longlong)iVar4 * 0x20 + *(longlong *)&this->Elements);
        if (*pbVar5 == abStackX_8[0]) {
          if (pbVar5 != (byte *)0x0) goto LAB_142c9de8f;
          break;
        }
        iVar4 = *(int *)(pbVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  pbStackX_18 = abStackX_8;
  TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_char_&&>_>
            (this,(uint)aiStackX_10,(TKeyInitializer<unsigned_char_&&> *)(ulonglong)abStackX_8[0],
             (bool *)&pbStackX_18);
  pbVar5 = (byte *)((longlong)aiStackX_10[0] * 0x20 + *(longlong *)&this->Elements);
LAB_142c9de8f:
  if (((*(FTypedElementHandle **)(pbVar5 + 8) <= param_2) &&
      (param_2 < *(FTypedElementHandle **)(pbVar5 + 8) + *(int *)(pbVar5 + 0x14))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = *(int *)(pbVar5 + 0x10);
  if (iVar4 == *(int *)(pbVar5 + 0x14)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pbVar5 + 8),(int *)(pbVar5 + 0x14));
  }
  *(int *)(pbVar5 + 0x10) = iVar4 + 1;
  pFVar7 = ((ForAnyElementType *)(pbVar5 + 8))->Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(undefined4 *)(pFVar7 + 8) = 0xffffffff;
  this_00 = param_2->DataPtr;
  if (this_00 != (FTypedElementInternalData *)0x0) {
    *(FTypedElementInternalData **)pFVar7 = this_00;
    iVar4 = FTypedElementInternalData::AddRef(this_00,true);
    *(int *)(pFVar7 + 8) = iVar4;
  }
  return true;
}

// Call @ 142ca7310

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypedElementList<FScriptTypedElementHandle>::GetElementHandles'::__l2::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
::Call(void *param_1,FScriptTypedElementHandle *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  if ((pFVar2->Data <= param_2) &&
     (param_2 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = (param_2->InternalData).ControlBlock;
  *(FScriptTypedElementInternalDataControlBlock **)(pFVar2->Data + (longlong)iVar7 * 8) = pFVar3;
  if (pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    pFVar3->WeakRefCount = pFVar3->WeakRefCount + 1;
  }
  return true;
}

// Call @ 142ca7320

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypedElementList<FTypedElementHandle>::GetElementHandles'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FTypedElementInternalData *this;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  if (((FTypedElementHandle *)pFVar2->Data <= param_2) &&
     (param_2 < (FTypedElementHandle *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar7 = pFVar2->Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(undefined4 *)(pFVar7 + 8) = 0xffffffff;
  this = param_2->DataPtr;
  if (this != (FTypedElementInternalData *)0x0) {
    *(FTypedElementInternalData **)pFVar7 = this;
    iVar6 = FTypedElementInternalData::AddRef(this,true);
    *(int *)(pFVar7 + 8) = iVar6;
  }
  return true;
}

// Call @ 142ca7330

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l2::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  TSet<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this;
  int iVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_3->WeakPtr;
  this = *(TSet<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           **)param_1;
  iVar1 = TSet<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                    (this,local_res10[0].ObjectSerialNumber ^ local_res10[0].ObjectIndex,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_res10);
  if (iVar1 != -1) {
    return (longlong)iVar1 * 0x10 + *(longlong *)&this->Elements != 0;
  }
  return false;
}

// Call @ 142ca7390

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypedElementList<FTypedElementHandle>::Append'::__l5::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  TTypedElementList<FTypedElementHandle> *this;
  FTypedElementInternalData *pFVar1;
  FScriptContainerElement *pFVar2;
  ICounterCategory *pIVar3;
  FTypedElementReferences *pFVar4;
  undefined1 *puVar5;
  TObjectPtr<UObject> this_00;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  FTypedElementId *pFVar13;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar14;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar15;
  ICounterCategory *pIVar16;
  UClass *pUVar17;
  FRegisteredElementType *pFVar18;
  UClass *pUVar19;
  TObjectPtr<UObject>_u_0 *pTVar20;
  longlong *plVar21;
  int *piVar22;
  longlong lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  FTypedElementHandle *pFVar26;
  undefined4 uVar27;
  byte abStackX_10 [8];
  uint uStackX_18;
  FTypedElementId_u_0 aFStackX_20 [2];
  uint auStack_98 [2];
  FName FStack_90;
  longlong lStack_88;
  longlong lStack_80;
  UTypedElementRegistry *pUStack_78;
  FTypedElementInternalData *pFStack_70;
  int iStack_68;
  FTypedElementInternalData *pFStack_60;
  int iStack_58;
  longlong *plStack_50;
  
  this = *(TTypedElementList<FTypedElementHandle> **)param_1;
  pFVar1 = param_2->DataPtr;
  uVar27 = 0xffffffff;
  pFStack_70 = (FTypedElementInternalData *)0x0;
  iStack_68 = -1;
  if (pFVar1 != (FTypedElementInternalData *)0x0) {
    pFStack_70 = pFVar1;
    iStack_68 = FTypedElementInternalData::AddRef(pFVar1,true);
  }
  if (pFStack_70 == (FTypedElementInternalData *)0x0) {
    return true;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  if (pFStack_70 == (FTypedElementInternalData *)0x0) {
    pFVar13 = &FTypedElementId::Unset;
  }
  else {
    pFVar13 = &pFStack_70->Id;
  }
  aFStackX_20[0] = pFVar13->field0_0x0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            (&this->ElementCombinedIds,auStack_98,(bool *)aFStackX_20);
  pFVar2 = (this->ElementHandles).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&pFStack_70) &&
      ((FScriptContainerElement *)&pFStack_70 <
       pFVar2 + (longlong)(this->ElementHandles).ArrayMax * 0x10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  iVar11 = (this->ElementHandles).ArrayNum;
  piVar22 = &(this->ElementHandles).ArrayMax;
  if (iVar11 == *piVar22) {
    iVar11 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->ElementHandles).AllocatorInstance,piVar22);
  }
  (this->ElementHandles).ArrayNum = iVar11 + 1;
  pFVar26 = (FTypedElementHandle *)
            ((this->ElementHandles).AllocatorInstance.Data + (longlong)iVar11 * 0x10);
  pFVar26->DataPtr = pFStack_70;
  pFVar26->ReferenceId = iStack_68;
  pFStack_70 = (FTypedElementInternalData *)0x0;
  iStack_68 = -1;
  pUStack_78 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
  if ((pUStack_78 == (UTypedElementRegistry *)0x0) ||
     (pFVar26->DataPtr == (FTypedElementInternalData *)0x0)) goto LAB_142c9e909;
  abStackX_10[0] = (pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId;
  piVar22 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar22 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_ElementType,"ElementType");
    _Init_thread_footer(&::_TSS0);
  }
  FStack_90 = NAME_ElementType;
  pTVar14 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
  if (pTVar14 ==
      (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
       *)0x0) {
    pTVar15 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::AllocateMemoryForEmplace<FName_const_&>
                        (&(this->ElementCounts).CounterCategories,&FStack_90);
    pTVar14 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
               *)&pTVar15->field_0x8;
    *(uint *)&pTVar15->field_0x0 = FStack_90.ComparisonIndex.Value;
    *(uint *)&pTVar15->field_0x4 = FStack_90.Number;
    *pTVar14 = (ICounterCategory *)0x0;
LAB_142c9e46b:
    pIVar16 = ::operator_new(0x60);
    if (pIVar16 == (ICounterCategory *)0x0) {
      pIVar16 = (ICounterCategory *)0x0;
    }
    else {
      *pIVar16 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
      GetTypedElementCounterKeyName<unsigned_char>();
      pIVar16[2] = (ICounterCategory)0x0;
      pIVar16[3] = (ICounterCategory)0x0;
      pIVar16[6] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar16 + 7) = 0;
      *(undefined4 *)&pIVar16[7].field_0x4 = 0x80;
      *(undefined4 *)(pIVar16 + 8) = 0xffffffff;
      *(undefined4 *)&pIVar16[8].field_0x4 = 0;
      pIVar16[10] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar16 + 0xb) = 0;
    }
    pIVar3 = pTVar14->Ptr;
    pTVar14->Ptr = pIVar16;
    if (pIVar3 != (ICounterCategory *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  else if (pTVar14->Ptr == (ICounterCategory *)0x0) goto LAB_142c9e46b;
  pIVar16 = pTVar14->Ptr;
  pcVar7 = *(code **)((longlong)*pIVar16 + 0x18);
  if ((*piVar22 <
       `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName,L"uint8");
    _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                         __l3::_thread_safe_static_guard_0__);
  }
  (*pcVar7)(pIVar16,abStackX_10,
            `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
            KeyTypeName);
  pFStack_60 = (FTypedElementInternalData *)0x0;
  iStack_58 = -1;
  pUVar17 = UTypedElementCounterInterface::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar17);
  }
  iVar11 = iStack_58;
  if (pFStack_60 != (FTypedElementInternalData *)0x0) {
    lVar23 = (longlong)iStack_58;
    LOCK();
    pFStack_60->RefCount = pFStack_60->RefCount + -1;
    UNLOCK();
    pFVar4 = (pFStack_60->References).Ptr;
    if ((pFVar4 != (FTypedElementReferences *)0x0) && (iStack_58 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
      lStack_88 = *(longlong *)&(pFVar4->References).field_0x0;
      bVar8 = (byte)iVar11 & 0x1f;
      uStackX_18 = 1 << bVar8 | 1U >> 0x20 - bVar8;
      puVar24 = &(pFVar4->References).field_0x10;
      if (((iVar11 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar11)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar4->References).field_0x20;
      puVar25 = puVar24;
      if (puVar5 != (undefined1 *)0x0) {
        puVar25 = puVar5;
      }
      lStack_80 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (((*(uint *)(puVar25 + lStack_80) & uStackX_18) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (*(int *)&(pFVar4->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + lStack_88) = iVar11;
      }
      *(undefined4 *)(lVar23 * 0x108 + lStack_88) = 0xffffffff;
      if (*(int *)&(pFVar4->References).field_0x34 < 1) {
        uVar12 = 0xffffffff;
      }
      else {
        uVar12 = *(undefined4 *)&(pFVar4->References).field_0x30;
      }
      *(undefined4 *)(lVar23 * 0x108 + 4 + lStack_88) = uVar12;
      puVar5 = &(pFVar4->References).field_0x34;
      *(int *)puVar5 = *(int *)puVar5 + 1;
      *(int *)&(pFVar4->References).field_0x30 = iVar11;
      if (((iVar11 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar11)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar4->References).field_0x20;
      if (puVar5 != (undefined1 *)0x0) {
        puVar24 = puVar5;
      }
      *(uint *)(puVar24 + lStack_80) = *(uint *)(puVar24 + lStack_80) & ~uStackX_18;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
    }
  }
  plStack_50 = (longlong *)0x0;
  if (pFVar26->DataPtr != (FTypedElementInternalData *)0x0) {
    pFVar18 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (pUStack_78,(pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId);
    if ((pFVar18 == (FRegisteredElementType *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    if ((pUVar17 == (UClass *)0x0) ||
       (pUVar19 = Z_Construct_UClass_UInterface_NoRegister(), pUVar19 == (UClass *)0x0)) {
LAB_142c9e71d:
      pUVar17 = (UClass *)0x0;
    }
    else {
      iVar11 = (int)pUVar19->_padding_;
      if (((int)pUVar17->_padding_ < iVar11) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
          &pUVar19->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (!bVar9) goto LAB_142c9e71d;
    }
    pTVar20 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar18->Interfaces,(FName)pUVar17->_padding_)->field0_0x0;
    plVar21 = plStack_50;
    if ((pTVar20 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar20->DebugPtr,
       this_00.field0_0x0 != (UObject *)0x0)) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      pFVar1 = pFVar26->DataPtr;
      pUVar17 = UTypedElementCounterInterface::StaticClass();
      plVar21 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_00.field0_0x0,pUVar17);
      pFStack_60 = pFVar1;
      if (pFVar1 != (FTypedElementInternalData *)0x0) {
        iStack_58 = FTypedElementInternalData::AddRef(pFVar1,true);
      }
    }
    plStack_50 = plVar21;
    if ((pFStack_60 != (FTypedElementInternalData *)0x0) && (plStack_50 != (longlong *)0x0)) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50,&pFStack_60,&this->ElementCounts);
    }
  }
  iVar11 = iStack_58;
  if (pFStack_60 != (FTypedElementInternalData *)0x0) {
    lVar23 = (longlong)iStack_58;
    LOCK();
    pFStack_60->RefCount = pFStack_60->RefCount + -1;
    UNLOCK();
    pFVar4 = (pFStack_60->References).Ptr;
    if ((pFVar4 != (FTypedElementReferences *)0x0) && (iStack_58 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
      lVar6 = *(longlong *)&pFVar4->References;
      puVar24 = &(pFVar4->References).field_0x10;
      bVar8 = (byte)iVar11 & 0x1f;
      uStackX_18 = 1 << bVar8 | 1U >> 0x20 - bVar8;
      if (((iVar11 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar11)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar4->References).field_0x20;
      puVar25 = puVar24;
      if (puVar5 != (undefined1 *)0x0) {
        puVar25 = puVar5;
      }
      pUStack_78 = (UTypedElementRegistry *)
                   ((longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      if (((*(uint *)(puVar25 + (longlong)(pUStack_78->RegisteredElementTypes + -6)) & uStackX_18)
           == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (*(int *)&(pFVar4->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + lVar6) = iVar11;
      }
      *(undefined4 *)(lVar23 * 0x108 + lVar6) = 0xffffffff;
      if (0 < *(int *)&(pFVar4->References).field_0x34) {
        uVar27 = *(undefined4 *)&(pFVar4->References).field_0x30;
      }
      *(undefined4 *)(lVar23 * 0x108 + 4 + lVar6) = uVar27;
      puVar5 = &(pFVar4->References).field_0x34;
      *(int *)puVar5 = *(int *)puVar5 + 1;
      *(int *)&(pFVar4->References).field_0x30 = iVar11;
      if (((iVar11 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar11)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar4->References).field_0x20;
      if (puVar5 != (undefined1 *)0x0) {
        puVar24 = puVar5;
      }
      *(uint *)(puVar24 + (longlong)(pUStack_78->RegisteredElementTypes + -6)) =
           *(uint *)(puVar24 + (longlong)(pUStack_78->RegisteredElementTypes + -6)) & ~uStackX_18;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
    }
  }
LAB_142c9e909:
  TTypedElementList<FTypedElementHandle>::NoteListChanged(this,Added,pFVar26);
  if (pFStack_70 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(pFStack_70,iStack_68);
  }
  return true;
}

// Call @ 142ca73a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypedElementList<FScriptTypedElementHandle>::CountElements'::__l5::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
::Call(void *param_1,FScriptTypedElementHandle *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return true;
}

// Call @ 142ca73b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypedElementList<FTypedElementHandle>::CountElements'::__l5::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return true;
}

// Call @ 142ca73c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypedElementList<FScriptTypedElementHandle>::HasElements'::__l5::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
::Call(void *param_1,FScriptTypedElementHandle *param_2)

{
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 142ca73d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TTypedElementList<FTypedElementHandle>::HasElements'::__l5::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 142ca73e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::TypedElementFramework::ConvertToNativeTypedElementList'::__l8::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
::Call(void *param_1,FScriptTypedElementHandle *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this;
  longlong *plVar4;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  FTypedElementHandle FStack_28;
  
  pFVar3 = (param_2->InternalData).ControlBlock;
  if ((pFVar3 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (this = pFVar3->Data, this == (FTypedElementInternalData *)0x0)) {
    return true;
  }
  FStack_28.DataPtr = this;
  iVar10 = FTypedElementInternalData::AddRef(this,true);
  plVar4 = *(longlong **)param_1;
  FStack_28.ReferenceId = iVar10;
  if (*plVar4 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  TTypedElementList<FTypedElementHandle>::Add
            ((TTypedElementList<FTypedElementHandle> *)*plVar4,&FStack_28);
  if (this != (FTypedElementInternalData *)0x0) {
    LOCK();
    this->RefCount = this->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (this->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (iVar10 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar5 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar7 = (byte)iVar10 & 0x1f;
      uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if ((iVar10 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      puVar12 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if ((*(uint *)(puVar12 + lVar2) & uVar14) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar5) =
             iVar10;
      }
      uVar11 = 0xffffffff;
      puVar13 = (undefined4 *)((longlong)iVar10 * 0x108 + lVar5);
      *puVar13 = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar11 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      puVar13[1] = uVar11;
      puVar12 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar10;
      if ((iVar10 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      puVar12 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar14;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
  }
  return true;
}

// Call @ 142ca73f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::TypedElementFramework::ConvertToScriptTypedElementList'::__l8::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  longlong *plVar1;
  TTypedElementList<FScriptTypedElementHandle> *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptTypedElementHandle FVar5;
  void *pvStackX_8;
  
  plVar1 = *(longlong **)param_1;
  if ((*plVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  this = (TTypedElementList<FScriptTypedElementHandle> *)*plVar1;
  FVar5 = UTypedElementRegistry::CreateScriptHandle
                    ((UTypedElementRegistry *)**(undefined8 **)((longlong)param_1 + 8),
                     (FTypedElementId *)&pvStackX_8);
  TTypedElementList<FScriptTypedElementHandle>::AddElementImpl
            (this,(FScriptTypedElementHandle *)FVar5.InternalData.ControlBlock);
  if ((pvStackX_8 != (void *)0x0) &&
     (*(int *)((longlong)pvStackX_8 + 8) = *(int *)((longlong)pvStackX_8 + 8) + -1,
     *(int *)((longlong)pvStackX_8 + 8) == 0)) {
    ::operator_delete(pvStackX_8,0x10);
  }
  return true;
}

// Call @ 142ca7400

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTypedElementRegistryPerfTest::RunTest'::__l12::<lambda_1>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  UTypedElementRegistry::GetElementInterface<ITestTypedElementInterfaceA>
            (*(UTypedElementRegistry **)param_1,param_2);
  return true;
}

// Call @ 142ca7420

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>::operator()
                    (param_1,*param_2,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)param_3->WeakPtr);
  return bVar1;
}

// Call @ 142ca7440

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>::operator()
                    (param_1,*param_2,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)param_3->WeakPtr);
  return bVar1;
}

// Call @ 142ca7460

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>::operator()
                    (param_1,*param_2,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)param_3->WeakPtr);
  return bVar1;
}

// Call @ 142ca7480

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_1>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *pTVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_3->WeakPtr;
  this = (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)**(longlong **)param_1;
  pTVar2 = this + (longlong)(int)(*(longlong **)param_1)[1] * 2;
  while( true ) {
    if (this == pTVar2) {
      return false;
    }
    bVar1 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
            UEOpEquals<UScriptStruct_const_,bool>
                      (this,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_res10);
    if (bVar1) break;
    this = this + 2;
  }
  return true;
}

// Call @ 142ca74f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTypedElementRegistryPerfTest::RunTest'::__l13::<lambda_2>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  uint *puVar1;
  longlong lVar2;
  UTypedElementRegistry *this;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  code *pcVar4;
  byte bVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  HANDLE *ppvVar9;
  LONG LVar10;
  longlong lVar11;
  uint uVar12;
  TObjectPtr<UClass>_u_0 TStackX_8;
  TTypedElement<ITestTypedElementInterfaceA> TStack_48;
  
  this = *(UTypedElementRegistry **)param_1;
  LVar10 = -1;
  TStack_48._0_8_ = 0;
  TStack_48._8_4_ = -1;
  TStack_48._16_8_ = 0;
  TStackX_8.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (TStackX_8.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)TStackX_8.DebugPtr);
  }
  UTypedElementRegistry::GetElementImpl<ITestTypedElementInterfaceA>
            (this,param_2,(TSubclassOf<UInterface> *)&TStackX_8.ObjectPtr,&TStack_48);
  uVar6 = TStack_48._8_4_;
  if (TStack_48._0_8_ != 0) {
    LOCK();
    *(int *)(TStack_48._0_8_ + 0xc) = *(int *)(TStack_48._0_8_ + 0xc) + -1;
    UNLOCK();
    lpCriticalSection = *(LPCRITICAL_SECTION *)(TStack_48._0_8_ + 0x10);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      lVar11 = (longlong)(int)TStack_48._8_4_;
      if (TStack_48._8_4_ != -1) {
        EnterCriticalSection(lpCriticalSection);
        p_Var3 = lpCriticalSection[1].DebugInfo;
        bVar5 = (byte)uVar6 & 0x1f;
        uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        if (((int)uVar6 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar6)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        lVar2 = (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4;
        ppvVar9 = (HANDLE *)lpCriticalSection[1].SpinCount;
        if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
          ppvVar9 = &lpCriticalSection[1].OwningThread;
        }
        if ((*(uint *)((longlong)ppvVar9 + lVar2) & uVar12) == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        if (lpCriticalSection[2].RecursionCount != 0) {
          *(undefined4 *)((longlong)lpCriticalSection[2].LockCount * 0x108 + (longlong)p_Var3) =
               uVar6;
        }
        *(undefined4 *)(lVar11 * 0x108 + (longlong)p_Var3) = 0xffffffff;
        if (0 < lpCriticalSection[2].RecursionCount) {
          LVar10 = lpCriticalSection[2].LockCount;
        }
        *(LONG *)(lVar11 * 0x108 + 4 + (longlong)p_Var3) = LVar10;
        lpCriticalSection[2].RecursionCount = lpCriticalSection[2].RecursionCount + 1;
        lpCriticalSection[2].LockCount = uVar6;
        if (((int)uVar6 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar6)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
        }
        ppvVar9 = (HANDLE *)lpCriticalSection[1].SpinCount;
        if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
          ppvVar9 = &lpCriticalSection[1].OwningThread;
        }
        puVar1 = (uint *)((longlong)ppvVar9 + lVar2);
        *puVar1 = *puVar1 & ~uVar12;
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  return true;
}

// Call @ 142ca7500

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>::operator()
                    (param_1,*param_2,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)param_3->WeakPtr);
  return bVar1;
}

// Call @ 142ca7520

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>::operator()
                    (param_1,*param_2,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)param_3->WeakPtr);
  return bVar1;
}

// Call @ 142ca7540

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::FConditions::Verify'::__l14::<lambda_2>,bool,unsigned_char,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
::Call(void *param_1,uchar *param_2,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *param_3)

{
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *pTVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_3->WeakPtr;
  pTVar1 = (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)**(longlong **)param_1;
  lVar2 = (*(longlong **)param_1)[1];
  this = pTVar1;
  do {
    if (this == pTVar1 + (int)lVar2) {
      iVar4 = -1;
LAB_142ca7591:
      return iVar4 != -1;
    }
    bVar3 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
            UEOpEquals<UScriptStruct_const_,bool>
                      (this,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_res10);
    if (bVar3) {
      iVar4 = (int)((longlong)this - (longlong)pTVar1 >> 3);
      goto LAB_142ca7591;
    }
    this = this + 1;
  } while( true );
}

// Call @ 142ca75c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTypedElementRegistryPerfTest::RunTest'::__l14::<lambda_3>,bool,TTypedElement<ITestTypedElementInterfaceA>_const_&>
::Call(void *param_1,TTypedElement<ITestTypedElementInterfaceA> *param_2)

{
  return true;
}

// Call @ 142ca75d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_5>,bool,FTypedElementHandle_const_&>
::Call(void *param_1,FTypedElementHandle *param_2)

{
  `FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_4>::operator()(*(void **)param_1,param_2)
  ;
  return true;
}

// Call @ 142ca75f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_6>,bool,TTypedElement<ITestTypedElementInterfaceA>_const_&>
::Call(void *param_1,TTypedElement<ITestTypedElementInterfaceA> *param_2)

{
  `FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_1>::operator()(*(void **)param_1,param_2)
  ;
  return true;
}

// Call @ 142ca7610

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTypedElementRegistrySmokeTest::RunTest'::__l2::<lambda_7>,bool,TTypedElement<ITestTypedElementInterfaceC>_const_&>
::Call(void *param_1,TTypedElement<ITestTypedElementInterfaceC> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  (**(code **)(**(longlong **)&param_2->field_0x10 + 0x18))();
  if (*(longlong *)&param_2->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InterfacePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                       ,0x155,L"Interface is null!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (**(code **)(**(longlong **)&param_2->field_0x10 + 0x18))
            (*(longlong **)&param_2->field_0x10,param_2);
  return true;
}

// Call @ 142cef2b0

TArrayView<unsigned___int64_const_,int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),TArrayView<unsigned___int64_const_,int>_>
::Call(TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__,void *param_1)

{
  (**(code **)param_1)();
  return __return_storage_ptr__;
}

// Call @ 142cef2d0

uint __cdecl
UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),unsigned_int>::Call
          (void *param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142cef2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)();
  return uVar1;
}

// Call @ 142cef2e0

uint __cdecl
UE::Core::Private::Function::TFunctionRefCaller<unsigned_int_(__cdecl*)(void),unsigned_int>::Call
          (void *param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142cef2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)();
  return uVar1;
}

// Call @ 142cef2f0

ulong64 __cdecl
UE::Core::Private::Function::TFunctionRefCaller<unsigned___int64_(__cdecl*)(void),unsigned___int64>
::Call(void *param_1)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142cef2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)();
  return uVar1;
}

// Call @ 142cef300

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),bool,TArrayView<UScriptStruct_const_*_const,int>_>
::Call(void *param_1,TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  undefined1 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  uVar1 = (**(code **)param_1)(&local_18);
  return (bool)uVar1;
}

// Call @ 142cef330

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_18>,unsigned___int64>
::Call(void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return 0;
}

// Call @ 142cef340

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_19>,bool,TArrayView<UScriptStruct_const_*_const,int>_>
::Call(void *param_1,TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 142cef350

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,IQueryContext *param_3)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTEDSProcessorTestsReferenceColumn *pFStackX_8;
  ulong64 *apuStack_18 [2];
  
  FVar2 = (param_2->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_2->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_2->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_2->SelectionTypes;
  }
  (**(code **)((longlong)*param_3 + 0x30))(param_3,1,&pFStackX_8,FVar1,FVar2);
  (**(code **)((longlong)*param_3 + 0x10))(param_3,apuStack_18);
  `UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>::operator()
            (param_1,param_3,apuStack_18[0],pFStackX_8);
  return;
}

// Call @ 142cef360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,IQueryContext *param_3)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTest_PingPongPrePhys *pFStackX_8;
  ulong64 *apuStack_18 [2];
  
  FVar2 = (param_2->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_2->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_2->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_2->SelectionTypes;
  }
  (**(code **)((longlong)*param_3 + 0x30))(param_3,1,&pFStackX_8,FVar1,FVar2);
  (**(code **)((longlong)*param_3 + 0x10))(param_3,apuStack_18);
  `UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>::operator()
            (param_1,param_3,apuStack_18[0],pFStackX_8);
  return;
}

// Call @ 142cef370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,IQueryContext *param_3)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTEDSProcessorTestsReferenceColumn *pFStackX_8;
  ulong64 *apuStack_18 [2];
  
  FVar2 = (param_2->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_2->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_2->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_2->SelectionTypes;
  }
  (**(code **)((longlong)*param_3 + 0x30))(param_3,1,&pFStackX_8,FVar1,FVar2);
  (**(code **)((longlong)*param_3 + 0x10))(param_3,apuStack_18);
  `UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()
            (param_1,param_3,apuStack_18[0],pFStackX_8);
  return;
}

// Call @ 142cef380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,IQueryContext *param_3)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTest_PingPongDurPhys *pFStackX_8;
  ulong64 *apuStack_18 [2];
  
  FVar2 = (param_2->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_2->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_2->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_2->SelectionTypes;
  }
  (**(code **)((longlong)*param_3 + 0x30))(param_3,1,&pFStackX_8,FVar1,FVar2);
  (**(code **)((longlong)*param_3 + 0x10))(param_3,apuStack_18);
  `UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>::operator()
            (param_1,param_3,apuStack_18[0],pFStackX_8);
  return;
}

// Call @ 142cef390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,IQueryContext *param_3)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTest_PingPongPostPhys *pFStackX_8;
  ulong64 *apuStack_18 [2];
  
  FVar2 = (param_2->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_2->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_2->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_2->SelectionTypes;
  }
  (**(code **)((longlong)*param_3 + 0x30))(param_3,1,&pFStackX_8,FVar1,FVar2);
  (**(code **)((longlong)*param_3 + 0x10))(param_3,apuStack_18);
  `UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>::operator()
            (param_1,param_3,apuStack_18[0],pFStackX_8);
  return;
}

// Call @ 142cef3a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<int>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<int> *param_2,IContextContract *param_3,IQueryFunctionResponse *param_4
      ,_func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
       **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l154::<lambda_25>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TResult<int>_&,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>,int,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l154::<lambda_25>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef3e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l105::<lambda_10>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l105::<lambda_10>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l109::<lambda_11>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l109::<lambda_11>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l117::<lambda_13>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l117::<lambda_13>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef4a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l121::<lambda_14>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnString_&,FTestColumnInt_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l121::<lambda_14>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef4e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l125::<lambda_15>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt_const_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l125::<lambda_15>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::E]::<lambda_17>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::E]::<lambda_17>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l3::<lambda_1>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l3::<lambda_1>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef5a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::L]::<lambda_20>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_[::L]::<lambda_20>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef5e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l158::<lambda_27>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<enum_UE::Editor::DataStorage::Queries::EFlowControl_&,FTestColumnInt_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l158::<lambda_27>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l33::<lambda_4>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l33::<lambda_4>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l43::<lambda_5>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt_&,FTestColumnString_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l43::<lambda_5>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef6a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l53::<lambda_6>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnInt_&,FTestColumnString_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l53::<lambda_6>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef6e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l69::<lambda_7>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<FTestColumnInt_&,UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,FTestColumnString_const_&>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l69::<lambda_7>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l85::<lambda_8>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TQueryContext<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnInt>,UE::Editor::DataStorage::Queries::TBatch<FTestColumnString_const_>_>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l85::<lambda_8>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<void>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<void> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l101::<lambda_9>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,void,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l101::<lambda_9>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef7a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<bool>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<bool> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l113::<lambda_12>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l113::<lambda_12>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef7e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<bool>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<bool> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l146::<lambda_23>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l146::<lambda_23>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<bool>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<bool> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l150::<lambda_24>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<UE::Editor::DataStorage::Queries::TResult<bool>_&>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l150::<lambda_24>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef860

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<bool>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<bool> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l13::<lambda_2>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l13::<lambda_2>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef8a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::Queries::TResult<bool>_&,UE::Editor::DataStorage::Queries::IContextContract_&,UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,bool_(__cdecl*)(UE::Editor::DataStorage::Queries::IQueryFunctionResponse_&,TArrayView<void_const_*,int>,TArrayView<void_*,int>)>
::Call(void *param_1,TResult<bool> *param_2,IContextContract *param_3,
      IQueryFunctionResponse *param_4,
      _func___cdecl_bool_IQueryFunctionResponse_ptr_TArrayView<void_const_ptr,int>_TArrayView<void_ptr,int>
      **param_5)

{
  Editor::DataStorage::Queries::Private::
  CallBody<UE::Editor::DataStorage::Queries::Private::TFunctionInfo<_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l23::<lambda_3>_>,UE::Editor::DataStorage::Queries::Private::TArgumentInfo<>,bool,_UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody_::__l23::<lambda_3>_const_&>
            (param_2,param_3,param_4,*param_5,param_1);
  return;
}

// Call @ 142cef8e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,IDirectQueryContext *param_3)

{
  ulong64 *local_18 [2];
  
  (**(code **)((longlong)*param_3 + 0x10))(param_3,local_18);
  `UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>::operator()
            (param_1,param_3,local_18[0]);
  return;
}

// Call @ 142cef920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,IDirectQueryContext *param_3)

{
  ulong64 *local_18 [2];
  
  (**(code **)((longlong)*param_3 + 0x10))(param_3,local_18);
  `UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>::
  operator()(param_1,param_3,local_18[0]);
  return;
}

// Call @ 142cef960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::ISubqueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,ISubqueryContext *param_3)

{
  Editor::DataStorage::Queries::Private::
  CallQueryFunction_Expand<1,UE::Editor::DataStorage::ISubqueryContext,__UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,__UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors_::__l2::<lambda_2>::operator()_::__l5::<lambda_1>,UE::Editor::DataStorage::ISubqueryContext_&,unsigned___int64,FTEDSProcessorTestsReferenceColumn_const_&>
            (param_2,param_3,param_1,(pmf_bf9a5c29)0x142ce77c0);
  return;
}

// Call @ 142cef990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  Select *pSVar1;
  FSimpleQuery FVar2;
  FQueryDescription *pFVar3;
  undefined1 auStack_2678 [32];
  undefined1 auStack_2658 [16];
  undefined1 auStack_2648 [3280];
  FQueryDescription FStack_1978;
  FQueryDescription FStack_cc8;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce5fe0;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)(auStack_2648 + 0x20));
  FVar2 = Editor::DataStorage::Queries::Select::Where(pSVar1);
  auStack_2658._0_8_ = FTestColumnA::StaticStruct();
  auStack_2658._8_8_ = FTestTagColumnA::StaticStruct();
  auStack_2648._8_4_ = 2;
  auStack_2648._0_8_ = auStack_2658;
  Editor::DataStorage::Queries::FSimpleQuery::All
            ((FSimpleQuery *)FVar2.Query,(TArrayView<UScriptStruct_const_*_const,int> *)auStack_2648
            );
  pFVar3 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar2.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cc8,pFVar3);
  Editor::DataStorage::FQueryDescription::~FQueryDescription
            ((FQueryDescription *)(auStack_2648 + 0x20));
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)(auStack_2648 + 0x20));
  FVar2 = Editor::DataStorage::Queries::Select::Where(pSVar1);
  auStack_2648._0_8_ = FTestColumnB::StaticStruct();
  auStack_2648._8_8_ = FTestTagColumnB::StaticStruct();
  auStack_2658._8_4_ = 2;
  auStack_2658._0_8_ = auStack_2648;
  Editor::DataStorage::Queries::FSimpleQuery::All
            ((FSimpleQuery *)FVar2.Query,(TArrayView<UScriptStruct_const_*_const,int> *)auStack_2658
            );
  pFVar3 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar2.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1978,pFVar3);
  Editor::DataStorage::FQueryDescription::~FQueryDescription
            ((FQueryDescription *)(auStack_2648 + 0x20));
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_cc8,&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cc8);
  return;
}

// Call @ 142cef9a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_68;
  FSourceLocation FStack_58;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FAutomationSpecBase *pFStack_20;
  undefined8 uStack_10;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,L"Simple");
  FStack_58.Impl._Line = 0x9d;
  FStack_58.Impl._Column = 6;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_1>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_38,
             &FStack_58);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,L"Complex");
  FStack_58.Impl._Line = 0xae;
  FStack_58.Impl._Column = 6;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_1>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_38,
             &FStack_58);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 142cef9b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterCommands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,unsigned___int64>
::Call(void *param_1,ulong64 *param_2)

{
  return;
}

// Call @ 142cef9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  Select *pSVar1;
  UScriptStruct *pUVar2;
  FQueryDescription *pFVar3;
  undefined1 auStack_2648 [32];
  FQueryDescription FStack_2628;
  FQueryDescription FStack_1978;
  FQueryDescription FStack_cc8;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce62b0;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_2648;
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  pUVar2 = FTestColumnA::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadOnly(pSVar1,pUVar2);
  pFVar3 = Editor::DataStorage::Queries::Select::Compile(pSVar1);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cc8,pFVar3);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  pUVar2 = FTestColumnB::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadOnly(pSVar1,pUVar2);
  pFVar3 = Editor::DataStorage::Queries::Select::Compile(pSVar1);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1978,pFVar3);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_cc8,&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cc8);
  return;
}

// Call @ 142cef9d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
  bool bVar1;
  Select *pSVar2;
  FSimpleQuery FVar3;
  UScriptStruct *pUVar4;
  FQueryDescription *pFVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_2678 [32];
  FString FStack_2658;
  FString FStack_2648;
  FText FStack_2638;
  FQueryDescription FStack_2628;
  FQueryDescription FStack_1978;
  FQueryDescription FStack_cc8;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce63c2;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar2 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar2);
  pUVar4 = FTestColumnA::StaticStruct();
  Editor::DataStorage::Queries::FSimpleQuery::All((FSimpleQuery *)FVar3.Query,pUVar4);
  pFVar5 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cc8,pFVar5);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  pSVar2 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar2);
  pUVar4 = FTestColumnA::StaticStruct();
  Editor::DataStorage::Queries::FSimpleQuery::None((FSimpleQuery *)FVar3.Query,pUVar4);
  pFVar5 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1978,pFVar5);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_2648,
                     L"Conflicting conditions .All<FTestColumnA>() and .None<FTestColumnA>()");
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_2628,&FStack_cc8);
  FText::FText(&FStack_2638);
  bVar1 = Editor::DataStorage::Queries::MergeQueries(&FStack_2628,&FStack_1978,&FStack_2638);
  ::FString::PrintfImpl(&FStack_2658,L"Expected merge to fail because of %s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (FStack_2658.Data.ArrayNum != 0) {
    FVar6.Data = FStack_2658.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this,(wchar_t *)FVar6.Data,bVar1);
  if (FStack_2658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2658.Data.AllocatorInstance.Data);
  }
  if (FStack_2638.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_2638.TextData.Reference + 0x10))();
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  if (FStack_2648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2648.Data.AllocatorInstance.Data);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cc8);
  return;
}

// Call @ 142cef9e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_48;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FAutomationSpecBase *pFStack_20;
  undefined8 uStack_10;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  apcStack_38[0] =
       TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  uStack_10 = 0;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_48,"Where()");
  FAutomationSpecBase::Describe(pFVar1,&FStack_48,(TFunction<void___cdecl(void)> *)apcStack_38);
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_48,"Select()");
  FAutomationSpecBase::Describe(pFVar1,&FStack_48,(TFunction<void___cdecl(void)> *)apcStack_38);
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_48,"FConditions");
  FAutomationSpecBase::Describe(pFVar1,&FStack_48,(TFunction<void___cdecl(void)> *)apcStack_38);
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_48,"Combination");
  FAutomationSpecBase::Describe(pFVar1,&FStack_48,(TFunction<void___cdecl(void)> *)apcStack_38);
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 142cef9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  Select *pSVar1;
  FWeakObjectPtr FVar2;
  FQueryConditionQuery FVar3;
  FQueryDescription *pFVar4;
  undefined1 auStack_2948 [32];
  FWeakObjectPtr aFStack_2928 [2];
  FColumnBase FStack_2918;
  FColumnBase FStack_2908;
  undefined1 auStack_28f8 [272];
  void *pvStack_27e8;
  void *pvStack_27b8;
  void *pvStack_2768;
  void *pvStack_2658;
  FQueryDescription FStack_2638;
  FQueryDescription FStack_1988;
  FQueryDescription FStack_cd8;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x142ce6720;
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_2948;
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2638);
  FStack_2918.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestTagColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2918.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2918.TypeInfo.WeakPtr);
  }
  aFStack_2928[0].ObjectIndex = 0;
  aFStack_2928[0].ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2918.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2918.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(aFStack_2928,(FObjectPtr)&FStack_2918);
  FStack_2908.TypeInfo.WeakPtr = aFStack_2928[0];
  FStack_2908.Identifier.ComparisonIndex.Value = 0;
  FStack_2908.Identifier.Number = 0;
  FVar2 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  aFStack_2928[0].ObjectIndex = 0;
  aFStack_2928[0].ObjectSerialNumber = 0;
  FStack_2918.TypeInfo.WeakPtr = FVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(aFStack_2928,(FObjectPtr)&FStack_2918);
  FStack_2918.TypeInfo.WeakPtr = aFStack_2928[0];
  FStack_2918.Identifier.ComparisonIndex.Value = 0;
  FStack_2918.Identifier.Number = 0;
  Editor::DataStorage::Queries::operator&&
            ((FConditions *)(auStack_28f8 + 0x10),&FStack_2918,&FStack_2908);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar1,(FConditions *)auStack_28f8);
  pFVar4 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cd8,pFVar4);
  if (pvStack_2658 != (void *)0x0) {
    FMemory::Free(pvStack_2658);
  }
  if (pvStack_2768 != (void *)0x0) {
    FMemory::Free(pvStack_2768);
  }
  if (pvStack_27b8 != (void *)0x0) {
    FMemory::Free(pvStack_27b8);
  }
  if (pvStack_27e8 != (void *)0x0) {
    FMemory::Free(pvStack_27e8);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2638);
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2638);
  FVar2 = (FWeakObjectPtr)FTestTagColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  aFStack_2928[0].ObjectIndex = 0;
  aFStack_2928[0].ObjectSerialNumber = 0;
  FStack_2918.TypeInfo.WeakPtr = FVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(aFStack_2928,(FObjectPtr)&FStack_2918);
  FStack_2908.TypeInfo.WeakPtr = aFStack_2928[0];
  FStack_2908.Identifier.ComparisonIndex.Value = 0;
  FStack_2908.Identifier.Number = 0;
  FVar2 = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  aFStack_2928[0].ObjectIndex = 0;
  aFStack_2928[0].ObjectSerialNumber = 0;
  FStack_2918.TypeInfo.WeakPtr = FVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(aFStack_2928,(FObjectPtr)&FStack_2918);
  FStack_2918.TypeInfo.WeakPtr = aFStack_2928[0];
  FStack_2918.Identifier.ComparisonIndex.Value = 0;
  FStack_2918.Identifier.Number = 0;
  Editor::DataStorage::Queries::operator&&
            ((FConditions *)(auStack_28f8 + 0x10),&FStack_2918,&FStack_2908);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar1,(FConditions *)auStack_28f8);
  pFVar4 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1988,pFVar4);
  if (pvStack_2658 != (void *)0x0) {
    FMemory::Free(pvStack_2658);
  }
  if (pvStack_2768 != (void *)0x0) {
    FMemory::Free(pvStack_2768);
  }
  if (pvStack_27b8 != (void *)0x0) {
    FMemory::Free(pvStack_27b8);
  }
  if (pvStack_27e8 != (void *)0x0) {
    FMemory::Free(pvStack_27e8);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2638);
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_cd8,&FStack_1988);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1988);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cd8);
  return;
}

// Call @ 142cefa00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  Select *pSVar2;
  UScriptStruct *pUVar3;
  FSimpleQuery FVar4;
  FQueryDescription *pFVar5;
  undefined1 auStack_2678 [32];
  undefined1 auStack_2658 [24];
  undefined1 auStack_2640 [3272];
  FQueryDescription FStack_1978;
  FQueryDescription FStack_cc8;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce6ab2;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar2 = Editor::DataStorage::Queries::Select::Select((Select *)(auStack_2640 + 0x18));
  pUVar3 = FTestColumnA::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadOnly(pSVar2,pUVar3);
  FVar4 = Editor::DataStorage::Queries::Select::Where(pSVar2);
  auStack_2640._0_8_ = FTestColumnB::StaticStruct();
  auStack_2640._8_8_ = FTestTagColumnA::StaticStruct();
  auStack_2658._8_4_ = 2;
  auStack_2658._0_8_ = auStack_2640;
  Editor::DataStorage::Queries::FSimpleQuery::All
            ((FSimpleQuery *)FVar4.Query,(TArrayView<UScriptStruct_const_*_const,int> *)auStack_2658
            );
  pFVar5 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar4.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cc8,pFVar5);
  Editor::DataStorage::FQueryDescription::~FQueryDescription
            ((FQueryDescription *)(auStack_2640 + 0x18));
  pSVar2 = Editor::DataStorage::Queries::Select::Select((Select *)(auStack_2640 + 0x18));
  lVar1 = *(longlong *)param_1;
  auStack_2658._0_8_ = FTestColumnDynamic::StaticStruct();
  auStack_2658._8_8_ = *(FName *)(lVar1 + 0x1d0);
  Editor::DataStorage::Queries::Select::ReadWrite(pSVar2,(FDynamicColumnDescription *)auStack_2658);
  FVar4 = Editor::DataStorage::Queries::Select::Where(pSVar2);
  auStack_2640._0_8_ = FTestColumnB::StaticStruct();
  auStack_2640._8_8_ = FTestColumnC::StaticStruct();
  auStack_2640._16_8_ = FTestColumnD::StaticStruct();
  auStack_2658._8_4_ = 3;
  auStack_2658._0_8_ = auStack_2640;
  Editor::DataStorage::Queries::FSimpleQuery::Any
            ((FSimpleQuery *)FVar4.Query,(TArrayView<UScriptStruct_const_*_const,int> *)auStack_2658
            );
  pFVar5 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar4.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1978,pFVar5);
  Editor::DataStorage::FQueryDescription::~FQueryDescription
            ((FQueryDescription *)(auStack_2640 + 0x18));
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_cc8,&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cc8);
  return;
}

// Call @ 142cefa10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FName *pFVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  FName FStackX_8;
  undefined1 auStack_28 [16];
  undefined8 *puStack_18;
  undefined4 uStack_10;
  
  pFVar5 = ::FName::FName(&FStackX_8,"Identifier1");
  *(FName *)(*(longlong *)param_1 + 0x1d0) = *pFVar5;
  pFVar5 = ::FName::FName(&FStackX_8,"Identifier2");
  *(FName *)(*(longlong *)param_1 + 0x1d8) = *pFVar5;
  pFVar5 = ::FName::FName(&FStackX_8,"Identifier3");
  *(FName *)(*(longlong *)param_1 + 0x1e0) = *pFVar5;
  FVar3 = Editor::DataStorage::StorageFeatureName;
  pIVar6 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6);
  if (iVar4 < 1) {
    lVar8 = 0;
  }
  else {
    pIVar6 = IModularFeatures::Get();
    lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,FVar3,0);
    lVar8 = lVar7 + -8;
    if (lVar7 == 0) {
      lVar8 = 0;
    }
  }
  *(longlong *)(*(longlong *)param_1 + 0x198) = lVar8;
  this = *(FAutomationTestBase **)param_1;
  lVar8 = *(longlong *)&this[1].ExpectedMessages.Elements.field_0x10;
  ::FString::FString((FString *)auStack_28,"");
  pUVar9 = (UScriptStruct *)L"";
  if (auStack_28._8_4_ != 0) {
    pUVar9 = (UScriptStruct *)auStack_28._0_8_;
  }
  FAutomationTestBase::TestTrue(this,(wchar_t *)pUVar9,lVar8 != 0);
  if ((UScriptStruct *)auStack_28._0_8_ != (UScriptStruct *)0x0) {
    FMemory::Free((void *)auStack_28._0_8_);
  }
  lVar8 = *(longlong *)param_1;
  lVar7 = (**(code **)(**(longlong **)(lVar8 + 0x198) + 0x20))
                    (*(longlong **)(lVar8 + 0x198),lVar8 + 0x1a0);
  if (lVar7 == -1) {
    plVar1 = *(longlong **)(lVar8 + 0x198);
    pcVar2 = *(code **)(*plVar1 + 0x18);
    auStack_28._0_8_ = FTestColumnA::StaticStruct();
    auStack_28._8_8_ = FTestTagColumnA::StaticStruct();
    puStack_18 = (undefined8 *)auStack_28;
    uStack_10 = 2;
    lVar7 = (*pcVar2)(plVar1,&puStack_18,lVar8 + 0x1a0);
  }
  *(longlong *)(*(longlong *)param_1 + 0x1a8) = lVar7;
  Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterTestTableRows
            (*(QueryMergeTestFixture **)param_1);
  return;
}

// Call @ 142cefa20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 142cefa40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::<lambda_5>::operator()'::__l5::<lambda_1>,void,unsigned___int64>
::Call(void *param_1,ulong64 *param_2)

{
  longlong *plVar1;
  ulong64 uVar2;
  code *pcVar3;
  UPackage *pUVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)param_1;
  uVar2 = *param_2;
  pcVar3 = *(code **)(*plVar1 + 0xf0);
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar4 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar4,
                         L"Test_PingPongPrePhys");
  }
  puVar5 = (undefined8 *)
           (*pcVar3)(plVar1,uVar2,
                     Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton);
  *puVar5 = 0;
  return;
}

// Call @ 142cefac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x30));
  pcVar2 = *(code **)(lVar1 + 0x30);
  plVar5 = (longlong *)(lVar1 + 0x40);
  if (*(longlong **)(lVar1 + 0x58) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x58);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4);
  lVar1 = *(longlong *)param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x88);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    LOCK();
    *(undefined4 *)(lVar1 + 0x6c) = 1;
    UNLOCK();
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// Call @ 142cefad0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_21>,unsigned___int64>
::Call(void *param_1)

{
  **(undefined1 **)param_1 = 1;
  return 0;
}

// Call @ 142cefae0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_22>,bool,TArrayView<UScriptStruct_const_*_const,int>_>
::Call(void *param_1,TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 142cefaf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  longlong lVar1;
  FAutomationTestBase *this;
  bool bVar2;
  Select *pSVar3;
  FSimpleQuery FVar4;
  FSimpleQuery *pFVar5;
  FQueryDescription *pFVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_2678 [32];
  FDynamicColumnDescription FStack_2658;
  FString FStack_2648;
  FText FStack_2638;
  FQueryDescription FStack_2628;
  FQueryDescription FStack_1978;
  FQueryDescription FStack_cc8;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce79e2;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar3 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  FVar4 = Editor::DataStorage::Queries::Select::Where(pSVar3);
  lVar1 = *(longlong *)param_1;
  FStack_2658.TemplateType = FTestColumnDynamic::StaticStruct();
  FStack_2658.Identifier = *(FName *)(lVar1 + 0x1d0);
  pFVar5 = Editor::DataStorage::Queries::FSimpleQuery::All((FSimpleQuery *)FVar4.Query,&FStack_2658)
  ;
  pFVar6 = Editor::DataStorage::Queries::FSimpleQuery::Compile(pFVar5);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cc8,pFVar6);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  pSVar3 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  FVar4 = Editor::DataStorage::Queries::Select::Where(pSVar3);
  lVar1 = *(longlong *)param_1;
  FStack_2658.TemplateType = FTestColumnDynamic::StaticStruct();
  FStack_2658.Identifier = *(FName *)(lVar1 + 0x1d0);
  pFVar5 = Editor::DataStorage::Queries::FSimpleQuery::None
                     ((FSimpleQuery *)FVar4.Query,&FStack_2658);
  pFVar6 = Editor::DataStorage::Queries::FSimpleQuery::Compile(pFVar5);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1978,pFVar6);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString((FString *)&FStack_2658,
                     L"Conflicting conditions .All<FTestColumnDynamic>(Identifier1) and .None<FTestColumnDynamic>(Identifier1)"
                    );
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_2628,&FStack_cc8);
  FText::FText(&FStack_2638);
  bVar2 = Editor::DataStorage::Queries::MergeQueries(&FStack_2628,&FStack_1978,&FStack_2638);
  ::FString::PrintfImpl(&FStack_2648,L"Expected merge to fail because of %s");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (FStack_2648.Data.ArrayNum != 0) {
    FVar7.Data = FStack_2648.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this,(wchar_t *)FVar7.Data,bVar2);
  if (FStack_2648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2648.Data.AllocatorInstance.Data);
  }
  if (FStack_2638.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_2638.TextData.Reference + 0x10))();
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  if (FStack_2658.TemplateType != (UScriptStruct *)0x0) {
    FMemory::Free(FStack_2658.TemplateType);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cc8);
  return;
}

// Call @ 142cefb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  Select *pSVar1;
  UScriptStruct *pUVar2;
  FQueryDescription *pFVar3;
  undefined1 auStack_2648 [32];
  FQueryDescription FStack_2628;
  FQueryDescription FStack_1978;
  FQueryDescription FStack_cc8;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce7be0;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_2648;
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  pUVar2 = FTestColumnA::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadOnly(pSVar1,pUVar2);
  pUVar2 = FTestColumnB::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadWrite(pSVar1,pUVar2);
  pFVar3 = Editor::DataStorage::Queries::Select::Compile(pSVar1);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cc8,pFVar3);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  pUVar2 = FTestColumnB::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadOnly(pSVar1,pUVar2);
  pUVar2 = FTestColumnD::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadWrite(pSVar1,pUVar2);
  pFVar3 = Editor::DataStorage::Queries::Select::Compile(pSVar1);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1978,pFVar3);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_cc8,&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cc8);
  return;
}

// Call @ 142cefb10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_78;
  FSourceLocation FStack_68;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FAutomationSpecBase *pFStack_30;
  undefined8 uStack_20;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  apcStack_48[0] =
       TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  uStack_20 = 0;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Where()");
  FStack_68.Impl._Line = 0x151;
  FStack_68.Impl._Column = 5;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_48,
             &FStack_68);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Where()::Dynamic");
  FStack_68.Impl._Line = 0x162;
  FStack_68.Impl._Column = 5;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_48,
             &FStack_68);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Select()+Where()");
  FStack_68.Impl._Line = 0x174;
  FStack_68.Impl._Column = 5;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_48,
             &FStack_68);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Select()+Where()::Dynamic");
  FStack_68.Impl._Line = 0x187;
  FStack_68.Impl._Column = 5;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_48,
             &FStack_68);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 142cefb20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_68;
  FSourceLocation FStack_58;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FAutomationSpecBase *pFStack_20;
  undefined8 uStack_10;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,L"Simple");
  FStack_58.Impl._Line = 199;
  FStack_58.Impl._Column = 6;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_38,
             &FStack_58);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,L"Complex");
  FStack_58.Impl._Line = 0xd6;
  FStack_58.Impl._Column = 6;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_38,
             &FStack_58);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 142cefb30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  Select *pSVar1;
  FSimpleQuery FVar2;
  UScriptStruct *pUVar3;
  FQueryDescription *pFVar4;
  undefined1 auStack_3338 [32];
  TArrayView<UScriptStruct_const_*_const,int> TStack_3318;
  UScriptStruct *pUStack_3300;
  UScriptStruct *pUStack_32f8;
  FText FStack_32f0;
  FQueryDescription FStack_32d8;
  FQueryDescription FStack_2628;
  FQueryDescription FStack_1978;
  FQueryDescription FStack_cc8;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce8080;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_3338;
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  FVar2 = Editor::DataStorage::Queries::Select::Where(pSVar1);
  pUStack_3300 = FTestColumnB::StaticStruct();
  pUStack_32f8 = FTestColumnD::StaticStruct();
  TStack_3318.ArrayNum = 2;
  TStack_3318.DataPtr = &pUStack_3300;
  Editor::DataStorage::Queries::FSimpleQuery::Any((FSimpleQuery *)FVar2.Query,&TStack_3318);
  pUVar3 = FTestColumnC::StaticStruct();
  Editor::DataStorage::Queries::FSimpleQuery::None((FSimpleQuery *)FVar2.Query,pUVar3);
  pFVar4 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar2.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_32d8,pFVar4);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  FVar2 = Editor::DataStorage::Queries::Select::Where(pSVar1);
  pUVar3 = FTestColumnB::StaticStruct();
  Editor::DataStorage::Queries::FSimpleQuery::All((FSimpleQuery *)FVar2.Query,pUVar3);
  pUVar3 = FTestTagColumnC::StaticStruct();
  Editor::DataStorage::Queries::FSimpleQuery::None((FSimpleQuery *)FVar2.Query,pUVar3);
  pFVar4 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar2.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1978,pFVar4);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cc8,&FStack_32d8);
  FText::FText(&FStack_32f0);
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_32d8,&FStack_1978);
  if (FStack_32f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_32f0.TextData.Reference + 0x10))();
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cc8);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_32d8);
  return;
}

// Call @ 142cefb40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  Select *pSVar1;
  FWeakObjectPtr FVar2;
  FQueryConditionQuery FVar3;
  FQueryDescription *pFVar4;
  undefined1 auStack_2948 [32];
  FWeakObjectPtr aFStack_2928 [2];
  FColumnBase FStack_2918;
  FColumnBase FStack_2908;
  undefined1 auStack_28f8 [272];
  void *pvStack_27e8;
  void *pvStack_27b8;
  void *pvStack_2768;
  void *pvStack_2658;
  FQueryDescription FStack_2638;
  FQueryDescription FStack_1988;
  FQueryDescription FStack_cd8;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x142ce8240;
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_2948;
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2638);
  FStack_2918.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestTagColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2918.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2918.TypeInfo.WeakPtr);
  }
  aFStack_2928[0].ObjectIndex = 0;
  aFStack_2928[0].ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2918.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2918.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(aFStack_2928,(FObjectPtr)&FStack_2918);
  FStack_2908.TypeInfo.WeakPtr = aFStack_2928[0];
  FStack_2908.Identifier.ComparisonIndex.Value = 0;
  FStack_2908.Identifier.Number = 0;
  FVar2 = (FWeakObjectPtr)FTestColumnA::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  aFStack_2928[0].ObjectIndex = 0;
  aFStack_2928[0].ObjectSerialNumber = 0;
  FStack_2918.TypeInfo.WeakPtr = FVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(aFStack_2928,(FObjectPtr)&FStack_2918);
  FStack_2918.TypeInfo.WeakPtr = aFStack_2928[0];
  FStack_2918.Identifier.ComparisonIndex.Value = 0;
  FStack_2918.Identifier.Number = 0;
  Editor::DataStorage::Queries::operator&&
            ((FConditions *)(auStack_28f8 + 0x10),&FStack_2918,&FStack_2908);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar1,(FConditions *)auStack_28f8);
  pFVar4 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cd8,pFVar4);
  if (pvStack_2658 != (void *)0x0) {
    FMemory::Free(pvStack_2658);
  }
  if (pvStack_2768 != (void *)0x0) {
    FMemory::Free(pvStack_2768);
  }
  if (pvStack_27b8 != (void *)0x0) {
    FMemory::Free(pvStack_27b8);
  }
  if (pvStack_27e8 != (void *)0x0) {
    FMemory::Free(pvStack_27e8);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2638);
  pSVar1 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2638);
  FVar2 = (FWeakObjectPtr)FTestTagColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  aFStack_2928[0].ObjectIndex = 0;
  aFStack_2928[0].ObjectSerialNumber = 0;
  FStack_2918.TypeInfo.WeakPtr = FVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(aFStack_2928,(FObjectPtr)&FStack_2918);
  FStack_2908.TypeInfo.WeakPtr = aFStack_2928[0];
  FStack_2908.Identifier.ComparisonIndex.Value = 0;
  FStack_2908.Identifier.Number = 0;
  FVar2 = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  aFStack_2928[0].ObjectIndex = 0;
  aFStack_2928[0].ObjectSerialNumber = 0;
  FStack_2918.TypeInfo.WeakPtr = FVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar2);
  }
  FWeakObjectPtr::operator=(aFStack_2928,(FObjectPtr)&FStack_2918);
  FStack_2918.TypeInfo.WeakPtr = aFStack_2928[0];
  FStack_2918.Identifier.ComparisonIndex.Value = 0;
  FStack_2918.Identifier.Number = 0;
  Editor::DataStorage::Queries::operator&&
            ((FConditions *)(auStack_28f8 + 0x10),&FStack_2918,&FStack_2908);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar1,(FConditions *)auStack_28f8);
  pFVar4 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1988,pFVar4);
  if (pvStack_2658 != (void *)0x0) {
    FMemory::Free(pvStack_2658);
  }
  if (pvStack_2768 != (void *)0x0) {
    FMemory::Free(pvStack_2768);
  }
  if (pvStack_27b8 != (void *)0x0) {
    FMemory::Free(pvStack_27b8);
  }
  if (pvStack_27e8 != (void *)0x0) {
    FMemory::Free(pvStack_27e8);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2638);
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_cd8,&FStack_1988);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1988);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cd8);
  return;
}

// Call @ 142cefb50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  longlong lVar1;
  FName FVar2;
  Select *pSVar3;
  UScriptStruct *pUVar4;
  FWeakObjectPtr FVar5;
  FQueryConditionQuery FVar6;
  FQueryDescription *pFVar7;
  undefined1 auStack_2958 [32];
  FWeakObjectPtr aFStack_2938 [2];
  FColumnBase FStack_2928;
  undefined1 auStack_2918 [16];
  undefined1 auStack_2908 [16];
  FConditions FStack_28f8;
  FQueryDescription FStack_2648;
  FQueryDescription FStack_1998;
  FQueryDescription FStack_ce8;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x142ce85d4;
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_2958;
  pSVar3 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2648);
  pUVar4 = FTestColumnA::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadOnly(pSVar3,pUVar4);
  FStack_2928.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestColumnC::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2928.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2928.TypeInfo.WeakPtr);
  }
  aFStack_2938[0].ObjectIndex = 0;
  aFStack_2938[0].ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2928.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2928.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(aFStack_2938,(FObjectPtr)&FStack_2928);
  auStack_2908._0_4_ = aFStack_2938[0].ObjectIndex;
  auStack_2908._4_4_ = aFStack_2938[0].ObjectSerialNumber;
  auStack_2908._8_4_ = 0;
  auStack_2908._12_4_ = 0;
  FVar5 = (FWeakObjectPtr)FTestTagColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar5);
  }
  aFStack_2938[0].ObjectIndex = 0;
  aFStack_2938[0].ObjectSerialNumber = 0;
  FStack_2928.TypeInfo.WeakPtr = FVar5;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(aFStack_2938,(FObjectPtr)&FStack_2928);
  FStack_2928.TypeInfo.WeakPtr = aFStack_2938[0];
  FStack_2928.Identifier.ComparisonIndex.Value = 0;
  FStack_2928.Identifier.Number = 0;
  Editor::DataStorage::Queries::operator||(&FStack_28f8,&FStack_2928,(FColumnBase *)auStack_2908);
  FVar6 = Editor::DataStorage::Queries::Select::Where(pSVar3,(FConditions *)auStack_2918);
  pFVar7 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar6.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_ce8,pFVar7);
  if (FStack_28f8.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FStack_28f8.Identifiers.AllocatorInstance.SecondaryData);
  }
  if (FStack_28f8.Tokens.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)FStack_28f8.Tokens.AllocatorInstance.SecondaryData);
  }
  if (FStack_28f8.ColumnFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)FStack_28f8.ColumnFlags.AllocatorInstance.SecondaryData);
  }
  if (FStack_28f8.Columns.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FStack_28f8.Columns.AllocatorInstance.SecondaryData);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2648);
  pSVar3 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2648);
  lVar1 = *(longlong *)param_1;
  auStack_2918._0_8_ = FTestColumnDynamic::StaticStruct();
  auStack_2918._8_8_ = *(FName *)(lVar1 + 0x1d0);
  Editor::DataStorage::Queries::Select::ReadWrite(pSVar3,(FDynamicColumnDescription *)auStack_2918);
  lVar1 = *(longlong *)param_1;
  FVar5 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar5);
  }
  aFStack_2938[0].ObjectIndex = 0;
  aFStack_2938[0].ObjectSerialNumber = 0;
  FStack_2928.TypeInfo.WeakPtr = FVar5;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(aFStack_2938,(FObjectPtr)&FStack_2928);
  FVar2 = *(FName *)(lVar1 + 0x1e0);
  lVar1 = *(longlong *)param_1;
  FVar5 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar5);
  }
  FStack_2928.TypeInfo.WeakPtr.ObjectIndex = 0;
  FStack_2928.TypeInfo.WeakPtr.ObjectSerialNumber = 0;
  auStack_2918._0_8_ = FVar5;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStack_2928,(FObjectPtr)auStack_2918);
  auStack_2918._0_4_ = aFStack_2938[0].ObjectIndex;
  auStack_2918._4_4_ = aFStack_2938[0].ObjectSerialNumber;
  FStack_2928.Identifier = *(FName *)(lVar1 + 0x1d8);
  auStack_2918._8_8_ = FVar2;
  Editor::DataStorage::Queries::operator||(&FStack_28f8,&FStack_2928,(FColumnBase *)auStack_2918);
  FVar6 = Editor::DataStorage::Queries::Select::Where(pSVar3,(FConditions *)auStack_2908);
  pFVar7 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar6.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1998,pFVar7);
  if (FStack_28f8.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FStack_28f8.Identifiers.AllocatorInstance.SecondaryData);
  }
  if (FStack_28f8.Tokens.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FMemory::Free((void *)FStack_28f8.Tokens.AllocatorInstance.SecondaryData);
  }
  if (FStack_28f8.ColumnFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
    FMemory::Free((void *)FStack_28f8.ColumnFlags.AllocatorInstance.SecondaryData);
  }
  if (FStack_28f8.Columns.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FStack_28f8.Columns.AllocatorInstance.SecondaryData);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2648);
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_ce8,&FStack_1998);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1998);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_ce8);
  return;
}

// Call @ 142cefb60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_48;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FAutomationSpecBase *pFStack_20;
  undefined8 uStack_10;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_48,"ValidMerge");
  FAutomationSpecBase::Describe(pFVar1,&FStack_48,(TFunction<void___cdecl(void)> *)apcStack_38);
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_48,"InvalidMerge");
  FAutomationSpecBase::Describe(pFVar1,&FStack_48,(TFunction<void___cdecl(void)> *)apcStack_38);
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 142cefb70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  longlong lVar1;
  Select *pSVar2;
  FQueryConditionQuery FVar3;
  FQueryDescription *pFVar4;
  FWeakObjectPtr FVar5;
  undefined1 auStack_2938 [32];
  FWeakObjectPtr aFStack_2918 [2];
  FColumnBase FStack_2908;
  undefined1 auStack_28f8 [272];
  void *pvStack_27e8;
  void *pvStack_27b8;
  void *pvStack_2768;
  void *pvStack_2658;
  FQueryDescription FStack_2638;
  FQueryDescription FStack_1988;
  FQueryDescription FStack_cd8;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x142ce91a6;
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_2938;
  pSVar2 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2638);
  lVar1 = *(longlong *)param_1;
  FStack_2908.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2908.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2908.TypeInfo.WeakPtr);
  }
  aFStack_2918[0].ObjectIndex = 0;
  aFStack_2918[0].ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2908.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2908.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(aFStack_2918,(FObjectPtr)&FStack_2908);
  FStack_2908.TypeInfo.WeakPtr = aFStack_2918[0];
  FStack_2908.Identifier = *(FName *)(lVar1 + 0x1d0);
  Editor::DataStorage::Queries::FConditions::FConditions
            ((FConditions *)(auStack_28f8 + 0x10),&FStack_2908);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar2,(FConditions *)auStack_28f8);
  pFVar4 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cd8,pFVar4);
  if (pvStack_2658 != (void *)0x0) {
    FMemory::Free(pvStack_2658);
  }
  if (pvStack_2768 != (void *)0x0) {
    FMemory::Free(pvStack_2768);
  }
  if (pvStack_27b8 != (void *)0x0) {
    FMemory::Free(pvStack_27b8);
  }
  if (pvStack_27e8 != (void *)0x0) {
    FMemory::Free(pvStack_27e8);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2638);
  pSVar2 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2638);
  lVar1 = *(longlong *)param_1;
  FVar5 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar5);
  }
  aFStack_2918[0].ObjectIndex = 0;
  aFStack_2918[0].ObjectSerialNumber = 0;
  FStack_2908.TypeInfo.WeakPtr = FVar5;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar5);
  }
  FWeakObjectPtr::operator=(aFStack_2918,(FObjectPtr)&FStack_2908);
  FStack_2908.TypeInfo.WeakPtr = aFStack_2918[0];
  FStack_2908.Identifier = *(FName *)(lVar1 + 0x1d8);
  Editor::DataStorage::Queries::FConditions::FConditions
            ((FConditions *)(auStack_28f8 + 0x10),&FStack_2908);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar2,(FConditions *)auStack_28f8);
  pFVar4 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1988,pFVar4);
  if (pvStack_2658 != (void *)0x0) {
    FMemory::Free(pvStack_2658);
  }
  if (pvStack_2768 != (void *)0x0) {
    FMemory::Free(pvStack_2768);
  }
  if (pvStack_27b8 != (void *)0x0) {
    FMemory::Free(pvStack_27b8);
  }
  if (pvStack_27e8 != (void *)0x0) {
    FMemory::Free(pvStack_27e8);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2638);
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_cd8,&FStack_1988);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1988);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cd8);
  return;
}

// Call @ 142cefb80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_78;
  FSourceLocation FStack_68;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FAutomationSpecBase *pFStack_30;
  undefined8 uStack_20;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  apcStack_48[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  uStack_20 = 0;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Simple");
  FStack_68.Impl._Line = 0xea;
  FStack_68.Impl._Column = 6;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_3>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_48,
             &FStack_68);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Complex");
  FStack_68.Impl._Line = 0xf9;
  FStack_68.Impl._Column = 6;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_3>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_48,
             &FStack_68);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Simple::Dynamic");
  FStack_68.Impl._Line = 0x108;
  FStack_68.Impl._Column = 6;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_3>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_48,
             &FStack_68);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_4>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,L"Complex::Dynamic");
  FStack_68.Impl._Line = 0x117;
  FStack_68.Impl._Column = 6;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_3>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_78,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_48,
             &FStack_68);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 142cefb90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  FAutomationTestBase *this;
  bool bVar1;
  Select *pSVar2;
  FSimpleQuery FVar3;
  FQueryDescription *pFVar4;
  UScriptStruct *pUVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_2678 [32];
  TArrayView<UScriptStruct_const_*_const,int> TStack_2658;
  undefined1 auStack_2648 [16];
  FString FStack_2638;
  FQueryDescription FStack_2628;
  FQueryDescription FStack_1978;
  FQueryDescription FStack_cc8;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142ce9672;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar2 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  auStack_2648._0_8_ = FTestColumnA::StaticStruct();
  auStack_2648._8_8_ = FTestColumnB::StaticStruct();
  TStack_2658.ArrayNum = 2;
  TStack_2658.DataPtr = (UScriptStruct **)auStack_2648;
  Editor::DataStorage::Queries::Select::ReadWrite(pSVar2,&TStack_2658);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar2);
  pFVar4 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cc8,pFVar4);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  pSVar2 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  pUVar5 = FTestColumnC::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadOnly(pSVar2,pUVar5);
  FVar3 = Editor::DataStorage::Queries::Select::Where(pSVar2);
  pUVar5 = FTestColumnB::StaticStruct();
  Editor::DataStorage::Queries::FSimpleQuery::None((FSimpleQuery *)FVar3.Query,pUVar5);
  pUVar5 = FTestColumnA::StaticStruct();
  Editor::DataStorage::Queries::FSimpleQuery::All((FSimpleQuery *)FVar3.Query,pUVar5);
  pFVar4 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar3.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1978,pFVar4);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString((FString *)auStack_2648,
                     L"Conflicting conditions .ReadWrite<FTestColumnB>() and .None<FTestColumnB>()")
  ;
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_2628,&FStack_cc8);
  FText::FText((FText *)&TStack_2658);
  bVar1 = Editor::DataStorage::Queries::MergeQueries
                    (&FStack_2628,&FStack_1978,(FText *)&TStack_2658);
  ::FString::PrintfImpl(&FStack_2638,L"Expected merge to fail because of %s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (FStack_2638.Data.ArrayNum != 0) {
    FVar6.Data = FStack_2638.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this,(wchar_t *)FVar6.Data,bVar1);
  if (FStack_2638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2638.Data.AllocatorInstance.Data);
  }
  if (TStack_2658.DataPtr != (UScriptStruct **)0x0) {
    (*(code *)(*TStack_2658.DataPtr)->_padding_)();
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  if ((UScriptStruct *)auStack_2648._0_8_ != (UScriptStruct *)0x0) {
    FMemory::Free((void *)auStack_2648._0_8_);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cc8);
  return;
}

// Call @ 142cefba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStackX_8 [8];
  
  lVar4 = *(longlong *)param_1;
  puVar6 = *(undefined8 **)(lVar4 + 0x1b0);
  iVar2 = *(int *)(lVar4 + 0x1b8);
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)(lVar4 + 0x1b8) != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    lVar5 = *(longlong *)param_1;
    if (puVar6 == puVar1) break;
    (**(code **)(**(longlong **)(lVar5 + 0x198) + 0x70))(*(longlong **)(lVar5 + 0x198),*puVar6);
    puVar6 = puVar6 + 1;
  }
  uVar3 = *(uint *)(lVar5 + 0x1b8);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar3);
  }
  *(undefined4 *)(lVar5 + 0x1b8) = 0;
  if (*(uint *)(lVar5 + 0x1bc) != uVar3) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,(ForAnyElementType *)(lVar5 + 0x1b0),0,(int *)(lVar5 + 0x1bc));
  }
  lVar4 = *(longlong *)param_1;
  puVar6 = *(undefined8 **)(lVar4 + 0x1c0);
  iVar2 = *(int *)(lVar4 + 0x1c8);
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)(lVar4 + 0x1c8) != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    lVar5 = *(longlong *)param_1;
    if (puVar6 == puVar1) break;
    (**(code **)(**(longlong **)(lVar5 + 0x198) + 0x1b0))(*(longlong **)(lVar5 + 0x198),*puVar6);
    puVar6 = puVar6 + 1;
  }
  uVar3 = *(uint *)(lVar5 + 0x1c8);
  if (-1 < (int)uVar3) {
    *(undefined4 *)(lVar5 + 0x1c8) = 0;
    if (*(uint *)(lVar5 + 0x1cc) != uVar3) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,(ForAnyElementType *)(lVar5 + 0x1c0),0,(int *)(lVar5 + 0x1cc));
    }
    *(undefined8 *)(*(longlong *)param_1 + 0x198) = 0;
    *(undefined8 *)(*(longlong *)param_1 + 0x1d0) = 0;
    *(undefined8 *)(*(longlong *)param_1 + 0x1d8) = 0;
    *(undefined8 *)(*(longlong *)param_1 + 0x1e0) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar3);
}

// Call @ 142cefbb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_68;
  FSourceLocation FStack_58;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FAutomationSpecBase *pFStack_20;
  undefined8 uStack_10;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,L"Select()+Where()");
  FStack_58.Impl._Line = 0x129;
  FStack_58.Impl._Column = 6;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_4>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_38,
             &FStack_58);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,L"Select()+FConditions");
  FStack_58.Impl._Line = 0x13c;
  FStack_58.Impl._Column = 6;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define::<lambda_2>::()::<lambda_1>::()::<lambda_4>::operator ()(void) const"
  ;
  FAutomationSpecBase::It
            (pFVar1,&FStack_68,TaskGraphMainTick,(TFunction<void___cdecl(void)> *)apcStack_38,
             &FStack_58);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 142cefbc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
::Call(void *param_1)

{
  longlong lVar1;
  FAutomationTestBase *this;
  bool bVar2;
  Select *pSVar3;
  FSimpleQuery FVar4;
  FQueryDescription *pFVar5;
  UScriptStruct *pUVar6;
  FSimpleQuery *pFVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_2678 [32];
  FDynamicColumnDescription FStack_2658;
  FString FStack_2648;
  FDynamicColumnDescription FStack_2638;
  FQueryDescription FStack_2628;
  FQueryDescription FStack_1978;
  FQueryDescription FStack_cc8;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142cea0a2;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_2678;
  pSVar3 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  lVar1 = *(longlong *)param_1;
  FStack_2658.TemplateType = FTestColumnDynamic::StaticStruct();
  FStack_2658.Identifier = *(FName *)(lVar1 + 0x1d8);
  Editor::DataStorage::Queries::Select::ReadWrite(pSVar3,&FStack_2658);
  FVar4 = Editor::DataStorage::Queries::Select::Where(pSVar3);
  pFVar5 = Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar4.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_cc8,pFVar5);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  pSVar3 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2628);
  pUVar6 = FTestColumnC::StaticStruct();
  Editor::DataStorage::Queries::Select::ReadOnly(pSVar3,pUVar6);
  FVar4 = Editor::DataStorage::Queries::Select::Where(pSVar3);
  lVar1 = *(longlong *)param_1;
  FStack_2658.TemplateType = FTestColumnDynamic::StaticStruct();
  FStack_2658.Identifier = *(FName *)(lVar1 + 0x1d8);
  pFVar7 = Editor::DataStorage::Queries::FSimpleQuery::None
                     ((FSimpleQuery *)FVar4.Query,&FStack_2658);
  lVar1 = *(longlong *)param_1;
  FStack_2638.TemplateType = FTestColumnDynamic::StaticStruct();
  FStack_2638.Identifier = *(FName *)(lVar1 + 0x1d0);
  pFVar7 = Editor::DataStorage::Queries::FSimpleQuery::All(pFVar7,&FStack_2638);
  pFVar5 = Editor::DataStorage::Queries::FSimpleQuery::Compile(pFVar7);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1978,pFVar5);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString((FString *)&FStack_2658,
                     L"Conflicting conditions .ReadWrite<FTestColumnB>() and .None<FTestColumnB>()")
  ;
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_2628,&FStack_cc8);
  FText::FText((FText *)&FStack_2638);
  bVar2 = Editor::DataStorage::Queries::MergeQueries
                    (&FStack_2628,&FStack_1978,(FText *)&FStack_2638);
  ::FString::PrintfImpl(&FStack_2648,L"Expected merge to fail because of %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (FStack_2648.Data.ArrayNum != 0) {
    FVar8.Data = FStack_2648.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this,(wchar_t *)FVar8.Data,bVar2);
  if (FStack_2648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2648.Data.AllocatorInstance.Data);
  }
  if (FStack_2638.TemplateType != (UScriptStruct *)0x0) {
    (**(code **)((FStack_2638.TemplateType)->_padding_ + 0x10))();
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2628);
  if (FStack_2658.TemplateType != (UScriptStruct *)0x0) {
    FMemory::Free(FStack_2658.TemplateType);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1978);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_cc8);
  return;
}

// Call @ 142cefbd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,void>
::Call(void *param_1)

{
  longlong lVar1;
  FName FVar2;
  Select *pSVar3;
  FQueryConditionQuery FVar4;
  FQueryDescription *pFVar5;
  FWeakObjectPtr FVar6;
  undefined1 auStack_2958 [32];
  FWeakObjectPtr aFStack_2938 [2];
  FColumnBase FStack_2928;
  FColumnBase FStack_2918;
  undefined1 auStack_2908 [272];
  void *pvStack_27f8;
  void *pvStack_27c8;
  void *pvStack_2778;
  void *pvStack_2668;
  FQueryDescription FStack_2648;
  FQueryDescription FStack_1998;
  FQueryDescription FStack_ce8;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x142cea2e4;
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_2958;
  pSVar3 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2648);
  lVar1 = *(longlong *)param_1;
  aFStack_2938[0] = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (aFStack_2938[0] != (FWeakObjectPtr)0x0))
  {
    GC::MarkAsReachable((UObject *)aFStack_2938[0]);
  }
  FStack_2918.TypeInfo.WeakPtr.ObjectIndex = 0;
  FStack_2918.TypeInfo.WeakPtr.ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (aFStack_2938[0] != (FWeakObjectPtr)0x0))
  {
    GC::MarkAsReachable((UObject *)aFStack_2938[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStack_2918,(FObjectPtr)aFStack_2938);
  FVar2 = *(FName *)(lVar1 + 0x1d8);
  FStack_2928.TypeInfo.WeakPtr = (FWeakObjectPtr)FTestColumnB::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2928.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2928.TypeInfo.WeakPtr);
  }
  aFStack_2938[0].ObjectIndex = 0;
  aFStack_2938[0].ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (FStack_2928.TypeInfo.WeakPtr != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FStack_2928.TypeInfo.WeakPtr);
  }
  FWeakObjectPtr::operator=(aFStack_2938,(FObjectPtr)&FStack_2928);
  FStack_2928.TypeInfo.WeakPtr = aFStack_2938[0];
  FStack_2928.Identifier.ComparisonIndex.Value = 0;
  FStack_2928.Identifier.Number = 0;
  FStack_2918.Identifier = FVar2;
  Editor::DataStorage::Queries::operator||
            ((FConditions *)(auStack_2908 + 0x10),&FStack_2928,&FStack_2918);
  FVar4 = Editor::DataStorage::Queries::Select::Where(pSVar3,(FConditions *)auStack_2908);
  pFVar5 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar4.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_ce8,pFVar5);
  if (pvStack_2668 != (void *)0x0) {
    FMemory::Free(pvStack_2668);
  }
  if (pvStack_2778 != (void *)0x0) {
    FMemory::Free(pvStack_2778);
  }
  if (pvStack_27c8 != (void *)0x0) {
    FMemory::Free(pvStack_27c8);
  }
  if (pvStack_27f8 != (void *)0x0) {
    FMemory::Free(pvStack_27f8);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2648);
  pSVar3 = Editor::DataStorage::Queries::Select::Select((Select *)&FStack_2648);
  lVar1 = *(longlong *)param_1;
  FVar6 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar6);
  }
  FStack_2918.TypeInfo.WeakPtr.ObjectIndex = 0;
  FStack_2918.TypeInfo.WeakPtr.ObjectSerialNumber = 0;
  FStack_2928.TypeInfo.WeakPtr = FVar6;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar6);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&FStack_2918,(FObjectPtr)&FStack_2928);
  FVar2 = *(FName *)(lVar1 + 0x1d8);
  lVar1 = *(longlong *)param_1;
  FVar6 = (FWeakObjectPtr)FTestColumnDynamic::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar6);
  }
  aFStack_2938[0].ObjectIndex = 0;
  aFStack_2938[0].ObjectSerialNumber = 0;
  FStack_2928.TypeInfo.WeakPtr = FVar6;
  if ((GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)FVar6);
  }
  FWeakObjectPtr::operator=(aFStack_2938,(FObjectPtr)&FStack_2928);
  FStack_2928.TypeInfo.WeakPtr = FStack_2918.TypeInfo.WeakPtr;
  FStack_2918.TypeInfo.WeakPtr = aFStack_2938[0];
  FStack_2918.Identifier = *(FName *)(lVar1 + 0x1d0);
  FStack_2928.Identifier = FVar2;
  Editor::DataStorage::Queries::operator&&
            ((FConditions *)(auStack_2908 + 0x10),&FStack_2918,&FStack_2928);
  FVar4 = Editor::DataStorage::Queries::Select::Where(pSVar3,(FConditions *)auStack_2908);
  pFVar5 = Editor::DataStorage::Queries::FQueryConditionQuery::Compile(FVar4.Query);
  Editor::DataStorage::FQueryDescription::FQueryDescription(&FStack_1998,pFVar5);
  if (pvStack_2668 != (void *)0x0) {
    FMemory::Free(pvStack_2668);
  }
  if (pvStack_2778 != (void *)0x0) {
    FMemory::Free(pvStack_2778);
  }
  if (pvStack_27c8 != (void *)0x0) {
    FMemory::Free(pvStack_27c8);
  }
  if (pvStack_27f8 != (void *)0x0) {
    FMemory::Free(pvStack_27f8);
  }
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_2648);
  Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
            (*(QueryMergeTestFixture **)param_1,&FStack_ce8,&FStack_1998);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_1998);
  Editor::DataStorage::FQueryDescription::~FQueryDescription(&FStack_ce8);
  return;
}

// Call @ 142cefbe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&)>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,IDirectQueryContext *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142cefc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3);
  return;
}

// Call @ 142cefc50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::ISubqueryContext_&)>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::ISubqueryContext_&>
::Call(void *param_1,FQueryDescription *param_2,ISubqueryContext *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142cefcad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3);
  return;
}

