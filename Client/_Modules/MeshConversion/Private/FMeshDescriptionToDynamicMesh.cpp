// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 91

// operator()<TMeshAttributesRef<FTriangleID,int_const_>_> @ 1443b50c0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,int_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FTriangleID,int_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,float_const_>_> @ 1443b5290

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,float_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FTriangleID,float_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,UE::Math::TTransform<double>_const_>_> @ 1443b5460

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,UE::Math::TTransform<double>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,UE::Math::TTransform<double>_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,UE::Math::TVector2<float>_const_>_> @ 1443b5630

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,UE::Math::TVector2<float>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,UE::Math::TVector2<float>_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,UE::Math::TVector4<float>_const_>_> @ 1443b5800

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,UE::Math::TVector4<float>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,UE::Math::TVector4<float>_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_const_>_> @ 1443b59d0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,FName_const_>_> @ 1443b5ba0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,FName_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FTriangleID,FName_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,bool_const_>_> @ 1443b5d70

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,bool_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FTriangleID,bool_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<int_const_>_>_> @ 1443b5f40

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<int_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayAttribute<int_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<float_const_>_>_> @ 1443b6110

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<float_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayAttribute<float_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>_> @ 1443b62e0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>
          param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>_> @ 1443b64b0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector2<float>_const_>_> param_2
          )

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>_> @ 1443b6680

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector4<float>_const_>_> param_2
          )

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector<float>_const_>_>_> @ 1443b6850

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector<float>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector<float>_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<FName_const_>_>_> @ 1443b6a20

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<FName_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayAttribute<FName_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<bool_const_>_>_> @ 1443b6bf0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<bool_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayAttribute<bool_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayView<int_const_,int>_>_> @ 1443b6dc0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayView<int_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayView<int_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayView<float_const_,int>_>_> @ 1443b6f90

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayView<float_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayView<float_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TTransform<double>_const_,int>_>_> @ 1443b7160

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TTransform<double>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TTransform<double>_const_,int>_>
          *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector2<float>_const_,int>_>_> @ 1443b7330

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector2<float>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector2<float>_const_,int>_> *param_2
          )

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector4<float>_const_,int>_>_> @ 1443b7500

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector4<float>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector4<float>_const_,int>_> *param_2
          )

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector<float>_const_,int>_>_> @ 1443b76d0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector<float>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector<float>_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayView<FName_const_,int>_>_> @ 1443b78a0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayView<FName_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayView<FName_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FTriangleID,TArrayView<bool_const_,int>_>_> @ 1443b7a70

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
operator()<TMeshAttributesRef<FTriangleID,TArrayView<bool_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FTriangleID,TArrayView<bool_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      **)this,local_res10[0]);
    if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 4))
       && (pFVar2->Extent == 1)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
          (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 4)) || (local_18[0]->Extent != 1))
      {
        local_18[0] = (FMeshAttributeArraySetBase *)0x0;
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
      if (((FName *)pFVar3->Data <= local_res10) &&
         (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,int_const_>_> @ 1443b7c40

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,int_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FVertexID,int_const_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,int_const_>_> @ 1443b7e20

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,int_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FVertexID,int_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,float_const_>_> @ 1443b8000

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,float_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FVertexID,float_const_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,float_const_>_> @ 1443b81e0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,float_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FVertexID,float_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_>_> @ 1443b83c0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_>_> @ 1443b85a0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_>_> @ 1443b8780

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_>_> @ 1443b8960

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_>_> @ 1443b8b40

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_>_> @ 1443b8d20

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>_> @ 1443b8f00

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>_> @ 1443b90e0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,FName_const_>_> @ 1443b92c0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,FName_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FVertexID,FName_const_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,FName_const_>_> @ 1443b94a0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,FName_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FVertexID,FName_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,bool_const_>_> @ 1443b9680

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,bool_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FVertexID,bool_const_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,bool_const_>_> @ 1443b9860

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,bool_const_>_>
          (void *this,FName param_1,TMeshAttributesRef<FVertexID,bool_const_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_>_> @ 1443b9a40

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_>_> @ 1443b9c20

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_>_> @ 1443b9e00

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_>_> @ 1443b9fe0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>_> @ 1443ba1c0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>
          param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>_> @ 1443ba3a0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>
          param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>_> @ 1443ba580

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>_> @ 1443ba760

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>_> @ 1443ba940

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>_> @ 1443bab20

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_>_> @ 1443bad00

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_>_> @ 1443baee0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_>_> @ 1443bb0c0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_>_> @ 1443bb2a0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_>_> @ 1443bb480

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_> param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_>_> @ 1443bb660

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_> param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_>_> @ 1443bb840

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_> *param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_>_> @ 1443bba20

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_>_> @ 1443bbc00

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_> *param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_>_> @ 1443bbde0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_>_> @ 1443bbfc0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_>
          *param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_>_> @ 1443bc1a0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_>
          *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_>_> @ 1443bc380

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_> *param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_>_> @ 1443bc560

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_>_> @ 1443bc740

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_> *param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_>_> @ 1443bc920

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_>_> @ 1443bcb00

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_> *param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_>_> @ 1443bcce0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_>_> @ 1443bcec0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_> *param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_>_> @ 1443bd0a0

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_>_> @ 1443bd280

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_> *param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this_00;
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FName local_res20;
  undefined8 local_68;
  FDynamicMeshAttributeSet *pFStack_60;
  FBoneWeights local_58;
  
  bVar6 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
  if (bVar6) {
    FSkeletalMeshAttributesShared::GetProfileNameFromAttribute((FName)&local_res20);
    pFVar8 = ::operator_new(0x30);
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar2 = *(FDynamicMesh3 **)this;
      pFVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      this_00 = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar8->ParentMesh;
      this_00->CurBlock = 0;
      this_00->CurBlockUsed = 0;
      (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pFVar8->UVLayers).Array.ArrayNum = 0;
      (pFVar8->UVLayers).Array.ArrayMax = 0;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)pFVar2;
      UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this_00);
      local_58.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
      local_58.BoneWeights.ArrayNum = 0;
      local_58.BoneWeights.ArrayMax = 0xc;
      local_58.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
      local_58.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
      local_58.BoneWeights.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
                ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar8,&local_58
                );
      pFVar9 = pFVar8;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
              ((FSkeletalMeshAttributesShared *)(*(longlong *)((longlong)this + 0x10) + 8),
               (FName)&local_68);
    pFStack_60 = pFVar9;
    if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    pFVar4 = pFVar3->Data;
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = local_68;
    *(FDynamicMeshAttributeSet **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pFStack_60;
    pFVar8 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      pFVar8 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    UE::Geometry::FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar8,local_res20,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  }
  return;
}

// operator()<TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_>_> @ 1443bd460

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
operator()<TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_>_>
          (void *this,FName param_1,
          TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_> *param_2)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAttributesSetEntry *pFVar7;
  FName local_res10 [3];
  FMeshAttributeArraySetBase *local_18 [2];
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    bVar5 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(local_res10[0]);
    if (!bVar5) {
      pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        **)this,local_res10[0]);
      if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 3)
          ) && (pFVar2->Extent == 1)) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                 ::Find(*(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          **)this,local_res10[0]);
        if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
            (local_18[0] = (pFVar7->Ptr).Ptr, local_18[0]->Type != 3)) || (local_18[0]->Extent != 1)
           ) {
          local_18[0] = (FMeshAttributeArraySetBase *)0x0;
        }
        if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 <
            pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FMeshAttributeArraySetBase **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
        if (((FName *)pFVar3->Data <= local_res10) &&
           (local_res10 < (FName *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(FName *)(pFVar3->Data + (longlong)iVar6 * 8) = local_res10[0];
      }
    }
  }
  return;
}

// operator() @ 1443c4210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FMeshDescriptionToDynamicMesh::Convert'[::A]::<lambda_10>::operator()(void *this)

{
  TDynamicMeshOverlay<float,4> *pTVar1;
  longlong lVar2;
  longlong *plVar3;
  byte *pbVar4;
  code *pcVar5;
  float fVar6;
  float _Y;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  byte bVar12;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_00;
  TVector4<float> *pTVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ForElementType<FSetElementId> FVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  int local_1e8 [4];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float local_1b8;
  float local_1b4;
  FIndex3i_u_0 local_1b0 [2];
  int local_198 [4];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  TPairInitializer<FVertexColor_const_&,int_const_&> local_178;
  undefined8 local_168;
  undefined4 local_160;
  int *local_158;
  int *local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  TSet<TTuple<FVertexColor,int>,TDefaultMapHashableKeyFuncs<FVertexColor,int,0>,FDefaultSetAllocator>
  local_138;
  TDynamicMeshOverlay<float,4> *local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1d8 = *(undefined8 *)(**(longlong **)this + 0x40);
  uStack_1d0 = *(undefined8 *)(**(longlong **)this + 0x48);
  pTVar1 = (TDynamicMeshOverlay<float,4> *)**(longlong **)((longlong)this + 8);
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  if ((pTVar1 == (TDynamicMeshOverlay<float,4> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ColorOverlayIn",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp"
                          ,0x94,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar9 = __real_3b4d2e1c;
  fVar8 = __real_414eb852;
  fVar7 = __real_3f870a3d;
  _Y = __real_3ed55555;
  fVar6 = __real_3d6147ae;
  local_178.Value = *(int **)((longlong)this + 0x10);
  uVar23 = local_178.Value[0x51] + local_178.Value[0x50] * 0x200;
  uVar20 = 0;
  if ((uVar23 != 0) &&
     (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_178.Value + 0x52) - 1U))) {
    uVar20 = 1;
    uVar18 = 1;
    if ((int)uVar23 < 2) goto LAB_1443c433a;
    do {
      uVar17 = (ulonglong)((uint)uVar20 & 0x1ff);
      lVar2 = (*(undefined8 **)(local_178.Value + 0x52))[uVar20 >> 9];
      if ((*(short *)(lVar2 + uVar17 * 2) != 0) && (*(short *)(lVar2 + uVar17 * 2) != -1)) break;
      uVar18 = (uint)uVar20 + 1;
      uVar20 = (ulonglong)uVar18;
    } while ((int)uVar18 < (int)uVar23);
  }
  uVar18 = (uint)uVar20;
LAB_1443c433a:
  local_e8 = pTVar1;
  if (uVar18 != uVar23) {
    local_1b4 = uStack_1d0._4_4_;
    local_1b8 = local_1d8._4_4_;
    fVar10 = (float)uStack_1d0;
    local_1c8 = (float)local_1d8;
LAB_1443c4400:
    do {
      plVar3 = *(longlong **)((longlong)this + 0x18);
      uVar19 = (uint)uVar20;
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) + (uVar20 >> 9) * 8);
      local_168 = *(undefined8 *)(lVar2 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
      local_160 = *(undefined4 *)(lVar2 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
      iVar15 = (int)plVar3[1];
      uVar18 = 0;
      if ((int)uVar19 < iVar15) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_1f8 = (longlong)(int)uVar19, local_1f0 = (longlong)iVar15,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar2 = *plVar3;
      local_1b0[0]._0_8_ = 0xffffffffffffffff;
      local_1b0[0]._s_0.C = -1;
      lVar21 = 0;
      do {
        iVar15 = *(int *)(lVar21 + 8 + lVar2 + (longlong)(int)uVar19 * 0x14);
        this_00 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)
                             **(undefined8 **)this,0);
        pTVar13 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                            (this_00,iVar15);
        fVar24 = (pTVar13->field0_0x0)._s_0.X;
        fVar26 = (pTVar13->field0_0x0)._s_0.Y;
        local_1d8 = *(undefined8 *)&pTVar13->field0_0x0;
        fVar29 = (pTVar13->field0_0x0)._s_0.Z;
        fVar27 = (pTVar13->field0_0x0)._s_0.W;
        uStack_1d0._0_4_ = *(float *)((longlong)&pTVar13->field0_0x0 + 8);
        uStack_1d0._4_4_ = *(float *)((longlong)&pTVar13->field0_0x0 + 0xc);
        fVar28 = fVar26;
        fVar25 = fVar24;
        if (*(char *)(*(longlong *)((longlong)this + 0x20) + 4) != '\0') {
          if (fVar9 < fVar24) {
            fVar24 = powf(fVar24,_Y);
            fVar25 = fVar24 * fVar7 - fVar6;
          }
          else {
            fVar25 = fVar24 * fVar8;
          }
          local_1d8 = CONCAT44(local_1d8._4_4_,fVar25);
          if (fVar9 < local_1d8._4_4_) {
            fVar24 = powf(local_1d8._4_4_,_Y);
            fVar28 = fVar24 * fVar7 - fVar6;
          }
          else {
            fVar28 = local_1d8._4_4_ * fVar8;
          }
          local_1d8._4_4_ = fVar28;
          if (fVar9 < (float)uStack_1d0) {
            fVar24 = powf((float)uStack_1d0,_Y);
            fVar29 = fVar24 * fVar7 - fVar6;
          }
          else {
            fVar29 = (float)uStack_1d0 * fVar8;
          }
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,fVar29);
          fVar24 = (float)local_1d8;
          fVar26 = local_1d8._4_4_;
          fVar27 = uStack_1d0._4_4_;
        }
        local_198[0] = *(int *)((longlong)&local_168 + lVar21);
        local_188 = fVar24;
        fStack_184 = fVar26;
        fStack_180 = fVar29;
        fStack_17c = fVar27;
        local_148 = fVar24;
        fStack_144 = fVar26;
        fStack_140 = fVar29;
        fStack_13c = fVar27;
        uVar18 = (*FCrc::MemCrc32Func)(local_198,0x20,0);
        if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
          FVar22 = (ForElementType<FSetElementId>)&local_138.Hash;
          if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_138.Hash.SecondaryData;
          }
          iVar15 = *(int *)((longlong)FVar22 + (ulonglong)(local_138.HashSize - 1U & uVar18) * 4);
          while (iVar15 != -1) {
            piVar16 = (int *)((longlong)iVar15 * 0x40 + local_138.Elements._0_8_);
            if ((((*piVar16 == local_198[0]) && (local_188 == (float)piVar16[4])) &&
                (fStack_184 == (float)piVar16[5])) &&
               ((fStack_180 == (float)piVar16[6] && (fStack_17c == (float)piVar16[7])))) {
              if (iVar15 != -1) {
                piVar14 = piVar16 + 8;
                if (piVar16 == (int *)0x0) {
                  piVar14 = (int *)0x0;
                }
                if (piVar14 != (int *)0x0) {
                  iVar15 = *piVar14;
                  goto LAB_1443c467b;
                }
              }
              break;
            }
            iVar15 = piVar16[0xc];
          }
        }
        local_1e8[0] = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement
                                 (local_e8,&local_148);
        local_158 = local_198;
        local_150 = local_1e8;
        TSet<TTuple<FVertexColor,int>,TDefaultMapHashableKeyFuncs<FVertexColor,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FVertexColor_const_&,int_const_&>_>
                  (&local_138,&local_178,(bool *)&local_158);
        iVar15 = local_1e8[0];
LAB_1443c467b:
        pbVar4 = *(byte **)((longlong)this + 0x28);
        *(int *)((longlong)local_1b0 + lVar21) = iVar15;
        if (((fVar25 == local_1c8) && (fVar28 == local_1b8)) &&
           ((fVar29 == fVar10 && (fVar27 == local_1b4)))) {
          bVar12 = 0;
        }
        else {
          bVar12 = 1;
        }
        *pbVar4 = *pbVar4 | bVar12;
        lVar21 = lVar21 + 4;
      } while (lVar21 < 0xc);
      UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                ((TDynamicMeshOverlay<float,4> *)**(undefined8 **)((longlong)this + 8),uVar19,
                 (FIndex3i *)&local_1b0[0]._s_0,true);
      uVar19 = uVar19 + 1;
      uVar20 = (ulonglong)uVar19;
      if ((int)uVar19 < (int)uVar23) {
        do {
          uVar17 = (ulonglong)((uint)uVar20 & 0x1ff);
          lVar2 = *(longlong *)(*(longlong *)(local_178.Value + 0x52) + (uVar20 >> 9) * 8);
          if ((*(short *)(lVar2 + uVar17 * 2) != 0) && (*(short *)(lVar2 + uVar17 * 2) != -1))
          goto LAB_1443c4400;
          uVar19 = (uint)uVar20 + 1;
          uVar20 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)uVar23);
      }
    } while (uVar19 != uVar23);
  }
  local_138.HashSize = 0;
  if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FVertexColor,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVertexColor,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138.Elements);
  return;
}

// operator() @ 1443c4810

void __thiscall `FMeshDescriptionToDynamicMesh::Convert'[::D]::<lambda_11>::operator()(void *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  
  lVar1 = *(longlong *)this;
  uVar10 = 0;
  uVar13 = *(int *)(lVar1 + 0x144) + *(int *)(lVar1 + 0x140) * 0x200;
  if ((uVar13 != 0) &&
     (puVar2 = *(undefined8 **)(lVar1 + 0x148), 0xfffd < (ushort)(*(short *)*puVar2 - 1U))) {
    uVar10 = 1;
    uVar8 = 1;
    if ((int)uVar13 < 2) goto joined_r0x0001443c4897;
    do {
      lVar4 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar4 + puVar2[uVar10 >> 9]) != 0) &&
         (*(short *)(lVar4 + puVar2[uVar10 >> 9]) != -1)) break;
      uVar8 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)uVar13);
  }
  uVar8 = (uint)uVar10;
joined_r0x0001443c4897:
  do {
    if (uVar8 == uVar13) {
      return;
    }
    while( true ) {
      plVar3 = *(longlong **)((longlong)this + 8);
      uVar9 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar9 < (int)plVar3[1]) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = *(uint *)(*plVar3 + 4 + (longlong)(int)uVar9 * 0x14);
      if ((-1 < (int)uVar12) &&
         (lVar4 = *(longlong *)((longlong)this + 0x10), (int)uVar12 < *(int *)(lVar4 + 0x38))) {
        uVar8 = 0;
        if ((int)uVar12 < *(int *)(lVar4 + 0x38)) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = *(uint *)(*(longlong *)(lVar4 + 0x30) + (longlong)(int)uVar12 * 4);
      }
      uVar8 = uVar9 + 1;
      uVar11 = (ulonglong)uVar8;
      *(uint *)(*(longlong *)
                 (*(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x20) + (uVar10 >> 9) * 8)
               + (ulonglong)(uVar9 & 0x1ff) * 4) = uVar12;
      uVar10 = uVar11;
      if ((int)uVar13 <= (int)uVar8) break;
      while( true ) {
        lVar6 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        lVar4 = *(longlong *)((uVar11 >> 9) * 8 + *(longlong *)(lVar1 + 0x148));
        if ((*(short *)(lVar6 + lVar4) != 0) && (uVar10 = uVar11, *(short *)(lVar6 + lVar4) != -1))
        break;
        uVar8 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
        uVar10 = uVar11;
        if ((int)uVar13 <= (int)uVar8) goto joined_r0x0001443c4897;
      }
    }
  } while( true );
}

// operator() @ 1443c4a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FMeshDescriptionToDynamicMesh::Convert'[::H]::<lambda_12>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *_Dst;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  FBoneWeightsSettings local_c0;
  TBoneWeights<Internal::FAttributesRefAdapterConst> local_b0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_a8;
  longlong local_a0;
  TArrayAttribute<int_const_> *local_98;
  TArrayAttribute<int_const_> local_90;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  uVar11 = 0;
  uVar9 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  if (((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) &&
     (uVar11 = 1, 1 < (int)uVar9)) {
    do {
      lVar6 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      lVar3 = (*(undefined8 **)(lVar2 + 0x28))[uVar11 >> 9];
      if ((*(short *)(lVar6 + lVar3) != 0) && (*(short *)(lVar6 + lVar3) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar9);
  }
  uVar10 = (uint)uVar11;
  local_c8 = this;
joined_r0x0001443c4aa7:
  do {
    if (uVar10 == uVar9) {
      return;
    }
    while( true ) {
      local_a0 = local_c8[1];
      lVar3 = local_c8[3];
      uVar10 = (uint)uVar11;
      iVar1 = *(int *)(lVar3 + 0x20);
      uVar8 = 0;
      if ((int)uVar10 < iVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_d8 = (longlong)(int)uVar10;
        local_d0 = (longlong)iVar1;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar1 = *(int *)(*(longlong *)(lVar3 + 0x18) + (longlong)(int)uVar10 * 4);
      lVar3 = *local_c8;
      if (*(int *)(lVar3 + 0x38) < 1) {
        local_d8 = 0;
        local_d0 = (longlong)*(int *)(lVar3 + 0x38);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_90.Array = (TAttributeArrayContainer<int> *)(lVar3 + 0x18);
      if (*(TAttributeArrayContainer<int> **)(lVar3 + 0x30) != (TAttributeArrayContainer<int> *)0x0)
      {
        local_90.Array = *(TAttributeArrayContainer<int> **)(lVar3 + 0x30);
      }
      local_c0.bHasDefaultBoneIndex = false;
      local_c0.bBlendZeroInfluence = true;
      local_c0._14_2_ = 0;
      local_98 = &local_90;
      local_b0.Container = &local_90;
      local_c0.NormalizeType = Always;
      local_a8.Container = &local_78;
      local_c0.MaxWeightCount = 0xc;
      local_c0.WeightThreshold = 1;
      local_c0.DefaultBoneIndex = 0;
      local_78.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0
      ;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0xc;
      local_90.Index = iVar1;
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::
      SetBoneWeights<Internal::FAttributesRefAdapterConst,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                (&local_a8,&local_b0,&local_c0);
      _Dst = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              *)((ulonglong)(uVar10 & 0x1ff) * 0x40 +
                *(longlong *)(*(longlong *)(local_a0 + 0x20) + (uVar11 >> 9) * 8));
      if (_Dst != &local_78) {
        if (local_78.AllocatorInstance.SecondaryData ==
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          memmove(_Dst,&local_78,0x30);
        }
        FVar4 = (_Dst->AllocatorInstance).SecondaryData;
        if (FVar4 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)FVar4);
        }
        (_Dst->AllocatorInstance).SecondaryData = local_78.AllocatorInstance.SecondaryData;
        local_78.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        _Dst->ArrayNum = local_78.ArrayNum;
        _Dst->ArrayMax = local_78.ArrayMax;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0xc;
      }
      if (local_78.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
      }
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar9 <= (int)uVar10) break;
      while( true ) {
        lVar6 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        lVar3 = *(longlong *)((uVar11 >> 9) * 8 + *(longlong *)(lVar2 + 0x28));
        if ((*(short *)(lVar6 + lVar3) != 0) && (*(short *)(lVar6 + lVar3) != -1)) break;
        uVar10 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        if ((int)uVar9 <= (int)uVar10) goto joined_r0x0001443c4aa7;
      }
    }
  } while( true );
}

// operator() @ 1443c4d00

void __thiscall `FMeshDescriptionToDynamicMesh::Convert'[::L]::<lambda_13>::operator()(void *this)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar4 = *(longlong *)((longlong)this + 0x10);
  uVar9 = *(int *)(lVar4 + 0x24) + *(int *)(lVar4 + 0x20) * 0x200;
  uVar11 = 0;
  if ((uVar9 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x28) - 1U))) {
    uVar10 = 1;
    uVar11 = 1;
    if (1 < (int)uVar9) {
      do {
        lVar5 = (*(undefined8 **)(lVar4 + 0x28))[uVar10 >> 9];
        if ((*(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
           (uVar11 = uVar10, *(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
        uVar10 = uVar10 + 1;
        uVar11 = uVar10;
      } while ((int)uVar10 < (int)uVar9);
    }
  }
joined_r0x0001443c4d78:
  do {
    if (uVar11 == uVar9) {
      return;
    }
    while( true ) {
      lVar5 = *(longlong *)((longlong)this + 0x18);
      uVar10 = 0;
      if ((int)uVar11 < *(int *)(lVar5 + 0x20)) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar2 = *(int *)(*(longlong *)(lVar5 + 0x18) + (longlong)(int)uVar11 * 4);
      this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)this,0);
      pTVar8 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,iVar2);
      lVar5 = *(longlong *)((longlong)this + 8);
      uVar10 = uVar11 * 3;
      uVar1 = *(undefined8 *)&pTVar8->field0_0x0;
      fVar3 = (pTVar8->field0_0x0)._s_0.Z;
      uVar11 = uVar11 + 1;
      *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)(uVar10 >> 9) * 8) +
              (ulonglong)(uVar10 & 0x1ff) * 4) = (int)uVar1;
      *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
              (ulonglong)(uVar10 + 1 & 0x1ff) * 4) = (int)((ulonglong)uVar1 >> 0x20);
      *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                (ulonglong)(uVar10 + 2 & 0x1ff) * 4) = fVar3;
      if ((int)uVar9 <= (int)uVar11) break;
      while( true ) {
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar11 >> 9) * 8);
        if ((*(short *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) break;
        uVar11 = uVar11 + 1;
        if ((int)uVar9 <= (int)uVar11) goto joined_r0x0001443c4d78;
      }
    }
  } while( true );
}

