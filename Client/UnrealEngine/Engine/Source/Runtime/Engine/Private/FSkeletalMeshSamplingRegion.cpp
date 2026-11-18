// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1485e39b0

UScriptStruct * __cdecl FSkeletalMeshSamplingRegion::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion,(UObject *)pUVar1,
                         L"SkeletalMeshSamplingRegion");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshSamplingRegion.OuterSingleton;
}

// FSkeletalMeshSamplingRegion @ 148622060

FSkeletalMeshSamplingRegion * __thiscall
FSkeletalMeshSamplingRegion::FSkeletalMeshSamplingRegion(FSkeletalMeshSamplingRegion *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->bSupportUniformlyDistributedSampling = 0;
  (this->MaterialFilters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialFilters).ArrayNum = 0;
  (this->MaterialFilters).ArrayMax = 0;
  (this->BoneFilters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneFilters).ArrayNum = 0;
  (this->BoneFilters).ArrayMax = 0;
  this->LODIndex = -1;
  return this;
}

// GetFilteredBones @ 14864ab40

void __thiscall
FSkeletalMeshSamplingRegion::GetFilteredBones
          (FSkeletalMeshSamplingRegion *this,FReferenceSkeleton *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  FName *pFVar10;
  FName *pFVar11;
  undefined1 local_res10 [8];
  uint local_48;
  uint local_44;
  FName *local_40;
  
  local_48 = 0;
  iVar4 = (param_1->FinalRefBoneInfo).ArrayNum;
  if (0 < iVar4) {
    do {
      uVar3 = 0;
      if ((int)local_48 < iVar4) {
        uVar3 = ~local_48 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this->BoneFilters).ArrayNum == 0) {
        pFVar7 = (param_2->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar7 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = param_2->ArrayNum;
        if (iVar4 == param_2->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar4 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_48;
      }
      local_44 = (this->BoneFilters).ArrayNum;
      uVar8 = (ulonglong)(int)local_44;
      pFVar11 = (FName *)(this->BoneFilters).AllocatorInstance.Data;
      local_40 = (FName *)((longlong)pFVar11 + uVar8 * 0xc);
      pFVar10 = local_40;
      while( true ) {
        if ((this->BoneFilters).ArrayNum != (int)uVar8) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FSkeletalMeshSamplingRegionBoneFilter,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar11 == pFVar10) break;
        if (((*pFVar11 == (FName)0x0) ||
            (puVar6 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                      *)&param_1->FinalNameToIndexMap,*pFVar11),
            puVar6 == (uint *)0x0)) || (uVar3 = *puVar6, uVar3 == 0xffffffff)) {
LAB_14864ae0c:
          uVar8 = (ulonglong)local_44;
          pFVar11 = (FName *)&pFVar11[1].Number;
        }
        else {
          uVar9 = pFVar11[1].ComparisonIndex.Value;
          if ((uVar9 & 2) == 0) {
            if (uVar3 != local_48) goto LAB_14864ae0c;
            if ((uVar9 & 1) == 0) {
              pFVar7 = (param_3->AllocatorInstance).Data;
              if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
                  ((FScriptContainerElement *)&local_48 < pFVar7 + (longlong)param_3->ArrayMax * 4))
                 && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar4 = param_3->ArrayNum;
              if (iVar4 == param_3->ArrayMax) {
                iVar4 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              pFVar11 = (FName *)&pFVar11[1].Number;
              param_3->ArrayNum = iVar4 + 1;
              *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_48;
              uVar8 = (ulonglong)local_44;
            }
            else {
              pFVar7 = (param_2->AllocatorInstance).Data;
              if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
                  ((FScriptContainerElement *)&local_48 < pFVar7 + (longlong)param_2->ArrayMax * 4))
                 && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar4 = param_2->ArrayNum;
              if (iVar4 == param_2->ArrayMax) {
                iVar4 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              pFVar11 = (FName *)&pFVar11[1].Number;
              param_2->ArrayNum = iVar4 + 1;
              *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_48;
              uVar8 = (ulonglong)local_44;
            }
          }
          else {
            pFVar10 = local_40;
            if ((int)local_48 < (int)uVar3) goto LAB_14864ae0c;
            iVar4 = 0;
            uVar9 = local_48;
            do {
              if (uVar9 == uVar3) {
                pFVar10 = local_40;
                if (iVar4 != -1) {
                  if ((pFVar11[1].ComparisonIndex.Value & 1) == 0) {
                    pFVar7 = (param_3->AllocatorInstance).Data;
                    if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
                        ((FScriptContainerElement *)&local_48 <
                         pFVar7 + (longlong)param_3->ArrayMax * 4)) &&
                       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar2)) {
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                    iVar4 = param_3->ArrayNum;
                    if (iVar4 == param_3->ArrayMax) {
                      iVar4 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
                    }
                    param_3->ArrayNum = iVar4 + 1;
                    pFVar7 = (param_3->AllocatorInstance).Data;
                  }
                  else {
                    pFVar7 = (param_2->AllocatorInstance).Data;
                    if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
                        ((FScriptContainerElement *)&local_48 <
                         pFVar7 + (longlong)param_2->ArrayMax * 4)) &&
                       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar2)) {
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                    iVar4 = param_2->ArrayNum;
                    if (iVar4 == param_2->ArrayMax) {
                      iVar4 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
                    }
                    param_2->ArrayNum = iVar4 + 1;
                    pFVar7 = (param_2->AllocatorInstance).Data;
                  }
                  *(uint *)(pFVar7 + (longlong)iVar4 * 4) = local_48;
                  pFVar10 = local_40;
                }
                goto LAB_14864ae0c;
              }
              uVar5 = 0;
              if ((int)uVar9 < (param_1->FinalRefBoneInfo).ArrayNum) {
                uVar5 = ~uVar9 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar4 = iVar4 + 1;
              uVar9 = *(uint *)((param_1->FinalRefBoneInfo).AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 0xc + 8);
            } while (uVar9 != 0xffffffff);
            pFVar11 = (FName *)&pFVar11[1].Number;
            uVar8 = (ulonglong)local_44;
            pFVar10 = local_40;
          }
        }
      }
      iVar4 = (param_1->FinalRefBoneInfo).ArrayNum;
      local_48 = local_48 + 1;
    } while ((int)local_48 < iVar4);
  }
  return;
}

// IsMaterialAllowed @ 148659ad0

bool __thiscall
FSkeletalMeshSamplingRegion::IsMaterialAllowed(FSkeletalMeshSamplingRegion *this,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->MaterialFilters).ArrayNum;
  if (iVar2 != 0) {
    pFVar3 = (FName *)(this->MaterialFilters).AllocatorInstance.Data;
    pFVar1 = pFVar3 + iVar2;
    while( true ) {
      if ((this->MaterialFilters).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSkeletalMeshSamplingRegionMaterialFilter,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return false;
      }
      if (*pFVar3 == param_1) break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return true;
}

