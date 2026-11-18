// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticStruct @ 14758a7e0

UScriptStruct * __cdecl FPreviewAssetAttachContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPreviewAssetAttachContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPreviewAssetAttachContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer,(UObject *)pUVar1,
                         L"PreviewAssetAttachContainer");
  }
  return Z_Registration_Info_UScriptStruct_FPreviewAssetAttachContainer.OuterSingleton;
}

// operator[] @ 1475abee0

FPreviewAttachedObjectPair * __thiscall
FPreviewAssetAttachContainer::operator[](FPreviewAssetAttachContainer *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreviewAttachedObjectPair *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->AttachedObjects).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreviewAttachedObjectPair *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreviewAttachedObjectPair *)
         ((this->AttachedObjects).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// operator[] @ 1475abf60

FPreviewAttachedObjectPair * __thiscall
FPreviewAssetAttachContainer::operator[](FPreviewAssetAttachContainer *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreviewAttachedObjectPair *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->AttachedObjects).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPreviewAttachedObjectPair *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreviewAttachedObjectPair *)
         ((this->AttachedObjects).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// AddAttachedObject @ 1475b10e0

void __thiscall
FPreviewAssetAttachContainer::AddAttachedObject
          (FPreviewAssetAttachContainer *this,UObject *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  size_t _Size;
  FScriptContainerElement *pFVar6;
  UObject *local_res8;
  undefined1 local_48 [24];
  FUtf8String local_30;
  FName local_20;
  
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_48._0_8_ = 0;
  local_48._16_8_ = 0;
  local_48._8_8_ = 0;
  FUtf8String::Reset(&local_30,0);
  local_res8 = param_1;
  local_20 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_48,(FObjectPtr)&local_res8);
  pFVar2 = (this->AttachedObjects).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 <
      pFVar2 + (longlong)(this->AttachedObjects).ArrayMax * 0x30)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AttachedObjects).ArrayNum;
  piVar1 = &(this->AttachedObjects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  _Src.Data = local_30.Data.AllocatorInstance.Data;
  (this->AttachedObjects).ArrayNum = iVar5 + 1;
  pFVar6 = (this->AttachedObjects).AllocatorInstance.Data + (longlong)iVar5 * 0x30;
  *(undefined8 *)pFVar6 = local_48._0_8_;
  pFVar2 = pFVar6 + 0x18;
  *(undefined8 *)(pFVar6 + 8) = local_48._8_8_;
  *(undefined8 *)(pFVar6 + 0x10) = local_48._16_8_;
  *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
  _Size = (size_t)local_30.Data.ArrayNum;
  *(int *)(pFVar6 + 0x20) = local_30.Data.ArrayNum;
  if (local_30.Data.ArrayNum == 0) {
    *(int *)(pFVar6 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_30.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,local_30.Data.ArrayNum,
               (int *)(pFVar6 + 0x24));
    memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,_Src.Data,_Size);
  }
  *(FName *)(pFVar6 + 0x28) = local_20;
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// AddUniqueAttachedObject @ 1475b2af0