// operator() @ 1443c4ed0

void __thiscall `FMeshDescriptionToDynamicMesh::Convert'[::O]::<lambda_14>::operator()(void *this)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  TMeshAttributesRef<FBoneID,FName_const_> TVar29;
  TMeshAttributesRef<FBoneID,int_const_> TVar30;
  TMeshAttributeArrayBase<int> *this_00;
  int *piVar31;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_> TVar32;
  TMeshAttributesRef<FBoneID,UE::Math::TVector4<float>_const_> TVar33;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_01;
  TVector4<float> *pTVar34;
  longlong lVar35;
  longlong *plVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  longlong lVar40;
  longlong lVar41;
  longlong local_b8;
  
  uVar39 = 0;
  iVar27 = FSkeletalMeshAttributesShared::GetNumBones
                     ((FSkeletalMeshAttributesShared *)(*(longlong *)this + 8));
  if (0 < (longlong)iVar27) {
    lVar41 = 0;
    lVar40 = 0;
    local_b8 = 0;
    do {
      lVar5 = **(longlong **)((longlong)this + 8);
      TVar29 = FSkeletalMeshAttributesShared::GetBoneNames
                         ((FSkeletalMeshAttributesShared *)(*(longlong *)this + 8));
      lVar6 = (TVar29.ArrayPtr)->_padding_;
      if ((*(int *)(lVar6 + 0x38) < 1) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar36 = (longlong *)(lVar6 + 0x18);
      if (*(longlong **)(lVar6 + 0x30) != (longlong *)0x0) {
        plVar36 = *(longlong **)(lVar6 + 0x30);
      }
      uVar38 = uVar39 * (int)plVar36[2];
      uVar28 = 0;
      if ((int)uVar38 < (int)plVar36[1]) {
        uVar28 = ~uVar38 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar37 = ~uVar39 >> 0x1f;
      uVar7 = *(undefined8 *)(*plVar36 + (longlong)(int)uVar38 * 8);
      uVar28 = 0;
      if ((int)uVar39 < *(int *)(lVar5 + 0x20)) {
        uVar28 = uVar37;
      }
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined8 *)(*(longlong *)(lVar5 + 0x18) + lVar41 * 8) = uVar7;
      lVar5 = **(longlong **)((longlong)this + 0x10);
      if (lVar5 != 0) {
        TVar30 = FSkeletalMeshAttributesShared::GetBoneParentIndices
                           ((FSkeletalMeshAttributesShared *)(*(longlong *)this + 8));
        this_00 = TMeshAttributeArraySet<int>::GetArrayForChannel
                            ((TMeshAttributeArraySet<int> *)(TVar30.ArrayPtr)->_padding_,0);
        piVar31 = TMeshAttributeArrayBase<int>::GetElementBase(this_00,uVar39);
        iVar4 = *piVar31;
        uVar28 = 0;
        if ((int)uVar39 < *(int *)(lVar5 + 0x20)) {
          uVar28 = uVar37;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(int *)(*(longlong *)(lVar5 + 0x18) + lVar41 * 4) = iVar4;
      }
      lVar5 = **(longlong **)((longlong)this + 0x18);
      if (lVar5 != 0) {
        TVar32 = FSkeletalMeshAttributesShared::GetBonePoses
                           ((FSkeletalMeshAttributesShared *)(*(longlong *)this + 8));
        lVar6 = (TVar32.ArrayPtr)->_padding_;
        if ((*(int *)(lVar6 + 0x38) < 1) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar36 = (longlong *)(lVar6 + 0x18);
        if (*(longlong **)(lVar6 + 0x30) != (longlong *)0x0) {
          plVar36 = *(longlong **)(lVar6 + 0x30);
        }
        uVar38 = uVar39 * (int)plVar36[2];
        uVar28 = 0;
        if ((int)uVar38 < (int)plVar36[1]) {
          uVar28 = ~uVar38 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *plVar36;
        lVar35 = (longlong)(int)uVar38 * 0x60;
        puVar3 = (undefined8 *)(lVar35 + 0x10 + lVar6);
        uVar7 = *puVar3;
        uVar17 = puVar3[1];
        puVar3 = (undefined8 *)(lVar35 + 0x20 + lVar6);
        uVar18 = *puVar3;
        uVar19 = puVar3[1];
        puVar1 = (undefined4 *)(lVar35 + lVar6);
        uVar9 = *puVar1;
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        puVar3 = (undefined8 *)(lVar35 + 0x30 + lVar6);
        uVar20 = *puVar3;
        uVar21 = puVar3[1];
        puVar3 = (undefined8 *)(lVar35 + 0x50 + lVar6);
        uVar22 = *puVar3;
        uVar23 = puVar3[1];
        puVar3 = (undefined8 *)(lVar35 + 0x40 + lVar6);
        uVar24 = *puVar3;
        uVar25 = puVar3[1];
        uVar28 = 0;
        if ((int)uVar39 < *(int *)(lVar5 + 0x20)) {
          uVar28 = uVar37;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar5 = *(longlong *)(lVar5 + 0x18);
        puVar1 = (undefined4 *)(lVar5 + local_b8);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        puVar3 = (undefined8 *)(lVar5 + 0x10 + local_b8);
        *puVar3 = uVar7;
        puVar3[1] = uVar17;
        puVar3 = (undefined8 *)(lVar5 + 0x20 + local_b8);
        *puVar3 = uVar18;
        puVar3[1] = uVar19;
        puVar3 = (undefined8 *)(lVar5 + 0x30 + local_b8);
        *puVar3 = uVar20;
        puVar3[1] = uVar21;
        puVar3 = (undefined8 *)(lVar5 + 0x40 + local_b8);
        *puVar3 = uVar24;
        puVar3[1] = uVar25;
        puVar3 = (undefined8 *)(lVar5 + 0x50 + local_b8);
        *puVar3 = uVar22;
        puVar3[1] = uVar23;
      }
      lVar5 = **(longlong **)((longlong)this + 0x20);
      if (lVar5 != 0) {
        TVar33 = FSkeletalMeshAttributesShared::GetBoneColors
                           ((FSkeletalMeshAttributesShared *)(*(longlong *)this + 8));
        this_01 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)
                             (TVar33.ArrayPtr)->_padding_,0);
        pTVar34 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                            (this_01,uVar39);
        fVar13 = (pTVar34->field0_0x0)._s_0.X;
        fVar14 = (pTVar34->field0_0x0)._s_0.Y;
        fVar15 = (pTVar34->field0_0x0)._s_0.Z;
        fVar16 = (pTVar34->field0_0x0)._s_0.W;
        uVar28 = 0;
        if ((int)uVar39 < *(int *)(lVar5 + 0x20)) {
          uVar28 = uVar37;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pfVar2 = (float *)(lVar40 + *(longlong *)(lVar5 + 0x18));
        *pfVar2 = fVar13;
        pfVar2[1] = fVar14;
        pfVar2[2] = fVar15;
        pfVar2[3] = fVar16;
      }
      local_b8 = local_b8 + 0x60;
      uVar39 = uVar39 + 1;
      lVar41 = lVar41 + 1;
      lVar40 = lVar40 + 0x10;
    } while (lVar41 < iVar27);
  }
  return;
}

// operator() @ 1443c5370

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l144::<lambda_15>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  TMeshAttributeArraySet<int> *this_00;
  FDynamicMeshAttributeSet *pFVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar10;
  TMeshAttributeArrayBase<int> *this_01;
  int *piVar11;
  FDynamicMeshAttributeSet *this_02;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  
  uVar16 = *(uint *)this;
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar13 = 0;
  if ((int)uVar16 < (int)plVar2[1]) {
    uVar13 = ~uVar16 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = *(TMeshAttributeArraySet<int> **)(*plVar2 + (longlong)(int)uVar16 * 8);
  pFVar3 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)this + 0x10) + 0x208);
  this_02 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    this_02 = pFVar3;
  }
  pTVar10 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(this_02,*(int *)this);
  if (pTVar10 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1375024081778246571>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp"
                       ,0x3ab,"OutputGroupSet");
    if (!bVar9) {
      return;
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar16 = *(uint *)this;
  plVar2 = *(longlong **)((longlong)this + 0x18);
  uVar13 = 0;
  if ((int)uVar16 < (int)plVar2[1]) {
    uVar13 = ~uVar16 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar15 = 0;
  *(undefined8 *)&pTVar10->field_0x8 = *(undefined8 *)(*plVar2 + (longlong)(int)uVar16 * 8);
  lVar4 = *(longlong *)((longlong)this + 0x10);
  uVar16 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
  if ((uVar16 != 0) &&
     (puVar5 = *(undefined8 **)(lVar4 + 0x148), 0xfffd < (ushort)(*(short *)*puVar5 - 1U))) {
    uVar15 = 1;
    uVar13 = 1;
    if ((int)uVar16 < 2) goto joined_r0x0001443c5529;
    do {
      lVar6 = (ulonglong)((uint)uVar15 & 0x1ff) * 2;
      if ((*(short *)(lVar6 + puVar5[uVar15 >> 9]) != 0) &&
         (*(short *)(lVar6 + puVar5[uVar15 >> 9]) != -1)) break;
      uVar13 = (uint)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar16);
  }
  uVar13 = (uint)uVar15;
joined_r0x0001443c5529:
  do {
    if (uVar13 == uVar16) {
      return;
    }
    while( true ) {
      lVar6 = *(longlong *)((longlong)this + 0x20);
      uVar14 = (uint)uVar15;
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar6 + 0x10)) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar1 = *(int *)(*(longlong *)(lVar6 + 8) + (longlong)(int)uVar14 * 4);
      this_01 = TMeshAttributeArraySet<int>::GetArrayForChannel(this_00,0);
      piVar11 = TMeshAttributeArrayBase<int>::GetElementBase(this_01,iVar1);
      uVar12 = uVar15 >> 9;
      uVar13 = uVar14 + 1;
      uVar15 = (ulonglong)uVar13;
      *(int *)(*(longlong *)(*(longlong *)&pTVar10->field_0x20 + uVar12 * 8) +
              (ulonglong)(uVar14 & 0x1ff) * 4) = *piVar11;
      if ((int)uVar16 <= (int)uVar13) break;
      while( true ) {
        lVar8 = (ulonglong)((uint)uVar15 & 0x1ff) * 2;
        lVar6 = *(longlong *)((uVar15 >> 9) * 8 + *(longlong *)(lVar4 + 0x148));
        if ((*(short *)(lVar8 + lVar6) != 0) && (*(short *)(lVar8 + lVar6) != -1)) break;
        uVar13 = (uint)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
        if ((int)uVar16 <= (int)uVar13) goto joined_r0x0001443c5529;
      }
    }
  } while( true );
}

// operator() @ 1443c5650

void __thiscall
`FMeshDescriptionToDynamicMesh::Convert'::__l146::<lambda_16>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  TMeshAttributeArraySet<float> *this_00;
  FDynamicMeshAttributeSet *pFVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar8;
  TMeshAttributeArrayBase<float> *this_01;
  float *pfVar9;
  FDynamicMeshAttributeSet *this_02;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar11 = *(uint *)((longlong)this + 0x20);
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar13 = 0;
  if ((int)uVar11 < (int)plVar2[1]) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(TMeshAttributeArraySet<float> **)(*plVar2 + (longlong)(int)uVar11 * 8);
  pFVar3 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)this + 0x18) + 0x208);
  this_02 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    this_02 = pFVar3;
  }
  pTVar8 = UE::Geometry::FDynamicMeshAttributeSet::GetWeightLayer
                     (this_02,*(int *)((longlong)this + 0x20));
  if (pTVar8 == (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1375024081778246592>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp"
                       ,0x3c0,"OutputWeights");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    uVar11 = *(uint *)((longlong)this + 0x20);
    plVar2 = *(longlong **)((longlong)this + 0x10);
    uVar13 = 0;
    if ((int)uVar11 < (int)plVar2[1]) {
      uVar13 = ~uVar11 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar8->_padding_ = *(longlong *)(*plVar2 + (longlong)(int)uVar11 * 8);
    lVar4 = *(longlong *)((longlong)this + 0x18);
    uVar13 = *(int *)(lVar4 + 0x24) + *(int *)(lVar4 + 0x20) * 0x200;
    uVar11 = 0;
    if ((uVar13 != 0) &&
       (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x28) - 1U))) {
      uVar10 = 1;
      uVar11 = 1;
      if (1 < (int)uVar13) {
        do {
          lVar5 = (*(undefined8 **)(lVar4 + 0x28))[uVar10 >> 9];
          if ((*(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
             (uVar11 = uVar10, *(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
          uVar10 = uVar10 + 1;
          uVar11 = uVar10;
        } while ((int)uVar10 < (int)uVar13);
      }
    }
joined_r0x0001443c57fa:
    if (uVar11 != uVar13) {
      while( true ) {
        lVar5 = *(longlong *)this;
        uVar10 = 0;
        if ((int)uVar11 < *(int *)(lVar5 + 0x20)) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar1 = *(int *)(*(longlong *)(lVar5 + 0x18) + (longlong)(int)uVar11 * 4);
        this_01 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_00,0);
        pfVar9 = TMeshAttributeArrayBase<float>::GetElementBase(this_01,iVar1);
        uVar12 = uVar11 & 0x1ff;
        uVar10 = uVar11 >> 9;
        uVar11 = uVar11 + 1;
        *(float *)(*(longlong *)
                    ((pTVar8->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)uVar10 * 8) +
                  (ulonglong)uVar12 * 4) = *pfVar9;
        if ((int)uVar13 <= (int)uVar11) break;
        while( true ) {
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar11 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) break;
          uVar11 = uVar11 + 1;
          if ((int)uVar13 <= (int)uVar11) goto joined_r0x0001443c57fa;
        }
      }
      goto joined_r0x0001443c57fa;
    }
  }
  return;
}

// operator() @ 1443c66e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FMeshDescriptionToDynamicMesh::Convert'::__l116::<lambda_6>::operator()(void *this)

{
  longlong lVar1;
  FUVID FVar2;
  longlong *plVar3;
  TVector2<float>_u_0 TVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TDynamicMeshOverlay<float,2> *pTVar14;
  longlong lVar15;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar16;
  TVector2<float>_u_0_s_0 *pTVar17;
  FMeshElementContainer *pFVar18;
  FAttributesSetEntry *pFVar19;
  FUVID *pFVar20;
  int *piVar21;
  uint *puVar22;
  undefined4 *puVar23;
  int *piVar24;
  ulonglong uVar25;
  TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&> *pTVar26;
  FRefCountVector *pFVar27;
  FDynamicMeshAttributeSet *pFVar28;
  longlong lVar29;
  int iVar30;
  ForElementType<FSetElementId> FVar31;
  int ***pppiVar32;
  FDynamicMeshAttributeSet *pFVar33;
  uint uVar34;
  uint uVar35;
  FDynamicMeshAttributeSet *pFVar36;
  FScriptContainerElement *pFVar37;
  ForAnyElementType FVar38;
  undefined1 auStackY_418 [32];
  float local_3c8;
  float fStack_3c4;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  uint local_3b4;
  FIndex3i_u_0 local_3b0;
  undefined1 local_3a0 [4];
  uint local_39c;
  uint local_398 [2];
  TArrayView<FUVID,int> local_390;
  TDynamicMeshOverlay<float,2> *local_380;
  int *local_378;
  ForAnyElementType local_370;
  undefined8 local_368;
  ForAnyElementType local_360;
  int local_358 [2];
  undefined1 local_350 [8];
  TPairInitializer<FVertexUV_const_&,int_const_&> local_348;
  TVector2<float>_u_0 local_338;
  TVector2<float>_u_0 local_330;
  TVector2<float>_u_0 local_328;
  int local_320;
  uint local_31c;
  int local_318;
  uint local_314;
  FIndex3i_u_0 local_310;
  FIndex3i_u_0 local_300;
  undefined8 local_2f0;
  int local_2e8;
  int *local_2e0;
  int *local_2d8;
  IndexIterator local_2d0;
  int *local_2c0;
  uint *local_2b8;
  int *local_2b0;
  int *local_2a8;
  uint local_2a0;
  uint local_29c;
  int local_298 [2];
  FScriptContainerElement *local_290;
  undefined8 local_288;
  int local_280;
  undefined8 local_278;
  int local_270;
  TElementIDs local_268;
  TElementIDs local_260;
  undefined1 local_258 [8];
  undefined1 local_250 [4];
  TVector2<float>_u_0 local_24c;
  TVector2<float>_u_0 local_244;
  TVector2<float>_u_0 local_23c;
  TVector2<float>_u_0 local_234;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  IndexIterator local_1e8;
  int *local_1d8;
  uint *local_1d0;
  int **local_1c8;
  uint *local_1c0;
  int **local_1b8;
  int *local_1b0;
  TConstIterator local_1a8;
  TConstIterator local_188;
  TSet<TTuple<FVertexUV,int>,TDefaultMapHashableKeyFuncs<FVertexUV,int,0>,FDefaultSetAllocator>
  local_168;
  TDynamicMeshOverlay<float,2> *local_118;
  TSet<TTuple<FVertexUV,int>,TDefaultMapHashableKeyFuncs<FVertexUV,int,0>,FDefaultSetAllocator>
  local_108;
  TDynamicMeshOverlay<float,2> *local_b8;
  int local_a8;
  float local_a4;
  float local_a0;
  int local_98;
  float local_94;
  float local_90;
  TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  pFVar33 = (FDynamicMeshAttributeSet *)0x0;
  pFVar28 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)this + 8) + 0x208);
  pFVar36 = pFVar33;
  if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar36 = pFVar28;
  }
  local_378 = this;
  pTVar14 = (TDynamicMeshOverlay<float,2> *)
            UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(pFVar36,*(int *)this);
  if (pTVar14 == (TDynamicMeshOverlay<float,2> *)0x0) {
    return;
  }
  local_380 = pTVar14;
  if (*(char *)((longlong)this + 4) == '\0') {
    lVar29 = *(longlong *)((longlong)this + 8);
    pFVar27 = (FRefCountVector *)(lVar29 + 0x140);
    local_168.Elements._0_8_ = 0;
    local_168.Elements._8_8_ = 0;
    local_168.Elements._32_8_ = 0;
    local_168.Elements._40_4_ = 0;
    local_168.Elements._44_4_ = 0x80;
    local_168.Elements._48_4_ = 0xffffffff;
    local_168.Elements._52_4_ = 0;
    local_168.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_168.HashSize = 0;
    local_118 = pTVar14;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_2d0,pFVar27,0,(pFVar27->RefCounts).CurBlock * 0x200 + *(int *)(lVar29 + 0x144)
              );
    iVar30 = (pFVar27->RefCounts).CurBlock * 0x200 + *(int *)(lVar29 + 0x144);
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_1e8,pFVar27,iVar30,iVar30);
    if (local_2d0._8_4_ != local_1e8._8_4_) {
      do {
        uVar7 = local_2d0._8_4_;
        plVar3 = *(longlong **)((longlong)this + 0x10);
        lVar29 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) +
                  (ulonglong)((uint)local_2d0._8_4_ >> 9) * 8);
        local_288 = *(undefined8 *)(lVar29 + (ulonglong)(local_2d0._8_4_ & 0x1ff) * 0xc);
        iVar30 = *(int *)(lVar29 + 8 + (ulonglong)(local_2d0._8_4_ & 0x1ff) * 0xc);
        uVar9 = 0;
        if ((int)local_2d0._8_4_ < (int)plVar3[1]) {
          uVar9 = (uint)~local_2d0._8_4_ >> 0x1f;
        }
        local_280 = iVar30;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar29 = *plVar3;
        local_300._0_8_ = 0xffffffffffffffff;
        local_300._s_0.C = -1;
        lVar15 = (longlong)(int)uVar7;
        iVar10 = *(int *)(lVar29 + 8 + lVar15 * 0x14);
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                             **(undefined8 **)(local_378 + 6),*local_378);
        pTVar17 = (TVector2<float>_u_0_s_0 *)
                  TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                            (pTVar16,iVar10);
        TVar4._s_0 = *pTVar17;
        local_3c8 = TVar4._0_4_;
        fStack_3c4 = TVar4._4_4_;
        local_a4 = local_3c8;
        local_a0 = fStack_3c4;
        local_a8 = (int)local_288;
        uVar9 = (*FCrc::MemCrc32Func)(&local_a8,0xc,0);
        if (local_168.Elements._8_4_ != local_168.Elements._52_4_) {
          FVar31 = (ForElementType<FSetElementId>)&local_168.Hash;
          if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar31 = local_168.Hash.SecondaryData;
          }
          iVar10 = *(int *)((longlong)FVar31 + (ulonglong)(local_168.HashSize - 1U & uVar9) * 4);
          while (iVar10 != -1) {
            lVar1 = local_168.Elements._0_8_ + (longlong)iVar10 * 0x18;
            if (((*(int *)(local_168.Elements._0_8_ + (longlong)iVar10 * 0x18) == local_a8) &&
                (local_a4 == *(float *)(lVar1 + 4))) && (local_a0 == *(float *)(lVar1 + 8))) {
              if (iVar10 != -1) {
                piVar21 = (int *)(lVar1 + 0xc);
                if (lVar1 == 0) {
                  piVar21 = (int *)0x0;
                }
                if (piVar21 != (int *)0x0) {
                  iVar10 = *piVar21;
                  goto LAB_1443c69f2;
                }
              }
              break;
            }
            iVar10 = *(int *)(lVar1 + 0x10);
          }
        }
        local_330._s_0 = TVar4._s_0;
        local_3c0 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                              (local_118,local_330.XY);
        local_2e0 = &local_a8;
        local_2d8 = &local_3c0;
        TSet<TTuple<FVertexUV,int>,TDefaultMapHashableKeyFuncs<FVertexUV,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FVertexUV_const_&,int_const_&>_>
                  (&local_168,(TPairInitializer<FVertexUV_const_&,int_const_&> *)local_350,
                   (bool *)&local_2e0);
        iVar10 = local_3c0;
