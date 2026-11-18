// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// MultiFind<TSizedDefaultAllocator<32>_> @ 14759fb20

void __thiscall
TMultiMap<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>_>
           *this,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> param_1,
          TArray<TSharedPtr<FSkeletonRemapping,1>,TSizedDefaultAllocator<32>_> *param_2,bool param_3
          )

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_38.Index;
  iVar7 = local_38.NextIndex;
  do {
    local_38.Index = iVar6;
    if (local_38.Index == -1) {
LAB_14759fcc7:
      if (param_3) {
        pFVar8 = (param_2->AllocatorInstance).Data;
        iVar7 = param_2->ArrayNum / 2;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar10 = pFVar8 + (longlong)(param_2->ArrayNum + -1) * 0x10;
          do {
            uVar2 = *(undefined8 *)(pFVar10 + 8);
            uVar3 = *(undefined8 *)pFVar8;
            uVar4 = *(undefined8 *)(pFVar8 + 8);
            *(undefined8 *)pFVar8 = *(undefined8 *)pFVar10;
            *(undefined8 *)(pFVar8 + 8) = uVar2;
            pFVar8 = pFVar8 + 0x10;
            *(undefined8 *)pFVar10 = uVar3;
            *(undefined8 *)(pFVar10 + 8) = uVar4;
            lVar9 = lVar9 + -1;
            pFVar10 = pFVar10 + -0x10;
          } while (lVar9 != 0);
        }
      }
      return;
    }
    pFVar10 = (FScriptContainerElement *)
              (*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x20 + 8);
    pFVar8 = (param_2->AllocatorInstance).Data;
    if (((pFVar8 <= pFVar10) && (pFVar10 < pFVar8 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar8 = *(undefined8 *)pFVar10;
    lVar9 = *(longlong *)(pFVar10 + 8);
    *(longlong *)(pFVar8 + 8) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    iVar6 = iVar7;
    local_38.Index = iVar7;
    if (iVar7 == -1) goto LAB_14759fcc7;
    do {
      local_48 = local_38.Key.WeakPtr;
      iVar7 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&(local_38.Set)->Elements);
      local_40 = *(FWeakObjectPtr *)
                  ((longlong)iVar6 * 0x20 + *(longlong *)&(local_38.Set)->Elements);
      local_38.NextIndex = iVar7;
      bVar5 = TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>::UEOpEquals<USkeleton_const_,bool>
                        ((TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> *)&local_40,
                         (TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr> *)&local_48);
      if (bVar5) break;
      iVar6 = iVar7;
    } while (iVar7 != -1);
  } while( true );
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 147926480

void __thiscall
TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
           *this,TWeakObjectPtr<UWorld,FWeakObjectPtr> param_1,
          TArray<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_48;
  TBaseKeyIterator<1> local_40;
  
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_40,
             (TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              *)this,(TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>)param_1.WeakPtr);
  iVar6 = local_40.Index;
  iVar7 = local_40.NextIndex;
  do {
    local_40.Index = iVar6;
    if (local_40.Index == -1) {
LAB_14792661a:
      if (param_3) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        iVar7 = param_2->ArrayNum / 2;
        if (0 < iVar7) {
          lVar9 = 0;
          pFVar8 = pFVar1 + (longlong)(param_2->ArrayNum + -1) * 8;
          do {
            uVar3 = *(undefined8 *)(pFVar1 + lVar9 * 8);
            *(undefined8 *)(pFVar1 + lVar9 * 8) = *(undefined8 *)pFVar8;
            lVar9 = lVar9 + 1;
            *(undefined8 *)pFVar8 = uVar3;
            pFVar8 = pFVar8 + -8;
          } while (lVar9 < iVar7);
        }
      }
      return;
    }
    pFVar1 = (FScriptContainerElement *)
             (*(longlong *)&(local_40.Set)->Elements + ((longlong)local_40.Index * 3 + 1) * 8);
    pFVar8 = (param_2->AllocatorInstance).Data;
    if (((pFVar8 <= pFVar1) && (pFVar1 < pFVar8 + (longlong)param_2->ArrayMax * 8)) &&
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
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = *(undefined8 *)pFVar1
    ;
    local_40.Index = iVar7;
    if (iVar7 == -1) goto LAB_14792661a;
    do {
      local_res10 = local_40.Key.WeakPtr;
      iVar2 = *(int *)(*(longlong *)&(local_40.Set)->Elements + 0x10 + (longlong)iVar7 * 0x18);
      local_48 = *(FWeakObjectPtr *)
                  (*(longlong *)&(local_40.Set)->Elements + (longlong)iVar7 * 0x18);
      local_40.NextIndex = iVar2;
      bVar5 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld_const_,bool>
                        ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_48,
                         (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res10);
      iVar6 = iVar7;
      iVar7 = iVar2;
      if (bVar5) break;
      iVar6 = iVar2;
    } while (iVar2 != -1);
  } while( true );
}

