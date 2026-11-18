// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FLocMetadataValueArray @ 1416d5c70

FLocMetadataValueArray * __thiscall
FLocMetadataValueArray::FLocMetadataValueArray
          (FLocMetadataValueArray *this,
          TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TSharedPtr<FLocMetadataValue,1> *pTVar4;
  
  pTVar1 = &this->Value;
  this->_padding_ = (longlong)&___7FLocMetadataValueArray__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Value).ArrayMax;
  iVar3 = param_1->ArrayNum;
  pTVar4 = (TSharedPtr<FLocMetadataValue,1> *)(param_1->AllocatorInstance).Data;
  (this->Value).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedPtr<FLocMetadataValue,1>,TSharedPtr<FLocMetadataValue,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  return this;
}

// FLocMetadataValueArray @ 1416d5d00

FLocMetadataValueArray * __thiscall
FLocMetadataValueArray::FLocMetadataValueArray
          (FLocMetadataValueArray *this,FStructuredArchiveSlot param_1)

{
  int *piVar1;
  int *piVar2;
  FArchive *this_00;
  uint *puVar3;
  code *pcVar4;
  FSlotBase FVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  FArchiveState *pFVar9;
  FLocMetadataValueArray *pFVar10;
  uint uVar11;
  TSharedPtr<FLocMetadataValue,1> *pTVar12;
  int iVar13;
  TSharedPtr<FLocMetadataValue,1> *pTVar14;
  undefined1 local_res8 [8];
  FSlotBase local_res10;
  uint local_res18 [4];
  
  piVar1 = &(this->Value).ArrayNum;
  piVar2 = &(this->Value).ArrayMax;
  this->_padding_ = (longlong)&___7FLocMetadataValueArray__6B_;
  (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar9 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res10);
  if (pFVar9->ArIsLoading == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.GetArchiveState().IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                       ,0x236,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FLocMetadataValueArray *)(*pcVar4)();
      return pFVar10;
    }
  }
  this_00 = (local_res10.StructuredArchive)->Formatter->Inner;
  puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar3;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  uVar6 = local_res18[0];
  FVar5.StructuredArchive = local_res10.StructuredArchive;
  iVar13 = *piVar1;
  if (iVar13 < (int)local_res18[0]) {
    iVar13 = local_res18[0] - iVar13;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar13,&(this->Value).AllocatorInstance,piVar1,piVar2);
    memset((this->Value).AllocatorInstance.Data + (longlong)iVar8 * 0x10,0,(longlong)iVar13 << 4);
  }
  else {
    if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res18[0]);
    }
    if ((int)local_res18[0] < iVar13) {
      uVar11 = iVar13 - local_res18[0];
      if ((int)(uVar11 | local_res18[0]) < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FLocMetadataValueArray *)(*pcVar4)();
          return pFVar10;
        }
      }
      if (uVar11 != 0) {
        TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->Value,uVar6,uVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Value).AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  iVar13 = *piVar1;
  pTVar14 = (TSharedPtr<FLocMetadataValue,1> *)(this->Value).AllocatorInstance.Data;
  pTVar12 = pTVar14 + iVar13;
  while( true ) {
    if (*piVar1 != iVar13) {
      `TCheckedPointerIterator<TSharedPtr<FLocMetadataValue,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pTVar14 == pTVar12) break;
    ::`anonymous_namespace'::SerializeLocMetadataValue
              ((FStructuredArchiveSlot)FVar5.StructuredArchive,pTVar14);
    pTVar14 = pTVar14 + 1;
  }
  return this;
}

// AsArray @ 1416e0b00

TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
FLocMetadataValueArray::AsArray
          (FLocMetadataValueArray *this,
          TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  TSharedPtr<FLocMetadataValue,1> *pTVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Value).ArrayNum;
  pTVar2 = (TSharedPtr<FLocMetadataValue,1> *)(this->Value).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<TSharedPtr<FLocMetadataValue,1>,TSharedPtr<FLocMetadataValue,1>,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pTVar2,iVar1);
  return __return_storage_ptr__;
}

// Clone @ 1416e3400

TSharedRef<FLocMetadataValue,1> * __thiscall
FLocMetadataValueArray::Clone
          (FLocMetadataValueArray *this,TSharedRef<FLocMetadataValue,1> *__return_storage_ptr__)