LAB_1443c69f2:
        local_300._s_0.A = iVar10;
        iVar10 = *(int *)(lVar29 + 0xc + lVar15 * 0x14);
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                             **(undefined8 **)(local_378 + 6),*local_378);
        pTVar17 = (TVector2<float>_u_0_s_0 *)
                  TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                            (pTVar16,iVar10);
        TVar4._s_0 = *pTVar17;
        local_3c8 = TVar4._s_0.X;
        fStack_3c4 = TVar4._s_0.Y;
        local_a4 = local_3c8;
        local_a0 = fStack_3c4;
        local_a8 = local_288._4_4_;
        uVar9 = (*FCrc::MemCrc32Func)(&local_a8,0xc,0);
        if (local_168.Elements._8_4_ != local_168.Elements._52_4_) {
          FVar31 = (ForElementType<FSetElementId>)&local_168.Hash;
          if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar31 = local_168.Hash.SecondaryData;
          }
          iVar10 = *(int *)((longlong)FVar31 + (ulonglong)(local_168.HashSize - 1U & uVar9) * 4);
          while (iVar10 != -1) {
            lVar1 = local_168.Elements._0_8_ + (longlong)iVar10 * 0x18;
            if (((*(int *)(local_168.Elements._0_8_ + (longlong)iVar10 * 0x18) == local_a8) &&
                (local_a4 == *(float *)(lVar1 + 4))) && (local_a0 == *(float *)(lVar1 + 8))) {
              if (iVar10 != -1) {
                piVar21 = (int *)(lVar1 + 0xc);
                if (lVar1 == 0) {
                  piVar21 = (int *)0x0;
                }
                if (piVar21 != (int *)0x0) {
                  iVar10 = *piVar21;
                  goto LAB_1443c6b32;
                }
              }
              break;
            }
            iVar10 = *(int *)(lVar1 + 0x10);
          }
        }
        local_330._s_0 = TVar4._s_0;
        local_3c0 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                              (local_118,local_330.XY);
        local_2e0 = &local_a8;
        local_2d8 = &local_3c0;
        TSet<TTuple<FVertexUV,int>,TDefaultMapHashableKeyFuncs<FVertexUV,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FVertexUV_const_&,int_const_&>_>
                  (&local_168,(TPairInitializer<FVertexUV_const_&,int_const_&> *)local_350,
                   (bool *)&local_2e0);
        iVar10 = local_3c0;
LAB_1443c6b32:
        this = local_378;
        local_300._s_0.B = iVar10;
        iVar10 = *(int *)(lVar29 + 0x10 + lVar15 * 0x14);
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                             **(undefined8 **)(local_378 + 6),*local_378);
        pTVar17 = (TVector2<float>_u_0_s_0 *)
                  TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                            (pTVar16,iVar10);
        TVar4._s_0 = *pTVar17;
        local_3c8 = TVar4._s_0.X;
        fStack_3c4 = TVar4._s_0.Y;
        local_a4 = local_3c8;
        local_a0 = fStack_3c4;
        local_a8 = iVar30;
        uVar9 = (*FCrc::MemCrc32Func)(&local_a8,0xc,0);
        if (local_168.Elements._8_4_ != local_168.Elements._52_4_) {
          FVar31 = (ForElementType<FSetElementId>)&local_168.Hash;
          if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar31 = local_168.Hash.SecondaryData;
          }
          iVar30 = *(int *)((longlong)FVar31 + (ulonglong)(local_168.HashSize - 1U & uVar9) * 4);
          while (iVar30 != -1) {
            lVar29 = local_168.Elements._0_8_ + (longlong)iVar30 * 0x18;
            if (((*(int *)(local_168.Elements._0_8_ + (longlong)iVar30 * 0x18) == local_a8) &&
                (local_a4 == *(float *)(lVar29 + 4))) && (local_a0 == *(float *)(lVar29 + 8))) {
              if (iVar30 != -1) {
                piVar21 = (int *)(lVar29 + 0xc);
                if (lVar29 == 0) {
                  piVar21 = (int *)0x0;
                }
                if (piVar21 != (int *)0x0) {
                  local_300._s_0.C = *piVar21;
                  goto LAB_1443c6c65;
                }
              }
              break;
            }
            iVar30 = *(int *)(lVar29 + 0x10);
          }
        }
        local_330._s_0 = TVar4._s_0;
        local_3c0 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                              (local_118,local_330.XY);
        local_2e0 = &local_a8;
        local_2d8 = &local_3c0;
        TSet<TTuple<FVertexUV,int>,TDefaultMapHashableKeyFuncs<FVertexUV,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FVertexUV_const_&,int_const_&>_>
                  (&local_168,(TPairInitializer<FVertexUV_const_&,int_const_&> *)local_350,
                   (bool *)&local_2e0);
        local_300._s_0.C = local_3c0;
LAB_1443c6c65:
        UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                  (local_380,uVar7,(FIndex3i *)&local_300._s_0,true);
        local_2d0._8_4_ = uVar7 + 1;
        if ((int)local_2d0._8_4_ < (int)local_2d0._12_4_) {
          do {
            if ((*(short *)(*(longlong *)
                             (*(longlong *)(local_2d0._0_8_ + 8) +
                             (ulonglong)((uint)local_2d0._8_4_ >> 9) * 8) +
                           (ulonglong)(local_2d0._8_4_ & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(local_2d0._0_8_ + 8) +
                            (ulonglong)((uint)local_2d0._8_4_ >> 9) * 8) +
                          (ulonglong)(local_2d0._8_4_ & 0x1ff) * 2) != -1)) break;
            local_2d0._8_4_ = local_2d0._8_4_ + 1;
          } while ((int)local_2d0._8_4_ < (int)local_2d0._12_4_);
        }
      } while (local_2d0._8_4_ != local_1e8._8_4_);
    }
    local_168.HashSize = 0;
    if (local_168.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_168.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FVertexUV,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FVertexUV,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_168.Elements);
    return;
  }
  pFVar18 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(**(longlong **)((longlong)this + 0x20) + 0x60),
                       *(int *)this);
  pFVar19 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar18->Attributes,MeshAttribute::UV::UVCoordinate);
  if (((pFVar19 == (FAttributesSetEntry *)0x0) ||
      (pFVar28 = (FDynamicMeshAttributeSet *)(pFVar19->Ptr).Ptr, *(uint *)&pFVar28->_padding_ != 2))
     || (*(uint *)((longlong)&pFVar28->_padding_ + 4) != 1)) {
    pFVar28 = pFVar33;
  }
  local_360.Data = (FScriptContainerElement *)0x0;
  local_358[0] = 0;
  local_358[1] = 0;
  iVar30 = -1;
  local_260.Array = &pFVar18->BitArray;
  TMeshElementContainer<FUVID>::TElementIDs::begin(&local_260,(TConstIterator *)&local_228);
  TMeshElementContainer<FUVID>::TElementIDs::end(&local_260,&local_1a8);
  while ((local_228.CurrentBitIndex != local_1a8.Iterator.CurrentBitIndex ||
         (local_228.Array != local_1a8.Iterator.Array))) {
    iVar10 = -1;
    if (local_228.CurrentBitIndex < (local_228.Array)->NumBits) {
      iVar10 = local_228.CurrentBitIndex;
    }
    if (iVar10 < iVar30) {
      iVar10 = iVar30;
    }
    iVar30 = iVar10;
    local_228.UnvisitedBitMask = local_228.UnvisitedBitMask & ~local_228._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_228);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar30 + 1,&local_360,local_358,local_358 + 1);
  local_268.Array = &pFVar18->BitArray;
  TMeshElementContainer<FUVID>::TElementIDs::begin(&local_268,(TConstIterator *)&local_208);
  TMeshElementContainer<FUVID>::TElementIDs::end(&local_268,&local_188);
  while ((local_208.CurrentBitIndex != local_188.Iterator.CurrentBitIndex ||
         (local_208.Array != local_188.Iterator.Array))) {
    uVar9 = 0xffffffff;
    if (local_208.CurrentBitIndex < (local_208.Array)->NumBits) {
      uVar9 = local_208.CurrentBitIndex;
    }
    pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar28,0);
    pTVar17 = (TVector2<float>_u_0_s_0 *)
              TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar16,uVar9);
    local_234._s_0 = *pTVar17;
    iVar30 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(pTVar14,local_234.XY);
    uVar34 = 0;
    if ((int)uVar9 < local_358[0]) {
      uVar34 = ~uVar9 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int *)(local_360.Data + (longlong)(int)uVar9 * 4) = iVar30;
    local_208.UnvisitedBitMask = local_208.UnvisitedBitMask & ~local_208._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
  }
  local_370.Data = (FScriptContainerElement *)0x0;
  local_368 = 0;
  local_88.Elements._0_8_ = 0;
  pFVar37 = *(FScriptContainerElement **)(local_378 + 2);
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  uVar9 = *(uint *)(pFVar37 + 0x140) * 0x200 + *(uint *)(pFVar37 + 0x144);
  pFVar36 = pFVar33;
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(pFVar37 + 0x148) - 1U))) {
    pFVar36 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar34 = 1;
    if ((int)uVar9 < 2) goto LAB_1443c705d;
    do {
      uVar25 = (ulonglong)((uint)pFVar36 & 0x1ff);
      lVar29 = (*(undefined8 **)(pFVar37 + 0x148))[(ulonglong)pFVar36 >> 9];
      if ((*(short *)(lVar29 + uVar25 * 2) != 0) && (*(short *)(lVar29 + uVar25 * 2) != -1)) break;
      uVar34 = (uint)pFVar36 + 1;
      pFVar36 = (FDynamicMeshAttributeSet *)(ulonglong)uVar34;
    } while ((int)uVar34 < (int)uVar9);
  }
  uVar34 = (uint)pFVar36;
LAB_1443c705d:
  piVar21 = local_378;
  local_290 = pFVar37;
  if (uVar34 != uVar9) {
LAB_1443c7070:
    do {
      lVar29 = *(longlong *)(piVar21 + 10);
      uVar35 = (uint)pFVar36;
      uVar11 = 0;
      uVar34 = uVar11;
      if ((int)uVar35 < *(int *)(lVar29 + 0x10)) {
        uVar34 = ~uVar35 >> 0x1f;
      }
      local_39c = uVar35;
      if ((uVar34 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      piVar21 = local_378;
      TMeshAttributesRef<int,TArrayView<FUVID,int>_>::Get
                ((TMeshAttributesRef<int,TArrayView<FUVID,int>_> *)
                 (**(longlong **)(local_378 + 8) + 0xd8),&local_390,
                 *(int *)(*(longlong *)(lVar29 + 8) + (longlong)(int)uVar35 * 4),*local_378);
      iVar30 = local_390.ArrayNum;
      if ((local_390.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*local_390.DataPtr == (FUVID)0xffffffff) {
LAB_1443c7c68:
        if (((local_370.Data <= (FScriptContainerElement *)&local_39c) &&
            ((FScriptContainerElement *)&local_39c < local_370.Data + (longlong)local_368._4_4_ * 4)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar30 = (int)local_368;
        if ((int)local_368 == local_368._4_4_) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_370,(int *)((longlong)&local_368 + 4));
        }
        local_368 = CONCAT44(local_368._4_4_,iVar30 + 1);
        *(uint *)(local_370.Data + (longlong)iVar30 * 4) = local_39c;
      }
      else {
        if ((iVar30 < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_390.DataPtr[1] == (FUVID)0xffffffff) goto LAB_1443c7c68;
        if ((iVar30 < 3) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_390.DataPtr[2] == (FUVID)0xffffffff) goto LAB_1443c7c68;
        if ((iVar30 < 3) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = local_390.DataPtr[2];
        uVar34 = uVar11;
        if ((int)FVar2 < local_358[0]) {
          uVar34 = ~(uint)FVar2 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar34 = *(uint *)(local_360.Data + (longlong)(int)FVar2 * 4);
        if ((iVar30 < 2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = local_390.DataPtr[1];
        if ((int)FVar2 < local_358[0]) {
          uVar11 = ~(uint)FVar2 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = *(uint *)(local_360.Data + (longlong)(int)FVar2 * 4);
        if ((iVar30 < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = *local_390.DataPtr;
        uVar12 = 0;
        if ((int)FVar2 < local_358[0]) {
          uVar12 = ~(uint)FVar2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar14 = local_380;
        local_3b0._s_0.A = *(undefined4 *)(local_360.Data + (longlong)(int)FVar2 * 4);
        local_3b0._s_0.B = uVar11;
        local_3b0._s_0.C = uVar34;
        lVar29 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_378 + 2) + 0x130) +
                  (ulonglong)(local_39c >> 9) * 8);
        local_2f0 = *(undefined8 *)(lVar29 + (ulonglong)(local_39c & 0x1ff) * 0xc);
        iVar10 = *(int *)(lVar29 + 8 + (ulonglong)(local_39c & 0x1ff) * 0xc);
        local_2e8 = iVar10;
        iVar13 = *(int *)(*(longlong *)
                           ((local_380->ParentVertices).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)local_3b0._s_0.A >> 9) * 8) +
                         (ulonglong)(local_3b0._s_0.A & 0x1ff) * 4);
        if ((iVar13 != -1) && (iVar13 != (int)local_2f0)) {
          local_3b8 = (int)local_2f0;
          local_3b4 = local_3b0._s_0.A;
          uVar34 = FCrc::MemCrc_DEPRECATED(&local_3b8,8,0);
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar31 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar31 = local_88.Hash.SecondaryData;
            }
            iVar13 = *(int *)((longlong)FVar31 + (ulonglong)(local_88.HashSize - 1U & uVar34) * 4);
            while (iVar13 != -1) {
              lVar29 = local_88.Elements._0_8_ + (longlong)iVar13 * 0x14;
              if ((*(int *)(local_88.Elements._0_8_ + (longlong)iVar13 * 0x14) == local_3b8) &&
                 (*(uint *)(lVar29 + 4) == local_3b4)) {
                if (iVar13 != -1) {
                  puVar22 = (uint *)(lVar29 + 8);
                  if (lVar29 == 0) {
                    puVar22 = (uint *)0x0;
                  }
                  if (puVar22 != (uint *)0x0) {
                    local_3b0._s_0.A = *puVar22;
                    goto LAB_1443c7510;
                  }
                }
                break;
              }
              iVar13 = *(int *)(lVar29 + 0xc);
            }
          }
          pFVar20 = TArrayView<FUVID,int>::operator[](&local_390,0);
          FVar2 = *pFVar20;
          pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar28,0);
          pTVar17 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar16,(int)FVar2);
          local_328._s_0 = *pTVar17;
          local_3b0._s_0.A =
               UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(pTVar14,local_328.XY);
          local_2c0 = &local_3b8;
          local_2b8 = local_398;
          local_398[0] = local_3b0._s_0.A;
          TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&>_>
                    (&local_88,
                     (TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&> *)(local_350 + 4)
                     ,(bool *)&local_2c0);
        }
LAB_1443c7510:
        iVar6 = local_2f0._4_4_;
        iVar13 = *(int *)(*(longlong *)
                           ((pTVar14->ParentVertices).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)local_3b0._s_0.B >> 9) * 8) +
                         (ulonglong)(local_3b0._s_0.B & 0x1ff) * 4);
        if ((iVar13 != -1) && (iVar13 != local_2f0._4_4_)) {
          local_3b8 = local_2f0._4_4_;
          local_3b4 = local_3b0._s_0.B;
          uVar34 = FCrc::MemCrc_DEPRECATED(&local_3b8,8,0);
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar31 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar31 = local_88.Hash.SecondaryData;
            }
            iVar13 = *(int *)((longlong)FVar31 + (ulonglong)(local_88.HashSize - 1U & uVar34) * 4);
            while (iVar13 != -1) {
              lVar29 = local_88.Elements._0_8_ + (longlong)iVar13 * 0x14;
              if ((*(int *)(local_88.Elements._0_8_ + (longlong)iVar13 * 0x14) == local_3b8) &&
                 (*(uint *)(lVar29 + 4) == local_3b4)) {
                if (iVar13 != -1) {
                  puVar22 = (uint *)(lVar29 + 8);
                  if (lVar29 == 0) {
                    puVar22 = (uint *)0x0;
                  }
                  if (puVar22 != (uint *)0x0) {
                    local_3b0._s_0.B = *puVar22;
                    goto LAB_1443c7644;
                  }
                }
                break;
              }
              iVar13 = *(int *)(lVar29 + 0xc);
            }
          }
          pFVar20 = TArrayView<FUVID,int>::operator[](&local_390,1);
          FVar2 = *pFVar20;
          pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar28,0);
          pTVar17 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar16,(int)FVar2);
          local_328._s_0 = *pTVar17;
          local_3b0._s_0.B =
               UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(local_380,local_328.XY);
          local_2c0 = &local_3b8;
          local_2b8 = local_398;
          local_398[0] = local_3b0._s_0.B;
          TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&>_>
                    (&local_88,
                     (TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&> *)(local_350 + 4)
                     ,(bool *)&local_2c0);
        }
LAB_1443c7644:
        iVar13 = *(int *)(*(longlong *)
                           ((local_380->ParentVertices).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)local_3b0._s_0.C >> 9) * 8) +
                         (ulonglong)(local_3b0._s_0.C & 0x1ff) * 4);
        if ((iVar13 != -1) && (iVar13 != iVar10)) {
          local_3b8 = iVar10;
          local_3b4 = local_3b0._s_0.C;
          uVar34 = FCrc::MemCrc_DEPRECATED(&local_3b8,8,0);
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar31 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar31 = local_88.Hash.SecondaryData;
            }
            iVar13 = *(int *)((longlong)FVar31 + (ulonglong)(local_88.HashSize - 1U & uVar34) * 4);
            while (iVar13 != -1) {
              lVar29 = local_88.Elements._0_8_ + (longlong)iVar13 * 0x14;
              if ((*(int *)(local_88.Elements._0_8_ + (longlong)iVar13 * 0x14) == local_3b8) &&
                 (*(uint *)(lVar29 + 4) == local_3b4)) {
                if (iVar13 != -1) {
                  puVar22 = (uint *)(lVar29 + 8);
                  if (lVar29 == 0) {
                    puVar22 = (uint *)0x0;
                  }
                  if (puVar22 != (uint *)0x0) {
                    local_3b0._s_0.C = *puVar22;
                    goto LAB_1443c7774;
                  }
                }
                break;
              }
              iVar13 = *(int *)(lVar29 + 0xc);
            }
          }
          pFVar20 = TArrayView<FUVID,int>::operator[](&local_390,2);
          FVar2 = *pFVar20;
          pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar28,0);
          pTVar17 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar16,(int)FVar2);
          local_328._s_0 = *pTVar17;
          local_3b0._s_0.C =
               UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(local_380,local_328.XY);
          local_2c0 = &local_3b8;
          local_2b8 = local_398;
          local_398[0] = local_3b0._s_0.C;
          TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&>_>
                    (&local_88,
                     (TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&> *)(local_350 + 4)
                     ,(bool *)&local_2c0);
        }
