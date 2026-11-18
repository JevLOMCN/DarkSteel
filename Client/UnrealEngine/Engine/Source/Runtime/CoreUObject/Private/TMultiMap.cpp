// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// EmplaceUnique<UObject_*_const_&,UObject_*_const_&> @ 141e71700

UObject ** __thiscall
TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
::EmplaceUnique<UObject_*_const_&,UObject_*_const_&>
          (TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
           *this,UObject **param_1,UObject **param_2)

{
  longlong lVar1;
  UObject *pUVar2;
  longlong lVar3;
  UObject **ppUVar4;
  TBaseKeyIterator<0> local_28;
  
  pUVar2 = *param_2;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
              *)this,*param_1);
  if (local_28.Index != -1) {
    lVar3 = *(longlong *)&(local_28.Set)->Elements;
    do {
      lVar1 = (longlong)local_28.Index * 3 + 1;
      ppUVar4 = (UObject **)(lVar3 + lVar1 * 8);
      if (*(UObject **)(lVar3 + lVar1 * 8) == pUVar2) {
        if (ppUVar4 != (UObject **)0x0) {
          return ppUVar4;
        }
        break;
      }
      local_28.Index = local_28.NextIndex;
      if (local_28.NextIndex == -1) break;
      do {
        local_28.NextIndex = *(int *)(lVar3 + 0x10 + (longlong)local_28.Index * 0x18);
        if (*(UObject **)(lVar3 + (longlong)local_28.Index * 0x18) == local_28.Key) break;
        local_28.Index = local_28.NextIndex;
      } while (local_28.NextIndex != -1);
    } while (local_28.Index != -1);
  }
  ppUVar4 = TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
            ::Emplace<UObject_*_const_&,UObject_*_const_&>
                      ((TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
                        *)this,param_1,param_2);
  return ppUVar4;
}

// EmplaceUnique<UObject_const_*_const_&,UObject_*_const_&> @ 141e717c0

UObject ** __thiscall
TMultiMap<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>_>
::EmplaceUnique<UObject_const_*_const_&,UObject_*_const_&>
          (TMultiMap<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>_>
           *this,UObject **param_1,UObject **param_2)

{
  longlong lVar1;
  UObject **ppUVar2;
  UObject *pUVar3;
  longlong lVar4;
  int local_res10;
  TBaseKeyIterator<0> local_28;
  
  pUVar3 = *param_2;
  TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
              *)this,*param_1);
  if (local_28.Index != -1) {
    lVar4 = *(longlong *)&(local_28.Set)->Elements;
    do {
      lVar1 = (longlong)local_28.Index * 3 + 1;
      ppUVar2 = (UObject **)(lVar4 + lVar1 * 8);
      if (*(UObject **)(lVar4 + lVar1 * 8) == pUVar3) {
        if (ppUVar2 != (UObject **)0x0) {
          return ppUVar2;
        }
        break;
      }
      local_28.Index = local_28.NextIndex;
      if (local_28.NextIndex == -1) break;
      do {
        local_28.NextIndex = *(int *)(lVar4 + 0x10 + (longlong)local_28.Index * 0x18);
        if (*(UObject **)(lVar4 + (longlong)local_28.Index * 0x18) == local_28.Key) break;
        local_28.Index = local_28.NextIndex;
      } while (local_28.NextIndex != -1);
    } while (local_28.Index != -1);
  }
  local_28.Set = (TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
                  *)param_1;
  local_28.Key = (UObject *)param_2;
  TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_const_*_const_&,UObject_*_const_&>_>
            ((TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
              *)this,(TPairInitializer<UObject_const_*_const_&,UObject_*_const_&> *)&local_res10,
             (bool *)&local_28);
  return (UObject **)(*(longlong *)this + (longlong)local_res10 * 0x18 + 8);
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 141e7a8b0

void __thiscall
TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
           *this,UObject *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