{
  TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  TSharedRef<FLocMetadataValue,1> *pTVar8;
  undefined8 *puVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  TRawPtrProxy<FLocMetadataValueArray> local_res8;
  ForAnyElementType local_58;
  undefined8 local_50;
  TSharedPtr<FLocMetadataValue,1> local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  iVar10 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  while( true ) {
    if ((iVar10 < 0) || ((this->Value).ArrayNum <= iVar10)) {
      local_res8.Object = ::operator_new(0x18);
      FVar5.Data = local_58.Data;
      if (local_res8.Object == (FLocMetadataValueArray *)0x0) {
        local_res8.Object = (FLocMetadataValueArray *)0x0;
      }
      else {
        pTVar1 = &(local_res8.Object)->Value;
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (local_res8.Object)->_padding_ = (longlong)&___7FLocMetadataValueArray__6B_;
        piVar2 = &((local_res8.Object)->Value).ArrayMax;
        iVar10 = (int)local_50;
        ((local_res8.Object)->Value).ArrayNum = (int)local_50;
        if ((int)local_50 == 0) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(int)local_50,0,&pTVar1->AllocatorInstance,(int)local_50,piVar2);
          ConstructItems<TSharedPtr<FLocMetadataValue,1>,TSharedPtr<FLocMetadataValue,1>,int>
                    ((pTVar1->AllocatorInstance).Data,(TSharedPtr<FLocMetadataValue,1> *)FVar5.Data,
                     iVar10);
        }
      }
      TSharedRef<FLocMetadataValue,1>::TSharedRef<FLocMetadataValue,1><FLocMetadataValueArray>
                (__return_storage_ptr__,&local_res8);
      DestructItems<TSharedPtr<FLocMetadataValue,1>,int>
                ((TSharedPtr<FLocMetadataValue,1> *)local_58.Data,(int)local_50);
      if ((TSharedPtr<FLocMetadataValue,1> *)local_58.Data != (TSharedPtr<FLocMetadataValue,1> *)0x0
         ) {
        FMemory::Free(local_58.Data);
      }
      return __return_storage_ptr__;
    }
    if ((iVar10 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<FLocMetadataValue,1> *)(*pcVar4)();
      return pTVar8;
    }
    pFVar11 = (this->Value).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
    if ((*(longlong *)pFVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<FLocMetadataValue,1> *)(*pcVar4)();
      return pTVar8;
    }
    plVar3 = *(longlong **)pFVar11;
    puVar9 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,local_38);
    local_48.Object = (FLocMetadataValue *)*puVar9;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((local_58.Data <= &local_48) &&
        (&local_48 <
         (TSharedPtr<FLocMetadataValue,1> *)(local_58.Data + (longlong)local_50._4_4_ * 0x10))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = (int)local_50;
    if ((int)local_50 == local_50._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58,(int *)((longlong)&local_50 + 4));
    }
    local_50 = CONCAT44(local_50._4_4_,iVar7 + 1);
    *(FLocMetadataValue **)&local_58.Data[(longlong)iVar7 * 0x10].field_0x0 = local_48.Object;
    *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)iVar7 * 0x10 + 8) =
         local_48.SharedReferenceCount.ReferenceController;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_48.Object = (FLocMetadataValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    iVar10 = iVar10 + 1;
  }
  pcVar4 = (code *)swi(3);
  pTVar8 = (TSharedRef<FLocMetadataValue,1> *)(*pcVar4)();
  return pTVar8;
}

// EqualTo @ 1416ecaa0

bool __thiscall
FLocMetadataValueArray::EqualTo(FLocMetadataValueArray *this,FLocMetadataValue *param_1)

{
  TSharedPtr<FLocMetadataValue,1> *pTVar1;
  FLocMetadataValue FVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  iVar11 = (this->Value).ArrayNum;
  if (iVar11 != *(int *)(param_1 + 2)) {
    return false;
  }
  pTVar1 = (TSharedPtr<FLocMetadataValue,1> *)(this->Value).AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = iVar11;
  if (iVar11 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_58,iVar11,&local_4c);
    ConstructItems<TSharedPtr<FLocMetadataValue,1>,TSharedPtr<FLocMetadataValue,1>,int>
              (local_58.Data,pTVar1,iVar11);
  }
  iVar11 = *(int *)(param_1 + 2);
  FVar2 = param_1[1];
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = iVar11;
  if (iVar11 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_48,iVar11,&local_3c);
    ConstructItems<TSharedPtr<FLocMetadataValue,1>,TSharedPtr<FLocMetadataValue,1>,int>
              (local_48.Data,(TSharedPtr<FLocMetadataValue,1> *)FVar2,iVar11);
  }
  AlgoImpl::
  IntroSortInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
            ((TSharedPtr<FLocMetadataValue,1> *)local_58.Data,local_50,local_res8[0],
             (FCompareMetadataValue *)local_res8);
  AlgoImpl::
  IntroSortInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
            ((TSharedPtr<FLocMetadataValue,1> *)local_48.Data,local_40,local_res8[0],
             (FCompareMetadataValue *)local_res10);
  uVar13 = 0;
  if (0 < local_50) {
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < local_50) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      FVar6.Data = local_58.Data;
      if (*(longlong *)(local_58.Data + lVar14) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      plVar3 = *(longlong **)(FVar6.Data + lVar14);
      uVar10 = 0;
      if ((int)uVar13 < local_40) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      FVar6.Data = local_48.Data;
      if (*(longlong *)(local_48.Data + lVar14) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      plVar4 = *(longlong **)(FVar6.Data + lVar14);
      pcVar5 = *(code **)(*plVar4 + 0x38);
      iVar11 = (**(code **)(*plVar3 + 0x38))(plVar3);
      iVar12 = (*pcVar5)(plVar4);
      if (iVar11 != iVar12) {
LAB_1416ecd69:
        bVar7 = false;
        goto LAB_1416ecd0b;
      }
      cVar9 = (**(code **)(*plVar3 + 0x40))(plVar3,plVar4);
      if (cVar9 == '\0') goto LAB_1416ecd69;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar13 < local_50);
  }
  bVar7 = true;
