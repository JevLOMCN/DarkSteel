// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 2

// FindOrAddImpl<UPrimitiveComponent_*_const_&> @ 14e250020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGroomCacheData * __thiscall
TMapBase<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,0>_>
::FindOrAddImpl<UPrimitiveComponent_*_const_&>
          (TMapBase<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,0>_>
           *this,uint param_1,UPrimitiveComponent **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UPrimitiveComponent **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if ((UPrimitiveComponent *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FGroomCacheData *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0xf];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UPrimitiveComponent_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UPrimitiveComponent_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FGroomCacheData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x80 + 8);
}

// FindOrAddImpl<FGuid> @ 14e2500d0

FGuid * __thiscall
TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>::
FindOrAddImpl<FGuid>
          (TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
    EmplaceByHash<TKeyInitializer<FGuid_&&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_&&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FGuid *)(lVar2 + 0x10);
}