LAB_1443c7774:
        if ((local_3b0._s_0.A == local_3b0._s_0.B) && (local_3b0._s_0.A == local_3b0._s_0.C)) {
          if ((iVar30 < 2) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar2 = local_390.DataPtr[1];
          pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar28,0);
          TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar16,(int)FVar2);
          local_31c = local_3b0._s_0.B;
          local_320 = iVar6;
          uVar34 = FCrc::MemCrc_DEPRECATED(&local_320,8,0);
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar31 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar31 = local_88.Hash.SecondaryData;
            }
            iVar30 = *(int *)((longlong)FVar31 + (ulonglong)(local_88.HashSize - 1U & uVar34) * 4);
            while (iVar30 != -1) {
              lVar29 = local_88.Elements._0_8_ + (longlong)iVar30 * 0x14;
              if ((*(int *)(local_88.Elements._0_8_ + (longlong)iVar30 * 0x14) == local_320) &&
                 (*(uint *)(lVar29 + 4) == local_31c)) {
                if (iVar30 != -1) {
                  puVar22 = (uint *)(lVar29 + 8);
                  if (lVar29 == 0) {
                    puVar22 = (uint *)0x0;
                  }
                  if (puVar22 != (uint *)0x0) {
                    local_3b0._s_0.B = *puVar22;
                    pTVar14 = local_380;
                    goto LAB_1443c78f1;
                  }
                }
                break;
              }
              iVar30 = *(int *)(lVar29 + 0xc);
            }
          }
          pFVar20 = TArrayView<FUVID,int>::operator[](&local_390,1);
          FVar2 = *pFVar20;
          pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar28,0);
          pTVar17 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar16,(int)FVar2);
          pTVar14 = local_380;
          local_23c._s_0 = *pTVar17;
          local_3b0._s_0.B =
               UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(local_380,local_23c.XY);
          local_1d8 = &local_320;
          local_1d0 = &local_2a0;
          local_2a0 = local_3b0._s_0.B;
          TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&>_>
                    (&local_88,
                     (TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&> *)local_258,
                     (bool *)&local_1d8);
LAB_1443c78f1:
          local_314 = local_3b0._s_0.C;
          local_318 = iVar10;
          uVar34 = FCrc::MemCrc_DEPRECATED(&local_318,8,0);
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar31 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar31 = local_88.Hash.SecondaryData;
            }
            iVar30 = *(int *)((longlong)FVar31 + (ulonglong)(local_88.HashSize - 1U & uVar34) * 4);
            while (iVar30 != -1) {
              lVar29 = local_88.Elements._0_8_ + (longlong)iVar30 * 0x14;
              if ((*(int *)(local_88.Elements._0_8_ + (longlong)iVar30 * 0x14) == local_318) &&
                 (*(uint *)(lVar29 + 4) == local_314)) {
                if (iVar30 != -1) {
                  puVar22 = (uint *)(lVar29 + 8);
                  if (lVar29 == 0) {
                    puVar22 = (uint *)0x0;
                  }
                  if (puVar22 != (uint *)0x0) {
                    local_3b0._s_0.C = *puVar22;
                    goto LAB_1443c7c0f;
                  }
                }
                break;
              }
              iVar30 = *(int *)(lVar29 + 0xc);
            }
          }
          pFVar20 = TArrayView<FUVID,int>::operator[](&local_390,2);
          FVar2 = *pFVar20;
          pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar28,0);
          pTVar17 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar16,(int)FVar2);
          local_244._s_0 = *pTVar17;
          local_3b0._s_0.C =
               UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(pTVar14,local_244.XY);
          pppiVar32 = &local_1c8;
          pTVar26 = (TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&> *)(local_258 + 4);
          local_1c0 = &local_29c;
          local_29c = local_3b0._s_0.C;
          local_1c8 = (int **)&local_318;
LAB_1443c7c00:
          TSet<TTuple<UE::Geometry::FIndex2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&>_>
                    (&local_88,pTVar26,(bool *)pppiVar32);
        }
        else {
          if (local_3b0._s_0.A == local_3b0._s_0.B) {
            lVar29 = 1;
LAB_1443c7afa:
            local_348.Value._0_4_ = *(int *)((longlong)&local_2f0 + lVar29 * 4);
            local_348.Value._4_4_ = *(int *)((longlong)&local_3b0 + lVar29 * 4);
            uVar34 = FCrc::MemCrc_DEPRECATED(&local_348.Value,8,0);
            if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
              FVar31 = (ForElementType<FSetElementId>)&local_88.Hash;
              if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar31 = local_88.Hash.SecondaryData;
              }
              iVar30 = *(int *)((longlong)FVar31 + (ulonglong)(local_88.HashSize - 1U & uVar34) * 4)
              ;
              while (iVar30 != -1) {
                lVar15 = local_88.Elements._0_8_ + (longlong)iVar30 * 0x14;
                if ((*(int *)(local_88.Elements._0_8_ + (longlong)iVar30 * 0x14) ==
                     (int)local_348.Value) && (*(int *)(lVar15 + 4) == local_348.Value._4_4_)) {
                  if (iVar30 != -1) {
                    puVar23 = (undefined4 *)(lVar15 + 8);
                    if (lVar15 == 0) {
                      puVar23 = (undefined4 *)0x0;
                    }
                    if (puVar23 != (undefined4 *)0x0) {
                      *(undefined4 *)((longlong)&local_3b0 + lVar29 * 4) = *puVar23;
                      goto LAB_1443c7c0f;
                    }
                  }
                  break;
                }
                iVar30 = *(int *)(lVar15 + 0xc);
              }
            }
            pFVar20 = TArrayView<FUVID,int>::operator[](&local_390,(int)lVar29);
            FVar2 = *pFVar20;
            pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pFVar28,0);
            pTVar17 = (TVector2<float>_u_0_s_0 *)
                      TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                (pTVar16,(int)FVar2);
            local_24c._s_0 = *pTVar17;
            local_298[0] = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                                     (local_380,(float *)(local_250 + 4));
            pppiVar32 = &local_1b8;
            *(int *)((longlong)&local_3b0 + lVar29 * 4) = local_298[0];
            pTVar26 = (TPairInitializer<UE::Geometry::FIndex2i_const_&,int_const_&> *)local_250;
            local_1b8 = &local_348.Value;
            local_1b0 = local_298;
            goto LAB_1443c7c00;
          }
          if ((local_3b0._s_0.A == local_3b0._s_0.C) || (local_3b0._s_0.B == local_3b0._s_0.C)) {
            lVar29 = 2;
            goto LAB_1443c7afa;
          }
        }
LAB_1443c7c0f:
        UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                  (local_380,local_39c,(FIndex3i *)&local_3b0._s_0,true);
        piVar21 = local_378;
        pFVar37 = local_290;
      }
      uVar35 = uVar35 + 1;
      pFVar36 = (FDynamicMeshAttributeSet *)(ulonglong)uVar35;
      if ((int)uVar35 < (int)uVar9) {
        do {
          uVar25 = (ulonglong)((uint)pFVar36 & 0x1ff);
          lVar29 = *(longlong *)(*(longlong *)(pFVar37 + 0x148) + ((ulonglong)pFVar36 >> 9) * 8);
          if ((*(short *)(lVar29 + uVar25 * 2) != 0) && (*(short *)(lVar29 + uVar25 * 2) != -1))
          goto LAB_1443c7070;
          uVar35 = (uint)pFVar36 + 1;
          pFVar36 = (FDynamicMeshAttributeSet *)(ulonglong)uVar35;
        } while ((int)uVar35 < (int)uVar9);
      }
    } while (uVar35 != uVar9);
    pFVar33 = (FDynamicMeshAttributeSet *)(local_368 & 0xffffffff);
  }
  iVar30 = (int)pFVar33;
  if (iVar30 != 0) {
    local_108.Elements._0_8_ = 0;
    local_108.Elements._8_8_ = 0;
    local_108.Elements._32_8_ = 0;
    local_290 = local_370.Data + (longlong)iVar30 * 4;
    local_108.Elements._40_4_ = 0;
    local_108.Elements._44_4_ = 0x80;
    local_108.Elements._48_4_ = 0xffffffff;
    local_108.Elements._52_4_ = 0;
    local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_108.HashSize = 0;
    local_b8 = local_380;
    FVar38.Data = local_370.Data;
    while( true ) {
      pFVar37 = local_290;
      if ((int)pFVar33 != iVar30) {
        local_3a0[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3a0);
      }
      if (FVar38.Data == pFVar37) break;
      uVar9 = *(uint *)FVar38.Data;
      plVar3 = *(longlong **)(piVar21 + 4);
      lVar15 = (longlong)(int)uVar9;
      lVar29 = *(longlong *)
                (*(longlong *)(*(longlong *)(piVar21 + 2) + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
      local_278 = *(undefined8 *)(lVar29 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      iVar10 = *(int *)(lVar29 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      uVar34 = 0;
      if ((int)uVar9 < (int)plVar3[1]) {
        uVar34 = ~uVar9 >> 0x1f;
      }
      local_270 = iVar10;
      if ((uVar34 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar29 = *plVar3;
      local_310._0_8_ = 0xffffffffffffffff;
      local_310._s_0.C = -1;
      iVar13 = *(int *)(lVar29 + 8 + lVar15 * 0x14);
      pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                           **(undefined8 **)(local_378 + 6),*local_378);
      pTVar17 = (TVector2<float>_u_0_s_0 *)
                TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar16,iVar13);
      TVar4._s_0 = *pTVar17;
      local_3c8 = TVar4._0_4_;
      fStack_3c4 = TVar4._4_4_;
      local_94 = local_3c8;
      local_90 = fStack_3c4;
      local_98 = (int)local_278;
      uVar34 = (*FCrc::MemCrc32Func)(&local_98,0xc,0);
      if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
        FVar31 = (ForElementType<FSetElementId>)&local_108.Hash;
        if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar31 = local_108.Hash.SecondaryData;
        }
        iVar13 = *(int *)((longlong)FVar31 + (ulonglong)(local_108.HashSize - 1U & uVar34) * 4);
        while (iVar13 != -1) {
          lVar1 = local_108.Elements._0_8_ + (longlong)iVar13 * 0x18;
          if (((*(int *)(local_108.Elements._0_8_ + (longlong)iVar13 * 0x18) == local_98) &&
              (local_94 == *(float *)(lVar1 + 4))) && (local_90 == *(float *)(lVar1 + 8))) {
            if (iVar13 != -1) {
              piVar21 = (int *)(lVar1 + 0xc);
              if (lVar1 == 0) {
                piVar21 = (int *)0x0;
              }
              if (piVar21 != (int *)0x0) {
                iVar13 = *piVar21;
                goto LAB_1443c7fd2;
              }
            }
            break;
          }
          iVar13 = *(int *)(lVar1 + 0x10);
        }
      }
      local_338._s_0 = TVar4._s_0;
      local_3bc = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(local_b8,local_338.XY);
      local_2b0 = &local_98;
      local_2a8 = &local_3bc;
      TSet<TTuple<FVertexUV,int>,TDefaultMapHashableKeyFuncs<FVertexUV,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FVertexUV_const_&,int_const_&>_>
                (&local_108,&local_348,(bool *)&local_2b0);
      iVar13 = local_3bc;
LAB_1443c7fd2:
      local_310._s_0.A = iVar13;
      iVar13 = *(int *)(lVar29 + 0xc + lVar15 * 0x14);
      pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                           **(undefined8 **)(local_378 + 6),*local_378);
      pTVar17 = (TVector2<float>_u_0_s_0 *)
                TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar16,iVar13);
      TVar4._s_0 = *pTVar17;
      local_3c8 = TVar4._s_0.X;
      fStack_3c4 = TVar4._s_0.Y;
      local_94 = local_3c8;
      local_90 = fStack_3c4;
      local_98 = local_278._4_4_;
      uVar34 = (*FCrc::MemCrc32Func)(&local_98,0xc,0);
      if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
        FVar31 = (ForElementType<FSetElementId>)&local_108.Hash;
        if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar31 = local_108.Hash.SecondaryData;
        }
        iVar13 = *(int *)((longlong)FVar31 + (ulonglong)(local_108.HashSize - 1U & uVar34) * 4);
        while (iVar13 != -1) {
          lVar1 = local_108.Elements._0_8_ + (longlong)iVar13 * 0x18;
          if (((*(int *)(local_108.Elements._0_8_ + (longlong)iVar13 * 0x18) == local_98) &&
              (local_94 == *(float *)(lVar1 + 4))) && (local_90 == *(float *)(lVar1 + 8))) {
            if (iVar13 != -1) {
              piVar21 = (int *)(lVar1 + 0xc);
              if (lVar1 == 0) {
                piVar21 = (int *)0x0;
              }
              if (piVar21 != (int *)0x0) {
                iVar13 = *piVar21;
                goto LAB_1443c8112;
              }
            }
            break;
          }
          iVar13 = *(int *)(lVar1 + 0x10);
        }
      }
      local_338._s_0 = TVar4._s_0;
      local_3bc = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(local_b8,local_338.XY);
      local_2b0 = &local_98;
      local_2a8 = &local_3bc;
      TSet<TTuple<FVertexUV,int>,TDefaultMapHashableKeyFuncs<FVertexUV,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FVertexUV_const_&,int_const_&>_>
                (&local_108,&local_348,(bool *)&local_2b0);
      iVar13 = local_3bc;
LAB_1443c8112:
      piVar21 = local_378;
      local_310._s_0.B = iVar13;
      iVar13 = *(int *)(lVar29 + 0x10 + lVar15 * 0x14);
      pTVar16 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                           **(undefined8 **)(local_378 + 6),*local_378);
      pTVar17 = (TVector2<float>_u_0_s_0 *)
                TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar16,iVar13);
      TVar4._s_0 = *pTVar17;
      local_3c8 = TVar4._s_0.X;
      fStack_3c4 = TVar4._s_0.Y;
      local_94 = local_3c8;
      local_90 = fStack_3c4;
      local_98 = iVar10;
      uVar34 = (*FCrc::MemCrc32Func)(&local_98,0xc,0);
      if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
        FVar31 = (ForElementType<FSetElementId>)&local_108.Hash;
        if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar31 = local_108.Hash.SecondaryData;
        }
        iVar10 = *(int *)((longlong)FVar31 + (ulonglong)(local_108.HashSize - 1U & uVar34) * 4);
        while (iVar10 != -1) {
          lVar29 = local_108.Elements._0_8_ + (longlong)iVar10 * 0x18;
          if (((*(int *)(local_108.Elements._0_8_ + (longlong)iVar10 * 0x18) == local_98) &&
              (local_94 == *(float *)(lVar29 + 4))) && (local_90 == *(float *)(lVar29 + 8))) {
            if (iVar10 != -1) {
              piVar24 = (int *)(lVar29 + 0xc);
              if (lVar29 == 0) {
                piVar24 = (int *)0x0;
              }
              if (piVar24 != (int *)0x0) {
                local_310._s_0.C = *piVar24;
                goto LAB_1443c8242;
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar29 + 0x10);
        }
      }
      local_338._s_0 = TVar4._s_0;
      local_3bc = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(local_b8,local_338.XY);
      local_2b0 = &local_98;
      local_2a8 = &local_3bc;
      TSet<TTuple<FVertexUV,int>,TDefaultMapHashableKeyFuncs<FVertexUV,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FVertexUV_const_&,int_const_&>_>
                (&local_108,&local_348,(bool *)&local_2b0);
      local_310._s_0.C = local_3bc;
LAB_1443c8242:
      UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                (local_380,uVar9,(FIndex3i *)&local_310._s_0,true);
      pFVar33 = (FDynamicMeshAttributeSet *)(local_368 & 0xffffffff);
      FVar38.Data = FVar38.Data + 4;
    }
    local_108.HashSize = 0;
    if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FVertexUV,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FVertexUV,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_108.Elements);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  if (local_370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data);
  }
  if (local_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data);
  }
  return;
}

// operator() @ 1443c83a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FMeshDescriptionToDynamicMesh::Convert'::__l119::<lambda_7>::operator()(void *this)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar10;
  TVector<float> *pTVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ForElementType<FSetElementId> FVar18;
  uint uVar19;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  int local_108 [2];
  undefined8 local_100;
  float local_f8;
  undefined1 local_f0 [12];
  int iStack_e4;
  int local_e0;
  int *local_d8;
  int *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  int local_b8;
  TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
  local_a8;
  TDynamicMeshOverlay<float,3> *local_58;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar17 = 0;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  lVar3 = *(longlong *)((longlong)this + 8);
  local_58 = (TDynamicMeshOverlay<float,3> *)**(undefined8 **)this;
  uVar19 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
  if (((uVar19 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) &&
     (uVar17 = 1, 1 < (int)uVar19)) {
    do {
      uVar14 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar4 = (*(undefined8 **)(lVar3 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar4 + uVar14 * 2) != 0) && (*(short *)(lVar4 + uVar14 * 2) != -1)) break;
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar19);
  }
  uVar16 = (uint)uVar17;
  local_c8 = this;
joined_r0x0001443c848d:
  if (uVar16 == uVar19) {
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FVertexNormal,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FVertexNormal,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    return;
  }
  do {
    plVar5 = *(longlong **)((longlong)this + 0x10);
    uVar16 = (uint)uVar17;
    lVar15 = (longlong)(int)uVar16;
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) + (uVar17 >> 9) * 8);
    local_c0 = *(undefined8 *)(lVar4 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
    iVar2 = *(int *)(lVar4 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
    iVar9 = (int)plVar5[1];
    uVar8 = 0;
    if ((int)uVar16 < iVar9) {
      uVar8 = ~uVar16 >> 0x1f;
    }
    local_b8 = iVar2;
    if ((uVar8 == 0) &&
       (local_118 = lVar15, local_110 = (longlong)iVar9,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar4 = *plVar5;
    stack0xffffffffffffff18 = (int *)0xffffffffffffffff;
    local_e0 = 0xffffffff;
    iVar9 = *(int *)(lVar4 + 8 + lVar15 * 0x14);
    pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)local_c8[3],0);
    pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,iVar9);
    uVar1 = *(undefined8 *)&pTVar11->field0_0x0;
    local_f8 = (pTVar11->field0_0x0)._s_0.Z;
    local_100._0_4_ = (float)uVar1;
    local_100._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_44 = (float)local_100;
    local_40 = local_100._4_4_;
    local_48 = (int)local_c0;
    local_100 = uVar1;
    local_3c = local_f8;
    uVar8 = (*FCrc::MemCrc32Func)(&local_48,0x10,0);
    if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_a8.Hash.SecondaryData;
      }
      iVar9 = *(int *)((longlong)FVar18 + (ulonglong)(local_a8.HashSize - 1U & uVar8) * 4);
      while (iVar9 != -1) {
        piVar12 = (int *)((longlong)iVar9 * 0x1c + local_a8.Elements._0_8_);
        if ((((*piVar12 == local_48) && (local_44 == (float)piVar12[1])) &&
            (local_40 == (float)piVar12[2])) && (local_3c == (float)piVar12[3])) {
          if (iVar9 != -1) {
            piVar13 = piVar12 + 4;
            if (piVar12 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            if (piVar13 != (int *)0x0) {
              iVar9 = *piVar13;
              goto LAB_1443c866e;
            }
          }
          break;
        }
        iVar9 = piVar12[5];
      }
    }
    local_108[0] = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                             (local_58,(float *)&local_100);
    local_d8 = &local_48;
    local_d0 = local_108;
    TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FVertexNormal_const_&,int_const_&>_>
              (&local_a8,(TPairInitializer<FVertexNormal_const_&,int_const_&> *)local_f0,
               (bool *)&local_d8);
    iVar9 = local_108[0];
LAB_1443c866e:
    stack0xffffffffffffff18 = (int *)CONCAT44(iStack_e4,iVar9);
    iVar9 = *(int *)(lVar4 + 0xc + lVar15 * 0x14);
    pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)local_c8[3],0);
    pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,iVar9);
    uVar1 = *(undefined8 *)&pTVar11->field0_0x0;
    local_f8 = (pTVar11->field0_0x0)._s_0.Z;
    local_100._0_4_ = (float)uVar1;
    local_100._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_44 = (float)local_100;
    local_40 = local_100._4_4_;
    local_48 = local_c0._4_4_;
    local_100 = uVar1;
    local_3c = local_f8;
    uVar8 = (*FCrc::MemCrc32Func)(&local_48,0x10,0);
    if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_a8.Hash.SecondaryData;
      }
      iVar9 = *(int *)((longlong)FVar18 + (ulonglong)(local_a8.HashSize - 1U & uVar8) * 4);
      while (iVar9 != -1) {
        piVar12 = (int *)((longlong)iVar9 * 0x1c + local_a8.Elements._0_8_);
        if (((*piVar12 == local_48) && (local_44 == (float)piVar12[1])) &&
           ((local_40 == (float)piVar12[2] && (local_3c == (float)piVar12[3])))) {
          if (iVar9 != -1) {
            piVar13 = piVar12 + 4;
            if (piVar12 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            if (piVar13 != (int *)0x0) {
              iVar9 = *piVar13;
              goto LAB_1443c878e;
            }
          }
          break;
        }
        iVar9 = piVar12[5];
      }
    }
    local_108[0] = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                             (local_58,(float *)&local_100);
    local_d8 = &local_48;
    local_d0 = local_108;
    TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FVertexNormal_const_&,int_const_&>_>
              (&local_a8,(TPairInitializer<FVertexNormal_const_&,int_const_&> *)local_f0,
               (bool *)&local_d8);
    iVar9 = local_108[0];
LAB_1443c878e:
    this = local_c8;
    stack0xffffffffffffff18 = (int *)CONCAT44(iVar9,local_f0._8_4_);
    iVar9 = *(int *)(lVar4 + 0x10 + lVar15 * 0x14);
    pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)local_c8[3],0);
    pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,iVar9);
    uVar1 = *(undefined8 *)&pTVar11->field0_0x0;
    local_f8 = (pTVar11->field0_0x0)._s_0.Z;
    local_100._0_4_ = (float)uVar1;
    local_100._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_44 = (float)local_100;
    local_40 = local_100._4_4_;
    local_100 = uVar1;
    local_48 = iVar2;
    local_3c = local_f8;
    uVar8 = (*FCrc::MemCrc32Func)(&local_48,0x10,0);
    if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_a8.Hash.SecondaryData;
      }
      iVar2 = *(int *)((longlong)FVar18 + (ulonglong)(local_a8.HashSize - 1U & uVar8) * 4);
      while (iVar2 != -1) {
        piVar12 = (int *)((longlong)iVar2 * 0x1c + local_a8.Elements._0_8_);
        if (((*piVar12 == local_48) && (local_44 == (float)piVar12[1])) &&
           ((local_40 == (float)piVar12[2] && (local_3c == (float)piVar12[3])))) {
          if (iVar2 != -1) {
            piVar13 = piVar12 + 4;
            if (piVar12 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            if (piVar13 != (int *)0x0) {
              local_e0 = *piVar13;
              goto LAB_1443c88ae;
            }
          }
          break;
        }
        iVar2 = piVar12[5];
      }
    }
    local_108[0] = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                             (local_58,(float *)&local_100);
    local_d8 = &local_48;
    local_d0 = local_108;
    TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FVertexNormal_const_&,int_const_&>_>
              (&local_a8,(TPairInitializer<FVertexNormal_const_&,int_const_&> *)local_f0,
               (bool *)&local_d8);
    local_e0 = local_108[0];