LAB_1416ecd0b:
  DestructItems<TSharedPtr<FLocMetadataValue,1>,int>
            ((TSharedPtr<FLocMetadataValue,1> *)local_48.Data,local_40);
  if ((TSharedPtr<FLocMetadataValue,1> *)local_48.Data != (TSharedPtr<FLocMetadataValue,1> *)0x0) {
    FMemory::Free(local_48.Data);
  }
  DestructItems<TSharedPtr<FLocMetadataValue,1>,int>
            ((TSharedPtr<FLocMetadataValue,1> *)local_58.Data,local_50);
  if ((TSharedPtr<FLocMetadataValue,1> *)local_58.Data != (TSharedPtr<FLocMetadataValue,1> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return bVar7;
}

// GetType @ 1416fc6a0

ELocMetadataType __thiscall FLocMetadataValueArray::GetType(FLocMetadataValueArray *this)

{
  return Array;
}

// GetTypeString @ 1416fc6e0

FString * __thiscall
FLocMetadataValueArray::GetTypeString(FLocMetadataValueArray *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Array");
  return __return_storage_ptr__;
}

// LessThan @ 141703870

bool __thiscall
FLocMetadataValueArray::LessThan(FLocMetadataValueArray *this,FLocMetadataValue *param_1)

{
  TSharedPtr<FLocMetadataValue,1> *pTVar1;
  FLocMetadataValue FVar2;
  longlong *plVar3;
  FLocMetadataValue *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong *local_res20;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  int local_50;
  int local_4c [3];
  
  iVar11 = (this->Value).ArrayNum;
  pTVar1 = (TSharedPtr<FLocMetadataValue,1> *)(this->Value).AllocatorInstance.Data;
  uVar16 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = iVar11;
  if (iVar11 == 0) {
    local_4c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_58,iVar11,local_4c);
    ConstructItems<TSharedPtr<FLocMetadataValue,1>,TSharedPtr<FLocMetadataValue,1>,int>
              (local_58.Data,pTVar1,iVar11);
  }
  iVar11 = *(int *)(param_1 + 2);
  FVar2 = param_1[1];
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = iVar11;
  if (iVar11 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_68,iVar11,&local_5c);
    ConstructItems<TSharedPtr<FLocMetadataValue,1>,TSharedPtr<FLocMetadataValue,1>,int>
              (local_68.Data,(TSharedPtr<FLocMetadataValue,1> *)FVar2,iVar11);
  }
  AlgoImpl::
  IntroSortInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
            ((TSharedPtr<FLocMetadataValue,1> *)local_58.Data,local_50,local_res8[0],
             (FCompareMetadataValue *)local_res8);
  AlgoImpl::
  IntroSortInternal<TSharedPtr<FLocMetadataValue,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FLocMetadataValue,1>,FCompareMetadataValue>_>
            ((TSharedPtr<FLocMetadataValue,1> *)local_68.Data,local_60,local_res8[0],
             (FCompareMetadataValue *)local_res10);
  if (0 < local_50) {
    local_res18 = 0;
    uVar17 = uVar16;
    do {
      uVar15 = (uint)uVar16;
      if (local_60 <= (int)uVar15) goto LAB_141703bee;
      uVar18 = ~uVar15 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar15 < local_50) {
        uVar9 = uVar18;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      FVar5.Data = local_58.Data;
      if (*(longlong *)(local_58.Data + uVar17) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      plVar3 = *(longlong **)(FVar5.Data + uVar17);
      uVar10 = 0;
      uVar9 = uVar10;
      if ((int)uVar15 < local_60) {
        uVar9 = uVar18;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      FVar5.Data = local_68.Data;
      if (*(longlong *)(local_68.Data + uVar17) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      local_res20 = *(longlong **)(FVar5.Data + uVar17);
      pcVar4 = *(code **)(*plVar3 + 0x38);
      iVar11 = (**(code **)(*local_res20 + 0x38))();
      iVar12 = (*pcVar4)(plVar3);
      if (iVar12 != iVar11) {
LAB_141703aea:
        uVar9 = uVar10;
        if ((int)uVar15 < local_50) {
          uVar9 = uVar18;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        FVar5.Data = local_58.Data;
        lVar13 = (longlong)(int)uVar15 * 0x10;
        if (*(longlong *)&local_58.Data[lVar13].field_0x0 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        this_00 = *(FLocMetadataValue **)&FVar5.Data[lVar13].field_0x0;
        if ((int)uVar15 < local_60) {
          uVar10 = uVar18;
        }
        if (uVar10 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        pFVar14 = local_68.Data + lVar13;
        if (*(longlong *)&pFVar14->field_0x0 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        bVar6 = FLocMetadataValue::operator<(this_00,*(FLocMetadataValue **)&pFVar14->field_0x0);
        goto LAB_141703bf0;
      }
      cVar8 = (**(code **)(*plVar3 + 0x40))(plVar3,local_res20);
      if (cVar8 == '\0') goto LAB_141703aea;
      uVar16 = (ulonglong)(uVar15 + 1);
      local_res18 = local_res18 + 1;
      uVar17 = uVar17 + 0x10;
    } while ((int)(uVar15 + 1) < local_50);
  }
  if (local_50 < local_60) {
    bVar6 = true;
  }
  else {
LAB_141703bee:
    bVar6 = false;
  }
LAB_141703bf0:
  DestructItems<TSharedPtr<FLocMetadataValue,1>,int>
            ((TSharedPtr<FLocMetadataValue,1> *)local_68.Data,local_60);
  if ((TSharedPtr<FLocMetadataValue,1> *)local_68.Data != (TSharedPtr<FLocMetadataValue,1> *)0x0) {
    FMemory::Free(local_68.Data);
  }
  DestructItems<TSharedPtr<FLocMetadataValue,1>,int>
            ((TSharedPtr<FLocMetadataValue,1> *)local_58.Data,local_50);
  if ((TSharedPtr<FLocMetadataValue,1> *)local_58.Data != (TSharedPtr<FLocMetadataValue,1> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return bVar6;
}

// Serialize @ 141710020

void __cdecl
FLocMetadataValueArray::Serialize(FLocMetadataValueArray *param_1,FStructuredArchiveSlot param_2)

{
  int iVar1;
  FArchive *this;
  uint *puVar2;
  code *pcVar3;
  FSlotBase FVar4;
  bool bVar5;
  FArchiveState *pFVar6;
  TSharedPtr<FLocMetadataValue,1> *pTVar7;
  TSharedPtr<FLocMetadataValue,1> *pTVar8;
  undefined1 local_res8 [8];
  FSlotBase local_res10;
  uint local_res18 [4];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_2;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res10);
  if (pFVar6->ArIsLoading != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Slot.GetArchiveState().IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                       ,0x244,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res18[0] = (param_1->Value).ArrayNum;
  this = (local_res10.StructuredArchive)->Formatter->Inner;
  puVar2 = (uint *)**(undefined8 **)&this->field_0x8;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res10.StructuredArchive;
  iVar1 = (param_1->Value).ArrayNum;
  pTVar8 = (TSharedPtr<FLocMetadataValue,1> *)(param_1->Value).AllocatorInstance.Data;
  pTVar7 = pTVar8 + iVar1;
  while( true ) {
    if ((param_1->Value).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FLocMetadataValue,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pTVar8 == pTVar7) break;
    ::`anonymous_namespace'::SerializeLocMetadataValue
              ((FStructuredArchiveSlot)FVar4.StructuredArchive,pTVar8);
    pTVar8 = pTVar8 + 1;
  }
  return;
}

// ToString @ 141715c70

FString * __thiscall
FLocMetadataValueArray::ToString(FLocMetadataValueArray *this,FString *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  
  iVar1 = (this->Value).ArrayNum;
  pFVar6 = (this->Value).AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  while( true ) {
    if ((this->Value).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FLocMetadataValue,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    pFVar4 = (FString *)(**(code **)(**(longlong **)pFVar6 + 8))(*(longlong **)pFVar6,local_38);
    pwVar5 = L",";
    if (local_58.Data.ArrayNum < 2) {
      pwVar5 = L"";
    }
    ::FString::ConcatCF(&local_48,pwVar5,pFVar4);
    iVar8 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar8);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"[%s]");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

