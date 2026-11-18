// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 8

// Find @ 149652190

int __thiscall
TArray<FKey,TSizedDefaultAllocator<32>_>::Find
          (TArray<FKey,TSizedDefaultAllocator<32>_> *this,FKey *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 3) {
    pFVar2 = pFVar1;
    do {
      if (*pFVar2 == param_1->KeyName) {
        return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x18);
      }
      pFVar2 = pFVar2 + 3;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 3);
  }
  return -1;
}

// RemoveAtImpl @ 14965f410

void __thiscall
TArray<FKey,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FKey,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FKey *_Dst;
  int iVar1;
  
  _Dst = (FKey *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FKey,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 149662150

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UCombinedTransformGizmo::FSubGizmoInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UCombinedTransformGizmo::FSubGizmoInfo,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// FilterByPredicate<TFunction<bool___cdecl(AActor_*)>_> @ 1496ce710

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<AActor_*,TSizedDefaultAllocator<32>_>::FilterByPredicate<TFunction<bool___cdecl(AActor_*)>_>
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TFunction<bool___cdecl(AActor_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined8 local_48 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar10 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar10 == pFVar1) {
      if (*(longlong *)param_1 != 0) {
        plVar9 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar9 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      return __return_storage_ptr__;
    }
    local_48[0] = *(undefined8 *)pFVar10;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar9 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar9 = (longlong *)&param_1->field_0x10;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar4 = (*pcVar2)(uVar7,local_48);
    if (cVar4 != '\0') {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar10) &&
          (pFVar10 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(undefined8 *)(pFVar3 + (longlong)iVar6 * 8) = *(undefined8 *)pFVar10;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// FilterByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_> @ 1496ce880

TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::
FilterByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_>
          (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TFunction<bool___cdecl(UActorComponent_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined8 local_48 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar10 + (longlong)this->ArrayNum * 8;
  do {
    if (pFVar10 == pFVar1) {
      if (*(longlong *)param_1 != 0) {
        plVar9 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar9 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      return __return_storage_ptr__;
    }
    local_48[0] = *(undefined8 *)pFVar10;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar9 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar9 = (longlong *)&param_1->field_0x10;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar4 = (*pcVar2)(uVar7,local_48);
    if (cVar4 != '\0') {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar10) &&
          (pFVar10 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(undefined8 *)(pFVar3 + (longlong)iVar6 * 8) = *(undefined8 *)pFVar10;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// FilterByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_> @ 1496ce9f0

TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>::
FilterByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_>
          (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *this
          ,TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TFunction<bool___cdecl(UActorComponent_*)> *param_1)

{
  ForElementType<UActorComponent_*> FVar1;
  code *pcVar2;
  ForElementType<UActorComponent_*> FVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong *plVar10;
  ForElementType<UActorComponent_*> FVar11;
  undefined8 local_48 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar11 = (ForElementType<UActorComponent_*>)this;
  if (FVar1 != (ForElementType<UActorComponent_*>)0x0) {
    FVar11 = FVar1;
  }
  FVar1 = (ForElementType<UActorComponent_*>)((longlong)FVar11 + (longlong)this->ArrayNum * 8);
  if (FVar11 != FVar1) {
    do {
      local_48[0] = *(undefined8 *)FVar11;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar2 = *(code **)param_1;
      plVar10 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar10 = (longlong *)&param_1->field_0x10;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      cVar5 = (*pcVar2)(uVar8,local_48);
      if (cVar5 != '\0') {
        FVar3 = (ForElementType<UActorComponent_*>)(__return_storage_ptr__->AllocatorInstance).Data;
        if ((((ulonglong)FVar3 <= (ulonglong)FVar11) &&
            ((ulonglong)FVar11 <
             (ulonglong)((longlong)FVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar9;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(undefined8 *)(pFVar4 + (longlong)iVar7 * 8) = *(undefined8 *)FVar11;
      }
      FVar11 = (ForElementType<UActorComponent_*>)((longlong)FVar11 + 8);
    } while (FVar11 != FVar1);
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FindByPredicate<TFunction<bool___cdecl(AActor_*)>_> @ 1496cee00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor ** __thiscall
TArray<AActor_*,TSizedDefaultAllocator<32>_>::FindByPredicate<TFunction<bool___cdecl(AActor_*)>_>
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *this,
          TFunction<bool___cdecl(AActor_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  AActor *local_28 [2];
  
  pFVar6 = (this->AllocatorInstance).Data;
  plVar7 = (longlong *)&param_1->field_0x10;
  pFVar1 = pFVar6 + (longlong)this->ArrayNum * 8;
  while( true ) {
    if (pFVar6 == pFVar1) {
      if (*(longlong *)param_1 != 0) {
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar7 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      return (AActor **)0x0;
    }
    local_28[0] = *(AActor **)pFVar6;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar5 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar5 = plVar7;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,local_28);
    if (cVar3 != '\0') break;
    pFVar6 = pFVar6 + 8;
  }
  if (*(longlong *)param_1 == 0) {
    return (AActor **)pFVar6;
  }
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
  (**(code **)(*plVar7 + 0x10))(plVar7);
  return (AActor **)pFVar6;
}

// FindByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_> @ 1496ceec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent ** __thiscall
TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::
FindByPredicate<TFunction<bool___cdecl(UActorComponent_*)>_>
          (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *this,
          TFunction<bool___cdecl(UActorComponent_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  UActorComponent *local_28 [2];
  
  pFVar6 = (this->AllocatorInstance).Data;
  plVar7 = (longlong *)&param_1->field_0x10;
  pFVar1 = pFVar6 + (longlong)this->ArrayNum * 8;
  while( true ) {
    if (pFVar6 == pFVar1) {
      if (*(longlong *)param_1 != 0) {
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar7 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      return (UActorComponent **)0x0;
    }
    local_28[0] = *(UActorComponent **)pFVar6;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar5 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar5 = plVar7;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,local_28);
    if (cVar3 != '\0') break;
    pFVar6 = pFVar6 + 8;
  }
  if (*(longlong *)param_1 == 0) {
    return (UActorComponent **)pFVar6;
  }
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar7 = *(longlong **)&param_1->field_0x28;
  }
  (**(code **)(*plVar7 + 0x10))(plVar7);
  return (UActorComponent **)pFVar6;
}