LAB_1443c88ae:
    UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
              ((TDynamicMeshOverlay<float,3> *)**(undefined8 **)this,uVar16,
               (FIndex3i *)(local_f0 + 8),true);
    uVar16 = uVar16 + 1;
    uVar17 = (ulonglong)uVar16;
    if ((int)uVar19 <= (int)uVar16) goto joined_r0x0001443c848d;
    while( true ) {
      uVar14 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x148) + (uVar17 >> 9) * 8);
      if ((*(short *)(lVar4 + uVar14 * 2) != 0) && (*(short *)(lVar4 + uVar14 * 2) != -1)) break;
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      if ((int)uVar19 <= (int)uVar16) goto joined_r0x0001443c848d;
    }
  } while( true );
}

// operator() @ 1443c8a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FMeshDescriptionToDynamicMesh::Convert'::__l122::<lambda_8>::operator()(void *this)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar10;
  TVector<float> *pTVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ForElementType<FSetElementId> FVar18;
  uint uVar19;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  int local_108 [2];
  undefined8 local_100;
  float local_f8;
  undefined1 local_f0 [12];
  int iStack_e4;
  int local_e0;
  int *local_d8;
  int *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  int local_b8;
  TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
  local_a8;
  TDynamicMeshOverlay<float,3> *local_58;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar17 = 0;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  lVar3 = *(longlong *)((longlong)this + 8);
  local_58 = (TDynamicMeshOverlay<float,3> *)**(undefined8 **)this;
  uVar19 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
  if (((uVar19 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) &&
     (uVar17 = 1, 1 < (int)uVar19)) {
    do {
      uVar14 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar4 = (*(undefined8 **)(lVar3 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar4 + uVar14 * 2) != 0) && (*(short *)(lVar4 + uVar14 * 2) != -1)) break;
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar19);
  }
  uVar16 = (uint)uVar17;
  local_c8 = this;
joined_r0x0001443c8afd:
  if (uVar16 == uVar19) {
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FVertexNormal,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FVertexNormal,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    return;
  }
  do {
    plVar5 = *(longlong **)((longlong)this + 0x10);
    uVar16 = (uint)uVar17;
    lVar15 = (longlong)(int)uVar16;
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) + (uVar17 >> 9) * 8);
    local_c0 = *(undefined8 *)(lVar4 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
    iVar2 = *(int *)(lVar4 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
    iVar9 = (int)plVar5[1];
    uVar8 = 0;
    if ((int)uVar16 < iVar9) {
      uVar8 = ~uVar16 >> 0x1f;
    }
    local_b8 = iVar2;
    if ((uVar8 == 0) &&
       (local_118 = lVar15, local_110 = (longlong)iVar9,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar4 = *plVar5;
    stack0xffffffffffffff18 = (int *)0xffffffffffffffff;
    local_e0 = 0xffffffff;
    iVar9 = *(int *)(lVar4 + 8 + lVar15 * 0x14);
    pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)local_c8[3],0);
    pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,iVar9);
    uVar1 = *(undefined8 *)&pTVar11->field0_0x0;
    local_f8 = (pTVar11->field0_0x0)._s_0.Z;
    local_100._0_4_ = (float)uVar1;
    local_100._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_44 = (float)local_100;
    local_40 = local_100._4_4_;
    local_48 = (int)local_c0;
    local_100 = uVar1;
    local_3c = local_f8;
    uVar8 = (*FCrc::MemCrc32Func)(&local_48,0x10,0);
    if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_a8.Hash.SecondaryData;
      }
      iVar9 = *(int *)((longlong)FVar18 + (ulonglong)(local_a8.HashSize - 1U & uVar8) * 4);
      while (iVar9 != -1) {
        piVar12 = (int *)((longlong)iVar9 * 0x1c + local_a8.Elements._0_8_);
        if ((((*piVar12 == local_48) && (local_44 == (float)piVar12[1])) &&
            (local_40 == (float)piVar12[2])) && (local_3c == (float)piVar12[3])) {
          if (iVar9 != -1) {
            piVar13 = piVar12 + 4;
            if (piVar12 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            if (piVar13 != (int *)0x0) {
              iVar9 = *piVar13;
              goto LAB_1443c8cde;
            }
          }
          break;
        }
        iVar9 = piVar12[5];
      }
    }
    local_108[0] = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                             (local_58,(float *)&local_100);
    local_d8 = &local_48;
    local_d0 = local_108;
    TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FVertexNormal_const_&,int_const_&>_>
              (&local_a8,(TPairInitializer<FVertexNormal_const_&,int_const_&> *)local_f0,
               (bool *)&local_d8);
    iVar9 = local_108[0];
LAB_1443c8cde:
    stack0xffffffffffffff18 = (int *)CONCAT44(iStack_e4,iVar9);
    iVar9 = *(int *)(lVar4 + 0xc + lVar15 * 0x14);
    pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)local_c8[3],0);
    pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,iVar9);
    uVar1 = *(undefined8 *)&pTVar11->field0_0x0;
    local_f8 = (pTVar11->field0_0x0)._s_0.Z;
    local_100._0_4_ = (float)uVar1;
    local_100._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_44 = (float)local_100;
    local_40 = local_100._4_4_;
    local_48 = local_c0._4_4_;
    local_100 = uVar1;
    local_3c = local_f8;
    uVar8 = (*FCrc::MemCrc32Func)(&local_48,0x10,0);
    if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_a8.Hash.SecondaryData;
      }
      iVar9 = *(int *)((longlong)FVar18 + (ulonglong)(local_a8.HashSize - 1U & uVar8) * 4);
      while (iVar9 != -1) {
        piVar12 = (int *)((longlong)iVar9 * 0x1c + local_a8.Elements._0_8_);
        if (((*piVar12 == local_48) && (local_44 == (float)piVar12[1])) &&
           ((local_40 == (float)piVar12[2] && (local_3c == (float)piVar12[3])))) {
          if (iVar9 != -1) {
            piVar13 = piVar12 + 4;
            if (piVar12 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            if (piVar13 != (int *)0x0) {
              iVar9 = *piVar13;
              goto LAB_1443c8dfe;
            }
          }
          break;
        }
        iVar9 = piVar12[5];
      }
    }
    local_108[0] = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                             (local_58,(float *)&local_100);
    local_d8 = &local_48;
    local_d0 = local_108;
    TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FVertexNormal_const_&,int_const_&>_>
              (&local_a8,(TPairInitializer<FVertexNormal_const_&,int_const_&> *)local_f0,
               (bool *)&local_d8);
    iVar9 = local_108[0];
LAB_1443c8dfe:
    this = local_c8;
    stack0xffffffffffffff18 = (int *)CONCAT44(iVar9,local_f0._8_4_);
    iVar9 = *(int *)(lVar4 + 0x10 + lVar15 * 0x14);
    pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)local_c8[3],0);
    pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,iVar9);
    uVar1 = *(undefined8 *)&pTVar11->field0_0x0;
    local_f8 = (pTVar11->field0_0x0)._s_0.Z;
    local_100._0_4_ = (float)uVar1;
    local_100._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_44 = (float)local_100;
    local_40 = local_100._4_4_;
    local_100 = uVar1;
    local_48 = iVar2;
    local_3c = local_f8;
    uVar8 = (*FCrc::MemCrc32Func)(&local_48,0x10,0);
    if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
      FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar18 = local_a8.Hash.SecondaryData;
      }
      iVar2 = *(int *)((longlong)FVar18 + (ulonglong)(local_a8.HashSize - 1U & uVar8) * 4);
      while (iVar2 != -1) {
        piVar12 = (int *)((longlong)iVar2 * 0x1c + local_a8.Elements._0_8_);
        if (((*piVar12 == local_48) && (local_44 == (float)piVar12[1])) &&
           ((local_40 == (float)piVar12[2] && (local_3c == (float)piVar12[3])))) {
          if (iVar2 != -1) {
            piVar13 = piVar12 + 4;
            if (piVar12 == (int *)0x0) {
              piVar13 = (int *)0x0;
            }
            if (piVar13 != (int *)0x0) {
              local_e0 = *piVar13;
              goto LAB_1443c8f1e;
            }
          }
          break;
        }
        iVar2 = piVar12[5];
      }
    }
    local_108[0] = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                             (local_58,(float *)&local_100);
    local_d8 = &local_48;
    local_d0 = local_108;
    TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FVertexNormal_const_&,int_const_&>_>
              (&local_a8,(TPairInitializer<FVertexNormal_const_&,int_const_&> *)local_f0,
               (bool *)&local_d8);
    local_e0 = local_108[0];
LAB_1443c8f1e:
    UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
              ((TDynamicMeshOverlay<float,3> *)**(undefined8 **)this,uVar16,
               (FIndex3i *)(local_f0 + 8),true);
    uVar16 = uVar16 + 1;
    uVar17 = (ulonglong)uVar16;
    if ((int)uVar19 <= (int)uVar16) goto joined_r0x0001443c8afd;
    while( true ) {
      uVar14 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x148) + (uVar17 >> 9) * 8);
      if ((*(short *)(lVar4 + uVar14 * 2) != 0) && (*(short *)(lVar4 + uVar14 * 2) != -1)) break;
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      if ((int)uVar19 <= (int)uVar16) goto joined_r0x0001443c8afd;
    }
  } while( true );
}

// operator() @ 1443c9080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FMeshDescriptionToDynamicMesh::Convert'::__l125::<lambda_9>::operator()(void *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar11;
  TVector<float> *pTVar12;
  TMeshAttributeArrayBase<float> *this_00;
  float *pfVar13;
  int *piVar14;
  int *piVar15;
  ulonglong uVar16;
  ForElementType<FSetElementId> FVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  uint local_188;
  int local_184;
  float local_180;
  float local_17c;
  float local_178;
  uint local_170;
  undefined8 *local_168;
  FIndex3i_u_0 local_160;
  undefined8 local_150;
  undefined4 local_148;
  TPairInitializer<FVertexNormal_const_&,int_const_&> local_140;
  int *local_130;
  int *local_128;
  undefined8 local_120;
  undefined8 local_110;
  TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
  local_f8;
  TDynamicMeshOverlay<float,3> *local_a8;
  int local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulonglong local_88;
  
  fVar7 = __real_322bcc77;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_140.Value = *(int **)((longlong)this + 8);
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  local_a8 = (TDynamicMeshOverlay<float,3> *)**(undefined8 **)this;
  local_170 = local_140.Value[0x50] * 0x200 + local_140.Value[0x51];
  local_188 = 0;
  uVar20 = 0;
  if ((local_170 != 0) &&
     (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_140.Value + 0x52) - 1U))) {
    uVar20 = 1;
    local_188 = 1;
    uVar18 = 1;
    if ((int)local_170 < 2) goto LAB_1443c9181;
    do {
      uVar16 = (ulonglong)((uint)uVar20 & 0x1ff);
      lVar4 = (*(undefined8 **)(local_140.Value + 0x52))[uVar20 >> 9];
      if ((*(short *)(lVar4 + uVar16 * 2) != 0) && (*(short *)(lVar4 + uVar16 * 2) != -1)) break;
      uVar18 = (uint)uVar20 + 1;
      uVar20 = (ulonglong)uVar18;
    } while ((int)uVar18 < (int)local_170);
    local_188 = (uint)uVar20;
  }
  uVar18 = (uint)uVar20;
LAB_1443c9181:
  local_168 = this;
  if (uVar18 != local_170) {
LAB_1443c91e0:
    do {
      lVar21 = 0;
      plVar5 = (longlong *)local_168[2];
      uVar19 = (uint)uVar20;
      lVar4 = *(longlong *)(*(longlong *)(local_168[1] + 0x130) + (uVar20 >> 9) * 8);
      local_150 = *(undefined8 *)(lVar4 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
      local_148 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
      iVar10 = (int)plVar5[1];
      uVar18 = 0;
      if ((int)uVar19 < iVar10) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_198 = (longlong)(int)uVar19, local_190 = (longlong)iVar10,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar8 = local_168;
      lVar4 = *plVar5;
      local_160._0_8_ = 0xffffffffffffffff;
      local_160._s_0.C = -1;
      do {
        iVar10 = *(int *)(lVar21 + lVar4 + (longlong)(int)uVar19 * 0x14 + 8);
        pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)puVar8[3],0);
        pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,iVar10)
        ;
        uVar1 = *(undefined8 *)&pTVar12->field0_0x0;
        fVar24 = (float)((ulonglong)uVar1 >> 0x20);
        fVar22 = (pTVar12->field0_0x0)._s_0.Z;
        pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)puVar8[4],0);
        pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,iVar10)
        ;
        uVar2 = *(undefined8 *)&pTVar12->field0_0x0;
        fVar23 = (float)((ulonglong)uVar2 >> 0x20);
        fVar3 = (pTVar12->field0_0x0)._s_0.Z;
        this_00 = TMeshAttributeArraySet<float>::GetArrayForChannel
                            (*(TMeshAttributeArraySet<float> **)puVar8[5],0);
        pfVar13 = TMeshAttributeArrayBase<float>::GetElementBase(this_00,iVar10);
        local_110._0_4_ = (float)uVar1;
        local_17c = *pfVar13;
        local_120._0_4_ = (float)uVar2;
        local_180 = (fVar24 * fVar3 - fVar22 * fVar23) * local_17c;
        local_178 = (fVar23 * (float)local_110 - fVar24 * (float)local_120) * local_17c;
        local_17c = (fVar22 * (float)local_120 - (float)local_110 * fVar3) * local_17c;
        fVar22 = local_17c * local_17c + local_180 * local_180 + local_178 * local_178;
        if (fVar7 < fVar22) {
          fVar22 = __real_3f800000 / SQRT(fVar22);
          local_180 = fVar22 * local_180;
          local_17c = fVar22 * local_17c;
          local_178 = fVar22 * local_178;
        }
        local_98 = *(int *)((longlong)&local_150 + lVar21);
        local_120 = uVar2;
        local_110 = uVar1;
        local_94 = local_180;
        local_90 = local_17c;
        local_8c = local_178;
        uVar18 = (*FCrc::MemCrc32Func)(&local_98,0x10,0);
        if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
          FVar17 = (ForElementType<FSetElementId>)&local_f8.Hash;
          if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar17 = local_f8.Hash.SecondaryData;
          }
          iVar10 = *(int *)((longlong)FVar17 + (ulonglong)(local_f8.HashSize - 1U & uVar18) * 4);
          while (iVar10 != -1) {
            piVar14 = (int *)((longlong)iVar10 * 0x1c + local_f8.Elements._0_8_);
            if ((((*piVar14 == local_98) && (local_94 == (float)piVar14[1])) &&
                (local_90 == (float)piVar14[2])) && (local_8c == (float)piVar14[3])) {
              if (iVar10 != -1) {
                piVar15 = piVar14 + 4;
                if (piVar14 == (int *)0x0) {
                  piVar15 = (int *)0x0;
                }
                if (piVar15 != (int *)0x0) {
                  iVar10 = *piVar15;
                  goto LAB_1443c94bd;
                }
              }
              break;
            }
            iVar10 = piVar14[5];
          }
        }
        local_184 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(local_a8,&local_180);
        local_130 = &local_98;
        local_128 = &local_184;
        TSet<TTuple<FVertexNormal,int>,TDefaultMapHashableKeyFuncs<FVertexNormal,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FVertexNormal_const_&,int_const_&>_>
                  (&local_f8,&local_140,(bool *)&local_130);
        iVar10 = local_184;
LAB_1443c94bd:
        uVar18 = local_188;
        *(int *)((longlong)&local_160 + lVar21) = iVar10;
        lVar21 = lVar21 + 4;
      } while (lVar21 < 0xc);
      UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                (*(TDynamicMeshOverlay<float,3> **)*puVar8,local_188,(FIndex3i *)&local_160._s_0,
                 true);
      local_188 = uVar18 + 1;
      uVar20 = (ulonglong)local_188;
      if ((int)local_188 < (int)local_170) {
        do {
          uVar16 = (ulonglong)((uint)uVar20 & 0x1ff);
          lVar4 = *(longlong *)(*(longlong *)(local_140.Value + 0x52) + (uVar20 >> 9) * 8);
          if ((*(short *)(lVar4 + uVar16 * 2) != 0) && (*(short *)(lVar4 + uVar16 * 2) != -1))
          goto LAB_1443c91e0;
          local_188 = (uint)uVar20 + 1;
          uVar20 = (ulonglong)local_188;
        } while ((int)local_188 < (int)local_170);
      }
    } while (local_188 != local_170);
  }
  local_f8.HashSize = 0;
  if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FVertexNormal,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVertexNormal,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  return;
}

// ApplyVertexColorTransform @ 1443cb0d0

void __thiscall
FMeshDescriptionToDynamicMesh::ApplyVertexColorTransform
          (FMeshDescriptionToDynamicMesh *this,TVector4<float> *param_1)

{
  float fVar1;
  
  if (this->bTransformVertexColorsLinearToSRGB != false) {
    fVar1 = (param_1->field0_0x0)._s_0.X;
    if (__real_3b4d2e1c < fVar1) {
      fVar1 = powf(fVar1,__real_3ed55555);
      fVar1 = fVar1 * __real_3f870a3d - __real_3d6147ae;
    }
    else {
      fVar1 = fVar1 * __real_414eb852;
    }
    (param_1->field0_0x0)._s_0.X = fVar1;
    fVar1 = (param_1->field0_0x0)._s_0.Y;
    if (__real_3b4d2e1c < fVar1) {
      fVar1 = powf(fVar1,__real_3ed55555);
      fVar1 = fVar1 * __real_3f870a3d - __real_3d6147ae;
    }
    else {
      fVar1 = fVar1 * __real_414eb852;
    }
    (param_1->field0_0x0)._s_0.Y = fVar1;
    fVar1 = (param_1->field0_0x0)._s_0.Z;
    if (fVar1 <= __real_3b4d2e1c) {
      (param_1->field0_0x0)._s_0.Z = fVar1 * __real_414eb852;
      return;
    }
    fVar1 = powf(fVar1,__real_3ed55555);
    (param_1->field0_0x0)._s_0.Z = fVar1 * __real_3f870a3d - __real_3d6147ae;
  }
  return;
}

// Convert @ 1443cc2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FMeshDescriptionToDynamicMesh::Convert
          (FMeshDescriptionToDynamicMesh *this,FMeshDescription *param_1,FDynamicMesh3 *param_2,
          bool param_3)

