// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FIsOwnerOrPawnHelper @ 148088d40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FIsOwnerOrPawnHelper * __thiscall
FNetGUIDCache::FIsOwnerOrPawnHelper::FIsOwnerOrPawnHelper
          (FIsOwnerOrPawnHelper *this,FNetGUIDCache *param_1,AActor *param_2,AActor *param_3)

{
  this->GuidCache = param_1;
  this->ConnectionActor = param_2;
  this->ChannelActor = param_3;
  this->CachedResult = -1;
  if (param_1 != (FNetGUIDCache *)0x0) {
    param_1->TrackingOwnerOrPawnHelper = this;
  }
  return this;
}

// ~FIsOwnerOrPawnHelper @ 14808e5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetGUIDCache::FIsOwnerOrPawnHelper::~FIsOwnerOrPawnHelper(FIsOwnerOrPawnHelper *this)

{
  if (this->GuidCache != (FNetGUIDCache *)0x0) {
    this->GuidCache->TrackingOwnerOrPawnHelper = (FIsOwnerOrPawnHelper *)0x0;
  }
  return;
}

// IsOwnerOrPawn @ 1480b3e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNetGUIDCache::FIsOwnerOrPawnHelper::IsOwnerOrPawn(FIsOwnerOrPawnHelper *this)

{
  int iVar1;
  AActor *pAVar2;
  char cVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  
  cVar3 = this->CachedResult;
  if (cVar3 == -1) {
    cVar3 = false;
    if (((this->ChannelActor != (AActor *)0x0) &&
        (pAVar2 = this->ConnectionActor, pAVar2 != (AActor *)0x0)) &&
       (cVar3 = this->ChannelActor == pAVar2, !(bool)cVar3)) {
      pUVar4 = Z_Construct_UClass_AController_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        pAVar2 = pAVar2[1].PrimaryActorTick.Target;
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar2 == (AActor *)0x0)) {
          pAVar5 = this->ChannelActor;
          if (pAVar2 == (AActor *)0x0) {
            this->CachedResult = pAVar5 == (AActor *)0x0;
            return pAVar5 == (AActor *)0x0;
          }
        }
        else {
          UE::GC::MarkAsReachable((UObject *)pAVar2);
          pAVar5 = this->ChannelActor;
        }
        this->CachedResult = pAVar2 == pAVar5;
        return pAVar2 == pAVar5;
      }
      cVar3 = false;
    }
    this->CachedResult = cVar3;
  }
  return cVar3 != '\0';
}

