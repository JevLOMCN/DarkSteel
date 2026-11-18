// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorSequence
// Functions: 5

// StaticStruct @ 14eacfbd0

UScriptStruct * __cdecl FActorSequenceObjectReferenceMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferenceMap.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ActorSequence();
    Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferenceMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap,
                         (UObject *)pUVar1,L"ActorSequenceObjectReferenceMap");
  }
  return Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferenceMap.OuterSingleton;
}

// CreateBinding @ 14ead1a70

void __thiscall
FActorSequenceObjectReferenceMap::CreateBinding
          (FActorSequenceObjectReferenceMap *this,FGuid *param_1,
          FActorSequenceObjectReference *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FGuid *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar7 = TArray<FGuid,TSizedDefaultAllocator<32>_>::IndexOfByKey<FGuid>(&this->BindingIds,param_1);
  if (uVar7 == 0xffffffff) {
    pFVar3 = (FGuid *)(this->BindingIds).AllocatorInstance.Data;
    uVar7 = (this->BindingIds).ArrayNum;
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->BindingIds).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->BindingIds).ArrayNum;
    piVar1 = &(this->BindingIds).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,(ForAnyElementType *)this,piVar1);
    }
    (this->BindingIds).ArrayNum = iVar8 + 1;
    uVar5 = *(undefined8 *)&param_1->C;
    pFVar2 = (this->BindingIds).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(pFVar2 + 8) = uVar5;
    iVar8 = (this->References).ArrayNum;
    piVar1 = &(this->References).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->References).AllocatorInstance,piVar1);
    }
    (this->References).ArrayNum = iVar8 + 1;
    DefaultConstructItems<FActorSequenceObjectReferences,int>
              ((this->References).AllocatorInstance.Data + (longlong)iVar8 * 0x10,1);
  }
  uVar9 = 0;
  if ((int)uVar7 < (this->References).ArrayNum) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TArray<FActorSequenceObjectReference,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FActorSequenceObjectReference_const_&>
            ((TArray<FActorSequenceObjectReference,TSizedDefaultAllocator<32>_> *)
             ((this->References).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10),param_2);
  return;
}

// HasBinding @ 14ead2550

bool __thiscall
FActorSequenceObjectReferenceMap::HasBinding(FActorSequenceObjectReferenceMap *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->BindingIds).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->BindingIds).ArrayNum * 0x10;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == *(uint *)(pFVar1 + 0xc) && param_1->C == *(uint *)(pFVar1 + 8)) &&
          param_1->B == *(uint *)(pFVar1 + 4)) && param_1->A == *(uint *)pFVar1) {
        return true;
      }
      pFVar1 = pFVar1 + 0x10;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// RemoveBinding @ 14ead27c0

void __thiscall
FActorSequenceObjectReferenceMap::RemoveBinding
          (FActorSequenceObjectReferenceMap *this,FGuid *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar6 = TArray<FGuid,TSizedDefaultAllocator<32>_>::IndexOfByKey<FGuid>(&this->BindingIds,param_1);
  if (uVar6 != 0xffffffff) {
    uVar9 = ~uVar6 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar6 < (this->BindingIds).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (this->BindingIds).ArrayNum;
    pFVar3 = (this->BindingIds).AllocatorInstance.Data;
    iVar8 = iVar2 + ~uVar6;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar3 + (longlong)(int)uVar6 * 0x10,pFVar3 + (longlong)(iVar2 - iVar8) * 0x10,
              (longlong)iVar8 << 4);
    }
    piVar1 = &(this->BindingIds).ArrayNum;
    *piVar1 = *piVar1 + -1;
    uVar7 = 0;
    if ((int)uVar6 < (this->References).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TArray<FActorSequenceObjectReferences,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&this->References,uVar6);
  }
  return;
}

// ResolveBinding @ 14ead2b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FActorSequenceObjectReferenceMap::ResolveBinding
          (FActorSequenceObjectReferenceMap *this,FGuid *param_1,AActor *param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  FActorSequenceObjectReference *pFVar1;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<UObject_*> FVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FActorSequenceObjectReference *this_00;
  undefined1 local_res8 [8];
  UObject *local_28 [2];
  
  uVar6 = TArray<FGuid,TSizedDefaultAllocator<32>_>::IndexOfByKey<FGuid>(&this->BindingIds,param_1);
  if (uVar6 != 0xffffffff) {
    uVar9 = 0;
    if ((int)uVar6 < (this->References).ArrayNum) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = (this->References).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
    iVar2 = *(int *)(pFVar10 + 8);
    this_00 = *(FActorSequenceObjectReference **)pFVar10;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if (*(int *)(pFVar10 + 8) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FActorSequenceObjectReference_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar1) break;
      local_28[0] = FActorSequenceObjectReference::Resolve(this_00,param_2);
      if (local_28[0] != (UObject *)0x0) {
        FVar3 = (param_3->AllocatorInstance).SecondaryData;
        FVar8 = (ForElementType<UObject_*>)param_3;
        if (FVar3 != (ForElementType<UObject_*>)0x0) {
          FVar8 = FVar3;
        }
        if ((ulonglong)FVar8 <= local_28) {
          FVar8 = (ForElementType<UObject_*>)param_3;
          if (FVar3 != (ForElementType<UObject_*>)0x0) {
            FVar8 = FVar3;
          }
          if ((local_28 < (UObject **)((longlong)FVar8 + (longlong)param_3->ArrayMax * 8)) &&
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
        }
        iVar7 = param_3->ArrayNum;
        if (iVar7 == param_3->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                            (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar7 + 1;
        FVar3 = (param_3->AllocatorInstance).SecondaryData;
        FVar8 = (ForElementType<UObject_*>)param_3;
        if (FVar3 != (ForElementType<UObject_*>)0x0) {
          FVar8 = FVar3;
        }
        *(UObject **)((longlong)FVar8 + (longlong)iVar7 * 8) = local_28[0];
      }
      this_00 = this_00 + 1;
    }
  }
  return;
}

