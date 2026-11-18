// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 1

// GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_> @ 14cf7ad20

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
AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>
          (AActor *this,TArray<UCameraComponent_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2
          )

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *local_res10;
  
  pUVar5 = (UClass *)0x0;
  pUVar6 = (UClass *)0x0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  pUVar3 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UClass *)0x0) goto LAB_14cf7adbd;
  }
  else {
    pUVar6 = pUVar5;
    if (pUVar3 == (UClass *)0x0) goto LAB_14cf7adbd;
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar6 = pUVar5;
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar6 = pUVar3;
    }
  }
LAB_14cf7adbd:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar3;
  if (pUVar6 == pUVar5) {
    if (param_2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ForEachComponent_Internal<UCameraComponent,1,1,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ForEachComponent_Internal<UCameraComponent,1,0,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
    }
  }
  else if (param_2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    ForEachComponent_Internal<UCameraComponent,0,1,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    ForEachComponent_Internal<UCameraComponent,0,0,_AActor::GetComponents<UCameraComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
  }
  return;
}