{
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *this_00;
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  EPrimaryGroupMode EVar3;
  FVertexInstanceID FVar4;
  FVertexID FVar5;
  undefined4 uVar6;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  FMeshAttributeArraySetBase *pFVar7;
  FVertexInstanceID *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FMeshDescriptionToDynamicMesh *pFVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  FMeshElementContainer *pFVar20;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar21;
  TVector<float> *pTVar22;
  FAttributesSetEntry *pFVar23;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar24;
  TMeshAttributeArrayBase<int> *this_02;
  int *piVar25;
  TArrayView<FVertexInstanceID,int> *pTVar26;
  TArrayView<FVertexID,int> *pTVar27;
  FDynamicMeshAttributeSet *pFVar28;
  FDynamicMeshAttributeSet *pFVar29;
  FDynamicMeshAttributeSet *pFVar30;
  FTask *pFVar31;
  uint uVar32;
  FDynamicMeshAttributeSet *this_03;
  int iVar33;
  ulonglong uVar34;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> *this_04;
  FMeshAttributeArraySetBase *pFVar35;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar36;
  longlong lVar37;
  FScriptContainerElement *pFVar38;
  FDynamicMeshAttributeSet *pFVar39;
  ForAnyElementType FVar40;
  uint uVar41;
  FVertexID *pFVar42;
  longlong lVar43;
  FDynamicMesh3 *pFVar44;
  bool bVar45;
  undefined1 auStackY_608 [32];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_5b0;
  char local_5a0;
  byte local_59f;
  undefined4 local_59c;
  FMeshDescription *local_598;
  char local_590 [4];
  int local_58c;
  FMeshDescriptionToDynamicMesh *local_588;
  FDynamicMesh3 *local_580;
  undefined1 local_578;
  undefined1 local_577 [7];
  ForAnyElementType local_570;
  int local_568 [2];
  undefined8 local_560;
  FVertexID local_558;
  ForAnyElementType local_550;
  undefined8 local_548;
  undefined4 local_540 [2];
  FVertexInstanceID local_538;
  FDynamicMeshAttributeSet *local_530;
  FDynamicMeshAttributeSet *local_528;
  FDynamicMeshAttributeSet *local_520;
  FDynamicMeshAttributeSet *local_518;
  FDynamicMeshAttributeSet *local_510;
  FTaskHandle local_508;
  FDynamicMeshAttributeSet *local_500;
  FDynamicMeshAttributeSet *local_4f8;
  FDynamicMeshAttributeSet *local_4f0;
  int local_4e8;
  uint local_4e4;
  FTaskHandle local_4e0;
  FDynamicMeshAttributeSet *local_4d8;
  FVertexID *local_4d0;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_4c8;
  int *local_4c0;
  TArray<TMeshAttributesRef<FVertexID,float_const_>,TSizedDefaultAllocator<32>_> local_4b8;
  TArray<TMeshAttributesRef<FTriangleID,int_const_>,TSizedDefaultAllocator<32>_> local_4a8;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> *local_498;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_490;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_488;
  FDynamicMeshAttributeSet *local_480;
  longlong local_478;
  FScriptContainerElement *local_470;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *local_468;
  TArray<int,TSizedDefaultAllocator<32>_> local_460;
  TArray<FMorphTargetAttribCopyInfo,TSizedDefaultAllocator<32>_> local_450;
  TArray<FSkinWeightsAttribCopyInfo,TSizedDefaultAllocator<32>_> local_440;
  undefined1 local_430 [8];
  FSkeletalMeshAttributesShared local_428;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *local_410;
  TElementIDs local_408;
  TElementIDs local_400;
  int *local_3f8;
  int *local_3f0;
  FDynamicMeshAttributeSet *local_3e8;
  FDynamicMeshAttributeSet *local_3e0;
  FDynamicMeshAttributeSet *local_3d8;
  FDynamicMeshAttributeSet *local_3d0;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *local_3c8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_3c0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_3b0;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_398;
  int *local_378;
  longlong local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_308;
  int local_2e8;
  undefined4 uStack_2e4;
  FDynamicMesh3 *pFStack_2e0;
  ForAnyElementType *local_2d8;
  FDynamicMeshAttributeSet **ppFStack_2d0;
  FMeshDescription **local_2c8;
  FMeshDescriptionToDynamicMesh *pFStack_2c0;
  int local_2b8;
  undefined4 uStack_2b4;
  TArray<TMeshAttributesRef<FTriangleID,int_const_>,TSizedDefaultAllocator<32>_> *pTStack_2b0;
  FDynamicMesh3 *local_2a8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTStack_2a0;
  FMeshDescriptionToDynamicMesh *local_298;
  FMeshDescriptionToDynamicMesh *local_290;
  TArray<TMeshAttributesRef<FVertexID,float_const_>,TSizedDefaultAllocator<32>_> *pTStack_288;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_280;
  FDynamicMesh3 *pFStack_278;
  int local_270;
  undefined4 uStack_26c;
  TVector<double>_u_0 local_268;
  undefined8 local_250;
  float local_248;
  undefined8 local_244;
  float local_23c;
  TVector2<float>_u_0 local_238;
  undefined2 local_230;
  undefined1 local_22e;
  TVector<double>_u_0 local_228;
  undefined8 local_210;
  float local_208;
  undefined8 local_204;
  float local_1fc;
  TVector2<float>_u_0 local_1f8;
  undefined2 local_1f0;
  undefined1 local_1ee;
  <lambda_2> local_1e8;
  <lambda_3> local_1c8;
  <lambda_4> local_1a8;
  <lambda_5> local_188;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  TConstIterator local_128;
  longlong local_108;
  FMeshElementContainer *pFStack_100;
  uint local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TConstIterator local_e8;
  undefined8 local_c8;
  TArrayView<FVertexInstanceID,int> local_b8;
  TArrayView<FVertexID,int> local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_98;
  int local_78;
  uint uStack_74;
  FVertexInstanceID FStack_70;
  FVertexInstanceID FStack_6c;
  FVertexInstanceID local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_608;
  bVar45 = -1 < CpuChannel->Enabled;
  local_5a0 = param_3;
  local_598 = param_1;
  local_588 = this;
  local_580 = param_2;
  if (bVar45) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId183,"MeshDescriptionToDynamicMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp"
               ,0xb7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId183);
  }
  local_498 = &this->TriIDMap;
  this_03 = (FDynamicMeshAttributeSet *)0x0;
  iVar19 = 0;
  piVar25 = &(this->TriIDMap).ArrayMax;
  local_3f0 = &(this->TriIDMap).ArrayNum;
  *local_3f0 = 0;
  local_4c0 = piVar25;
  if ((this->TriIDMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_498->AllocatorInstance,0,piVar25);
  }
  this_00 = &this->VertIDMap;
  local_378 = &(this->VertIDMap).ArrayMax;
  local_3f8 = &(this->VertIDMap).ArrayNum;
  *local_3f8 = 0;
  if ((this->VertIDMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this_00->AllocatorInstance,0,local_378);
  }
  UE::Geometry::FDynamicMesh3::Clear(param_2);
  if (local_598 == (FMeshDescription *)0x0) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1375024081778245821>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp"
                        ,0xbd,"MeshIn != nullptr");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    pFVar20 = FMeshElementChannels::Get(local_598->VertexElements,0);
    TArray<FVertexID,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (this_00,(pFVar20->BitArray).NumBits - pFVar20->NumHoles,Default);
    this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
              (local_598->VertexPositions).ArrayPtr;
    local_408.Array = &FMeshElementChannels::Get(local_598->VertexElements,0)->BitArray;
    TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_408,(TConstIterator *)&local_328);
    TMeshElementContainer<FVertexID>::TElementIDs::end(&local_408,&local_128);
    while ((local_328.CurrentBitIndex != local_128.Iterator.CurrentBitIndex ||
           (local_328.Array != local_128.Iterator.Array))) {
      iVar17 = -1;
      if (local_328.CurrentBitIndex < (local_328.Array)->NumBits) {
        iVar17 = local_328.CurrentBitIndex;
      }
      pTVar21 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
      pTVar22 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar21,iVar17);
      local_1f0 = 0;
      local_1ee = 0;
      local_358 = *(longlong *)&pTVar22->field0_0x0;
      local_228._s_0.X = (double)(float)local_358;
      local_228._s_0.Y = (double)(float)((ulonglong)local_358 >> 0x20);
      local_228._s_0.Z = (double)(pTVar22->field0_0x0)._s_0.Z;
      local_208 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_1fc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_1f8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_210 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_204 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar16 = UE::Geometry::FDynamicMesh3::AppendVertex(param_2,(FVertexInfo *)&local_228._s_0);
      uVar32 = 0;
      if ((int)uVar16 < (this->VertIDMap).ArrayNum) {
        uVar32 = ~uVar16 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(int *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) = iVar17;
      local_328.UnvisitedBitMask = local_328.UnvisitedBitMask & ~local_328._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_328);
    }
    local_430 = (undefined1  [8])local_598;
    FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_428,local_598);
    pFVar20 = FMeshElementChannels::Get(*(FMeshElementChannels **)((longlong)local_430 + 0x58),0);
    pFVar23 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar20->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
    if (((pFVar23 == (FAttributesSetEntry *)0x0) ||
        (local_3e8 = (FDynamicMeshAttributeSet *)(pFVar23->Ptr).Ptr,
        (((FRefCountVector *)&local_3e8->_padding_)->RefCounts).CurBlock != 2)) ||
       ((((FRefCountVector *)&local_3e8->_padding_)->RefCounts).CurBlockUsed != 1)) {
      local_3e8 = this_03;
    }
    pFVar20 = FMeshElementChannels::Get(*(FMeshElementChannels **)((longlong)local_430 + 0x58),0);
    pFVar23 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar20->Attributes,MeshAttribute::VertexInstance::Normal);
    if (((pFVar23 == (FAttributesSetEntry *)0x0) ||
        (local_3e0 = (FDynamicMeshAttributeSet *)(pFVar23->Ptr).Ptr,
        (((FRefCountVector *)&local_3e0->_padding_)->RefCounts).CurBlock != 1)) ||
       ((((FRefCountVector *)&local_3e0->_padding_)->RefCounts).CurBlockUsed != 1)) {
      local_3e0 = this_03;
    }
    pFVar20 = FMeshElementChannels::Get(*(FMeshElementChannels **)((longlong)local_430 + 0x58),0);
    pFVar23 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar20->Attributes,MeshAttribute::VertexInstance::Tangent);
    if (((pFVar23 == (FAttributesSetEntry *)0x0) ||
        (local_480 = (FDynamicMeshAttributeSet *)(pFVar23->Ptr).Ptr,
        (((FRefCountVector *)&local_480->_padding_)->RefCounts).CurBlock != 1)) ||
       ((((FRefCountVector *)&local_480->_padding_)->RefCounts).CurBlockUsed != 1)) {
      local_480 = this_03;
    }
    pFVar20 = FMeshElementChannels::Get(*(FMeshElementChannels **)((longlong)local_430 + 0x58),0);
    pFVar23 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar20->Attributes,MeshAttribute::VertexInstance::BinormalSign);
    if (((pFVar23 == (FAttributesSetEntry *)0x0) ||
        (local_3d8 = (FDynamicMeshAttributeSet *)(pFVar23->Ptr).Ptr,
        (((FRefCountVector *)&local_3d8->_padding_)->RefCounts).CurBlock != 3)) ||
       ((((FRefCountVector *)&local_3d8->_padding_)->RefCounts).CurBlockUsed != 1)) {
      local_3d8 = this_03;
    }
    pFVar20 = FMeshElementChannels::Get(*(FMeshElementChannels **)((longlong)local_430 + 0x58),0);
    pFVar23 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar20->Attributes,MeshAttribute::VertexInstance::Color);
    if (((pFVar23 == (FAttributesSetEntry *)0x0) ||
        (local_3d0 = (FDynamicMeshAttributeSet *)(pFVar23->Ptr).Ptr,
        (((FRefCountVector *)&local_3d0->_padding_)->RefCounts).CurBlock != 0)) ||
       ((((FRefCountVector *)&local_3d0->_padding_)->RefCounts).CurBlockUsed != 1)) {
      local_3d0 = this_03;
    }
    pFVar20 = FMeshElementChannels::Get(local_598->PolygonElements,0);
    pFVar23 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar20->Attributes,ExtendedMeshAttribute::PolyTriGroups);
    pFVar12 = local_588;
    if (((pFVar23 == (FAttributesSetEntry *)0x0) ||
        (pFVar29 = (FDynamicMeshAttributeSet *)(pFVar23->Ptr).Ptr,
        (((FRefCountVector *)&pFVar29->_padding_)->RefCounts).CurBlock != 4)) ||
       ((((FRefCountVector *)&pFVar29->_padding_)->RefCounts).CurBlockUsed != 1)) {
      pFVar29 = this_03;
    }
    if (local_588->bEnableOutputGroups != false) {
      UE::Geometry::FDynamicMesh3::EnableTriangleGroups(local_580,0);
    }
    local_550.Data = (FScriptContainerElement *)0x0;
    local_548 = 0;
    uVar32 = 0;
    if (pFVar12->bUseCompactedPolygonGroupIDValues != false) {
      pFVar20 = FMeshElementChannels::Get(local_598->PolygonGroupElements,0);
      iVar17 = (pFVar20->BitArray).NumBits;
      pFVar20 = FMeshElementChannels::Get(local_598->PolygonGroupElements,0);
      if ((pFVar20->BitArray).NumBits - pFVar20->NumHoles != iVar17) {
        pFVar20 = FMeshElementChannels::Get(local_598->PolygonGroupElements,0);
        local_540[0] = 0xffffffff;
        uVar16 = (pFVar20->BitArray).NumBits;
        uVar34 = (ulonglong)uVar16;
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar34);
        }
        if (local_548._4_4_ != uVar16) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar16,&local_550,0,(int *)((longlong)&local_548 + 4));
        }
        if (0 < (int)uVar16) {
          do {
            if (((local_550.Data <= (FScriptContainerElement *)local_540) &&
                ((FScriptContainerElement *)local_540 <
                 local_550.Data + (longlong)(int)local_548._4_4_ * 4)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar17 = (int)local_548;
            if ((int)local_548 == local_548._4_4_) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_550,(int *)((longlong)&local_548 + 4));
            }
            local_548 = CONCAT44(local_548._4_4_,iVar17 + 1);
            *(undefined4 *)(local_550.Data + (longlong)iVar17 * 4) = local_540[0];
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
        }
        local_398._padding_._0_4_ = 0;
        local_398._padding_._4_4_ = 1;
        local_398.UnvisitedBitMask = 0xffffffff;
        local_398.CurrentBitIndex = 0;
        local_398.BaseBitIndex = 0;
        local_398.Array = &pFVar20->BitArray;
        if ((pFVar20->BitArray).NumBits != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_398);
        }
        local_348._padding_ = CONCAT44(local_398._padding_._4_4_,(undefined4)local_398._padding_);
        local_348.CurrentBitIndex = local_398.CurrentBitIndex;
        local_348.UnvisitedBitMask = local_398.UnvisitedBitMask;
        local_348._28_4_ = local_398._28_4_;
        local_348.BaseBitIndex = local_398.BaseBitIndex;
        local_348.Array = local_398.Array;
        pTVar24 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_98,&pFVar20->BitArray,(pFVar20->BitArray).NumBits);
        local_f8 = pTVar24->UnvisitedBitMask;
        uVar16 = pTVar24->CurrentBitIndex;
        iStack_f0 = pTVar24->BaseBitIndex;
        uStack_ec = *(undefined4 *)&pTVar24->field_0x1c;
        local_108 = pTVar24->_padding_;
        pFStack_100 = (FMeshElementContainer *)pTVar24->Array;
        pFVar28 = this_03;
        uStack_f4 = uVar16;
        while ((local_348.CurrentBitIndex != uVar16 ||
               (piVar25 = local_4c0, (FMeshElementContainer *)local_348.Array != pFStack_100))) {
          if (local_348.CurrentBitIndex <
              ((TBitArray<FDefaultBitArrayAllocator> *)&(local_348.Array)->AllocatorInstance)->
              NumBits) {
            uVar18 = uVar32;
            if (local_348.CurrentBitIndex < (int)local_548) {
              uVar18 = (uint)~local_348.CurrentBitIndex >> 0x1f;
            }
            uVar41 = local_348.CurrentBitIndex;
            if (uVar18 == 0) goto LAB_1443cc9a2;
          }
          else {
            uVar41 = 0xffffffff;
LAB_1443cc9a2:
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          *(int *)(local_550.Data + (longlong)(int)uVar41 * 4) = (int)pFVar28;
          pFVar28 = (FDynamicMeshAttributeSet *)(ulonglong)((int)pFVar28 + 1);
          local_348.UnvisitedBitMask = local_348.UnvisitedBitMask & ~local_348._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_348);
        }
      }
    }
    if (((local_5a0 == '\0') || (local_480 == (FDynamicMeshAttributeSet *)0x0)) ||
       (local_59f = 1, local_3d8 == (FDynamicMeshAttributeSet *)0x0)) {
      local_59f = 0;
    }
    FMeshElementChannels::Get(local_598->VertexElements,0);
    FMeshElementChannels::Get(local_598->PolygonElements,0);
    FMeshElementChannels::Get(local_598->VertexInstanceElements,0);
    if ((local_588->bPrintDebugMessages != false) && (2 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    FDateTime::Now();
    local_570.Data = (FScriptContainerElement *)0x0;
    local_568[0] = 0;
    local_568[1] = 0;
    pFVar20 = FMeshElementChannels::Get(local_598->TriangleElements,0);
    uVar16 = (pFVar20->BitArray).NumBits - pFVar20->NumHoles;
    if (local_568[0] < (int)uVar16) {
      iVar33 = uVar16 - local_568[0];
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x14,4,iVar33,&local_570,local_568,local_568 + 1);
      DefaultConstructItems<_FMeshDescriptionToDynamicMesh::Convert_::__l2::FTriData,int>
                (local_570.Data + (longlong)iVar17 * 0x14,iVar33);
    }
    else {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if ((int)uVar16 < local_568[0]) {
        uVar41 = local_568[0] - uVar16;
        if ((int)(uVar16 | uVar41) < 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (uVar41 != 0) {
          iVar33 = (local_568[0] - uVar16) - uVar41;
          iVar17 = local_568[0];
          if (iVar33 != 0) {
            memmove(local_570.Data + (longlong)(int)uVar16 * 0x14,
                    local_570.Data + (longlong)(int)uVar16 * 0x14 + (longlong)(int)uVar41 * 0x14,
                    (longlong)iVar33 * 0x14);
            iVar17 = local_568[0];
          }
          local_568[0] = iVar17 - uVar41;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,&local_570,iVar17 - uVar41,local_568 + 1);
        }
      }
    }
    pFVar20 = FMeshElementChannels::Get(local_598->TriangleElements,0);
    this_04 = local_498;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(pFVar20->BitArray).NumBits - pFVar20->NumHoles,&local_498->AllocatorInstance,
               local_3f0,piVar25);
    local_5a0 = '\x01';
    local_400.Array = &FMeshElementChannels::Get(local_598->TriangleElements,0)->BitArray;
    TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_400,(TConstIterator *)&local_308);
    TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_400,&local_e8);
    while ((pFVar44 = local_580, local_308.CurrentBitIndex != local_e8.Iterator.CurrentBitIndex ||
           (local_308.Array != local_e8.Iterator.Array))) {
      iVar17 = -1;
      if (local_308.CurrentBitIndex < (local_308.Array)->NumBits) {
        iVar17 = local_308.CurrentBitIndex;
      }
      pFVar7 = (local_598->TrianglePolygons).ArrayPtr;
      local_4e8 = iVar17;
      if (((int)pFVar7[2].Type < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar35 = pFVar7 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar7[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar35 = (FMeshAttributeArraySetBase *)pFVar7[2]._padding_;
      }
      uVar41 = iVar17 * pFVar35->NumElements;
      uVar16 = uVar32;
      if ((int)uVar41 < (int)pFVar35->Type) {
        uVar16 = ~uVar41 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar33 = *(int *)(pFVar35->_padding_ + (longlong)(int)uVar41 * 4);
      pFVar7 = (local_598->TrianglePolygonGroups).ArrayPtr;
      if (((int)pFVar7[2].Type < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar35 = pFVar7 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar7[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar35 = (FMeshAttributeArraySetBase *)pFVar7[2]._padding_;
      }
      uVar41 = iVar17 * pFVar35->NumElements;
      uVar16 = uVar32;
      if ((int)uVar41 < (int)pFVar35->Type) {
        uVar16 = ~uVar41 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar16 = *(uint *)(pFVar35->_padding_ + (longlong)(int)uVar41 * 4);
      if ((int)local_548 != 0) {
        uVar41 = uVar32;
        if ((int)uVar16 < (int)local_548) {
          uVar41 = ~uVar16 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar16 = *(uint *)(local_550.Data + (longlong)(int)uVar16 * 4);
      }
      local_58c = 0;
      EVar3 = local_588->GroupMode;
      if (EVar3 == SetToPolygonID) {
        local_58c = iVar33 + 1;
      }
      else if (EVar3 == SetToPolygonGroupID) {
        local_58c = uVar16 + 1;
      }
      else if ((EVar3 == SetToPolyGroup) && (pFVar29 != (FDynamicMeshAttributeSet *)0x0)) {
        this_02 = TMeshAttributeArraySet<int>::GetArrayForChannel
                            ((TMeshAttributeArraySet<int> *)pFVar29,0);
        piVar25 = TMeshAttributeArrayBase<int>::GetElementBase(this_02,iVar33);
        local_58c = *piVar25;
      }
      iVar13 = local_4e8;
      local_78 = iVar33;
      uStack_74 = uVar16;
      pTVar26 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                          (&local_598->TriangleVertexInstances,&local_b8,local_4e8);
      iVar17 = pTVar26->ArrayNum;
      pFVar8 = pTVar26->DataPtr;
      if ((iVar17 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FStack_70 = *pFVar8;
      if ((iVar17 < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FStack_6c = pFVar8[1];
      if ((iVar17 < 3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_68 = pFVar8[2];
      pTVar27 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&local_598->TriangleVertices,&local_a8,iVar13);
      FVar4 = (FVertexInstanceID)pTVar27->ArrayNum;
      pFVar42 = pTVar27->DataPtr;
      local_560 = 0xffffffffffffffff;
      local_558 = (FVertexID)0xffffffff;
      local_538 = FVar4;
      local_4d0 = pFVar42;
      if (((int)FVar4 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_560 = CONCAT44(local_560._4_4_,*pFVar42);
      if (((int)FVar4 < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_560 = CONCAT44(pFVar42[1],local_560._0_4_);
      if (((int)FVar4 < 3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_558 = pFVar42[2];
      uVar16 = UE::Geometry::FDynamicMesh3::AppendTriangle
                         (local_580,(FIndex3i *)&local_560,local_58c);
      if ((uVar16 + 3 & 0xfffffffd) != 0) {
        if (uVar16 == 0xfffffffe) {
          local_5a0 = '\0';
          uVar16 = UE::Geometry::FDynamicMesh3::FindEdge
                             (local_580,(int)local_560._0_4_,local_560._4_4_);
          uVar41 = UE::Geometry::FDynamicMesh3::FindEdge(local_580,local_560._4_4_,(int)local_558);
          uVar18 = UE::Geometry::FDynamicMesh3::FindEdge
                             (local_580,(int)local_558,(int)local_560._0_4_);
          local_59c._0_3_ = 0;
          if ((uVar16 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((local_580->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar16 >> 9) * 8) + 0xc + (ulonglong)(uVar16 & 0x1ff) * 0x10) !=
              -1)) {
            local_59c._0_3_ = 0x101;
          }
          if ((uVar41 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((local_580->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar41 >> 9) * 8) + 0xc + (ulonglong)(uVar41 & 0x1ff) * 0x10) !=
              -1)) {
            local_59c._0_3_ = CONCAT21(0x101,(undefined1)local_59c);
          }
          if ((uVar18 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((local_580->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar18 >> 9) * 8) + 0xc + (ulonglong)(uVar18 & 0x1ff) * 0x10) !=
              -1)) {
            local_59c._0_3_ = CONCAT12(1,(undefined2)local_59c);
            local_59c._0_3_ = CONCAT21(local_59c._1_2_,1);
          }
          local_4c0 = &local_59c;
          local_358 = (longlong)&local_560 - (longlong)pFVar42;
          pFVar28 = this_03;
          do {
            if ((char)*local_4c0 != '\0') {
              if (((int)local_538 <= (int)pFVar28) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FVar5 = *pFVar42;
              pTVar21 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                  (this_01,0);
              pTVar22 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                  (pTVar21,(int)FVar5);
              local_230 = 0;
              local_22e = 0;
              local_c8 = *(undefined8 *)&pTVar22->field0_0x0;
              local_268._s_0.X = (double)(float)local_c8;
              local_268._s_0.Y = (double)(float)((ulonglong)local_c8 >> 0x20);
              local_268._s_0.Z = (double)(pTVar22->field0_0x0)._s_0.Z;
              local_248 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_23c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_238 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              local_250 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_244 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              uVar41 = UE::Geometry::FDynamicMesh3::AppendVertex
                                 (local_580,(FVertexInfo *)&local_268._s_0);
              local_4e4 = uVar41;
              uVar16 = uVar41 + 1;
              *(uint *)((longlong)&local_4d0->field_0x0 + local_358) = uVar41;
              iVar17 = *local_3f8;
              if (iVar17 < (int)uVar16) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar16 - iVar17,&(local_588->VertIDMap).AllocatorInstance,local_3f8,
                           local_378);
              }
              else {
                if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
                }
                if ((int)uVar16 < iVar17) {
                  uVar18 = iVar17 - uVar16;
                  if (((int)(uVar16 | uVar18) < 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar12 = local_588;
                  uVar41 = local_4e4;
                  if (uVar18 != 0) {
                    TArray<FVertexID,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                              (&local_588->VertIDMap,uVar16,uVar18);
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,&(pFVar12->VertIDMap).AllocatorInstance,
                               (pFVar12->VertIDMap).ArrayNum,&(pFVar12->VertIDMap).ArrayMax);
                    uVar41 = local_4e4;
                  }
                }
              }
              FVar5 = *local_4d0;
              uVar16 = uVar32;
              if ((int)uVar41 < *local_3f8) {
                uVar16 = ~uVar41 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(FVertexID *)
               ((local_588->VertIDMap).AllocatorInstance.Data + (longlong)(int)uVar41 * 4) = FVar5;
              pFVar42 = local_4d0;
            }
            local_4c0 = (int *)((longlong)local_4c0 + 1);
            pFVar42 = pFVar42 + 1;
            uVar16 = (int)pFVar28 + 1;
            pFVar28 = (FDynamicMeshAttributeSet *)(ulonglong)uVar16;
            local_4d0 = pFVar42;
          } while ((int)uVar16 < 3);
          uVar16 = UE::Geometry::FDynamicMesh3::AppendTriangle
                             (local_580,(FIndex3i *)&local_560,local_58c);
        }
        uVar10 = CONCAT44(uStack_74,local_78);
        uVar11 = CONCAT44(FStack_6c,FStack_70);
        local_538 = local_68;
        uVar41 = uVar32;
        if ((int)uVar16 < local_568[0]) {
          uVar41 = ~uVar16 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar43 = (longlong)(int)uVar16;
        *(undefined8 *)(local_570.Data + lVar43 * 0x14) = uVar10;
        *(undefined8 *)(local_570.Data + lVar43 * 0x14 + 8) = uVar11;
        *(FVertexInstanceID *)(local_570.Data + lVar43 * 0x14 + 0x10) = local_538;
        uVar41 = uVar32;
        if ((int)uVar16 < *local_3f0) {
          uVar41 = ~uVar16 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(int *)((local_498->AllocatorInstance).Data + lVar43 * 4) = local_4e8;
      }
      this_04 = local_498;
      local_308.UnvisitedBitMask = local_308.UnvisitedBitMask & ~local_308._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_308);
    }
    TArray<FTriangleID,TSizedDefaultAllocator<32>_>::SetNum
              (this_04,(local_580->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (local_580->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
    FDateTime::Now();
    if (local_3e8 != (FDynamicMeshAttributeSet *)0x0) {
      iVar19 = (local_3e8->NormalLayers).Array.ArrayNum;
    }
    bVar14 = iVar19 == (local_598->UVElements->Channels).ArrayNum;
    local_58c = iVar19;
    if ((bVar14) && (pFVar29 = this_03, bVar15 = true, 0 < iVar19)) {
      do {
        pFVar20 = FMeshElementChannels::Get(local_598->UVElements,(int)pFVar29);
        if ((bVar15 == false) || ((pFVar20->BitArray).NumBits == 0)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        uVar16 = (int)pFVar29 + 1;
        pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)uVar16;
        bVar15 = bVar14;
      } while ((int)uVar16 < iVar19);
    }
    local_478 = 0;
    local_4c8 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    local_490 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    local_488 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    local_470 = (FScriptContainerElement *)0x0;
    local_468 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0;
    local_3c8 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *)0x0;
    local_3a0 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_>
                 *)0x0;
    local_410 = (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> *
                )0x0;
    local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_440.ArrayNum = 0;
    local_440.ArrayMax = 0;
    local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_450.ArrayNum = 0;
    local_450.ArrayMax = 0;
    if (local_588->bDisableAttributes == false) {
      UE::Geometry::FDynamicMesh3::EnableAttributes(pFVar44);
      uVar16 = (uint)local_59f * 2 + 1;
      iVar19 = (**(code **)(((pFVar44->AttributeSet).Ptr)->_padding_ + 0xb8))();
      if (iVar19 < (int)uVar16) {
        pFVar29 = (pFVar44->AttributeSet).Ptr;
        (**(code **)(pFVar29->_padding_ + 0xc0))(pFVar29,uVar16);
      }
      pFVar44 = local_580;
      pFVar29 = this_03;
      pFVar28 = this_03;
      do {
        pFVar30 = (pFVar44->AttributeSet).Ptr;
        pFVar39 = this_03;
        if (pFVar30 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar39 = pFVar30;
        }
        iVar19 = (int)pFVar29;
        pFVar29 = this_03;
        if ((iVar19 < (pFVar39->NormalLayers).Array.ArrayNum) && (-1 < iVar19)) {
          if ((iVar19 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar29 = *(FDynamicMeshAttributeSet **)
                     ((pFVar39->NormalLayers).Array.AllocatorInstance.Data + (longlong)pFVar28 * 8);
        }
        UE::Geometry::TDynamicMeshOverlay<float,3>::InitializeTriangles
                  ((TDynamicMeshOverlay<float,3> *)pFVar29,
                   (pFVar44->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar44->TriangleRefCounts).RefCounts.CurBlockUsed);
        pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar19 + 1);
        pFVar28 = (FDynamicMeshAttributeSet *)((longlong)&pFVar28->_padding_ + 1);
      } while ((longlong)pFVar28 < (longlong)(ulonglong)uVar16);
      pFVar29 = (pFVar44->AttributeSet).Ptr;
      pFVar28 = this_03;
      if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar28 = pFVar29;
      }
      local_4c8 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar28,0);
      pFVar44 = local_580;
      if (local_59f != 0) {
        pFVar29 = (local_580->AttributeSet).Ptr;
        pFVar28 = this_03;
        if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar28 = pFVar29;
        }
        local_490 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar28,1);
        pFVar29 = (pFVar44->AttributeSet).Ptr;
        pFVar28 = this_03;
        if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar28 = pFVar29;
        }
        local_488 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar28,2);
      }
      iVar19 = local_58c;
      lVar43 = (longlong)local_58c;
      (**(code **)(((pFVar44->AttributeSet).Ptr)->_padding_ + 0xb0))();
      pFVar44 = local_580;
      iVar17 = 1;
      if (1 < lVar43) {
        lVar37 = 1;
        do {
          pFVar29 = (pFVar44->AttributeSet).Ptr;
          pFVar28 = this_03;
          if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar28 = pFVar29;
          }
          pFVar29 = this_03;
          if ((iVar17 < *(int *)&(((TDynamicVector<int,512> *)&pFVar28->UVLayers)->Blocks).
                                 AllocatorInstance.Data) && (-1 < iVar17)) {
            if ((iVar17 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar29 = *(FDynamicMeshAttributeSet **)(*(longlong *)&pFVar28->UVLayers + lVar37 * 8);
          }
          UE::Geometry::TDynamicMeshOverlay<float,2>::InitializeTriangles
                    ((TDynamicMeshOverlay<float,2> *)pFVar29,
                     (pFVar44->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar44->TriangleRefCounts).RefCounts.CurBlockUsed);
          iVar17 = iVar17 + 1;
          lVar37 = lVar37 + 1;
          iVar19 = local_58c;
        } while (lVar37 < lVar43);
      }
      pFVar44 = local_580;
      if (local_3d0 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar29 = (local_580->AttributeSet).Ptr;
        pFVar28 = this_03;
        if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar28 = pFVar29;
        }
        UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar28);
        pFVar29 = (pFVar44->AttributeSet).Ptr;
        pFVar28 = this_03;
        if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar28 = pFVar29;
        }
        local_478._0_4_ = *(uint *)&(pFVar28->ColorLayer).Ptr;
        local_478._4_4_ = *(uint *)((longlong)&(pFVar28->ColorLayer).Ptr + 4);
      }
      pFVar29 = (pFVar44->AttributeSet).Ptr;
      pFVar28 = this_03;
      if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar28 = pFVar29;
      }
      UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar28);
      pFVar29 = (pFVar44->AttributeSet).Ptr;
      local_1e8.MeshOut = pFVar44;
      pFVar28 = this_03;
      if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar28 = pFVar29;
      }
      local_470 = (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                     *)&pFVar28->MaterialIDAttrib)->AllocatorInstance).Data;
      local_1e8.SkinWeightAttribs = &local_440;
      local_1e8.Attributes = (FSkeletalMeshConstAttributes *)local_430;
      pFVar20 = FMeshElementChannels::Get(local_598->VertexElements,0);
      TAttributesSet<FVertexID>::
      ForEach<_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>_>
                ((TAttributesSet<FVertexID> *)&pFVar20->Attributes,&local_1e8);
      local_1c8.MorphTargetAttribs = &local_450;
      local_1c8.Attributes = (FSkeletalMeshConstAttributes *)local_430;
      local_1c8.MeshOut = pFVar44;
      pFVar20 = FMeshElementChannels::Get(local_598->VertexElements,0);
      TAttributesSet<FVertexID>::
      ForEach<_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>_>
                ((TAttributesSet<FVertexID> *)&pFVar20->Attributes,&local_1c8);
      if (local_428.BoneElementsShared != (FMeshElementChannels *)0x0) {
        pFVar29 = (pFVar44->AttributeSet).Ptr;
        pFVar28 = this_03;
        if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar28 = pFVar29;
        }
        iVar17 = FSkeletalMeshAttributesShared::GetNumBones(&local_428);
        UE::Geometry::FDynamicMeshAttributeSet::EnableBones(pFVar28,iVar17);
        bVar15 = FSkeletalMeshAttributesShared::HasBoneNameAttribute(&local_428);
        if (bVar15) {
          pFVar29 = (pFVar44->AttributeSet).Ptr;
          pFVar28 = this_03;
          if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar28 = pFVar29;
          }
          local_468 = (pFVar28->BoneNameAttrib).Ptr;
        }
        bVar15 = FSkeletalMeshAttributesShared::HasBoneParentIndexAttribute(&local_428);
        if (bVar15) {
          pFVar29 = (pFVar44->AttributeSet).Ptr;
          pFVar28 = this_03;
          if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar28 = pFVar29;
          }
          local_3c8 = (pFVar28->BoneParentIndexAttrib).Ptr;
        }
        bVar15 = FSkeletalMeshAttributesShared::HasBonePoseAttribute(&local_428);
        if (bVar15) {
          pFVar29 = (pFVar44->AttributeSet).Ptr;
          pFVar28 = this_03;
          if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar28 = pFVar29;
          }
          local_3a0 = (pFVar28->BonePoseAttrib).Ptr;
        }
        bVar15 = FSkeletalMeshAttributesShared::HasBoneColorAttribute(&local_428);
        if (bVar15) {
          pFVar29 = (pFVar44->AttributeSet).Ptr;
          pFVar28 = this_03;
          if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar28 = pFVar29;
          }
          local_410 = (pFVar28->BoneColorAttrib).Ptr;
        }
      }
    }
    pFVar20 = FMeshElementChannels::Get(local_598->TriangleElements,0);
    local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a8.ArrayNum = 0;
    local_4a8.ArrayMax = 0;
    local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.TriAttribsSet = (TAttributesSet<FTriangleID> *)&pFVar20->Attributes;
    local_3b0.ArrayNum = 0;
    local_3b0.ArrayMax = 0;
    local_1a8.PolygroupAttribs = &local_4a8;
    local_1a8.PolygroupAttribNames = &local_3b0;
    TAttributesSet<FTriangleID>::
    ForEach<_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>_>
              (local_1a8.TriAttribsSet,&local_1a8);
    pFVar20 = FMeshElementChannels::Get(local_598->VertexElements,0);
    local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b8.ArrayNum = 0;
    local_4b8.ArrayMax = 0;
    local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.VertAttribsSet = (TAttributesSet<FVertexID> *)&pFVar20->Attributes;
    local_3c0.ArrayNum = 0;
    local_3c0.ArrayMax = 0;
    local_188.WeightAttribs = &local_4b8;
    local_188.WeightAttribNames = &local_3c0;
    TAttributesSet<FVertexID>::ForEach<_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>_>
              (local_188.VertAttribsSet,&local_188);
    if (local_588->bDisableAttributes == false) {
      local_590[0] = '\0';
      local_5b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5b0.ArrayNum = 0;
      local_5b0.ArrayMax = 0;
      if (0 < local_4a8.ArrayNum) {
        (**(code **)(((pFVar44->AttributeSet).Ptr)->_padding_ + 0xd0))();
      }
      pFVar29 = (pFVar44->AttributeSet).Ptr;
      (**(code **)(pFVar29->_padding_ + 0xe0))(pFVar29,local_4b8._8_8_ & 0xffffffff);
      pFVar12 = local_588;
      pFVar29 = this_03;
      if (0 < iVar19) {
        do {
          local_2d8 = &local_570;
          ppFStack_2d0 = &local_3e8;
          uStack_2e4 = CONCAT31(uStack_2e4._1_3_,bVar14);
          local_2c8 = &local_598;
          pFStack_2c0 = pFVar12;
          local_2e8 = (int)pFVar29;
          pFStack_2e0 = pFVar44;
          pFVar28 = FMemory::Malloc(0x140,0x40);
          TVar36.Reference = (FTaskBase *)this_03;
          if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
            UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar28,2,true);
            pFVar28->_padding_ =
                 (longlong)
                 &UE::Tasks::Private::
                  TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::`116'::<lambda_6>,void,void>
                  ::_vftable_;
            UE::Tasks::Private::FTaskBase::Init
                      ((FTaskBase *)pFVar28,
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp(587)"
                       ,Default,None,None);
            *(ulonglong *)&(pFVar28->MorphTargetAttributes).field_0x18 =
                 CONCAT44(uStack_2e4,local_2e8);
            *(FDynamicMesh3 **)&(pFVar28->MorphTargetAttributes).field_0x20 = pFStack_2e0;
            *(ForAnyElementType **)&(pFVar28->MorphTargetAttributes).field_0x28 = local_2d8;
            *(FDynamicMeshAttributeSet ***)&(pFVar28->MorphTargetAttributes).field_0x30 =
                 ppFStack_2d0;
            *(FMeshDescription ***)&(pFVar28->MorphTargetAttributes).field_0x38 = local_2c8;
            *(FMeshDescriptionToDynamicMesh **)&(pFVar28->MorphTargetAttributes).field_0x40 =
                 pFStack_2c0;
            pFVar28->_padding_ =
                 (longlong)
                 &UE::Tasks::Private::
                  TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::`116'::<lambda_6>_>::
                  _vftable_;
            TVar36.Reference = (FTaskBase *)pFVar28;
          }
          UE::Tasks::Private::FTaskBase::TryLaunch(TVar36.Reference,0x140);
          local_4e0.Pimpl.Reference =
               (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
               (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar36.Reference;
          if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4e0) &&
              ((FScriptContainerElement *)&local_4e0 <
               local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar17 = local_5b0.ArrayNum;
          if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
          }
          uVar16 = (int)pFVar29 + 1;
          local_5b0.ArrayNum = iVar17 + 1;
          *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar17 * 8) = 0;
          *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
           (local_5b0.AllocatorInstance.Data + (longlong)iVar17 * 8) = local_4e0.Pimpl.Reference;
          local_4e0.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
          pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)uVar16;
        } while ((int)uVar16 < iVar19);
      }
      if (local_4c8 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
        pFVar28 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        pFVar29 = this_03;
        if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar28,2,true);
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::`119'::<lambda_7>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)pFVar28,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp(757)"
                     ,Default,None,None);
          *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> ***)
           &(pFVar28->MorphTargetAttributes).field_0x18 = &local_4c8;
          *(FDynamicMesh3 **)&(pFVar28->MorphTargetAttributes).field_0x20 = pFVar44;
          *(ForAnyElementType **)&(pFVar28->MorphTargetAttributes).field_0x28 = &local_570;
          *(FDynamicMeshAttributeSet ***)&(pFVar28->MorphTargetAttributes).field_0x30 = &local_3e0;
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::`119'::<lambda_7>_>::
                _vftable_;
          pFVar29 = pFVar28;
        }
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar29,0x100);
        local_4d8 = pFVar29;
        if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4d8) &&
            ((FScriptContainerElement *)&local_4d8 <
             local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar19 = local_5b0.ArrayNum;
        if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
        }
        local_5b0.ArrayNum = iVar19 + 1;
        *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
        *(FDynamicMeshAttributeSet **)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) =
             local_4d8;
        local_4d8 = (FDynamicMeshAttributeSet *)0x0;
      }
      if (local_490 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
        local_4f0 = (FDynamicMeshAttributeSet *)0x0;
        pFVar28 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        pFVar29 = this_03;
        if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar28,2,true);
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::`122'::<lambda_8>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)pFVar28,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp(780)"
                     ,Default,None,None);
          *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> ***)
           &(pFVar28->MorphTargetAttributes).field_0x18 = &local_490;
          *(FDynamicMesh3 **)&(pFVar28->MorphTargetAttributes).field_0x20 = pFVar44;
          *(ForAnyElementType **)&(pFVar28->MorphTargetAttributes).field_0x28 = &local_570;
          *(FDynamicMeshAttributeSet ***)&(pFVar28->MorphTargetAttributes).field_0x30 = &local_480;
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::`122'::<lambda_8>_>::
                _vftable_;
          pFVar29 = pFVar28;
        }
        if (local_4f0 != (FDynamicMeshAttributeSet *)0x0) {
          LOCK();
          piVar25 = (int *)((longlong)local_4f0 + 0x30);
          iVar19 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (*(code *)**(undefined8 **)local_4f0)(local_4f0,1);
          }
        }
        local_4f0 = pFVar29;
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar29,0x100);
        if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4f0) &&
            ((FScriptContainerElement *)&local_4f0 <
             local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar19 = local_5b0.ArrayNum;
        if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
        }
        local_5b0.ArrayNum = iVar19 + 1;
        *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
        *(FDynamicMeshAttributeSet **)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) =
             local_4f0;
        local_4f0 = (FDynamicMeshAttributeSet *)0x0;
      }
      if (local_488 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
        local_4f8 = (FDynamicMeshAttributeSet *)0x0;
        pFVar28 = FMemory::Malloc(0x140,0x40);
        pFVar29 = this_03;
        if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar28,2,true);
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::`125'::<lambda_9>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)pFVar28,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp(802)"
                     ,Default,None,None);
          *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> ***)
           &(pFVar28->MorphTargetAttributes).field_0x18 = &local_488;
          *(FDynamicMesh3 **)&(pFVar28->MorphTargetAttributes).field_0x20 = pFVar44;
          *(ForAnyElementType **)&(pFVar28->MorphTargetAttributes).field_0x28 = &local_570;
          *(FDynamicMeshAttributeSet ***)&(pFVar28->MorphTargetAttributes).field_0x30 = &local_3e0;
          *(FDynamicMeshAttributeSet ***)&(pFVar28->MorphTargetAttributes).field_0x38 = &local_480;
          *(FDynamicMeshAttributeSet ***)&(pFVar28->MorphTargetAttributes).field_0x40 = &local_3d8;
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::`125'::<lambda_9>_>::
                _vftable_;
          pFVar29 = pFVar28;
        }
        if (local_4f8 != (FDynamicMeshAttributeSet *)0x0) {
          LOCK();
          piVar25 = (int *)((longlong)local_4f8 + 0x30);
          iVar19 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (*(code *)**(undefined8 **)local_4f8)(local_4f8,1);
          }
        }
        local_4f8 = pFVar29;
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar29,0x140);
        if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4f8) &&
            ((FScriptContainerElement *)&local_4f8 <
             local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar19 = local_5b0.ArrayNum;
        if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
        }
        local_5b0.ArrayNum = iVar19 + 1;
        *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
        *(FDynamicMeshAttributeSet **)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) =
             local_4f8;
        local_4f8 = (FDynamicMeshAttributeSet *)0x0;
      }
      if (local_478 != 0) {
        local_510 = (FDynamicMeshAttributeSet *)0x0;
        pFVar28 = FMemory::Malloc(0x140,0x40);
        pFVar29 = this_03;
        if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar28,2,true);
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::A]::<lambda_10>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)pFVar28,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp(832)"
                     ,Default,None,None);
          *(FDynamicMeshAttributeSet ***)&(pFVar28->MorphTargetAttributes).field_0x18 = &local_3d0;
          *(longlong **)&(pFVar28->MorphTargetAttributes).field_0x20 = &local_478;
          *(FDynamicMesh3 **)&(pFVar28->MorphTargetAttributes).field_0x28 = pFVar44;
          *(ForAnyElementType **)&(pFVar28->MorphTargetAttributes).field_0x30 = &local_570;
          *(FMeshDescriptionToDynamicMesh **)&(pFVar28->MorphTargetAttributes).field_0x38 =
               local_588;
          *(char **)&(pFVar28->MorphTargetAttributes).field_0x40 = local_590;
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::A]::<lambda_10>_>::
                _vftable_;
          pFVar29 = pFVar28;
        }
        if (local_510 != (FDynamicMeshAttributeSet *)0x0) {
          LOCK();
          piVar25 = (int *)((longlong)local_510 + 0x30);
          iVar19 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (*(code *)**(undefined8 **)local_510)(local_510,1);
          }
        }
        local_510 = pFVar29;
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar29,0x140);
        if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_510) &&
            ((FScriptContainerElement *)&local_510 <
             local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar19 = local_5b0.ArrayNum;
        if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
        }
        local_5b0.ArrayNum = iVar19 + 1;
        *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
        *(FDynamicMeshAttributeSet **)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) =
             local_510;
        local_510 = (FDynamicMeshAttributeSet *)0x0;
      }
      if (local_470 != (FScriptContainerElement *)0x0) {
        local_508.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
        pFVar29 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        TVar36.Reference = (FTaskBase *)this_03;
        if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar29,2,true);
          pFVar29->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::D]::<lambda_11>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)pFVar29,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp(861)"
                     ,Default,None,None);
          *(FDynamicMesh3 **)&(pFVar29->MorphTargetAttributes).field_0x18 = pFVar44;
          *(ForAnyElementType **)&(pFVar29->MorphTargetAttributes).field_0x20 = &local_570;
          *(FMeshDescriptionToDynamicMesh **)&(pFVar29->MorphTargetAttributes).field_0x28 =
               local_588;
          *(FScriptContainerElement ***)&(pFVar29->MorphTargetAttributes).field_0x30 = &local_470;
          pFVar29->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::D]::<lambda_11>_>::
                _vftable_;
          TVar36.Reference = (FTaskBase *)pFVar29;
        }
        if (local_508.Pimpl.Reference != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned_int> *)((longlong)local_508.Pimpl.Reference + 0x30);
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<unsigned_int>)0x1) {
            (*(code *)**(undefined8 **)local_508.Pimpl.Reference)(local_508.Pimpl.Reference,1);
          }
        }
        local_508.Pimpl.Reference =
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar36.Reference;
        UE::Tasks::Private::FTaskBase::TryLaunch(TVar36.Reference,0x100);
        if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_508) &&
            ((FScriptContainerElement *)&local_508 <
             local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar19 = local_5b0.ArrayNum;
        if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
        }
        local_5b0.ArrayNum = iVar19 + 1;
        *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
        *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
         (local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) = local_508.Pimpl.Reference;
        local_508.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
      }
      iVar19 = local_440.ArrayNum;
      uVar34 = (ulonglong)local_440.ArrayNum;
      pFVar38 = local_440.AllocatorInstance.Data + uVar34 * 0x10;
      FVar40.Data = local_440.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar34 != iVar19) {
          local_578 = 0;
          `TCheckedPointerIterator<FSkinWeightsAttribCopyInfo,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_578);
        }
        pFVar12 = local_588;
        if (FVar40.Data == pFVar38) break;
        uVar10 = *(undefined8 *)FVar40.Data;
        uVar11 = *(undefined8 *)(FVar40.Data + 8);
        uStack_150 = local_588;
        local_530 = (FDynamicMeshAttributeSet *)0x0;
        local_168 = uVar10;
        uStack_160 = uVar11;
        local_158 = pFVar44;
        pFVar28 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        pFVar29 = this_03;
        if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar28,2,true);
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::H]::<lambda_12>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)pFVar28,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp(879)"
                     ,Default,None,None);
          *(undefined8 *)&(pFVar28->MorphTargetAttributes).field_0x18 = uVar10;
          *(undefined8 *)&(pFVar28->MorphTargetAttributes).field_0x20 = uVar11;
          *(undefined4 *)&(pFVar28->MorphTargetAttributes).field_0x28 = (undefined4)local_158;
          *(undefined4 *)&(pFVar28->MorphTargetAttributes).field_0x2c = local_158._4_4_;
          *(undefined4 *)&(pFVar28->MorphTargetAttributes).field_0x30 = (undefined4)uStack_150;
          *(undefined4 *)&(pFVar28->MorphTargetAttributes).field_0x34 = uStack_150._4_4_;
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::H]::<lambda_12>_>::
                _vftable_;
          pFVar29 = pFVar28;
        }
        pFVar28 = local_530;
        if (local_530 != (FDynamicMeshAttributeSet *)0x0) {
          local_530 = (FDynamicMeshAttributeSet *)0x0;
          LOCK();
          piVar25 = (int *)((longlong)pFVar28 + 0x30);
          iVar17 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (*(code *)**(undefined8 **)pFVar28)(pFVar28,1);
          }
        }
        local_530 = pFVar29;
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar29,0x100);
        if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_530) &&
            ((FScriptContainerElement *)&local_530 <
             local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar17 = local_5b0.ArrayNum;
        if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
        }
        FVar40.Data = FVar40.Data + 0x10;
        local_5b0.ArrayNum = iVar17 + 1;
        *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar17 * 8) = 0;
        *(FDynamicMeshAttributeSet **)(local_5b0.AllocatorInstance.Data + (longlong)iVar17 * 8) =
             local_530;
        uVar34 = local_440._8_8_ & 0xffffffff;
        local_530 = (FDynamicMeshAttributeSet *)0x0;
      }
      iVar19 = local_450.ArrayNum;
      uVar34 = (ulonglong)local_450.ArrayNum;
      pFVar38 = local_450.AllocatorInstance.Data + uVar34 * 0x10;
      FVar40.Data = local_450.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar34 != iVar19) {
          local_577[0] = 0;
          `TCheckedPointerIterator<FMorphTargetAttribCopyInfo,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_577);
        }
        if (FVar40.Data == pFVar38) break;
        uVar10 = *(undefined8 *)FVar40.Data;
        uVar11 = *(undefined8 *)(FVar40.Data + 8);
        uStack_130 = pFVar12;
        local_528 = (FDynamicMeshAttributeSet *)0x0;
        local_148 = uVar10;
        uStack_140 = uVar11;
        local_138 = pFVar44;
        pFVar28 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        pFVar29 = this_03;
        if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar28,2,true);
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::L]::<lambda_13>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)pFVar28,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp(892)"
                     ,Default,None,None);
          *(undefined8 *)&(pFVar28->MorphTargetAttributes).field_0x18 = uVar10;
          *(undefined8 *)&(pFVar28->MorphTargetAttributes).field_0x20 = uVar11;
          *(undefined4 *)&(pFVar28->MorphTargetAttributes).field_0x28 = (undefined4)local_138;
          *(undefined4 *)&(pFVar28->MorphTargetAttributes).field_0x2c = local_138._4_4_;
          *(undefined4 *)&(pFVar28->MorphTargetAttributes).field_0x30 = (undefined4)uStack_130;
          *(undefined4 *)&(pFVar28->MorphTargetAttributes).field_0x34 = uStack_130._4_4_;
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::L]::<lambda_13>_>::
                _vftable_;
          pFVar29 = pFVar28;
        }
        pFVar28 = local_528;
        if (local_528 != (FDynamicMeshAttributeSet *)0x0) {
          local_528 = (FDynamicMeshAttributeSet *)0x0;
          LOCK();
          piVar25 = (int *)((longlong)pFVar28 + 0x30);
          iVar17 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (*(code *)**(undefined8 **)pFVar28)(pFVar28,1);
          }
        }
        local_528 = pFVar29;
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar29,0x100);
        if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_528) &&
            ((FScriptContainerElement *)&local_528 <
             local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar17 = local_5b0.ArrayNum;
        if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
        }
        FVar40.Data = FVar40.Data + 0x10;
        local_5b0.ArrayNum = iVar17 + 1;
        *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar17 * 8) = 0;
        *(FDynamicMeshAttributeSet **)(local_5b0.AllocatorInstance.Data + (longlong)iVar17 * 8) =
             local_528;
        uVar34 = local_450._8_8_ & 0xffffffff;
        local_528 = (FDynamicMeshAttributeSet *)0x0;
      }
      if (local_468 != (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0) {
        local_500 = (FDynamicMeshAttributeSet *)0x0;
        pFVar28 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        pFVar29 = this_03;
        if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar28,2,true);
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::O]::<lambda_14>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)pFVar28,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionToDynamicMesh.cpp(905)"
                     ,Default,None,None);
          *(undefined1 **)&(pFVar28->MorphTargetAttributes).field_0x18 = local_430;
          *(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> ***)
           &(pFVar28->MorphTargetAttributes).field_0x20 = &local_468;
          *(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> ***)
           &(pFVar28->MorphTargetAttributes).field_0x28 = &local_3c8;
          *(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> ***
           )&(pFVar28->MorphTargetAttributes).field_0x30 = &local_3a0;
          *(TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TVector4<float>_> ***)
           &(pFVar28->MorphTargetAttributes).field_0x38 = &local_410;
          pFVar28->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::O]::<lambda_14>_>::
                _vftable_;
          pFVar29 = pFVar28;
        }
        if (local_500 != (FDynamicMeshAttributeSet *)0x0) {
          LOCK();
          piVar25 = (int *)((longlong)local_500 + 0x30);
          iVar19 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (*(code *)**(undefined8 **)local_500)(local_500,1);
          }
        }
        local_500 = pFVar29;
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar29,0x100);
        if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_500) &&
            ((FScriptContainerElement *)&local_500 <
             local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar19 = local_5b0.ArrayNum;
        if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
        }
        local_5b0.ArrayNum = iVar19 + 1;
        *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
        *(FDynamicMeshAttributeSet **)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) =
             local_500;
        local_500 = (FDynamicMeshAttributeSet *)0x0;
      }
      pFVar12 = local_588;
      pFVar29 = this_03;
      if (0 < local_4a8.ArrayNum) {
        do {
          pTStack_2b0 = &local_4a8;
          pTStack_2a0 = &local_3b0;
          local_298 = pFVar12;
          local_520 = (FDynamicMeshAttributeSet *)0x0;
          local_2b8 = (int)pFVar29;
          local_2a8 = pFVar44;
          pFVar30 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                    ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                *)&UE::Tasks::Private::SmallTaskAllocator);
          pFVar28 = this_03;
          if (pFVar30 != (FDynamicMeshAttributeSet *)0x0) {
            UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar30,2,true);
            pFVar30->_padding_ =
                 (longlong)
                 &UE::Tasks::Private::
                  TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::`144'::<lambda_15>,void,void>
                  ::_vftable_;
            if (((*(ulonglong *)&(pFVar30->SkinWeightAttributes).field_0x40 & 0x20) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsCompleted()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                    ,0x1dd,L"State: %d"), bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (**(code **)(*(longlong *)&(pFVar30->SkinWeightAttributes).field_0x30 + 0x18))
                      (&(pFVar30->SkinWeightAttributes).field_0x30,
                       &(pFVar30->SkinWeightAttributes).field_0x8);
            *(FDynamicMeshAttributeSet **)&(pFVar30->SkinWeightAttributes).field_0x8 = pFVar30;
            *(undefined ***)&(pFVar30->SkinWeightAttributes).field_0x30 =
                 &
                 ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
            ;
            *(FDynamicMeshAttributeSet **)&(pFVar30->SkinWeightAttributes).field_0x10 = pFVar30;
            pFVar31 = LowLevelTasks::FTask::GetActiveTask();
            if (pFVar31 != (FTask *)0x0) {
              pFVar28 = *(FDynamicMeshAttributeSet **)&pFVar31->field_0x30;
            }
            *(FDynamicMeshAttributeSet **)&(pFVar30->SkinWeightAttributes).field_0x38 = pFVar28;
            *(undefined8 *)&(pFVar30->SkinWeightAttributes).field_0x40 = 0xc80000542f283000;
            *(undefined1 *)((atomic<unsigned_int> *)&(pFVar30->ColorLayer).Ptr + 1) = 0;
            UE::FInheritedContextBase::CaptureInheritedContext
                      ((FInheritedContextBase *)&pFVar30->_padding_);
            *(ulonglong *)&(pFVar30->MorphTargetAttributes).field_0x18 =
                 CONCAT44(uStack_2b4,local_2b8);
            *(TArray<TMeshAttributesRef<FTriangleID,int_const_>,TSizedDefaultAllocator<32>_> **)
             &(pFVar30->MorphTargetAttributes).field_0x20 = pTStack_2b0;
            *(FDynamicMesh3 **)&(pFVar30->MorphTargetAttributes).field_0x28 = local_2a8;
            *(TArray<FName,TSizedDefaultAllocator<32>_> **)
             &(pFVar30->MorphTargetAttributes).field_0x30 = pTStack_2a0;
            *(FMeshDescriptionToDynamicMesh **)&(pFVar30->MorphTargetAttributes).field_0x38 =
                 local_298;
            pFVar30->_padding_ =
                 (longlong)
                 &UE::Tasks::Private::
                  TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::`144'::<lambda_15>_>::
                  _vftable_;
            pFVar28 = pFVar30;
          }
          pFVar30 = local_520;
          if (local_520 != (FDynamicMeshAttributeSet *)0x0) {
            local_520 = (FDynamicMeshAttributeSet *)0x0;
            LOCK();
            piVar25 = (int *)((longlong)pFVar30 + 0x30);
            iVar19 = *piVar25;
            *piVar25 = *piVar25 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (*(code *)**(undefined8 **)pFVar30)(pFVar30,1);
            }
          }
          local_520 = pFVar28;
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar28,0x100);
          if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_520) &&
              ((FScriptContainerElement *)&local_520 <
               local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar19 = local_5b0.ArrayNum;
          if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
          }
          uVar16 = (int)pFVar29 + 1;
          local_5b0.ArrayNum = iVar19 + 1;
          *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
          *(FDynamicMeshAttributeSet **)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) =
               local_520;
          local_520 = (FDynamicMeshAttributeSet *)0x0;
          pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)uVar16;
        } while ((int)uVar16 < local_4a8.ArrayNum);
      }
      pFVar12 = local_588;
      pFVar29 = this_03;
      if (0 < local_4b8.ArrayNum) {
        do {
          pTStack_288 = &local_4b8;
          local_290 = pFVar12;
          local_280 = &local_3c0;
          local_518 = (FDynamicMeshAttributeSet *)0x0;
          pFStack_278 = pFVar44;
          local_270 = (int)pFVar29;
          pFVar30 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                    ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                *)&UE::Tasks::Private::SmallTaskAllocator);
          pFVar28 = this_03;
          if (pFVar30 != (FDynamicMeshAttributeSet *)0x0) {
            UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)pFVar30,2,true);
            pFVar30->_padding_ =
                 (longlong)
                 &UE::Tasks::Private::
                  TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::`146'::<lambda_16>,void,void>
                  ::_vftable_;
            if (((*(ulonglong *)&(pFVar30->SkinWeightAttributes).field_0x40 & 0x20) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsCompleted()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                    ,0x1dd,L"State: %d"), bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (**(code **)(*(longlong *)&(pFVar30->SkinWeightAttributes).field_0x30 + 0x18))
                      (&(pFVar30->SkinWeightAttributes).field_0x30,
                       &(pFVar30->SkinWeightAttributes).field_0x8);
            *(FDynamicMeshAttributeSet **)&(pFVar30->SkinWeightAttributes).field_0x8 = pFVar30;
            *(undefined ***)&(pFVar30->SkinWeightAttributes).field_0x30 =
                 &
                 ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
            ;
            *(FDynamicMeshAttributeSet **)&(pFVar30->SkinWeightAttributes).field_0x10 = pFVar30;
            pFVar31 = LowLevelTasks::FTask::GetActiveTask();
            if (pFVar31 != (FTask *)0x0) {
              pFVar28 = *(FDynamicMeshAttributeSet **)&pFVar31->field_0x30;
            }
            *(FDynamicMeshAttributeSet **)&(pFVar30->SkinWeightAttributes).field_0x38 = pFVar28;
            *(undefined8 *)&(pFVar30->SkinWeightAttributes).field_0x40 = 0xc80000542f286800;
            *(undefined1 *)((atomic<unsigned_int> *)&(pFVar30->ColorLayer).Ptr + 1) = 0;
            UE::FInheritedContextBase::CaptureInheritedContext
                      ((FInheritedContextBase *)&pFVar30->_padding_);
            *(FMeshDescriptionToDynamicMesh **)&(pFVar30->MorphTargetAttributes).field_0x18 =
                 local_290;
            *(TArray<TMeshAttributesRef<FVertexID,float_const_>,TSizedDefaultAllocator<32>_> **)
             &(pFVar30->MorphTargetAttributes).field_0x20 = pTStack_288;
            *(TArray<FName,TSizedDefaultAllocator<32>_> **)
             &(pFVar30->MorphTargetAttributes).field_0x28 = local_280;
            *(FDynamicMesh3 **)&(pFVar30->MorphTargetAttributes).field_0x30 = pFStack_278;
            *(ulonglong *)&(pFVar30->MorphTargetAttributes).field_0x38 =
                 CONCAT44(uStack_26c,local_270);
            pFVar30->_padding_ =
                 (longlong)
                 &UE::Tasks::Private::
                  TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::`146'::<lambda_16>_>::
                  _vftable_;
            pFVar28 = pFVar30;
          }
          pFVar30 = local_518;
          if (local_518 != (FDynamicMeshAttributeSet *)0x0) {
            local_518 = (FDynamicMeshAttributeSet *)0x0;
            LOCK();
            piVar25 = (int *)((longlong)pFVar30 + 0x30);
            iVar19 = *piVar25;
            *piVar25 = *piVar25 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (*(code *)**(undefined8 **)pFVar30)(pFVar30,1);
            }
          }
          local_518 = pFVar28;
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)pFVar28,0x100);
          if (((local_5b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_518) &&
              ((FScriptContainerElement *)&local_518 <
               local_5b0.AllocatorInstance.Data + (longlong)local_5b0.ArrayMax * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar19 = local_5b0.ArrayNum;
          if (local_5b0.ArrayNum == local_5b0.ArrayMax) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_5b0.AllocatorInstance,&local_5b0.ArrayMax);
          }
          uVar16 = (int)pFVar29 + 1;
          local_5b0.ArrayNum = iVar19 + 1;
          *(undefined8 *)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
          *(FDynamicMeshAttributeSet **)(local_5b0.AllocatorInstance.Data + (longlong)iVar19 * 8) =
               local_518;
          local_518 = (FDynamicMeshAttributeSet *)0x0;
          pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)uVar16;
        } while ((int)uVar16 < local_4b8.ArrayNum);
      }
      UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                (&local_5b0,(FTimespan)0x7fffffffffffffff);
      pFVar12 = local_588;
      if ((local_5a0 == '\0') && (local_588->bVIDsFromNonManifoldMeshDescriptionAttr != false)) {
        local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_460.ArrayNum = 0;
        local_460.ArrayMax = 0;
        TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_460,(local_588->VertIDMap).ArrayNum,Default);
        lVar43 = (longlong)(pFVar12->VertIDMap).ArrayNum;
        pFVar29 = this_03;
        pFVar28 = this_03;
        if (0 < lVar43) {
          do {
            uVar41 = (uint)pFVar29;
            uVar16 = uVar32;
            if ((int)uVar41 < (pFVar12->VertIDMap).ArrayNum) {
              uVar16 = ~uVar41 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar6 = *(undefined4 *)
                     ((pFVar12->VertIDMap).AllocatorInstance.Data + (longlong)pFVar28 * 4);
            uVar16 = uVar32;
            if ((int)uVar41 < local_460.ArrayNum) {
              uVar16 = ~uVar41 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(undefined4 *)(local_460.AllocatorInstance.Data + (longlong)pFVar28 * 4) = uVar6;
            pFVar28 = (FDynamicMeshAttributeSet *)((longlong)&pFVar28->_padding_ + 1);
            pFVar29 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar41 + 1);
          } while ((longlong)pFVar28 < lVar43);
        }
        pFVar44 = local_580;
        UE::Geometry::FNonManifoldMappingSupport::AttachNonManifoldVertexMappingData
                  (&local_460,local_580);
        if (local_460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_460.AllocatorInstance.Data);
        }
      }
      if (local_590[0] == '\0') {
        pFVar29 = (pFVar44->AttributeSet).Ptr;
        if (pFVar29 != (FDynamicMeshAttributeSet *)0x0) {
          this_03 = pFVar29;
        }
        UE::Geometry::FDynamicMeshAttributeSet::DisablePrimaryColors(this_03);
      }
      DestructItems<UE::Tasks::Private::FTaskHandle,int>
                ((FTaskHandle *)local_5b0.AllocatorInstance.Data,local_5b0.ArrayNum);
      if (local_5b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b0.AllocatorInstance.Data);
      }
    }
    pFVar12 = local_588;
    if (local_588->bCalculateMaps == false) {
      (local_588->TriIDMap).ArrayNum = 0;
      if ((local_588->TriIDMap).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(local_588->TriIDMap).AllocatorInstance,0,&(local_588->TriIDMap).ArrayMax)
        ;
      }
      (pFVar12->VertIDMap).ArrayNum = 0;
      if ((pFVar12->VertIDMap).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(pFVar12->VertIDMap).AllocatorInstance,0,&(pFVar12->VertIDMap).ArrayMax);
      }
    }
    FDateTime::Now();
    if (pFVar12->bPrintDebugMessages != false) {
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
    }
    if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.AllocatorInstance.Data);
    }
    if (local_4b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.AllocatorInstance.Data);
    }
    if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.AllocatorInstance.Data);
    }
    if (local_4a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.AllocatorInstance.Data);
    }
    if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.AllocatorInstance.Data);
    }
    if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.AllocatorInstance.Data);
    }
    if (local_570.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.Data);
    }
    if (local_550.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_550.Data);
    }
  }
  if (bVar45) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CopyTangents @ 1443d5980

