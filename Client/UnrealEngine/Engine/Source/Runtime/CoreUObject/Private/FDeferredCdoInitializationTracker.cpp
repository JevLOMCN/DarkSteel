// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator() @ 141e8ca10

bool __thiscall
`FDeferredCdoInitializationTracker::DeferPreload'::__l7::<lambda_1>::operator()
          (void *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  FDeferredInitializationTrackerBase *this_00;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  UObject *local_res10;
  
  this_00 = *(FDeferredInitializationTrackerBase **)this;
  local_res10 = param_1;
  bVar2 = FDeferredInitializationTrackerBase::IsInitializationDeferred(this_00,param_1);
  if (!bVar2) {
    return false;
  }
  pFVar3 = (this_00->ResolvingObjects).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this_00->ResolvingObjects).ArrayNum * 8;
  while( true ) {
    if (pFVar3 == pFVar1) {
      TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
      ::EmplaceUnique<UObject_*_const_&,UObject_*_const_&>
                (&this_00->DeferredPreloads,&local_res10,(UObject **)((longlong)this + 8));
      return true;
    }
    if (*(UObject **)pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// DeferPreload @ 141e95d50

bool __thiscall
FDeferredCdoInitializationTracker::DeferPreload
          (FDeferredCdoInitializationTracker *this,UObject *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  FDeferredCdoInitializationTracker *local_18;
  UObject *local_10;
  
  if ((*(uint *)&param_1->field_0x8 >> 4 & 1) == 0) {
    local_18 = this;
    local_10 = param_1;
    if ((*(uint *)&param_1->field_0x8 >> 0x12 & 1) != 0) {
      bVar4 = `FDeferredCdoInitializationTracker::DeferPreload'::__l7::<lambda_1>::operator()
                        (&local_18,*(UObject **)&param_1->field_0x20);
      return bVar4;
    }
    if ((*(uint *)&param_1->field_0x8 >> 0x16 & 1) != 0) {
      lVar3 = *(longlong *)&param_1->field_0x20;
      if (lVar3 != 0) {
        pUVar5 = Z_Construct_UClass_UClass_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar5->_padding_)) {
          bVar4 = `FDeferredCdoInitializationTracker::DeferPreload'::__l7::<lambda_1>::operator()
                            (&local_18,*(UObject **)(lVar3 + 0x110));
          return bVar4;
        }
      }
      return false;
    }
  }
  else {
    plVar6 = *(longlong **)&this->field_0xa8;
    plVar1 = plVar6 + *(int *)&this->field_0xb0;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((UObject *)*plVar6 == param_1) {
        return false;
      }
    }
    bVar4 = FDeferredInitializationTrackerBase::IsInitializationDeferred
                      ((FDeferredInitializationTrackerBase *)this,param_1);
    if (bVar4) {
      return true;
    }
  }
  return false;
}

