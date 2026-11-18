// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LensComponent
// Functions: 2

// FindOrAddImpl<TSubclassOf<ULensModel>_const_&> @ 14d74d7b0

TObjectPtr<ULensDistortionModelHandlerBase> * __thiscall
TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
::FindOrAddImpl<TSubclassOf<ULensModel>_const_&>
          (TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
           *this,uint param_1,TSubclassOf<ULensModel> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TSubclassOf<ULensModel> *local_res20;
  
  iVar1 = TSet<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<ULensModel>_>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x18, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TSubclassOf<ULensModel>_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<TSubclassOf<ULensModel>_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
  }
  return (TObjectPtr<ULensDistortionModelHandlerBase> *)(lVar2 + 8);
}

// FindRef @ 14d751cf0

TObjectPtr<ULensDistortionModelHandlerBase> __thiscall
TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
::FindRef(TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
          *this,TSubclassOf<ULensModel_const_> param_1)

{
  UObject *pUVar1;
  TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_> *pTVar2;
  undefined8 *in_R8;
  UObject *local_res8;
  
  pUVar1 = (UObject *)*in_R8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = TSet<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,(TSubclassOf<ULensModel_const_>)&local_res8);
  if (pTVar2 == (TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_> *)0x0)
  {
    *(undefined8 *)param_1.Class.field0_0x0 = 0;
  }
  else {
    pUVar1 = *(UObject **)&pTVar2->field_0x8;
    *(UObject **)param_1.Class.field0_0x0 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      return (TObjectPtr<ULensDistortionModelHandlerBase>)
             (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
    }
  }
  return (TObjectPtr<ULensDistortionModelHandlerBase>)
         (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
}