void __thiscall
FPreviewAssetAttachContainer::AddUniqueAttachedObject
          (FPreviewAssetAttachContainer *this,UObject *param_1,FName param_2)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  size_t _Size;
  FScriptContainerElement *pFVar8;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar9;
  undefined1 local_res8 [8];
  UObject *local_res20;
  undefined1 local_58 [24];
  FUtf8String local_40;
  FName local_30;
  
  iVar6 = (this->AttachedObjects).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(this->AttachedObjects).AllocatorInstance.Data;
  pTVar9 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)this_00 + (longlong)iVar6 * 0x30);
  while( true ) {
    if ((this->AttachedObjects).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPreviewAttachedObjectPair,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pTVar9) {
      local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.Data.ArrayNum = 0;
      local_40.Data.ArrayMax = 0;
      local_58._0_8_ = 0;
      local_58._16_8_ = 0;
      local_58._8_8_ = 0;
      FUtf8String::Reset(&local_40,0);
      local_res20 = param_1;
      local_30 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)local_58,(FObjectPtr)&local_res20);
      pFVar3 = (this->AttachedObjects).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 <
           pFVar3 + (longlong)(this->AttachedObjects).ArrayMax * 0x30)) &&
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
      iVar6 = (this->AttachedObjects).ArrayNum;
      piVar1 = &(this->AttachedObjects).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,(ForAnyElementType *)this,piVar1);
      }
      _Src.Data = local_40.Data.AllocatorInstance.Data;
      (this->AttachedObjects).ArrayNum = iVar6 + 1;
      pFVar8 = (this->AttachedObjects).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
      pFVar3 = pFVar8 + 0x18;
      *(undefined8 *)pFVar8 = local_58._0_8_;
      *(undefined8 *)(pFVar8 + 8) = local_58._8_8_;
      *(undefined8 *)(pFVar8 + 0x10) = local_58._16_8_;
      *(FScriptContainerElement **)&pFVar3->field_0x0 = (FScriptContainerElement *)0x0;
      _Size = (size_t)local_40.Data.ArrayNum;
      *(int *)(pFVar8 + 0x20) = local_40.Data.ArrayNum;
      if (local_40.Data.ArrayNum == 0) {
        *(int *)(pFVar8 + 0x24) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_40.Data.ArrayNum,0,(ForAnyElementType *)pFVar3,local_40.Data.ArrayNum,
                   (int *)(pFVar8 + 0x24));
        memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,_Src.Data,_Size);
      }
      *(FName *)(pFVar8 + 0x28) = local_30;
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      return;
    }
    pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if ((pUVar7 == (UObject *)0x0) && ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0)) {
      FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    }
    if ((pUVar7 == param_1) &&
       (FVar2.ComparisonIndex.Value = this_00[1].WeakPtr.ObjectIndex,
       FVar2.Number = this_00[1].WeakPtr.ObjectSerialNumber, FVar2 == param_2)) break;
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[1].ObjectID;
  }
  return;
}

// ClearAllAttachedObjects @ 1475b9f50

void __thiscall
FPreviewAssetAttachContainer::ClearAllAttachedObjects(FPreviewAssetAttachContainer *this)

{
  int *piVar1;
  
  DestructItems<FPreviewAttachedObjectPair,int>
            ((FPreviewAttachedObjectPair *)(this->AttachedObjects).AllocatorInstance.Data,
             (this->AttachedObjects).ArrayNum);
  piVar1 = &(this->AttachedObjects).ArrayMax;
  (this->AttachedObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// CreateConstIterator @ 1475bbab0

TIndexedContainerIterator<TArray<FPreviewAttachedObjectPair,TSizedDefaultAllocator<32>_>_const_,FPreviewAttachedObjectPair_const_,int>
* __thiscall
FPreviewAssetAttachContainer::CreateConstIterator
          (FPreviewAssetAttachContainer *this,
          TIndexedContainerIterator<TArray<FPreviewAttachedObjectPair,TSizedDefaultAllocator<32>_>_const_,FPreviewAttachedObjectPair_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Container = &this->AttachedObjects;
  __return_storage_ptr__->Index = 0;
  return __return_storage_ptr__;
}

// CreateIterator @ 1475bcca0

TIndexedContainerIterator<TArray<FPreviewAttachedObjectPair,TSizedDefaultAllocator<32>_>,FPreviewAttachedObjectPair,int>
* __thiscall
FPreviewAssetAttachContainer::CreateIterator
          (FPreviewAssetAttachContainer *this,
          TIndexedContainerIterator<TArray<FPreviewAttachedObjectPair,TSizedDefaultAllocator<32>_>,FPreviewAttachedObjectPair,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Container = &this->AttachedObjects;
  __return_storage_ptr__->Index = 0;
  return __return_storage_ptr__;
}

// GetAttachedObjectByAttachName @ 1475d1d10

UObject * __thiscall
FPreviewAssetAttachContainer::GetAttachedObjectByAttachName
          (FPreviewAssetAttachContainer *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  int iVar5;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  longlong lVar6;
  uint uVar7;
  
  iVar5 = (this->AttachedObjects).ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < iVar5) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UObject *)(*pcVar1)();
        return pUVar4;
      }
      iVar5 = (this->AttachedObjects).ArrayNum;
      if (*(FName *)((this->AttachedObjects).AllocatorInstance.Data + lVar6 + 0x28) == param_1) {
        uVar3 = 0;
        if ((int)uVar7 < iVar5) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pUVar4 = (UObject *)(*pcVar1)();
          return pUVar4;
        }
        this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
                  ((this->AttachedObjects).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30);
        pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        if (pUVar4 != (UObject *)0x0) {
          return pUVar4;
        }
        if ((this_00->ObjectID).AssetPath.PackageName == (FName)0x0) {
          return (UObject *)0x0;
        }
        FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        return pUVar4;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x30;
    } while ((int)uVar7 < iVar5);
  }
  return (UObject *)0x0;
}

