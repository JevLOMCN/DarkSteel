// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent> @ 149a9cf90

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
AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent>
          (AActor *this,TSubclassOf<UActorComponent> param_1,
          TArray<UActorComponent_*,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3)

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
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pUVar2 = *(UClass **)param_1.Class.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UClass *)0x0) goto LAB_149a9d031;
  }
  else {
    pUVar6 = pUVar5;
    if (pUVar2 == (UClass *)0x0) goto LAB_149a9d031;
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
LAB_149a9d031:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar2;
  if (pUVar6 == pUVar5) {
    if (param_3) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
    }
  }
  else if (param_3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
  }
  return;
}

// operator() @ 149ad5b00

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
`AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>,UActorComponent>'::
__l2::<lambda_1>::operator()(void *this,UActorComponent *param_1)

{
  ForElementType<UActorComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UActorComponent_*> FVar5;
  UActorComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<UActorComponent_*> *)this;
  FVar5 = *(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x200);
  if (*(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x200) ==
      (ForElementType<UActorComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (UActorComponent **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0x20c) * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)((longlong)FVar1 + 0x208);
  if (iVar4 == *(int *)((longlong)FVar1 + 0x20c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                      (0x808,(ForElementType<UActorComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0x20c));
  }
  *(int *)((longlong)FVar1 + 0x208) = iVar4 + 1;
  FVar5 = *(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x200);
  if (*(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x200) ==
      (ForElementType<UActorComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(UActorComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

// GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent> @ 149b4b180

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
AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>
          (AActor *this,TSubclassOf<UActorComponent> param_1,
          TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3)

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
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pUVar2 = *(UClass **)param_1.Class.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UClass *)0x0) goto LAB_149b4b221;
  }
  else {
    pUVar6 = pUVar5;
    if (pUVar2 == (UClass *)0x0) goto LAB_149b4b221;
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
LAB_149b4b221:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar2;
  if (pUVar6 == pUVar5) {
    if (param_3) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
    }
  }
  else if (param_3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>,UActorComponent>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_2);
  }
  return;
}

// GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 149b4b300

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
AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (AActor *this,
          TArray<UPCGComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,
          bool param_2)

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
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  pUVar3 = Z_Construct_UClass_UPCGComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UClass *)0x0) goto LAB_149b4b39d;
  }
  else {
    pUVar6 = pUVar5;
    if (pUVar3 == (UClass *)0x0) goto LAB_149b4b39d;
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
LAB_149b4b39d:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar3;
  if (pUVar6 == pUVar5) {
    if (param_2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ForEachComponent_Internal<UPCGComponent,1,1,_AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ForEachComponent_Internal<UPCGComponent,1,0,_AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
    }
  }
  else if (param_2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    ForEachComponent_Internal<UPCGComponent,0,1,_AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    ForEachComponent_Internal<UPCGComponent,0,0,_AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
  }
  return;
}

// operator() @ 149b5d090

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
`AActor::GetComponents<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>
::operator()(void *this,UActorComponent *param_1)

{
  ForElementType<UActorComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UActorComponent_*> FVar5;
  UActorComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<UActorComponent_*> *)this;
  FVar5 = *(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x80);
  if (*(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x80) ==
      (ForElementType<UActorComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (UActorComponent **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0x8c) * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)((longlong)FVar1 + 0x88);
  if (iVar4 == *(int *)((longlong)FVar1 + 0x8c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                      (0x808,(ForElementType<UActorComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0x8c));
  }
  *(int *)((longlong)FVar1 + 0x88) = iVar4 + 1;
  FVar5 = *(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x80);
  if (*(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x80) ==
      (ForElementType<UActorComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(UActorComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

// operator() @ 149b5d170

void __thiscall
`AActor::GetComponents<UPCGComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'::
__l2::<lambda_1>::operator()(void *this,UPCGComponent *param_1)

{
  ForElementType<UPCGComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UPCGComponent_*> FVar5;
  UPCGComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<UPCGComponent_*> *)this;
  FVar5 = *(ForElementType<UPCGComponent_*> *)((longlong)FVar1 + 8);
  if (*(ForElementType<UPCGComponent_*> *)((longlong)FVar1 + 8) ==
      (ForElementType<UPCGComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (UPCGComponent **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0x14) * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)((longlong)FVar1 + 0x10);
  if (iVar4 == *(int *)((longlong)FVar1 + 0x14)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_>
                      (0x808,(ForElementType<UPCGComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0x14));
  }
  *(int *)((longlong)FVar1 + 0x10) = iVar4 + 1;
  FVar5 = *(ForElementType<UPCGComponent_*> *)((longlong)FVar1 + 8);
  if (*(ForElementType<UPCGComponent_*> *)((longlong)FVar1 + 8) ==
      (ForElementType<UPCGComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(UPCGComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

// operator() @ 149c4f500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`AActor::ForEachComponentOfActorClassDefault<UPCGComponent,void>'::__l2::<lambda_1>::operator()
          (void *this,UActorComponent *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UActorComponent *local_res8;
  FString local_28;
  FString local_18;
  
  puVar2 = *(undefined8 **)this;
  if (param_1 == (UActorComponent *)0x0) {
    pFVar5 = GetTypeName<UPCGComponent>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = Z_Construct_UClass_UPCGComponent_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar4->_padding_)) {
    local_res8 = param_1;
    uVar3 = (*(code *)*puVar2)(puVar2[1],&local_res8);
    return (bool)uVar3;
  }
  pFVar5 = GetTypeName<UPCGComponent>(&local_28);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UActorComponent_const_>(&local_18,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// operator() @ 149c4f5e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`AActor::ForEachComponentOfActorClassDefault<UStaticMeshComponent,void>'::__l2::<lambda_1>::
operator()(void *this,UActorComponent *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UActorComponent *local_res8;
  FString local_28;
  FString local_18;
  
  puVar2 = *(undefined8 **)this;
  if (param_1 == (UActorComponent *)0x0) {
    pFVar5 = GetTypeName<UStaticMeshComponent>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar4->_padding_)) {
    local_res8 = param_1;
    uVar3 = (*(code *)*puVar2)(puVar2[1],&local_res8);
    return (bool)uVar3;
  }
  pFVar5 = GetTypeName<UStaticMeshComponent>(&local_28);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UActorComponent_const_>(&local_18,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// operator() @ 149f363e0

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
`AActor::GetComponents<TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>
::operator()(void *this,UActorComponent *param_1)

{
  ForElementType<UActorComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UActorComponent_*> FVar5;
  UActorComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<UActorComponent_*> *)this;
  FVar5 = *(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x200);
  if (*(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x200) ==
      (ForElementType<UActorComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (UActorComponent **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0x20c) * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)((longlong)FVar1 + 0x208);
  if (iVar4 == *(int *)((longlong)FVar1 + 0x20c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
                      (0x808,(ForElementType<UActorComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0x20c));
  }
  *(int *)((longlong)FVar1 + 0x208) = iVar4 + 1;
  FVar5 = *(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x200);
  if (*(ForElementType<UActorComponent_*> *)((longlong)FVar1 + 0x200) ==
      (ForElementType<UActorComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(UActorComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