LAB_141e7aa2c:
      if (param_3) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        iVar6 = param_2->ArrayNum / 2;
        if (0 < iVar6) {
          lVar8 = 0;
          pFVar7 = pFVar1 + (longlong)(param_2->ArrayNum + -1) * 8;
          do {
            uVar2 = *(undefined8 *)(pFVar1 + lVar8 * 8);
            *(undefined8 *)(pFVar1 + lVar8 * 8) = *(undefined8 *)pFVar7;
            lVar8 = lVar8 + 1;
            *(undefined8 *)pFVar7 = uVar2;
            pFVar7 = pFVar7 + -8;
          } while (lVar8 < iVar6);
        }
      }
      return;
    }
    pFVar1 = (FScriptContainerElement *)
             (*(longlong *)&(local_38.Set)->Elements + ((longlong)local_38.Index * 3 + 1) * 8);
    pFVar7 = (param_2->AllocatorInstance).Data;
    local_38.NextIndex = iVar6;
    if (((pFVar7 <= pFVar1) && (pFVar1 < pFVar7 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1
    ;
    if (iVar6 == -1) goto LAB_141e7aa2c;
    local_38.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_38.Set)->Elements + 0x10 +
                      (longlong)local_38.Index * 0x18);
      if (*(UObject **)(*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x18) ==
          local_38.Key) break;
      local_38.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 141e7aa90

void __thiscall
TMultiMap<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>_>
           *this,UObject *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
LAB_141e7ac0c:
      if (param_3) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        iVar6 = param_2->ArrayNum / 2;
        if (0 < iVar6) {
          lVar8 = 0;
          pFVar7 = pFVar1 + (longlong)(param_2->ArrayNum + -1) * 8;
          do {
            uVar2 = *(undefined8 *)(pFVar1 + lVar8 * 8);
            *(undefined8 *)(pFVar1 + lVar8 * 8) = *(undefined8 *)pFVar7;
            lVar8 = lVar8 + 1;
            *(undefined8 *)pFVar7 = uVar2;
            pFVar7 = pFVar7 + -8;
          } while (lVar8 < iVar6);
        }
      }
      return;
    }
    pFVar1 = (FScriptContainerElement *)
             (*(longlong *)&(local_38.Set)->Elements + ((longlong)local_38.Index * 3 + 1) * 8);
    pFVar7 = (param_2->AllocatorInstance).Data;
    local_38.NextIndex = iVar6;
    if (((pFVar7 <= pFVar1) && (pFVar1 < pFVar7 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1
    ;
    if (iVar6 == -1) goto LAB_141e7ac0c;
    local_38.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_38.Set)->Elements + 0x10 +
                      (longlong)local_38.Index * 0x18);
      if (*(UObject **)(*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x18) ==
          local_38.Key) break;
      local_38.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

// EmplaceUnique<UObject_*_const_&,FProperty_*> @ 141f1e390

FProperty ** __thiscall
TMultiMap<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
::EmplaceUnique<UObject_*_const_&,FProperty_*>
          (TMultiMap<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
           *this,UObject **param_1,FProperty **param_2)

{
  longlong lVar1;
  FProperty *pFVar2;
  longlong lVar3;
  FProperty **ppFVar4;
  TBaseKeyIterator<0> local_28;
  
  pFVar2 = *param_2;
  TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
              *)this,*param_1);
  if (local_28.Index != -1) {
    lVar3 = *(longlong *)&(local_28.Set)->Elements;
    do {
      lVar1 = (longlong)local_28.Index * 3 + 1;
      ppFVar4 = (FProperty **)(lVar3 + lVar1 * 8);
      if (*(FProperty **)(lVar3 + lVar1 * 8) == pFVar2) {
        if (ppFVar4 != (FProperty **)0x0) {
          return ppFVar4;
        }
        break;
      }
      local_28.Index = local_28.NextIndex;
      if (local_28.NextIndex == -1) break;
      do {
        local_28.NextIndex = *(int *)(lVar3 + 0x10 + (longlong)local_28.Index * 0x18);
        if (*(UObject **)(lVar3 + (longlong)local_28.Index * 0x18) == local_28.Key) break;
        local_28.Index = local_28.NextIndex;
      } while (local_28.NextIndex != -1);
    } while (local_28.Index != -1);
  }
  ppFVar4 = TMapBase<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
            ::Emplace<UObject_*_const_&,FProperty_*>
                      ((TMapBase<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
                        *)this,param_1,param_2);
  return ppFVar4;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 141f1fb60