void __thiscall
FMeshDescriptionToDynamicMesh::CopyTangents
          (FMeshDescriptionToDynamicMesh *this,FMeshDescription *param_1,FDynamicMesh3 *param_2,
          TMeshTangents<float> *param_3)

{
  bool bVar1;
  undefined1 local_res8 [8];
  
  if ((this->bCalculateMaps == false) &&
     (bVar1 = `FMeshDescriptionToDynamicMesh::CopyTangents'::__l3::<lambda_1>::operator()
                        (local_res8), !bVar1)) {
    return;
  }
  if (((this->TriIDMap).ArrayNum != (param_2->TriangleRefCounts).UsedCount) &&
     (bVar1 = `FMeshDescriptionToDynamicMesh::CopyTangents'::__l5::<lambda_2>::operator()
                        (local_res8), !bVar1)) {
    return;
  }
  CopyTangents_Internal<float>(param_1,param_2,param_3,&this->TriIDMap);
  return;
}

// CopyTangents @ 1443d5a00

void __thiscall
FMeshDescriptionToDynamicMesh::CopyTangents
          (FMeshDescriptionToDynamicMesh *this,FMeshDescription *param_1,FDynamicMesh3 *param_2,
          TMeshTangents<double> *param_3)

{
  bool bVar1;
  undefined1 local_res8 [8];
  
  if ((this->bCalculateMaps == false) &&
     (bVar1 = `FMeshDescriptionToDynamicMesh::CopyTangents'::__l3::<lambda_1>::operator()
                        (local_res8), !bVar1)) {
    return;
  }
  if (((this->TriIDMap).ArrayNum != (param_2->TriangleRefCounts).UsedCount) &&
     (bVar1 = `FMeshDescriptionToDynamicMesh::CopyTangents'::__l5::<lambda_2>::operator()
                        (local_res8), !bVar1)) {
    return;
  }
  CopyTangents_Internal<double>(param_1,param_2,param_3,&this->TriIDMap);
  return;
}

// operator() @ 1504bd880

bool __thiscall
`FMeshDescriptionToDynamicMesh::CopyTangents'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246690>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246690>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bd8c0

bool __thiscall
`FMeshDescriptionToDynamicMesh::CopyTangents'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246700>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246700>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bda80

bool __thiscall
`FMeshDescriptionToDynamicMesh::CopyTangents'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246692>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246692>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdac0

bool __thiscall
`FMeshDescriptionToDynamicMesh::CopyTangents'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246701>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246701>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

