// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// ~FChunkReferenceTrackerFactory @ 143227e40

void __thiscall
DeltaFactories::FChunkReferenceTrackerFactory::~FChunkReferenceTrackerFactory
          (FChunkReferenceTrackerFactory *this)

{
  *this = (FChunkReferenceTrackerFactory)&___7FChunkReferenceTrackerFactory_DeltaFactories__6B_;
  return;
}

// Create @ 1432476b0

IChunkReferenceTracker * __thiscall
DeltaFactories::FChunkReferenceTrackerFactory::Create
          (FChunkReferenceTrackerFactory *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  IChunkReferenceTracker *pIVar2;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18.ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  pIVar2 = BuildPatchServices::FChunkReferenceTrackerFactory::Create(&local_18);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pIVar2;
}

// Create @ 1432c83d0

IChunkReferenceTracker * __cdecl
BuildPatchServices::FChunkReferenceTrackerFactory::Create
          (IBuildManifestSet *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  FChunkReferenceTracker *pFVar1;
  
  pFVar1 = ::operator_new(0x30);
  if (pFVar1 != (FChunkReferenceTracker *)0x0) {
    pFVar1 = FChunkReferenceTracker::FChunkReferenceTracker(pFVar1,param_1,param_2);
    return (IChunkReferenceTracker *)pFVar1;
  }
  return (IChunkReferenceTracker *)0x0;
}

// Create @ 1432c8420

IChunkReferenceTracker * __cdecl
BuildPatchServices::FChunkReferenceTrackerFactory::Create
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  IChunkReferenceTracker IVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  IChunkReferenceTracker *pIVar8;
  IChunkReferenceTracker *pIVar9;
  IChunkReferenceTracker IVar10;
  int iVar11;
  IChunkReferenceTracker IVar12;
  FIdentityFunctor local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  
  pIVar8 = ::operator_new(0x30);
  pIVar9 = (IChunkReferenceTracker *)0x0;
  if (pIVar8 != (IChunkReferenceTracker *)0x0) {
    IVar10 = (IChunkReferenceTracker)(param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = param_1->ArrayNum;
    iVar11 = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    *pIVar8 = (IChunkReferenceTracker)&___7FChunkReferenceTracker_BuildPatchServices__6B_;
    *(undefined4 *)(pIVar8 + 1) = 0;
    pIVar8[2] = IVar10;
    *(int *)(pIVar8 + 3) = iVar2;
    *(int *)&pIVar8[3].field_0x4 = iVar11;
    pIVar8[4] = (IChunkReferenceTracker)0x0;
    pIVar8[5] = (IChunkReferenceTracker)0x0;
    iVar2 = *(int *)(pIVar8 + 3);
    IVar10 = pIVar8[2];
    IVar12 = (IChunkReferenceTracker)((longlong)iVar2 * 0x10 + (longlong)IVar10);
    while( true ) {
      if (*(int *)(pIVar8 + 3) != iVar2) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if (IVar10 == IVar12) break;
      local_48 = *(undefined8 *)IVar10;
      uStack_40 = *(undefined8 *)((longlong)IVar10 + 8);
      iVar11 = (int)pIVar9;
      local_38 = iVar11;
      if ((((ulonglong)pIVar8[4] <= &local_48) &&
          (&local_48 <
           (undefined8 *)((longlong)pIVar8[4] + (longlong)*(int *)&pIVar8[5].field_0x4 * 0x14))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pIVar9 = (IChunkReferenceTracker *)(*pcVar5)();
        return pIVar9;
      }
      iVar7 = *(int *)(pIVar8 + 5);
      if (iVar7 == *(int *)&pIVar8[5].field_0x4) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,(ForAnyElementType *)(pIVar8 + 4),(int *)&pIVar8[5].field_0x4);
      }
      pIVar9 = (IChunkReferenceTracker *)(ulonglong)(iVar11 + 1);
      IVar10 = (IChunkReferenceTracker)((longlong)IVar10 + 0x10);
      *(int *)(pIVar8 + 5) = iVar7 + 1;
      IVar3 = pIVar8[4];
      puVar1 = (undefined8 *)((longlong)IVar3 + (longlong)iVar7 * 0x14);
      *puVar1 = local_48;
      puVar1[1] = uStack_40;
      *(int *)((longlong)IVar3 + (longlong)iVar7 * 0x14 + 0x10) = local_38;
    }
    AlgoImpl::IntroSortInternal<TTuple<FGuid,int>,int,FIdentityFunctor,TLess<void>_>
              ((TTuple<FGuid,int> *)pIVar8[4],*(int *)(pIVar8 + 5),local_res8[0],
               (TLess<void>)local_res8[0]);
    pIVar9 = pIVar8;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return pIVar9;
}