void __thiscall
TMultiMap<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<UObject_*,FProperty_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>_>
           *this,UObject *param_1,TArray<FProperty_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<UObject_*,FProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,FProperty_*,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
LAB_141f1fcdc:
      if (param_3) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        iVar6 = param_2->ArrayNum / 2;
        if (0 < iVar6) {
          lVar8 = 0;
          pFVar7 = pFVar1 + (longlong)(param_2->ArrayNum + -1) * 8;
          do {
            uVar2 = *(undefined8 *)(pFVar1 + lVar8 * 8);
            *(undefined8 *)(pFVar1 + lVar8 * 8) = *(undefined8 *)pFVar7;
            lVar8 = lVar8 + 1;
            *(undefined8 *)pFVar7 = uVar2;
            pFVar7 = pFVar7 + -8;
          } while (lVar8 < iVar6);
        }
      }
      return;
    }
    pFVar1 = (FScriptContainerElement *)
             (*(longlong *)&(local_38.Set)->Elements + ((longlong)local_38.Index * 3 + 1) * 8);
    pFVar7 = (param_2->AllocatorInstance).Data;
    local_38.NextIndex = iVar6;
    if (((pFVar7 <= pFVar1) && (pFVar1 < pFVar7 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1
    ;
    if (iVar6 == -1) goto LAB_141f1fcdc;
    local_38.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_38.Set)->Elements + 0x10 +
                      (longlong)local_38.Index * 0x18);
      if (*(UObject **)(*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x18) ==
          local_38.Key) break;
      local_38.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 1421fa040

void __thiscall
TMultiMap<FLinkerLoad_*,FDeferredScriptLoader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FLinkerLoad_*,FDeferredScriptLoader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>_>
           *this,FLinkerLoad *param_1,
          TArray<FDeferredScriptLoader,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar9 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
LAB_1421fa1cc:
      if (param_3) {
        pFVar12 = (param_2->AllocatorInstance).Data;
        iVar9 = param_2->ArrayNum / 2;
        lVar11 = (longlong)iVar9;
        if (0 < iVar9) {
          pFVar10 = pFVar12 + (longlong)(param_2->ArrayNum + -1) * 0x18;
          do {
            uVar1 = *(undefined8 *)(pFVar12 + 0x10);
            uVar4 = *(undefined8 *)(pFVar10 + 8);
            uVar5 = *(undefined8 *)pFVar12;
            uVar6 = *(undefined8 *)(pFVar12 + 8);
            *(undefined8 *)pFVar12 = *(undefined8 *)pFVar10;
            *(undefined8 *)(pFVar12 + 8) = uVar4;
            *(undefined8 *)(pFVar12 + 0x10) = *(undefined8 *)(pFVar10 + 0x10);
            *(undefined8 *)pFVar10 = uVar5;
            *(undefined8 *)(pFVar10 + 8) = uVar6;
            *(undefined8 *)(pFVar10 + 0x10) = uVar1;
            lVar11 = lVar11 + -1;
            pFVar10 = pFVar10 + -0x18;
            pFVar12 = pFVar12 + 0x18;
          } while (lVar11 != 0);
        }
      }
      return;
    }
    pFVar10 = (param_2->AllocatorInstance).Data;
    pFVar12 = (FScriptContainerElement *)
              (*(longlong *)&(local_38.Set)->Elements + ((longlong)local_38.Index * 5 + 1) * 8);
    local_38.NextIndex = iVar9;
    if (((pFVar10 <= pFVar12) && (pFVar12 < pFVar10 + (longlong)param_2->ArrayMax * 0x18)) &&
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
    uVar1 = *(undefined8 *)(pFVar12 + 8);
    pFVar2 = (param_2->AllocatorInstance).Data;
    pFVar10 = pFVar2 + (longlong)iVar8 * 0x18;
    *(undefined8 *)pFVar10 = *(undefined8 *)pFVar12;
    *(undefined8 *)(pFVar10 + 8) = uVar1;
    *(undefined8 *)(pFVar2 + (longlong)iVar8 * 0x18 + 0x10) = *(undefined8 *)(pFVar12 + 0x10);
    if (iVar9 == -1) goto LAB_1421fa1cc;
    local_38.Index = iVar9;
    do {
      iVar9 = *(int *)(*(longlong *)&(local_38.Set)->Elements + 0x20 +
                      (longlong)local_38.Index * 0x28);
      if (*(FLinkerLoad **)
           (*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x28) ==
          local_38.Key) break;
      local_38.Index = iVar9;
    } while (iVar9 != -1);
  } while( true );
}