// Num @ 147db84b0

int __thiscall
TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
::Num(TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
      *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = iVar5;
  if (*(int *)&this->field_0x48 != 0) {
    puVar4 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar4 = &this->field_0x38;
    }
    iVar1 = *(int *)(puVar4 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)param_1) * 4);
    iVar3 = iVar1;
    if (iVar1 != -1) {
      do {
        iVar1 = *(int *)(*(longlong *)this + 0x10 + (longlong)iVar3 * 0x18);
        if (*(int *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) break;
        iVar3 = iVar1;
      } while (iVar1 != -1);
    }
    iVar6 = 0;
    if (iVar3 != -1) {
      while (iVar5 = iVar5 + 1, iVar6 = iVar5, iVar1 != -1) {
        while (lVar2 = (longlong)iVar1, iVar1 = *(int *)(*(longlong *)this + 0x10 + lVar2 * 0x18),
              *(int *)(*(longlong *)this + lVar2 * 0x18) != param_1) {
          if (iVar1 == -1) {
            return iVar5;
          }
        }
      }
    }
  }
  return iVar6;
}

// Remove @ 147e79260

int __thiscall
TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
::Remove(TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
         *this,int param_1,FPendingLatentAction *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int local_res8;
  
  iVar6 = 0;
  local_res8 = 0;
  uVar13 = (ulonglong)param_1;
  if (*(int *)&this->field_0x48 == 0) {
    return 0;
  }
  puVar9 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar9 = &this->field_0x38;
  }
  uVar12 = *(uint *)(puVar9 + ((longlong)*(int *)&this->field_0x48 - 1U & uVar13) * 4);
  uVar10 = uVar12;
  if (uVar12 != 0xffffffff) {
    do {
      uVar12 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar10 * 0x18);
      if (*(int *)(*(longlong *)this + (longlong)(int)uVar10 * 0x18) == param_1) break;
      uVar10 = uVar12;
    } while (uVar12 != 0xffffffff);
  }
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  do {
    lVar1 = (longlong)(int)uVar10 * 0x18;
    if (*(FPendingLatentAction **)(*(longlong *)this + 8 + lVar1) == param_2) {
      if (((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) {
LAB_147e7936d:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      else {
        if ((*(int *)&this->field_0x28 <= (int)uVar10) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        uVar11 = uVar10;
        if ((int)uVar10 < 0) {
          uVar11 = uVar10 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0)
        goto LAB_147e7936d;
      }
      lVar2 = *(longlong *)this;
      puVar9 = &this->field_0x38;
      if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x40;
      }
      puVar14 = (uint *)(puVar9 + (longlong)*(int *)(lVar2 + 0x14 + lVar1) * 4);
      while( true ) {
        uVar11 = *puVar14;
        if ((uVar11 == 0xffffffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar11 == uVar10) break;
        puVar14 = (uint *)(*(longlong *)this + (longlong)(int)uVar11 * 0x18 + 0x10);
      }
      *puVar14 = *(uint *)(lVar2 + 0x10 + lVar1);
      lVar2 = *(longlong *)this;
      bVar4 = (byte)uVar10 & 0x1f;
      uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
      if ((((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      puVar9 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x20;
      }
      uVar7 = uVar10;
      if ((int)uVar10 < 0) {
        uVar7 = uVar10 + 0x1f;
      }
      if (((*(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) & uVar11) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(uint *)(lVar2 + (longlong)*(int *)&this->field_0x30 * 0x18) = uVar10;
      }
      *(undefined4 *)(lVar2 + lVar1) = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)&this->field_0x30;
      }
      *(undefined4 *)(lVar2 + 4 + lVar1) = uVar8;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(uint *)&this->field_0x30 = uVar10;
      if ((((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      uVar13 = (ulonglong)(uint)param_1;
      puVar9 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x20;
      }
      *(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) & ~uVar11;
      iVar6 = local_res8 + 1;
      local_res8 = iVar6;
    }
    if (uVar12 == 0xffffffff) {
      return iVar6;
    }
    uVar10 = uVar12;
    while (uVar12 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar10 * 0x18),
          *(int *)(*(longlong *)this + (longlong)(int)uVar10 * 0x18) != (int)uVar13) {
      uVar10 = uVar12;
      if (uVar12 == 0xffffffff) {
        return iVar6;
      }
    }
  } while( true );
}

// EmplaceUnique<FString_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_const_&> @ 147f5e140

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TShaderRefBase<FShader,FShaderMapPointerTable> * __thiscall
TMultiMap<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>_>
::EmplaceUnique<FString_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_const_&>
          (TMultiMap<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>_>
           *this,FString *param_1,TShaderRefBase<FShader,FShaderMapPointerTable> *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  TShaderRefBase<FShader,FShaderMapPointerTable> *pTVar9;
  bool bVar10;
  int local_res10;
  FString *local_58;
  TShaderRefBase<FShader,FShaderMapPointerTable> *local_50;
  TBaseKeyIterator<0> local_48;
  
  TSet<TTuple<FString,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_48,
             (TSet<TTuple<FString,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FString_const_>)param_1);
  iVar7 = local_48.Index;
  iVar4 = local_48.NextIndex;
joined_r0x000147f5e176:
  iVar8 = iVar4;
  local_48.Index = iVar7;
  if (iVar7 != -1) {
    lVar1 = *(longlong *)&(local_48.Set)->Elements + (longlong)iVar7 * 0x28;
    if (*(FShader **)(lVar1 + 0x10) == param_2->ShaderContent) {
      if ((*(FShaderMapBase **)(lVar1 + 0x18) != param_2->ShaderMap) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Lhs.GetShaderMap() == Rhs.GetShaderMap()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x4b5,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TShaderRefBase<FShader,FShaderMapPointerTable> *)(*pcVar6)();
        return pTVar9;
      }
      pTVar9 = (TShaderRefBase<FShader,FShaderMapPointerTable> *)
               (*(longlong *)&(local_48.Set)->Elements + (longlong)iVar7 * 0x28 + 0x10);
      if (pTVar9 != (TShaderRefBase<FShader,FShaderMapPointerTable> *)0x0) {
        return pTVar9;
      }
    }
    else {
      local_48.Index = iVar8;
      if (iVar8 != -1) {
        do {
          iVar3 = ((local_48.Key)->Data).ArrayNum;
          iVar4 = *(int *)(*(longlong *)&(local_48.Set)->Elements + 0x20 + (longlong)iVar8 * 0x28);
          puVar2 = (undefined8 *)(*(longlong *)&(local_48.Set)->Elements + (longlong)iVar8 * 0x28);
          iVar5 = *(int *)(puVar2 + 1);
          local_48.NextIndex = iVar4;
          iVar7 = iVar8;
          if (iVar5 == iVar3) {
            if (iVar5 < 2) goto joined_r0x000147f5e176;
            iVar8 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)*puVar2,
                               (wchar_t *)((local_48.Key)->Data).AllocatorInstance.Data);
            bVar10 = iVar8 == 0;
          }
          else {
            bVar10 = iVar5 + iVar3 == 1;
          }
          if ((bVar10) || (iVar8 = iVar4, iVar7 = iVar4, iVar4 == -1)) goto joined_r0x000147f5e176;
        } while( true );
      }
    }
  }
  local_58 = param_1;
  local_50 = param_2;
  TSet<TTuple<FString,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_const_&>_>
            ((TSet<TTuple<FString,TShaderRefBase<FShader,FShaderMapPointerTable>_>,TDefaultMapHashableKeyFuncs<FString,TShaderRefBase<FShader,FShaderMapPointerTable>,1>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_const_&>
                      *)&local_res10,(bool *)&local_58);
  return (TShaderRefBase<FShader,FShaderMapPointerTable> *)
         (*(longlong *)this + (longlong)local_res10 * 0x28 + 0x10);
}

// RemoveSingle @ 147fedd60

int __thiscall
TMultiMap<FGuid,FMaterialParameterCollectionInstanceResource_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMaterialParameterCollectionInstanceResource_*,1>_>
::RemoveSingle(TMultiMap<FGuid,FMaterialParameterCollectionInstanceResource_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMaterialParameterCollectionInstanceResource_*,1>_>
               *this,FGuid *param_1,FMaterialParameterCollectionInstanceResource *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  uint *puVar7;
  ForElementType<unsigned_int> FVar8;
  TBaseKeyIterator<0> local_38;
  
  TSet<TTuple<FGuid,FMaterialParameterCollectionInstanceResource_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialParameterCollectionInstanceResource_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_38,
             (TSet<TTuple<FGuid,FMaterialParameterCollectionInstanceResource_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialParameterCollectionInstanceResource_*,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FGuid_const_>)param_1);
  if (local_38.Index == 0xffffffff) {
    return 0;
  }
  while (iVar4 = local_38.Index,
        *(FMaterialParameterCollectionInstanceResource **)
         ((longlong)local_38.Index * 0x20 + 0x10 + *(longlong *)&(local_38.Set)->Elements) !=
        param_2) {
    if (local_38.NextIndex == 0xffffffff) {
      return 0;
    }
    local_38.Index = local_38.NextIndex;
    do {
      puVar7 = (uint *)((longlong)local_38.Index * 0x20 + *(longlong *)&(local_38.Set)->Elements);
      local_38.NextIndex = puVar7[6];
      if ((((local_38.Key)->C == puVar7[2] && (local_38.Key)->D == puVar7[3]) &&
          (local_38.Key)->B == puVar7[1]) && (local_38.Key)->A == *puVar7) break;
      local_38.Index = local_38.NextIndex;
    } while (local_38.NextIndex != 0xffffffff);
    if (local_38.Index == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < local_38.Index) && (local_38.Index < *(int *)&((local_38.Set)->Elements).field_0x28)) {
    FVar8 = *(ForElementType<unsigned_int> *)&((local_38.Set)->Elements).field_0x20;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&((local_38.Set)->Elements).field_0x10;
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(local_38.Index + (local_38.Index >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (local_38.Index & 0x1fU) & 1) != 0) goto LAB_147fedea4;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_147fedea4:
  FVar5 = ((local_38.Set)->Hash).SecondaryData;
  lVar6 = (longlong)iVar4 * 0x20 + *(longlong *)&(local_38.Set)->Elements;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&(local_38.Set)->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar6 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == iVar4) {
      *puVar7 = *(uint *)(lVar6 + 0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_38.Set,iVar4,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&(local_38.Set)->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Remove @ 1484843c0

int __thiscall
TMultiMap<unsigned_int,Nanite::FResources_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Nanite::FResources_*,1>_>
::Remove(TMultiMap<unsigned_int,Nanite::FResources_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Nanite::FResources_*,1>_>
         *this,uint param_1,FResources *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int local_res8;
  
  iVar6 = 0;
  local_res8 = 0;
  uVar13 = (ulonglong)(int)param_1;
  if (*(int *)&this->field_0x48 == 0) {
    return 0;
  }
  puVar9 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar9 = &this->field_0x38;
  }
  uVar12 = *(uint *)(puVar9 + ((longlong)*(int *)&this->field_0x48 - 1U & uVar13) * 4);
  uVar10 = uVar12;
  if (uVar12 != 0xffffffff) {
    do {
      uVar12 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar10 * 0x18);
      if (*(uint *)(*(longlong *)this + (longlong)(int)uVar10 * 0x18) == param_1) break;
      uVar10 = uVar12;
    } while (uVar12 != 0xffffffff);
  }
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  do {
    lVar1 = (longlong)(int)uVar10 * 0x18;
    if (*(FResources **)(*(longlong *)this + 8 + lVar1) == param_2) {
      if (((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) {
LAB_1484844cd:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      else {
        if ((*(int *)&this->field_0x28 <= (int)uVar10) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        uVar11 = uVar10;
        if ((int)uVar10 < 0) {
          uVar11 = uVar10 + 0x1f;
        }
        if ((*(uint *)(puVar9 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0)
        goto LAB_1484844cd;
      }
      lVar2 = *(longlong *)this;
      puVar9 = &this->field_0x38;
      if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x40;
      }
      puVar14 = (uint *)(puVar9 + (longlong)*(int *)(lVar2 + 0x14 + lVar1) * 4);
      while( true ) {
        uVar11 = *puVar14;
        if ((uVar11 == 0xffffffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar11 == uVar10) break;
        puVar14 = (uint *)(*(longlong *)this + (longlong)(int)uVar11 * 0x18 + 0x10);
      }
      *puVar14 = *(uint *)(lVar2 + 0x10 + lVar1);
      lVar2 = *(longlong *)this;
      bVar4 = (byte)uVar10 & 0x1f;
      uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
      if ((((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      puVar9 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x20;
      }
      uVar7 = uVar10;
      if ((int)uVar10 < 0) {
        uVar7 = uVar10 + 0x1f;
      }
      if (((*(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) & uVar11) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(uint *)(lVar2 + (longlong)*(int *)&this->field_0x30 * 0x18) = uVar10;
      }
      *(undefined4 *)(lVar2 + lVar1) = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)&this->field_0x30;
      }
      *(undefined4 *)(lVar2 + 4 + lVar1) = uVar8;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(uint *)&this->field_0x30 = uVar10;
      if ((((int)uVar10 < 0) || (*(int *)&this->field_0x28 <= (int)uVar10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      uVar13 = (ulonglong)param_1;
      puVar9 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)&this->field_0x20;
      }
      *(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)((int)uVar7 >> 5) * 4) & ~uVar11;
      iVar6 = local_res8 + 1;
      local_res8 = iVar6;
    }
    if (uVar12 == 0xffffffff) {
      return iVar6;
    }
    uVar10 = uVar12;
    while (uVar12 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar10 * 0x18),
          *(int *)(*(longlong *)this + (longlong)(int)uVar10 * 0x18) != (int)uVar13) {
      uVar10 = uVar12;
      if (uVar12 == 0xffffffff) {
        return iVar6;
      }
    }
  } while( true );
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 148a3de00

void __thiscall
TMultiMap<FString,FPackageNameAndLODIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FString,FPackageNameAndLODIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>_>
           *this,FString *param_1,
          TArray<FPackageNameAndLODIndex,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  TBaseKeyIterator<1> local_48;
  
  TSet<TTuple<FString,FPackageNameAndLODIndex>,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_48,
             (TSet<TTuple<FString,FPackageNameAndLODIndex>,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FString_const_>)param_1);
  iVar8 = local_48.Index;
  iVar10 = local_48.NextIndex;
joined_r0x000148a3de34:
  local_48.Index = iVar8;
  if (local_48.Index != -1) {
    pFVar14 = (param_2->AllocatorInstance).Data;
    pFVar12 = (FScriptContainerElement *)
              (*(longlong *)&(local_48.Set)->Elements + 0x10 + (longlong)local_48.Index * 0x30);
    if (((pFVar14 <= pFVar12) && (pFVar12 < pFVar14 + (longlong)param_2->ArrayMax * 0x18)) &&
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
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    pFVar14 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x18;
    ::FString::FString((FString *)pFVar14,(FString *)pFVar12);
    *(undefined4 *)
     &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar14[0x10].field_0x0)->AllocatorInstance)
      .Data = *(undefined4 *)
               &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12[0x10].field_0x0)->
                AllocatorInstance).Data;
    iVar8 = iVar10;
    local_48.Index = iVar10;
    if (iVar10 != -1) {
      do {
        iVar9 = ((local_48.Key)->Data).ArrayNum;
        puVar13 = (undefined8 *)((longlong)iVar8 * 0x30 + *(longlong *)&(local_48.Set)->Elements);
        iVar2 = *(int *)(puVar13 + 1);
        iVar10 = *(int *)(puVar13 + 5);
        local_48.NextIndex = iVar10;
        if (iVar2 == iVar9) {
          if (iVar2 < 2) goto joined_r0x000148a3de34;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*puVar13,
                             (wchar_t *)((local_48.Key)->Data).AllocatorInstance.Data);
          bVar7 = iVar9 == 0;
        }
        else {
          bVar7 = iVar2 + iVar9 == 1;
        }
        if ((bVar7) || (iVar8 = iVar10, iVar10 == -1)) goto joined_r0x000148a3de34;
      } while( true );
    }
  }
  if (param_3) {
    pFVar14 = (param_2->AllocatorInstance).Data;
    iVar10 = param_2->ArrayNum / 2;
    lVar11 = (longlong)iVar10;
    if (0 < iVar10) {
      pFVar12 = pFVar14 + (longlong)(param_2->ArrayNum + -1) * 0x18;
      do {
        uVar1 = *(undefined8 *)(pFVar14 + 0x10);
        uVar4 = *(undefined8 *)(pFVar12 + 8);
        uVar5 = *(undefined8 *)pFVar14;
        uVar6 = *(undefined8 *)(pFVar14 + 8);
        *(undefined8 *)pFVar14 = *(undefined8 *)pFVar12;
        *(undefined8 *)(pFVar14 + 8) = uVar4;
        *(undefined8 *)(pFVar14 + 0x10) = *(undefined8 *)(pFVar12 + 0x10);
        *(undefined8 *)pFVar12 = uVar5;
        *(undefined8 *)(pFVar12 + 8) = uVar6;
        *(undefined8 *)(pFVar12 + 0x10) = uVar1;
        lVar11 = lVar11 + -1;
        pFVar12 = pFVar12 + -0x18;
        pFVar14 = pFVar14 + 0x18;
      } while (lVar11 != 0);
    }
  }
  return;
}

