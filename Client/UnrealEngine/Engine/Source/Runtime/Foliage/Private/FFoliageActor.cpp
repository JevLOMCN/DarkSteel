// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 3

// AddReferencedObjects @ 145ede300

void __thiscall
FFoliageActor::AddReferencedObjects
          (FFoliageActor *this,UObject *param_1,FReferenceCollector *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ActorInstances).AllocatorInstance.Data;
  iVar2 = (this->ActorInstances).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ActorInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 != 0) {
      (**(code **)(param_2->_padding_ + 0x88))(param_2,pFVar3,param_1,0);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// DestroyActors @ 145edfd50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FFoliageActor::DestroyActors(FFoliageActor *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  AActor *this_00;
  UWorld *this_01;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  iVar2 = (this->ActorInstances).ArrayNum;
  pFVar3 = (this->ActorInstances).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar2;
  if (iVar2 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&local_28,iVar2,&local_1c);
    ConstructItems<AActor_*,TObjectPtr<AActor>,int>
              (local_28.Data,(TObjectPtr<AActor> *)pFVar3,iVar2);
  }
  piVar1 = &(this->ActorInstances).ArrayMax;
  (this->ActorInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActorInstances).AllocatorInstance,0,piVar1);
  }
  iVar2 = local_20;
  pFVar3 = local_28.Data + (longlong)local_20 * 8;
  FVar4.Data = local_28.Data;
  while( true ) {
    if (local_20 != iVar2) {
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar4.Data == pFVar3) break;
    this_00 = *(AActor **)FVar4.Data;
    if (this_00 != (AActor *)0x0) {
      if (param_1) {
        UObject::ConditionalPostLoad((UObject *)this_00);
      }
      this_01 = AActor::GetWorld(this_00);
      UWorld::DestroyActor(this_01,this_00,false,true);
    }
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// Serialize @ 145eeb210

void __thiscall FFoliageActor::Serialize(FFoliageActor *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ActorInstances);
                    /* WARNING: Could not recover jumptable at 0x000145eeb240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&this->ActorClass);
  return;
}