// EmplaceUnique<FEventLoadNode2_*_const_&,FEventLoadNode2_*> @ 142304660

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FEventLoadNode2 ** __thiscall
TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
::EmplaceUnique<FEventLoadNode2_*_const_&,FEventLoadNode2_*>
          (TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
           *this,FEventLoadNode2 **param_1,FEventLoadNode2 **param_2)

{
  longlong lVar1;
  FEventLoadNode2 **ppFVar2;
  FEventLoadNode2 *pFVar3;
  longlong lVar4;
  int local_res10;
  TBaseKeyIterator<0> local_28;
  
  pFVar3 = *param_2;
  TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
              *)this,*param_1);
  if (local_28.Index != -1) {
    lVar4 = *(longlong *)&(local_28.Set)->Elements;
    do {
      lVar1 = (longlong)local_28.Index * 3 + 1;
      ppFVar2 = (FEventLoadNode2 **)(lVar4 + lVar1 * 8);
      if (*(FEventLoadNode2 **)(lVar4 + lVar1 * 8) == pFVar3) {
        if (ppFVar2 != (FEventLoadNode2 **)0x0) {
          return ppFVar2;
        }
        break;
      }
      local_28.Index = local_28.NextIndex;
      if (local_28.NextIndex == -1) break;
      do {
        local_28.NextIndex = *(int *)(lVar4 + 0x10 + (longlong)local_28.Index * 0x18);
        if (*(FEventLoadNode2 **)(lVar4 + (longlong)local_28.Index * 0x18) == local_28.Key) break;
        local_28.Index = local_28.NextIndex;
      } while (local_28.NextIndex != -1);
    } while (local_28.Index != -1);
  }
  local_28.Set = (TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
                  *)param_1;
  local_28.Key = (FEventLoadNode2 *)param_2;
  TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FEventLoadNode2_*_const_&,FEventLoadNode2_*_&&>_>
            ((TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FEventLoadNode2_*_const_&,FEventLoadNode2_*_&&> *)
                     &local_res10,(bool *)&local_28);
  return (FEventLoadNode2 **)(*(longlong *)this + (longlong)local_res10 * 0x18 + 8);
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 142305ab0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
           *this,FEventLoadNode2 *param_1,
          TArray<FEventLoadNode2_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<FEventLoadNode2_*,FEventLoadNode2_*>,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
LAB_142305c2c:
      if (param_3) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        iVar6 = param_2->ArrayNum / 2;
        if (0 < iVar6) {
          lVar8 = 0;
          pFVar7 = pFVar1 + (longlong)(param_2->ArrayNum + -1) * 8;
          do {
            uVar2 = *(undefined8 *)(pFVar1 + lVar8 * 8);
            *(undefined8 *)(pFVar1 + lVar8 * 8) = *(undefined8 *)pFVar7;
            lVar8 = lVar8 + 1;
            *(undefined8 *)pFVar7 = uVar2;
            pFVar7 = pFVar7 + -8;
          } while (lVar8 < iVar6);
        }
      }
      return;
    }
    pFVar1 = (FScriptContainerElement *)
             (*(longlong *)&(local_38.Set)->Elements + ((longlong)local_38.Index * 3 + 1) * 8);
    pFVar7 = (param_2->AllocatorInstance).Data;
    local_38.NextIndex = iVar6;
    if (((pFVar7 <= pFVar1) && (pFVar1 < pFVar7 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1
    ;
    if (iVar6 == -1) goto LAB_142305c2c;
    local_38.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_38.Set)->Elements + 0x10 +
                      (longlong)local_38.Index * 0x18);
      if (*(FEventLoadNode2 **)
           (*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x18) ==
          local_38.Key) break;
      local_38.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

