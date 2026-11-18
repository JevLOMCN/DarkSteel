// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// StaticClass @ 145ef5f90

UClass * __cdecl AActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Actor",&Z_Registration_Info_UClass_AActor.InnerSingleton,
               StaticRegisterNativesAActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_AActor,
               L"Engine",InternalConstructor<AActor>,InternalVTableHelperCtorCaller<AActor>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AActor.InnerSingleton;
}

// GetComponents<UHierarchicalInstancedStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> @ 145f3a340

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
AActor::
GetComponents<UHierarchicalInstancedStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
          (AActor *this,
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
          *param_1,bool param_2)

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
    ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UHierarchicalInstancedStaticMeshComponent_*>_>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  pUVar3 = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UClass *)0x0) goto LAB_145f3a3e2;
  }
  else {
    pUVar6 = pUVar5;
    if (pUVar3 == (UClass *)0x0) goto LAB_145f3a3e2;
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
LAB_145f3a3e2:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar3;
  if (pUVar6 == pUVar5) {
    if (param_2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ForEachComponent_Internal<UHierarchicalInstancedStaticMeshComponent,1,1,_AActor::GetComponents<UHierarchicalInstancedStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ForEachComponent_Internal<UHierarchicalInstancedStaticMeshComponent,1,0,_AActor::GetComponents<UHierarchicalInstancedStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
    }
  }
  else if (param_2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    ForEachComponent_Internal<UHierarchicalInstancedStaticMeshComponent,0,1,_AActor::GetComponents<UHierarchicalInstancedStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    ForEachComponent_Internal<UHierarchicalInstancedStaticMeshComponent,0,0,_AActor::GetComponents<UHierarchicalInstancedStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
  }
  return;
}

// operator() @ 145f44b50

void __thiscall
`AActor::
GetComponents<UHierarchicalInstancedStaticMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this,UHierarchicalInstancedStaticMeshComponent *param_1)

{
  ForElementType<UHierarchicalInstancedStaticMeshComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UHierarchicalInstancedStaticMeshComponent_*> FVar5;
  UHierarchicalInstancedStaticMeshComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<UHierarchicalInstancedStaticMeshComponent_*> *)this;
  FVar5 = *(ForElementType<UHierarchicalInstancedStaticMeshComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<UHierarchicalInstancedStaticMeshComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (UHierarchicalInstancedStaticMeshComponent **)
      ((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0xcc) * 8))) {
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
  iVar4 = *(int *)((longlong)FVar1 + 200);
  if (iVar4 == *(int *)((longlong)FVar1 + 0xcc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UHierarchicalInstancedStaticMeshComponent_*>_>
                      (0x808,(ForElementType<UHierarchicalInstancedStaticMeshComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0xcc));
  }
  *(int *)((longlong)FVar1 + 200) = iVar4 + 1;
  FVar5 = *(ForElementType<UHierarchicalInstancedStaticMeshComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<UHierarchicalInstancedStaticMeshComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<UHierarchicalInstancedStaticMeshComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(UHierarchicalInstancedStaticMeshComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) =
       local_res10[0];
  return;
}

