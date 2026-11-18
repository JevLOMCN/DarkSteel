// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// Emplace<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> @ 142c32d30

TFunction<void___cdecl(UObject_*)> * __thiscall
TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
::Emplace<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>
          (TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
           *this,TObjectPtr<UObject> *param_1,TFunction<void___cdecl(UObject_*)> *param_2)

{
  UObject *pUVar1;
  UObject *pUVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TFunction<void___cdecl(UObject_*)> *pTVar7;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *pTVar8;
  longlong lVar9;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>_const_,int,TObjectPtr<UObject>,TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>::FKeyForward,TLess<TObjectPtr<UObject_const_>_const_>_>
                    ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                     (this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,local_res8,
                     (TLess<TObjectPtr<UObject_const_>_const_>)local_res8);
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TFunction<void___cdecl(UObject_*)> *)(*pcVar3)();
      return pTVar7;
    }
    if (-1 < iVar6) goto LAB_142c32dac;
  }
  else {
LAB_142c32dac:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TFunction<void___cdecl(UObject_*)> *)(*pcVar3)();
          return pTVar7;
        }
      }
      lVar9 = (longlong)iVar6 * 0x40;
      pUVar1 = *(UObject **)((this->Pairs).AllocatorInstance.Data + lVar9);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      pUVar2 = (param_1->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      if (pUVar1 <= pUVar2) {
        pTVar8 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                 ((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>(pTVar8,1)
        ;
        goto LAB_142c32e70;
      }
    }
  }
  TArray<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pTVar8 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
           ((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x40);
LAB_142c32e70:
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  *(UObject **)pTVar8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)param_2;
  *(undefined8 *)&pTVar8->field_0x38 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&pTVar8->field_0x20 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&pTVar8->field_0x28 = uVar4;
  *(undefined8 *)&pTVar8->field_0x30 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&pTVar8->field_0x10 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  return (TFunction<void___cdecl(UObject_*)> *)&pTVar8->field_0x10;
}