// Num @ 1475e6870

int __thiscall FPreviewAssetAttachContainer::Num(FPreviewAssetAttachContainer *this)

{
  return (this->AttachedObjects).ArrayNum;
}

// RemoveAtSwap @ 1475f3200

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPreviewAssetAttachContainer::RemoveAtSwap
          (FPreviewAssetAttachContainer *this,int param_1,int param_2,EAllowShrinking param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= (this->AttachedObjects).ArrayNum) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<FPreviewAttachedObjectPair,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&this->AttachedObjects,param_1,param_2);
    if (param_3 == Default) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,(ForAnyElementType *)this,(this->AttachedObjects).ArrayNum,
                 &(this->AttachedObjects).ArrayMax);
    }
  }
  return;
}

// RemoveAtSwap @ 1475f32d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPreviewAssetAttachContainer::RemoveAtSwap
          (FPreviewAssetAttachContainer *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->AttachedObjects).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FPreviewAttachedObjectPair,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (&this->AttachedObjects,param_1);
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(ForAnyElementType *)this,(this->AttachedObjects).ArrayNum,
               &(this->AttachedObjects).ArrayMax);
  }
  return;
}

// RemoveAttachedObject @ 1475f3550

void __thiscall
FPreviewAssetAttachContainer::RemoveAttachedObject
          (FPreviewAssetAttachContainer *this,UObject *param_1,FName param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = (this->AttachedObjects).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 0x30;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->AttachedObjects).ArrayNum) {
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
      this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
                ((this->AttachedObjects).AllocatorInstance.Data + lVar7);
      pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      if ((pUVar5 == (UObject *)0x0) && ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0)) {
        FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      }
      if ((pUVar5 == param_1) &&
         (FVar1.ComparisonIndex.Value = this_00[1].WeakPtr.ObjectIndex,
         FVar1.Number = this_00[1].WeakPtr.ObjectSerialNumber, FVar1 == param_2)) {
        uVar4 = 0;
        if ((int)uVar6 < (this->AttachedObjects).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FPreviewAttachedObjectPair,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->AttachedObjects,uVar6);
        return;
      }
      lVar7 = lVar7 + -0x30;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// SaveAttachedObjectsFromDeprecatedProperties @ 1475f6f90

void __thiscall
FPreviewAssetAttachContainer::SaveAttachedObjectsFromDeprecatedProperties
          (FPreviewAssetAttachContainer *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AttachedObjects).ArrayNum;
  pFVar2 = (this->AttachedObjects).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->AttachedObjects).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPreviewAttachedObjectPair,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// ValidatePreviewAttachedObjects @ 147603b20

int __thiscall
FPreviewAssetAttachContainer::ValidatePreviewAttachedObjects(FPreviewAssetAttachContainer *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UObject *pUVar5;
  uint uVar6;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  longlong lVar7;
  
  iVar4 = 0;
  uVar6 = (this->AttachedObjects).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 0x30;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->AttachedObjects).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
                ((this->AttachedObjects).AllocatorInstance.Data + lVar7);
      pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      if (pUVar5 == (UObject *)0x0) {
        pUVar5 = (UObject *)0x0;
        if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        }
        if (pUVar5 == (UObject *)0x0) {
          uVar3 = 0;
          if ((int)uVar6 < (this->AttachedObjects).ArrayNum) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          TArray<FPreviewAttachedObjectPair,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->AttachedObjects,uVar6);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,(ForAnyElementType *)this,(this->AttachedObjects).ArrayNum,
                     &(this->AttachedObjects).ArrayMax);
          iVar4 = iVar4 + 1;
        }
      }
      lVar7 = lVar7 + -0x30;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return iVar4;
}

