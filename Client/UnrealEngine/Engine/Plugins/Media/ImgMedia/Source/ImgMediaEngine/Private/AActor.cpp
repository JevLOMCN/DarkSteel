// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMediaEngine
// Functions: 1

// GetComponents<TSizedDefaultAllocator<32>,UActorComponent> @ 14ea27870

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
AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>
          (AActor *this,TSubclassOf<UActorComponent> param_1,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *local_res10;
  
  pUVar5 = (UClass *)0x0;
  pUVar6 = (UClass *)0x0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pUVar2 = *(UClass **)param_1.Class.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UClass *)0x0) goto LAB_14ea2790d;
  }
  else {
    pUVar6 = pUVar5;
    if (pUVar2 == (UClass *)0x0) goto LAB_14ea2790d;
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar6 = pUVar5;
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = pUVar2;
    }
  }
LAB_14ea2790d:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar2;
  if (pUVar6 == pUVar5) {
    if (param_3) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
    }
  }
  else if (param_3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
  }
  return;
}

