// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 56

// StaticClass @ 14cd97790

UClass * __cdecl UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshMaterialFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshMaterialFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshMaterialFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshMaterialFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshMaterialFunctions @ 14cda6120

UGeometryScriptLibrary_MeshMaterialFunctions * __thiscall
UGeometryScriptLibrary_MeshMaterialFunctions::UGeometryScriptLibrary_MeshMaterialFunctions
          (UGeometryScriptLibrary_MeshMaterialFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshMaterialFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshMaterialFunctions @ 14cda6150

UGeometryScriptLibrary_MeshMaterialFunctions * __thiscall
UGeometryScriptLibrary_MeshMaterialFunctions::UGeometryScriptLibrary_MeshMaterialFunctions
          (UGeometryScriptLibrary_MeshMaterialFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshMaterialFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshMaterialFunctions @ 14cda6b40

void __thiscall
UGeometryScriptLibrary_MeshMaterialFunctions::~UGeometryScriptLibrary_MeshMaterialFunctions
          (UGeometryScriptLibrary_MeshMaterialFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshMaterialFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdaecc0

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
          (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar5 = 0;
  if ((uVar7 != 0) &&
     (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar5 = 0,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar7) {
      do {
        lVar3 = (ulonglong)(uVar4 & 0x1ff) * 2;
        lVar2 = *(longlong *)(pFVar1 + (ulonglong)(uVar4 >> 9) * 8);
        if ((*(short *)(lVar3 + lVar2) != 0) && (uVar5 = uVar4, *(short *)(lVar3 + lVar2) != -1))
        break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
      } while ((int)uVar4 < (int)uVar7);
    }
  }
joined_r0x00014cdaed57:
  do {
    if (uVar5 == uVar7) {
      return;
    }
    while( true ) {
      uVar6 = uVar5 & 0x1ff;
      uVar4 = uVar5 >> 9;
      uVar5 = uVar5 + 1;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)&param_2->field_0x20 + (ulonglong)uVar4 * 8) +
       (ulonglong)uVar6 * 4) = *(undefined4 *)this;
      if ((int)uVar7 <= (int)uVar5) break;
      pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar2 = (ulonglong)(uVar5 >> 9) * 8;
        lVar3 = (ulonglong)(uVar5 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(pFVar1 + lVar2)) != 0) &&
           (*(short *)(lVar3 + *(longlong *)(pFVar1 + lVar2)) != -1)) break;
        uVar5 = uVar5 + 1;
        if ((int)uVar7 <= (int)uVar5) goto joined_r0x00014cdaed57;
      }
    }
  } while( true );
}

// operator() @ 14cdb21b0

int __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_28 [4];
  
  uVar6 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
  uVar8 = 0;
  uVar9 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (0 < (int)(uVar6 * 0x200 + uVar9)) {
    do {
      if (((int)uVar8 < 0) || ((int)(uVar6 * 0x200 + uVar9) <= (int)uVar8)) {
LAB_14cdb2241:
        local_28[0] = 0xffffffff;
      }
      else {
        lVar2 = (ulonglong)(uVar8 >> 9) * 8;
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + lVar2) +
                                        (ulonglong)(uVar8 & 0x1ff) * 2) - 1U)) goto LAB_14cdb2241;
        local_28[0] = *(undefined4 *)
                       (*(longlong *)(*(longlong *)&param_2->field_0x20 + lVar2) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
      }
      pFVar3 = *(ForAnyElementType **)this;
      if (((pFVar3->Data <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar7 + 1;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(pFVar3->Data + (longlong)iVar7 * 4) = local_28[0];
      uVar6 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
      uVar9 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    } while ((int)uVar8 < (int)(uVar6 * 0x200 + uVar9));
  }
  return 0;
}

// operator() @ 14cdb3240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  undefined4 uVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar9 = *(longlong *)this;
  if (*(longlong *)(lVar9 + 8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  this_00 = *(TArray<int,TSizedDefaultAllocator<32>_> **)(lVar9 + 8);
  lVar9 = *(longlong *)((longlong)this + 0x18);
  if (*(longlong *)(lVar9 + 8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,*(int *)(*(longlong *)(lVar9 + 8) + 8),Default);
  uVar8 = 0;
  lVar9 = 0;
  while( true ) {
    lVar2 = *(longlong *)((longlong)this + 0x18);
    if (*(longlong *)(lVar2 + 8) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    if (*(int *)(*(longlong *)(lVar2 + 8) + 8) <= (int)uVar8) break;
    lVar2 = *(longlong *)((longlong)this + 0x18);
    if (*(longlong *)(lVar2 + 8) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    plVar3 = *(longlong **)(lVar2 + 8);
    uVar10 = ~uVar8 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar8 < (int)plVar3[1]) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    uVar7 = *(uint *)(lVar9 + *plVar3);
    if ((((int)uVar7 < 0) ||
        ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar7)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
                                    (ulonglong)(uVar7 & 0x1ff) * 2) - 1U))) {
      **(undefined1 **)((longlong)this + 0x10) = 0;
      uVar7 = 0;
      if ((int)uVar8 < this_00->ArrayNum) {
        uVar7 = uVar10;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)((this_00->AllocatorInstance).Data + lVar9) = 0xffffffff;
      lVar9 = lVar9 + 4;
    }
    else {
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)&param_2->field_0x20 + (ulonglong)(uVar7 >> 9) * 8) +
               (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar7 = 0;
      if ((int)uVar8 < this_00->ArrayNum) {
        uVar7 = uVar10;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)((this_00->AllocatorInstance).Data + lVar9) = uVar1;
      lVar9 = lVar9 + 4;
    }
  }
  return 0;
}

// operator() @ 14cdb37b0

int __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar6 = 0;
  uVar5 = 0;
  uVar7 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
          (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar7 != 0) &&
     (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar5 = 1;
    bVar8 = uVar7 == 1;
    if ((int)uVar7 < 2) goto LAB_14cdb384a;
    do {
      lVar1 = (ulonglong)(uVar5 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar3 + (ulonglong)(uVar5 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar3 + (ulonglong)(uVar5 >> 9) * 8)) != -1)) break;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar7);
  }
  bVar8 = uVar5 == uVar7;
LAB_14cdb384a:
  if (!bVar8) {
LAB_14cdb3860:
    do {
      iVar2 = *(int *)(*(longlong *)
                        (*(longlong *)&param_2->field_0x20 + (ulonglong)(uVar5 >> 9) * 8) +
                      (ulonglong)(uVar5 & 0x1ff) * 4);
      if (iVar2 < iVar6) {
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
      uVar5 = uVar5 + 1;
      if ((int)uVar5 < (int)uVar7) {
        pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar1 = (ulonglong)(uVar5 >> 9) * 8;
          lVar4 = (ulonglong)(uVar5 & 0x1ff) * 2;
          if ((*(short *)(lVar4 + *(longlong *)(pFVar3 + lVar1)) != 0) &&
             (*(short *)(lVar4 + *(longlong *)(pFVar3 + lVar1)) != -1)) goto LAB_14cdb3860;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar7);
      }
    } while (uVar5 != uVar7);
  }
  return iVar6;
}

// operator() @ 14cdb3ce0

int __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = **(uint **)((longlong)this + 8);
  if ((((int)uVar1 < 0) ||
      ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)(uVar1 >> 9) * 8) +
                                  (ulonglong)(uVar1 & 0x1ff) * 2) - 1U))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  **(undefined1 **)this = uVar2;
  if (**(char **)this != '\0') {
    return *(int *)(*(longlong *)
                     (*(longlong *)&param_2->field_0x20 +
                     (ulonglong)(**(uint **)((longlong)this + 8) >> 9) * 8) +
                   (ulonglong)(**(uint **)((longlong)this + 8) & 0x1ff) * 4);
  }
  return 0;
}

// operator() @ 14cdb3d70

int __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_18 [4];
  
  uVar7 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
  uVar8 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_18[0] = 0;
  if (0 < (int)(uVar7 * 0x200 + uVar8)) {
    do {
      if ((((int)local_18[0] < 0) || ((int)(uVar7 * 0x200 + uVar8) <= (int)local_18[0])) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(local_18[0] >> 9) * 8)
                                      + (ulonglong)(local_18[0] & 0x1ff) * 2) - 1U))) {
        **(undefined1 **)this = 0;
      }
      else if (*(int *)(*(longlong *)
                         (*(longlong *)&param_2->field_0x20 + (ulonglong)(local_18[0] >> 9) * 8) +
                       (ulonglong)(local_18[0] & 0x1ff) * 4) == **(int **)((longlong)this + 8)) {
        lVar2 = *(longlong *)((longlong)this + 0x10);
        if ((*(longlong *)(lVar2 + 8) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar3 = *(ForAnyElementType **)(lVar2 + 8);
        if (((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(uint *)(pFVar3->Data + (longlong)iVar6 * 4) = local_18[0];
      }
      uVar7 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
      local_18[0] = local_18[0] + 1;
      uVar8 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    } while ((int)local_18[0] < (int)(uVar7 * 0x200 + uVar8));
  }
  return 0;
}

// operator() @ 14cdb5ca0

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::RemapAndCombineMaterials'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  FText local_38;
  
  uVar11 = 0;
  uVar12 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar12 != 0) &&
     (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar11 = 1;
    uVar10 = 1;
    if ((int)uVar12 < 2) goto joined_r0x00014cdb5d37;
    do {
      lVar1 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar3 + (uVar11 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar3 + (uVar11 >> 9) * 8)) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar12);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014cdb5d37:
  do {
    if (uVar10 == uVar12) {
      return;
    }
    while( true ) {
      lVar1 = (uVar11 >> 9) * 8;
      lVar2 = (ulonglong)((uint)uVar11 & 0x1ff) * 4;
      uVar10 = *(uint *)(lVar2 + *(longlong *)(lVar1 + *(longlong *)&param_2->field_0x20));
      iVar9 = **(int **)this;
      if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(*(longlong *)((longlong)this + 8) + 8))) {
        if (**(char **)((longlong)this + 0x10) == '\0') {
          iVar9 = *(int *)(*(longlong *)((longlong)this + 0x18) + 8) + uVar10;
        }
        else {
          plVar4 = *(longlong **)((longlong)this + 0x20);
          uVar7 = 0;
          if ((int)uVar10 < (int)plVar4[1]) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = *(int *)(*plVar4 + (longlong)(int)uVar10 * 4);
        }
      }
      if (iVar9 < 0) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_38,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                            L"RemapAndCombineMaterials_InvalidMaterial",
                            L"RemapAndCombineMaterials: Invalid material ID in mesh was not a valid index into TargetMeshMaterials, skipping"
                           );
        UE::Geometry::AppendWarning
                  ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x28),InvalidInputs,
                   pFVar8);
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
      }
      else {
        *(int *)(lVar2 + *(longlong *)(lVar1 + *(longlong *)&param_2->field_0x20)) = iVar9;
      }
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar12 <= (int)uVar10) break;
      while( true ) {
        lVar2 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        lVar1 = *(longlong *)
                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar11 >> 9) * 8);
        if ((*(short *)(lVar2 + lVar1) != 0) && (*(short *)(lVar2 + lVar1) != -1)) break;
        uVar10 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        if ((int)uVar12 <= (int)uVar10) goto joined_r0x00014cdb5d37;
      }
    }
  } while( true );
}

// operator() @ 14cdb5ed0

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
          (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar5 = 0;
  if ((uVar6 != 0) &&
     (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar5 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar6) {
      do {
        lVar1 = (ulonglong)(uVar4 & 0x1ff) * 2;
        if ((*(short *)(lVar1 + *(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8)) != 0) &&
           (uVar5 = uVar4,
           *(short *)(lVar1 + *(longlong *)(pFVar2 + (ulonglong)(uVar4 >> 9) * 8)) != -1)) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
      } while ((int)uVar4 < (int)uVar6);
    }
  }
joined_r0x00014cdb5f6b:
  do {
    if (uVar5 == uVar6) {
      return;
    }
    while( true ) {
      lVar1 = (ulonglong)(uVar5 & 0x1ff) * 4;
      if (*(int *)(lVar1 + *(longlong *)
                            (*(longlong *)&param_2->field_0x20 + (ulonglong)(uVar5 >> 9) * 8)) ==
          **(int **)this) {
        *(undefined4 *)
         (lVar1 + *(longlong *)(*(longlong *)&param_2->field_0x20 + (ulonglong)(uVar5 >> 9) * 8)) =
             **(undefined4 **)((longlong)this + 8);
      }
      uVar5 = uVar5 + 1;
      if ((int)uVar6 <= (int)uVar5) break;
      pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = (ulonglong)(uVar5 >> 9) * 8;
        lVar3 = (ulonglong)(uVar5 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(pFVar2 + lVar1)) != 0) &&
           (*(short *)(lVar3 + *(longlong *)(pFVar2 + lVar1)) != -1)) break;
        uVar5 = uVar5 + 1;
        if ((int)uVar6 <= (int)uVar5) goto joined_r0x00014cdb5f6b;
      }
    }
  } while( true );
}

// operator() @ 14cdb6020

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::RemapToNewMaterialIDsByMaterial'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,TDynamicMeshScalarTriangleAttribute<int> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FText *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  FText local_38;
  
  uVar10 = 0;
  uVar11 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if (((uVar11 != 0) &&
      (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uVar10 = 1, 1 < (int)uVar11)) {
    do {
      lVar1 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar4 + (uVar10 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar4 + (uVar10 >> 9) * 8)) != -1)) break;
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar11);
  }
  uVar9 = (uint)uVar10;
joined_r0x00014cdb60bf:
  do {
    if (uVar9 == uVar11) {
      return;
    }
    while( true ) {
      lVar1 = (uVar10 >> 9) * 8;
      lVar2 = (ulonglong)((uint)uVar10 & 0x1ff) * 4;
      iVar3 = *(int *)(lVar2 + *(longlong *)(lVar1 + *(longlong *)&param_2->field_0x20));
      if ((iVar3 < 0) || (plVar5 = *(longlong **)this, (int)plVar5[1] <= iVar3)) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_38,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                            L"RemapToNewMaterialIDsByMaterial_InvalidMaterial",
                            L"RemapToNewMaterialIDsByMaterial: Invalid material ID in mesh was not a valid index into FromMaterialList, skipping"
                           );
        UE::Geometry::AppendWarning
                  ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,
                   pFVar8);
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
      }
      else {
        if ((iVar3 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(lVar2 + *(longlong *)(lVar1 + *(longlong *)&param_2->field_0x20)) =
             *(undefined4 *)(*plVar5 + (longlong)iVar3 * 4);
      }
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar11 <= (int)uVar9) break;
      pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = (uVar10 >> 9) * 8;
        lVar2 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
        if ((*(short *)(lVar2 + *(longlong *)(pFVar4 + lVar1)) != 0) &&
           (*(short *)(lVar2 + *(longlong *)(pFVar4 + lVar1)) != -1)) break;
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        if ((int)uVar11 <= (int)uVar9) goto joined_r0x00014cdb60bf;
      }
    }
  } while( true );
}

// operator() @ 14cdb64e0

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  short sVar1;
  longlong *plVar2;
  FDynamicMeshAttributeSet *pFVar3;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  FText *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FText local_28;
  
  lVar15 = *(longlong *)this;
  if ((*(longlong *)(lVar15 + 8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
  plVar2 = *(longlong **)(lVar15 + 8);
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((int)plVar2[1] < (int)(uVar13 * 0x200 + uVar14)) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"SetAllTriangleMaterialIDs_IncorrectCount",
                        L"SetAllTriangleMaterialIDs: size of provided TriangleMaterialIDList is smaller than MaxTriangleID of Mesh"
                       );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar9);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
      UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
      uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
    }
    pFVar3 = (param_1->AttributeSet).Ptr;
    pFVar10 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar10 = pFVar3;
    }
    if ((pFVar10->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar3);
      uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
    }
    pFVar3 = (param_1->AttributeSet).Ptr;
    pFVar10 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar10 = pFVar3;
    }
    pTVar4 = (pFVar10->MaterialIDAttrib).Ptr;
    uVar14 = uVar13 * 0x200 + uVar14;
    uVar13 = 0;
    if ((uVar14 != 0) &&
       (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
       0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
      uVar12 = 1;
      uVar13 = 1;
      if (1 < (int)uVar14) {
        do {
          sVar1 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                            (ulonglong)(uVar12 & 0x1ff) * 2);
          if ((sVar1 != 0) && (uVar13 = uVar12, sVar1 != -1)) break;
          uVar12 = uVar12 + 1;
          uVar13 = uVar12;
        } while ((int)uVar12 < (int)uVar14);
      }
    }
joined_r0x00014cdb6659:
    if (uVar13 != uVar14) {
      while( true ) {
        uVar12 = 0;
        if ((int)uVar13 < (int)plVar2[1]) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar15 = (longlong)(int)uVar13;
        uVar12 = uVar13 >> 9;
        uVar11 = uVar13 & 0x1ff;
        uVar13 = uVar13 + 1;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)&pTVar4->field_0x20 + (ulonglong)uVar12 * 8) +
         (ulonglong)uVar11 * 4) = *(undefined4 *)(*plVar2 + lVar15 * 4);
        if ((int)uVar14 <= (int)uVar13) break;
        pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          lVar15 = (ulonglong)(uVar13 >> 9) * 8;
          lVar7 = (ulonglong)(uVar13 & 0x1ff) * 2;
          if ((*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar15)) != 0) &&
             (*(short *)(lVar7 + *(longlong *)(pFVar5 + lVar15)) != -1)) break;
          uVar13 = uVar13 + 1;
          if ((int)uVar14 <= (int)uVar13) goto joined_r0x00014cdb6659;
        }
      }
      goto joined_r0x00014cdb6659;
    }
  }
  return;
}

// operator() @ 14cdb6880

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  FDynamicMeshAttributeSet *pFVar2;
  TDynamicMeshScalarTriangleAttribute<int> *local_res8;
  TDynamicMeshScalarTriangleAttribute<int> **local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 **local_10;
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar1;
  }
  if ((pFVar2->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar1);
  }
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar1;
  }
  local_res8 = (pFVar2->MaterialIDAttrib).Ptr;
  local_28 = &local_res8;
  local_20 = *(undefined8 *)((longlong)this + 8);
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,false);
  return;
}

// operator() @ 14cdb6930

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  longlong lVar5;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  FDynamicMeshAttributeSet *pFVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar10 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar10 = pFVar4;
  }
  if ((pFVar10->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar4);
  }
  pFVar4 = (param_1->AttributeSet).Ptr;
  lVar5 = *(longlong *)this;
  pFVar10 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar10 = pFVar4;
  }
  pTVar6 = (pFVar10->MaterialIDAttrib).Ptr;
  if ((*(longlong *)(lVar5 + 8) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar7 = *(undefined8 **)(lVar5 + 8);
  puVar11 = (uint *)*puVar7;
  iVar2 = *(int *)(puVar7 + 1);
  puVar1 = puVar11 + iVar2;
  while( true ) {
    if (*(int *)(puVar7 + 1) != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar11 == puVar1) {
      return;
    }
    uVar3 = *puVar11;
    if (((int)uVar3 < 0) ||
       ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar3)) break;
    lVar5 = (ulonglong)(uVar3 >> 9) * 8;
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + lVar5) +
                                    (ulonglong)(uVar3 & 0x1ff) * 2) - 1U)) break;
    puVar11 = puVar11 + 1;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)&pTVar6->field_0x20 + lVar5) + (ulonglong)(uVar3 & 0x1ff) * 4) =
         **(undefined4 **)((longlong)this + 0x10);
  }
  **(undefined1 **)((longlong)this + 8) = 1;
  return;
}

// operator() @ 14cdb7940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  short sVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 *puVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FText *pFVar13;
  uint uVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  int *piVar17;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar23;
  int *piVar24;
  undefined1 auStackY_178 [32];
  int local_128 [2];
  int *local_120;
  TArray<bool,TSizedDefaultAllocator<32>_> local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  int local_f8 [2];
  undefined8 *local_f0;
  TDynamicMeshScalarTriangleAttribute<int> *local_e8;
  TPairInitializer<UMaterialInterface_*_const_&,int_const_&> local_e0;
  int **local_d0;
  int *local_c8;
  FText local_c0;
  FText local_b0;
  TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  int *piVar22;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar3 = (param_1->AttributeSet).Ptr;
  local_f0 = this;
  local_e0.Value = (int *)param_1;
  if ((pFVar3 == (FDynamicMeshAttributeSet *)0x0) ||
     (pTVar18 = (pFVar3->MaterialIDAttrib).Ptr, local_e8 = pTVar18,
     pTVar18 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_b0,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                         L"CompactMaterialIDs_NoMaterialID",
                         L"CompactMaterialIDs: MaterialID Attribute is not enabled");
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar13);
    if (local_b0.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    return;
  }
  uVar20 = 0;
  uVar14 = 0x80000001;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  uVar21 = 0x7fffffff;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_118,*(int *)(*(longlong *)((longlong)this + 8) + 8),Default);
  uVar23 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar23 == 0) ||
     (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar4 - 1U) < 0xfffe)) {
LAB_14cdb7a41:
    uVar19 = (uint)uVar20;
  }
  else {
    uVar20 = 1;
    uVar19 = 1;
    if (1 < (int)uVar23) {
      do {
        lVar1 = (ulonglong)((uint)uVar20 & 0x1ff) * 2;
        lVar5 = *(longlong *)(pFVar4 + (uVar20 >> 9) * 8);
        if ((*(short *)(lVar1 + lVar5) != 0) && (*(short *)(lVar1 + lVar5) != -1)) break;
        uVar19 = (uint)uVar20 + 1;
        uVar20 = (ulonglong)uVar19;
      } while ((int)uVar19 < (int)uVar23);
      goto LAB_14cdb7a41;
    }
  }
  if (uVar19 == uVar23) {
LAB_14cdb7b7c:
    if (local_118.ArrayNum <= (int)uVar14) goto LAB_14cdb7b83;
  }
  else {
LAB_14cdb7a50:
    do {
      uVar19 = *(uint *)(*(longlong *)(*(longlong *)&pTVar18->field_0x20 + (uVar20 >> 9) * 8) +
                        (ulonglong)((uint)uVar20 & 0x1ff) * 4);
      if ((int)uVar19 < 0) {
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_c0,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                             L"CompactMaterialIDs_InvalidMaterialID",
                             L"CompactMaterialIDs: Invalid MaterialIDs found, unsafe to Compact");
        UE::Geometry::AppendError(*(UGeometryScriptDebug **)*local_f0,InvalidInputs,pFVar13);
        if (local_c0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
        }
        goto LAB_14cdb815f;
      }
      if (local_118.ArrayNum < (int)uVar19) {
        iVar16 = (uVar19 - local_118.ArrayNum) + 1;
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar16,&local_118.AllocatorInstance,&local_118.ArrayNum,
                            &local_118.ArrayMax);
        memset(local_118.AllocatorInstance.Data + iVar11,0,(longlong)iVar16);
      }
      uVar12 = 0;
      if ((int)uVar19 < local_118.ArrayNum) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)uVar19 < (int)uVar21) {
        uVar21 = uVar19;
      }
      if ((int)uVar14 < (int)uVar19) {
        uVar14 = uVar19;
      }
      local_118.AllocatorInstance.Data[(int)uVar19] = (FScriptContainerElement)0x1;
      uVar19 = (uint)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      pTVar18 = local_e8;
      if ((int)uVar19 < (int)uVar23) {
        pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          lVar5 = (uVar20 >> 9) * 8;
          lVar1 = (ulonglong)((uint)uVar20 & 0x1ff) * 2;
          if ((*(short *)(lVar1 + *(longlong *)(pFVar4 + lVar5)) != 0) &&
             (*(short *)(lVar1 + *(longlong *)(pFVar4 + lVar5)) != -1)) goto LAB_14cdb7a50;
          uVar19 = (uint)uVar20 + 1;
          uVar20 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)uVar23);
      }
    } while (uVar19 != uVar23);
    if (-1 < (int)uVar21) goto LAB_14cdb7b7c;
LAB_14cdb7b83:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("OldValueRange.Min >= 0 && OldValueRange.Max < MaterialUsed.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshMaterialFunctions.cpp"
                        ,0x2fa,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  puVar9 = local_f0;
  uVar21 = 0;
  piVar22 = (int *)0x0;
  pFVar6 = (ForAnyElementType *)local_f0[2];
  iVar11 = *(int *)((longlong)&pFVar6[1].Data + 4);
  *(undefined4 *)&pFVar6[1].Data = 0;
  if (iVar11 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar6,0,(int *)((longlong)&pFVar6[1].Data + 4));
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  local_f8[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_108,local_f8,*(int *)(puVar9[1] + 8));
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  piVar17 = piVar22;
  piVar24 = piVar22;
  iVar11 = local_118.ArrayNum;
  if (0 < local_118.ArrayNum) {
    do {
      uVar23 = (uint)piVar17;
      uVar14 = uVar21;
      if ((int)uVar23 < iVar11) {
        uVar14 = ~uVar23 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = local_118.ArrayNum;
      }
      if (*((longlong)piVar24 + local_118.AllocatorInstance.Data) != (FScriptContainerElement)0x0) {
        plVar7 = (longlong *)puVar9[1];
        piVar17 = piVar22;
        if ((int)uVar23 < (int)plVar7[1]) {
          if (((int)uVar23 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          piVar17 = *(int **)(*plVar7 + (longlong)piVar24 * 8);
        }
        local_128[0] = -1;
        local_120 = piVar17;
        if (*(char *)puVar9[3] == '\0') {
          pFVar6 = (ForAnyElementType *)puVar9[2];
          if (((pFVar6->Data <= (FScriptContainerElement *)&local_120) &&
              ((FScriptContainerElement *)&local_120 <
               pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = *(int *)&pFVar6[1].Data;
          piVar17 = (int *)((longlong)&pFVar6[1].Data + 4);
          if (iVar11 == *piVar17) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar6,piVar17);
          }
          *(int *)&pFVar6[1].Data = iVar11 + 1;
          *(int **)(pFVar6->Data + (longlong)iVar11 * 8) = local_120;
          local_128[0] = iVar11;
        }
        else {
          uVar14 = ((uint)((ulonglong)piVar17 >> 0x14) & 0xffff ^ (uint)((ulonglong)piVar17 >> 4)) *
                   -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar15 = local_98.Hash.SecondaryData;
            }
            iVar11 = *(int *)((longlong)FVar15 +
                             (ulonglong)(local_98.HashSize - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
            while (iVar11 != -1) {
              lVar5 = local_98.Elements._0_8_ + (longlong)iVar11 * 0x18;
              if (*(int **)(local_98.Elements._0_8_ + (longlong)iVar11 * 0x18) == piVar17) {
                piVar17 = (int *)(lVar5 + 8);
                if (lVar5 == 0) {
                  piVar17 = piVar22;
                }
                if (piVar17 != (int *)0x0) {
                  local_128[0] = *piVar17;
                  goto LAB_14cdb7f6e;
                }
                break;
              }
              iVar11 = *(int *)(lVar5 + 0x10);
            }
          }
          pFVar6 = (ForAnyElementType *)puVar9[2];
          if (((pFVar6->Data <= (FScriptContainerElement *)&local_120) &&
              ((FScriptContainerElement *)&local_120 <
               pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = *(int *)&pFVar6[1].Data;
          piVar17 = (int *)((longlong)&pFVar6[1].Data + 4);
          if (iVar11 == *piVar17) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar6,piVar17);
          }
          *(int *)&pFVar6[1].Data = iVar11 + 1;
          *(int **)(pFVar6->Data + (longlong)iVar11 * 8) = local_120;
          local_d0 = &local_120;
          local_c8 = local_128;
          local_128[0] = iVar11;
          TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UMaterialInterface_*_const_&,int_const_&>_>
                    (&local_98,&local_e0,(bool *)&local_d0);
        }
LAB_14cdb7f6e:
        iVar11 = local_128[0];
        uVar14 = uVar21;
        if ((int)uVar23 < local_108.ArrayNum) {
          uVar14 = ~uVar23 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(int *)(local_108.AllocatorInstance.Data + (longlong)piVar24 * 4) = iVar11;
        iVar11 = local_118.ArrayNum;
      }
      piVar17 = (int *)(ulonglong)(uVar23 + 1);
      param_1 = (FDynamicMesh3 *)local_e0.Value;
      piVar24 = (int *)((longlong)piVar24 + 1);
    } while ((int)(uVar23 + 1) < iVar11);
  }
  pTVar18 = local_e8;
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar14 != 0) &&
     (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar21 = 1;
    bVar10 = uVar14 == 1;
    if ((int)uVar14 < 2) goto LAB_14cdb8039;
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar21 >> 9) * 8) +
                        (ulonglong)(uVar21 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (int)uVar14);
  }
  bVar10 = uVar21 == uVar14;
LAB_14cdb8039:
  if (!bVar10) {
    iVar11 = local_108.ArrayNum;
LAB_14cdb8050:
    do {
      lVar5 = (ulonglong)(uVar21 >> 9) * 8;
      lVar1 = (ulonglong)(uVar21 & 0x1ff) * 4;
      uVar23 = *(uint *)(lVar1 + *(longlong *)(*(longlong *)&pTVar18->field_0x20 + lVar5));
      if ((-1 < (int)uVar23) && ((int)uVar23 < iVar11)) {
        uVar19 = 0;
        if ((int)uVar23 < iVar11) {
          uVar19 = ~uVar23 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)(lVar1 + *(longlong *)(*(longlong *)&pTVar18->field_0x20 + lVar5)) =
             *(undefined4 *)(local_108.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
        iVar11 = local_108.ArrayNum;
      }
      uVar21 = uVar21 + 1;
      if ((int)uVar21 < (int)uVar14) {
        do {
          lVar1 = (ulonglong)(uVar21 & 0x1ff) * 2;
          lVar5 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar21 >> 9) * 8);
          if ((*(short *)(lVar1 + lVar5) != 0) && (*(short *)(lVar1 + lVar5) != -1))
          goto LAB_14cdb8050;
          uVar21 = uVar21 + 1;
        } while ((int)uVar21 < (int)uVar14);
      }
    } while (uVar21 != uVar14);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
LAB_14cdb815f:
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cdb82a0

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID'::__l5::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  FDynamicMeshAttributeSet *pFVar2;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  EMeshResult EVar9;
  FText *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  uint local_58 [2];
  ForAnyElementType local_50;
  undefined8 local_48;
  FText local_40;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if ((pFVar2 == (FDynamicMeshAttributeSet *)0x0) ||
     (pTVar3 = (pFVar2->MaterialIDAttrib).Ptr,
     pTVar3 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_40,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                         L"DeleteTrianglesByMaterialID_NoMaterialID",
                         L"DeleteTrianglesByMaterialID: MaterialID Attribute is not enabled");
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar10);
    if (local_40.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    return;
  }
  FVar14.Data = (FScriptContainerElement *)0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  uVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  pFVar12 = FVar14.Data;
  pFVar15 = FVar14.Data;
  if ((uVar13 != 0) &&
     (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar12 = (FScriptContainerElement *)0x0, 0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    pFVar12 = (FScriptContainerElement *)&DAT_00000001;
    uVar11 = 1;
    if ((int)uVar13 < 2) goto joined_r0x00014cdb8376;
    do {
      lVar1 = (ulonglong)((uint)pFVar12 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + *(longlong *)(pFVar4 + ((ulonglong)pFVar12 >> 9) * 8)) != 0) &&
         (*(short *)(lVar1 + *(longlong *)(pFVar4 + ((ulonglong)pFVar12 >> 9) * 8)) != -1)) break;
      uVar11 = (uint)pFVar12 + 1;
      pFVar12 = (FScriptContainerElement *)(ulonglong)uVar11;
    } while ((int)uVar11 < (int)uVar13);
  }
  uVar11 = (uint)pFVar12;
joined_r0x00014cdb8376:
  do {
    if (uVar11 == uVar13) {
      iVar8 = (int)pFVar15;
      pFVar12 = FVar14.Data + (longlong)iVar8 * 4;
      while( true ) {
        if ((int)pFVar15 != iVar8) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar14.Data == pFVar12) break;
        EVar9 = UE::Geometry::FDynamicMesh3::RemoveTriangle(param_1,*(uint *)FVar14.Data,true,false)
        ;
        if (EVar9 == Ok) {
          **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
        }
        pFVar15 = (FScriptContainerElement *)(local_48 & 0xffffffff);
        FVar14.Data = FVar14.Data + 4;
      }
      if (local_50.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_50.Data);
      return;
    }
    while( true ) {
      uVar11 = (uint)pFVar12;
      local_58[0] = uVar11;
      if (*(int *)(*(longlong *)(*(longlong *)&pTVar3->field_0x20 + ((ulonglong)pFVar12 >> 9) * 8) +
                  (ulonglong)(uVar11 & 0x1ff) * 4) == **(int **)((longlong)this + 8)) {
        iVar8 = (int)pFVar15;
        if ((FVar14.Data <= (FScriptContainerElement *)local_58) &&
           ((FScriptContainerElement *)local_58 < FVar14.Data + (longlong)local_48._4_4_ * 4)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar14.Data = local_50.Data;
          iVar8 = (int)local_48;
        }
        if (iVar8 == local_48._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_50,(int *)((longlong)&local_48 + 4));
          FVar14.Data = local_50.Data;
        }
        local_48 = CONCAT44(local_48._4_4_,iVar8 + 1U);
        *(uint *)(FVar14.Data + (longlong)iVar8 * 4) = local_58[0];
        pFVar15 = (FScriptContainerElement *)(ulonglong)(iVar8 + 1U);
        FVar14.Data = local_50.Data;
      }
      uVar11 = uVar11 + 1;
      pFVar12 = (FScriptContainerElement *)(ulonglong)uVar11;
      if ((int)uVar13 <= (int)uVar11) break;
      pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = ((ulonglong)pFVar12 >> 9) * 8;
        lVar6 = (ulonglong)((uint)pFVar12 & 0x1ff) * 2;
        if ((*(short *)(lVar6 + *(longlong *)(pFVar4 + lVar1)) != 0) &&
           (*(short *)(lVar6 + *(longlong *)(pFVar4 + lVar1)) != -1)) break;
        uVar11 = (uint)pFVar12 + 1;
        pFVar12 = (FScriptContainerElement *)(ulonglong)uVar11;
        if ((int)uVar13 <= (int)uVar11) goto joined_r0x00014cdb8376;
      }
    }
  } while( true );
}

// operator() @ 14cdb8740

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  FPolygroupLayer FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FText *pFVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  FPolygroupLayer local_res8;
  FText local_58;
  FPolygroupSet local_48;
  
  local_res8.bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_res8.LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar7 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res8,param_1);
  if (bVar7) {
    pFVar1 = (param_1->AttributeSet).Ptr;
    if ((pFVar1 == (FDynamicMeshAttributeSet *)0x0) ||
       (pTVar2 = (pFVar1->MaterialIDAttrib).Ptr,
       pTVar2 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                           L"SetPolygroupMaterialID_NoMaterialID",
                           L"SetPolygroupMaterialID: MaterialID Attribute is not enabled");
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar10
                );
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        return;
      }
    }
    else {
      FVar6.LayerIndex = local_res8.LayerIndex;
      FVar6.bIsDefaultLayer = local_res8.bIsDefaultLayer;
      FVar6._1_3_ = local_res8._1_3_;
      UE::Geometry::FPolygroupSet::FPolygroupSet(&local_48,param_1,FVar6);
      uVar12 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar9 = 0;
      if ((uVar12 != 0) &&
         (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar9 = 0,
         0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
        uVar8 = 1;
        uVar9 = 1;
        if (1 < (int)uVar12) {
          do {
            lVar5 = (ulonglong)(uVar8 & 0x1ff) * 2;
            lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8);
            if ((*(short *)(lVar5 + lVar4) != 0) && (uVar9 = uVar8, *(short *)(lVar5 + lVar4) != -1)
               ) break;
            uVar8 = uVar8 + 1;
            uVar9 = uVar8;
          } while ((int)uVar8 < (int)uVar12);
        }
      }
joined_r0x00014cdb8887:
      if (uVar9 != uVar12) {
        do {
          if (local_48.PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
            if (((local_48.Mesh)->TriangleGroups).bIsSet == false) {
              iVar11 = -1;
            }
            else {
              if ((-1 < (int)uVar9) &&
                 ((int)uVar9 <
                  (int)(((local_48.Mesh)->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       ((local_48.Mesh)->TriangleRefCounts).RefCounts.CurBlockUsed))) {
                lVar4 = (ulonglong)(uVar9 >> 9) * 8;
                if ((ushort)(*(short *)(*(longlong *)
                                         (((local_48.Mesh)->TriangleRefCounts).RefCounts.Blocks.
                                          AllocatorInstance.Data + lVar4) +
                                       (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe) {
                  iVar11 = *(int *)(*(longlong *)
                                     (((local_48.Mesh)->TriangleGroups).TypedValue.Blocks.
                                      AllocatorInstance.Data + lVar4) +
                                   (ulonglong)(uVar9 & 0x1ff) * 4);
                  goto LAB_14cdb8937;
                }
              }
              iVar11 = 0;
            }
LAB_14cdb8937:
            uVar13 = (ulonglong)(uVar9 >> 9);
          }
          else {
            uVar13 = (ulonglong)(uVar9 >> 9);
            iVar11 = *(int *)(*(longlong *)
                               (*(longlong *)&(local_48.PolygroupAttrib)->field_0x20 + uVar13 * 8) +
                             (ulonglong)(uVar9 & 0x1ff) * 4);
          }
          if (iVar11 == **(int **)((longlong)this + 0x10)) {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)&pTVar2->field_0x20 + uVar13 * 8) +
             (ulonglong)(uVar9 & 0x1ff) * 4) = **(undefined4 **)((longlong)this + 0x18);
            **(undefined1 **)((longlong)this + 0x20) = 1;
          }
          uVar9 = uVar9 + 1;
          if ((int)uVar12 <= (int)uVar9) goto joined_r0x00014cdb8887;
          pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          while( true ) {
            lVar4 = (ulonglong)(uVar9 >> 9) * 8;
            lVar5 = (ulonglong)(uVar9 & 0x1ff) * 2;
            if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar4)) != 0) &&
               (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar4)) != -1)) break;
            uVar9 = uVar9 + 1;
            if ((int)uVar12 <= (int)uVar9) goto joined_r0x00014cdb8887;
          }
        } while( true );
      }
    }
  }
  else {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_58,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                         L"SetPolygroupMaterialID_MissingGroups",
                         L"SetPolygroupMaterialID: Specified Polygroup Layer does not exist");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar10);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      return;
    }
  }
  return;
}

// operator() @ 14cdb8a60

void __thiscall
`UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  FDynamicMeshAttributeSet *pFVar2;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar3;
  
  uVar1 = **(uint **)this;
  if ((((-1 < (int)uVar1) &&
       ((int)uVar1 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
      ((ushort)(*(short *)(*(longlong *)
                            ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) <
       0xfffe)) &&
     ((pFVar2 = (param_1->AttributeSet).Ptr, pFVar2 != (FDynamicMeshAttributeSet *)0x0 &&
      (pTVar3 = (pFVar2->MaterialIDAttrib).Ptr,
      pTVar3 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)))) {
    **(undefined1 **)((longlong)this + 8) = 1;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)&pTVar3->field_0x20 + (ulonglong)(**(uint **)this >> 9) * 8) +
     (ulonglong)(**(uint **)this & 0x1ff) * 4) = **(undefined4 **)((longlong)this + 0x10);
  }
  return;
}

// ClearMaterialIDs @ 14cdca800

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs
          (UDynamicMesh *param_1,int param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  int local_48 [2];
  code *local_40;
  int *local_38;
  undefined1 local_30 [16];
  undefined1 *local_20;
  undefined1 *local_18;
  code **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"ClearMaterialIDs_InvalidInput",L"ClearMaterialIDs: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_res8[0] = 1;
  local_res20[0] = 0;
  if (param_2 < 0) {
    param_2 = 0;
  }
  local_38 = local_48;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
             ::Call;
  local_20 = local_res8;
  local_18 = local_res20;
  local_10 = &local_40;
  local_30._8_8_ = &local_20;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_48[0] = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  return param_1;
}

// CompactMaterialIDs @ 14cdcc5d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs
          (UDynamicMesh *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
          UGeometryScriptDebug *param_5)

{
  FScriptContainerElement *pFVar1;
  undefined1 local_res20 [8];
  code *local_38;
  UGeometryScriptDebug ***local_30;
  UGeometryScriptDebug **local_28;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_20;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_18;
  undefined1 *local_10;
  
  local_res20[0] = param_4;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::operator=(param_3,param_2);
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = &param_5;
    local_10 = local_res20;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_20 = param_2;
    local_18 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,false);
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return param_1;
}

// DeleteTrianglesByMaterialID @ 14cdd3310

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID
          (UDynamicMesh *param_1,int param_2,int *param_3,bool param_4,UGeometryScriptDebug *param_5
          )

{
  int local_res10 [6];
  code *local_38;
  UGeometryScriptDebug ***local_30;
  UGeometryScriptDebug **local_28;
  int *local_20;
  int *local_18;
  
  *param_3 = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = &param_5;
    local_20 = local_res10;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_18 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,param_4);
  }
  return param_1;
}

// EnableMaterialIDs @ 14cdd3f10

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  code *local_48;
  undefined1 *local_40;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_20;
  code **local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"EnableMaterialIDs_InvalidInput",L"EnableMaterialIDs: TargetMesh is Null");
    UE::Geometry::AppendError(param_2,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_40 = local_res20;
  local_res8[0] = 1;
  local_res18[0] = 0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
             ::Call;
  local_28 = local_res8;
  local_20 = local_res18;
  local_18 = &local_48;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// GetAllTriangleMaterialIDs @ 14cdd4b60

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,bool *param_3)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  undefined4 local_res8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  code *local_48;
  undefined8 *local_40;
  code *local_38;
  bool **local_30;
  bool *local_28;
  undefined4 *local_20;
  code **local_18;
  
  FGeometryScriptIndexList::Reset(param_2,MaterialID,0);
  if ((param_2->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDynamicMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  local_res10 = (param_2->List).Object;
  local_40 = &local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
             ::Call;
  *param_3 = false;
  local_res8[0] = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_20 = local_res8;
    local_18 = &local_48;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return param_1;
}

// GetMaterialIDsOfTriangles @ 14cdd70c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,FGeometryScriptIndexList *param_3
          ,UGeometryScriptDebug *param_4)

{
  bool bVar1;
  FText *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char local_res8 [8];
  char local_78 [4];
  undefined4 local_74;
  code *local_70;
  FGeometryScriptIndexList **local_68;
  undefined1 local_60 [16];
  char *local_50;
  undefined4 *local_48;
  code **local_40;
  FGeometryScriptIndexList *local_38;
  char *local_30;
  char *local_28;
  FGeometryScriptIndexList *local_20;
  
  FGeometryScriptIndexList::Reset(param_3,MaterialID,0);
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_60,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"GetMaterialIDsOfTriangles_InvalidMesh",
                        L"GetMaterialIDsOfTriangles: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar2);
    if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if ((param_2->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pwVar5 = L"GetMaterialIDsOfTriangles: TriangleIDList is Null";
    pwVar4 = L"GetMaterialIDsOfTriangles_InvalidList";
  }
  else if ((param_2->IndexType == Triangle) || (param_2->IndexType == Any)) {
    pTVar3 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::operator->(&param_2->List);
    if ((pTVar3->ArrayNum == 0) && (bVar1 = UDynamicMesh::IsEmpty(param_1), !bVar1)) {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_60,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                          L"GetMaterialIDsOfTriangles_EmptyList",
                          L"GetMaterialIDsOfTriangles: TriangleIDList is empty");
      UE::Geometry::AppendWarning(param_4,InvalidInputs,pFVar2);
      if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
      }
    }
    local_30 = local_res8;
    local_78[0] = '\x01';
    local_28 = local_78;
    local_68 = &local_38;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
               ::Call;
    local_50 = local_res8;
    local_48 = &local_74;
    local_40 = &local_70;
    local_60._8_8_ = &local_50;
    local_60._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_res8[0] = '\0';
    local_74 = 0;
    local_38 = param_3;
    local_20 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_60);
    if (local_res8[0] == '\0') {
      pwVar5 = L"GetMaterialIDsOfTriangles: MaterialID Attribute is not enabled";
      pwVar4 = L"GetMaterialIDsOfTriangles_MissingMaterials";
    }
    else {
      if (local_78[0] != '\0') goto LAB_14cdd7294;
      pwVar5 = L"GetMaterialIDsOfTriangles: TriangleIDList has invalid triangles";
      pwVar4 = L"GetMaterialIDsOfTriangles_InvalidTriangles";
    }
  }
  else {
    pwVar5 = L"GetMaterialIDsOfTriangles: TriangleIDList has incompatible index type";
    pwVar4 = L"GetMaterialIDsOfTriangles_InvalidList2";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_60,L"UGeometryScriptLibrary_MeshMaterialFunctions",pwVar4,
                      pwVar5);
  UE::Geometry::AppendError(param_4,InvalidInputs,pFVar2);
  if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
  }
LAB_14cdd7294:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// GetMaxMaterialID @ 14cdd7a00

int __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID(UDynamicMesh *param_1,bool *param_2)

{
  undefined1 local_res8 [8];
  int local_res10 [6];
  code *local_48;
  undefined1 *local_40;
  code *local_38;
  bool **local_30;
  bool *local_28;
  int *local_20;
  code **local_18;
  
  local_res8[0] = 0;
  local_40 = local_res8;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
             ::Call;
  *param_2 = false;
  local_res10[0] = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_20 = local_res10;
    local_18 = &local_48;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_28 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    return local_res10[0];
  }
  return 0;
}

// GetPrivateStaticClass @ 14cdd8b60

UClass * __cdecl UGeometryScriptLibrary_MeshMaterialFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshMaterialFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshMaterialFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshMaterialFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshMaterialFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions.InnerSingleton;
}

// GetTriangleMaterialID @ 14cddb270

int __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID
          (UDynamicMesh *param_1,int param_2,bool *param_3)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  bool *local_58;
  int *local_50;
  code *local_48;
  bool **local_40;
  code *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  int *local_20;
  code **local_18;
  
  local_50 = local_res10;
  local_40 = &local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
             ::Call;
  local_res8[0] = 0;
  local_res18[0] = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res8;
    local_20 = local_res18;
    local_18 = &local_48;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_58 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    return local_res18[0];
  }
  return 0;
}

// GetTrianglesByMaterialID @ 14cddb300

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID
          (UDynamicMesh *param_1,int param_2,FGeometryScriptIndexList *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char local_res8 [8];
  int local_res10 [2];
  char local_78 [4];
  undefined4 local_74;
  code *local_70;
  char **local_68;
  undefined1 local_60 [16];
  char *local_50;
  int *local_48;
  FGeometryScriptIndexList *local_40;
  char *local_38;
  undefined4 *local_30;
  code **local_28;
  
  local_res10[0] = param_2;
  FGeometryScriptIndexList::Reset(param_3,Triangle,0);
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_60,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"GetTrianglesByMaterialID_InvalidInput",
                        L"GetTrianglesByMaterialID: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_50 = local_78;
    local_78[0] = '\x01';
    local_48 = local_res10;
    local_68 = &local_50;
    local_res8[0] = '\0';
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
               ::Call;
    local_38 = local_res8;
    local_30 = &local_74;
    local_28 = &local_70;
    local_60._8_8_ = &local_38;
    local_60._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_74 = 0;
    local_40 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_60);
    if (local_res8[0] == '\0') {
      pwVar3 = L"GetTrianglesByMaterialID: MaterialID Attribute is not enabled";
      pwVar2 = L"GetTrianglesByMaterialID_MissingMaterialID";
    }
    else {
      if (local_78[0] != '\0') {
        return param_1;
      }
      pwVar3 = L"GetTrianglesByMaterialID: TriangleIDList has invalid triangles";
      pwVar2 = L"GetTrianglesByMaterialID_InvalidTriangles";
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_60,L"UGeometryScriptLibrary_MeshMaterialFunctions",pwVar2,
                        pwVar3);
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
    }
  }
  return param_1;
}

// RemapAndCombineMaterials @ 14cde20b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::RemapAndCombineMaterials
          (UDynamicMesh *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_4,int param_5,bool param_6
          ,UGeometryScriptDebug *param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FText *pFVar7;
  UDynamicMesh *pUVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined1 local_c8 [4];
  int local_c4;
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  code *local_b0;
  int **local_a8;
  code *local_a0;
  undefined1 **local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  int *local_78;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_70;
  bool *local_68;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  UGeometryScriptDebug **local_50;
  FText local_48;
  
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::operator=(param_4,param_3);
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"RemapAndCombineMaterials_InvalidInput",
                        L"RemapAndCombineMaterials: TargetMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar7);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  if (param_6 == false) {
    if ((param_4 == param_2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar8 = (UDynamicMesh *)(*pcVar2)();
      return pUVar8;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar5,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax
                        );
      memcpy((param_4->AllocatorInstance).Data + (longlong)iVar6 * 8,
             (param_2->AllocatorInstance).Data,(longlong)iVar5 << 3);
    }
  }
  else {
    local_c4 = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_c0,&local_c4,param_2->ArrayNum);
    iVar5 = param_2->ArrayNum;
    uVar10 = 0;
    if (0 < iVar5) {
      lVar11 = 0;
      do {
        uVar12 = ~uVar10 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar10 < iVar5) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar8 = (UDynamicMesh *)(*pcVar2)();
          return pUVar8;
        }
        pFVar1 = (param_4->AllocatorInstance).Data;
        if (pFVar1 != pFVar1 + (longlong)param_4->ArrayNum * 8) {
          pFVar9 = pFVar1;
          do {
            if (*(longlong *)pFVar9 == *(longlong *)((param_2->AllocatorInstance).Data + lVar11 * 8)
               ) {
              iVar5 = (int)((longlong)pFVar9 - (longlong)pFVar1 >> 3);
              if (iVar5 != -1) goto LAB_14cde22e7;
              break;
            }
            pFVar9 = pFVar9 + 8;
          } while (pFVar9 != pFVar1 + (longlong)param_4->ArrayNum * 8);
        }
        uVar4 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar8 = (UDynamicMesh *)(*pcVar2)();
          return pUVar8;
        }
        pFVar9 = (param_4->AllocatorInstance).Data;
        pFVar1 = (param_2->AllocatorInstance).Data + lVar11 * 8;
        if (((pFVar9 <= pFVar1) && (pFVar1 < pFVar9 + (longlong)param_4->ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar8 = (UDynamicMesh *)(*pcVar2)();
          return pUVar8;
        }
        iVar5 = param_4->ArrayNum;
        if (iVar5 == param_4->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        pFVar9 = (param_4->AllocatorInstance).Data;
        param_4->ArrayNum = iVar5 + 1;
        *(undefined8 *)(pFVar9 + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1;
LAB_14cde22e7:
        uVar4 = 0;
        if ((int)uVar10 < local_c0.ArrayNum) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar8 = (UDynamicMesh *)(*pcVar2)();
          return pUVar8;
        }
        uVar10 = uVar10 + 1;
        *(int *)(local_c0.AllocatorInstance.Data + lVar11 * 4) = iVar5;
        lVar11 = lVar11 + 1;
        iVar5 = param_2->ArrayNum;
      } while ((int)uVar10 < iVar5);
    }
  }
  local_78 = &param_5;
  local_68 = &param_6;
  local_res8[0] = 1;
  local_58 = &local_c0;
  local_c8[0] = 0;
  local_50 = &param_7;
  local_a8 = &local_78;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::RemapAndCombineMaterials'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
             ::Call;
  local_90 = local_res8;
  local_88 = local_c8;
  local_80 = &local_b0;
  local_98 = &local_90;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  local_70 = param_2;
  local_60 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_a0,
             GeneralEdit,Unknown,false);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return param_1;
}

// RemapMaterialIDs @ 14cde2490

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs
          (UDynamicMesh *param_1,int param_2,int param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  undefined1 local_58 [8];
  int *local_50;
  int *local_48;
  code *local_40;
  undefined4 **local_38;
  undefined1 local_30 [16];
  undefined1 *local_20;
  undefined1 *local_18;
  code **local_10;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"RemapMaterialIDs_InvalidInput",L"RemapMaterialIDs: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_50 = local_res10;
  local_res8[0] = 1;
  local_48 = local_res18;
  local_58[0] = 0;
  local_38 = &local_50;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
             ::Call;
  local_20 = local_res8;
  local_18 = local_58;
  local_10 = &local_40;
  local_30._8_8_ = &local_20;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  return param_1;
}

// RemapToNewMaterialIDsByMaterial @ 14cde25b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::RemapToNewMaterialIDsByMaterial
          (UDynamicMesh *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          UGeometryScriptDebug *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  UDynamicMesh *pUVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  UGeometryScriptDebug **local_90;
  code *local_88;
  TArray<int,TSizedDefaultAllocator<32>_> **local_80;
  code *local_78;
  undefined1 **local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  code **local_58;
  FText local_50;
  FText local_40;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"RemapToNewMaterialIDsByMaterial_InvalidInput",
                        L"RemapToNewMaterialIDsByMaterial: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar5);
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_a8,param_2->ArrayNum,Default);
  iVar7 = param_2->ArrayNum;
  uVar10 = 0;
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar10 < iVar7) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UDynamicMesh *)(*pcVar2)();
        return pUVar6;
      }
      pFVar1 = (param_3->AllocatorInstance).Data;
      if (pFVar1 != pFVar1 + (longlong)param_3->ArrayNum * 8) {
        pFVar8 = pFVar1;
        do {
          if (*(longlong *)pFVar8 == *(longlong *)((param_2->AllocatorInstance).Data + lVar11 * 8))
          {
            iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 3);
            if (iVar7 != -1) {
              uVar4 = 0;
              if ((int)uVar10 < local_a8.ArrayNum) {
                uVar4 = uVar9;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                pUVar6 = (UDynamicMesh *)(*pcVar2)();
                return pUVar6;
              }
              *(int *)(local_a8.AllocatorInstance.Data + lVar11 * 4) = iVar7;
              goto LAB_14cde281c;
            }
            break;
          }
          pFVar8 = pFVar8 + 8;
        } while (pFVar8 != pFVar1 + (longlong)param_3->ArrayNum * 8);
      }
      if (param_4 < 0) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_40,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                            L"RemapToNewMaterialIDsByMaterial_MaterialMissing",
                            L"RemapToNewMaterialIDsByMaterial: Material in FromMaterialList not found in ToMaterialList, skipping"
                           );
        UE::Geometry::AppendWarning(param_5,InvalidInputs,pFVar5);
        if (local_40.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
        }
        uVar4 = 0;
        if ((int)uVar10 < local_a8.ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar6 = (UDynamicMesh *)(*pcVar2)();
          return pUVar6;
        }
        *(uint *)(local_a8.AllocatorInstance.Data + lVar11 * 4) = uVar10;
      }
      else {
        uVar4 = 0;
        if ((int)uVar10 < local_a8.ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar6 = (UDynamicMesh *)(*pcVar2)();
          return pUVar6;
        }
        *(int *)(local_a8.AllocatorInstance.Data + lVar11 * 4) = param_4;
      }
LAB_14cde281c:
      iVar7 = param_2->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 1;
    } while ((int)uVar10 < iVar7);
  }
  local_98 = &local_a8;
  local_b8[0] = 1;
  local_90 = &param_5;
  local_b0[0] = 0;
  local_80 = &local_98;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::RemapToNewMaterialIDsByMaterial'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
             ::Call;
  local_68 = local_b8;
  local_60 = local_b0;
  local_58 = &local_88;
  local_70 = &local_68;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_78,
             GeneralEdit,Unknown,false);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return param_1;
}

// SetAllTriangleMaterialIDs @ 14cde37f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,bool param_3,
          UGeometryScriptDebug *param_4)

{
  bool bVar1;
  FText *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  UGeometryScriptDebug *local_res20;
  FGeometryScriptIndexList *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"SetAllTriangleMaterialIDs_InvalidMesh",
                        L"SetAllTriangleMaterialIDs: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar2);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if ((param_2->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pwVar5 = L"SetAllTriangleMaterialIDs: TriangleMaterialIDList is Null";
    pwVar4 = L"SetAllTriangleMaterialIDs_InvalidList";
  }
  else {
    if ((param_2->IndexType == MaterialID) || (param_2->IndexType == Any)) {
      pTVar3 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::operator->(&param_2->List);
      if (pTVar3->ArrayNum == 0) {
        bVar1 = UDynamicMesh::IsEmpty(param_1);
        if (!bVar1) {
          pFVar2 = FText::AsLocalizable_Advanced_LocText
                             ((FText *)local_18,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                              L"SetAllTriangleMaterialIDs_EmptyList",
                              L"SetAllTriangleMaterialIDs: TriangleMaterialIDList is empty");
          UE::Geometry::AppendWarning(local_res20,InvalidInputs,pFVar2);
          if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
          }
        }
      }
      local_20 = &local_res20;
      local_18._8_8_ = &local_28;
      local_18._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      local_28 = param_2;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
                 GeneralEdit,Unknown,param_3);
      goto LAB_14cde396b;
    }
    pwVar5 = L"SetAllTriangleMaterialIDs: TriangleMaterialIDList has incompatible index type";
    pwVar4 = L"SetAllTriangleMaterialIDs_InvalidList2";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_18,L"UGeometryScriptLibrary_MeshMaterialFunctions",pwVar4,
                      pwVar5);
  UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar2);
  if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
  }
LAB_14cde396b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SetMaterialIDForMeshSelection @ 14cde44f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,int param_3,bool param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  int local_res18 [4];
  FGeometryScriptMeshSelection *local_28;
  int *local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"SetMaterialIDForMeshSelection_InvalidMesh",
                        L"SetMaterialIDForMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_20 = local_res18;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SetMaterialIDOnTriangles @ 14cde45c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,int param_3,bool param_4,
          UGeometryScriptDebug *param_5)

{
  bool bVar1;
  FText *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char local_res8 [8];
  int local_res18 [2];
  undefined1 local_38 [16];
  FGeometryScriptIndexList *local_28;
  char *local_20;
  int *local_18;
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"SetMaterialIDOnTriangles_InvalidMesh",
                        L"SetMaterialIDOnTriangles: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar2);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if ((param_2->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pwVar5 = L"SetMaterialIDOnTriangles: TriangleIDList is Null";
    pwVar4 = L"SetMaterialIDOnTriangles_InvalidList";
  }
  else if ((param_2->IndexType == Triangle) || (param_2->IndexType == Any)) {
    pTVar3 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::operator->(&param_2->List);
    if (pTVar3->ArrayNum == 0) {
      bVar1 = UDynamicMesh::IsEmpty(param_1);
      if (!bVar1) {
        pFVar2 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)local_38,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                            L"SetMaterialIDOnTriangles_EmptyList",
                            L"SetMaterialIDOnTriangles: TriangleIDList is empty");
        UE::Geometry::AppendWarning(param_5,InvalidInputs,pFVar2);
        if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
        }
      }
    }
    local_20 = local_res8;
    local_res8[0] = '\0';
    local_18 = local_res18;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_28 = param_2;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
               GeneralEdit,Unknown,param_4);
    if (local_res8[0] != '\x01') goto LAB_14cde476d;
    pwVar5 = L"SetMaterialIDOnTriangles: TriangleIDList has invalid triangles";
    pwVar4 = L"SetMaterialIDOnTriangles_InvalidTriangles";
  }
  else {
    pwVar5 = L"SetMaterialIDOnTriangles: TriangleIDList has incompatible index type";
    pwVar4 = L"SetMaterialIDOnTriangles_InvalidList2";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_38,L"UGeometryScriptLibrary_MeshMaterialFunctions",pwVar4,
                      pwVar5);
  UE::Geometry::AppendError(param_5,InvalidInputs,pFVar2);
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
LAB_14cde476d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SetPolygroupMaterialID @ 14cde4a30

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,int param_4,
          bool *param_5,bool param_6,UGeometryScriptDebug *param_7)

{
  FGeometryScriptGroupLayer local_res10;
  int local_res18 [2];
  int local_res20 [2];
  code *local_48;
  undefined8 **local_40;
  FGeometryScriptGroupLayer *local_38;
  UGeometryScriptDebug **local_30;
  int *local_28;
  int *local_20;
  bool *local_18;
  
  *param_5 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_18 = param_5;
    local_38 = &local_res10;
    local_40 = &local_38;
    local_30 = &param_7;
    local_28 = local_res18;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_20 = local_res20;
    local_res10 = param_2;
    local_res18[0] = param_3;
    local_res20[0] = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_48,
               GeneralEdit,Unknown,param_6);
  }
  return param_1;
}

// SetTriangleMaterialID @ 14cde52d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID
          (UDynamicMesh *param_1,int param_2,int param_3,bool *param_4,bool param_5)

{
  int local_res10 [2];
  int local_res18 [4];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  int *local_18;
  
  *param_4 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_18 = local_res18;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_20 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,param_5);
  }
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshMaterialFunctions @ 14cde7360

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshMaterialFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClearMaterialIDs @ 14cdf5df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execClearMaterialIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  undefined2 local_a8;
  ITextData *local_a0;
  uint local_98;
  int local_90 [2];
  longlong local_88;
  UDynamicMesh *local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  code *local_70;
  int *local_68;
  code *local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  FText local_38;
  
  local_80 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_88 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pUVar5 = local_80;
  lVar4 = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_80 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                      L"ClearMaterialIDs_InvalidInput",L"ClearMaterialIDs: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_a0 = (this->TextData).Reference;
    local_a8 = 0x200;
    if (local_a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0 + 8))(local_a0,local_78);
    }
    local_98 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_a8) &&
          (&local_a8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_a8;
      puVar1[1] = local_a8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_a0;
      if (local_a0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0 + 8))(local_a0,local_74);
      }
      *(uint *)(puVar1 + 0x10) = local_98;
    }
    if (local_a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0 + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_res10[0] = 1;
  local_res18[0] = 0;
  local_90[0] = local_res20[0];
  if (local_res20[0] < 0) {
    local_90[0] = 0;
  }
  local_68 = local_90;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
             ::Call;
  local_50 = local_res10;
  local_48 = local_res18;
  local_40 = &local_70;
  local_58 = &local_50;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  UDynamicMesh::EditMesh
            (local_80,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_60,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar5;
  return;
}

// execCompactMaterialIDs @ 14cdf6ad0

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execCompactMaterialIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UDynamicMesh *this;
  void *_Src;
  longlong lVar3;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar4;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined8 local_res20;
  UDynamicMesh *local_a8;
  undefined8 local_a0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_98;
  void *local_88;
  undefined8 local_80;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_78;
  code *local_68;
  undefined8 **local_60;
  undefined8 *local_58;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_50;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_48;
  undefined1 *local_40;
  
  local_a8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res18[0] = 0;
  this_00 = &local_78;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  _Src = local_88;
  uVar2 = local_res20;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_80;
  local_98.ArrayNum = (int)local_80;
  if ((int)local_80 == 0) {
    local_98.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_80,0,&local_98.AllocatorInstance,(int)local_80,&local_98.ArrayMax);
    memcpy(local_98.AllocatorInstance.Data,_Src,lVar3 << 3);
  }
  this = local_a8;
  local_a0 = uVar2;
  local_res10[0] = bVar4;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::operator=(this_00,&local_98);
  if (this != (UDynamicMesh *)0x0) {
    local_58 = &local_a0;
    local_50 = &local_98;
    local_40 = local_res10;
    local_60 = &local_58;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_48 = this_00;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,
               GeneralEdit,Unknown,false);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  *(UDynamicMesh **)param_3 = this;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execDeleteTrianglesByMaterialID @ 14ce00270

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execDeleteTrianglesByMaterialID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_78 [2];
  undefined8 local_70;
  UDynamicMesh *local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 **local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  uchar *local_38;
  
  local_68 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_70 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pUVar2 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60 = local_70;
  local_78[0] = local_res20[0];
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  if (local_68 != (UDynamicMesh *)0x0) {
    local_48 = &local_60;
    local_40 = local_78;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_38 = puVar3;
    UDynamicMesh::EditMesh
              (local_68,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_58,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execEnableMaterialIDs @ 14ce01540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execEnableMaterialIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_a8;
  ITextData *local_a0;
  uint local_98;
  longlong local_90;
  UDynamicMesh *local_88;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined1 **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code **local_48;
  FText local_40;
  
  local_88 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_90 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pUVar5 = local_88;
  lVar4 = local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_88 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_40,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                      L"EnableMaterialIDs_InvalidInput",L"EnableMaterialIDs: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_a0 = (this->TextData).Reference;
    local_a8 = 0x200;
    if (local_a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0 + 8))(local_a0,local_80);
    }
    local_98 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_a8) &&
          (&local_a8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_a8;
      puVar1[1] = local_a8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_a0;
      if (local_a0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0 + 8))(local_a0,local_7c);
      }
      *(uint *)(puVar1 + 0x10) = local_98;
    }
    if (local_a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0 + 0x10))();
    }
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_70 = local_res20;
  local_res10[0] = 1;
  local_res18[0] = 0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
             ::Call;
  local_58 = local_res10;
  local_50 = local_res18;
  local_48 = &local_78;
  local_60 = &local_58;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  UDynamicMesh::EditMesh
            (local_88,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar5;
  return;
}

// execGetAllTriangleMaterialIDs @ 14ce02cb0

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execGetAllTriangleMaterialIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptIndexList *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UDynamicMesh *this;
  bool bVar4;
  uchar *puVar5;
  FGeometryScriptIndexList *this_00;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  UDynamicMesh *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  uchar **local_68;
  FGeometryScriptIndexList local_60;
  uchar *local_48;
  undefined4 *local_40;
  code **local_38;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_60.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_60.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_60.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pFVar1 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_00 = &local_60;
  if (pFVar1 != (FGeometryScriptIndexList *)0x0) {
    this_00 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptIndexList::Reset(this_00,MaterialID,0);
  if ((this_00->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_88 = (this_00->List).Object;
  local_78 = &local_88;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
             ::Call;
  *puVar5 = '\0';
  local_res18[0] = 0;
  if (this != (UDynamicMesh *)0x0) {
    local_40 = local_res18;
    local_38 = &local_80;
    local_68 = &local_48;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_48 = puVar5;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_70);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetMaterialIDsOfTriangles @ 14ce047d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execGetMaterialIDsOfTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UGeometryScriptDebug *pUVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  UDynamicMesh *this;
  FGeometryScriptIndexList *this_00;
  char local_res10 [8];
  char local_res18 [8];
  undefined4 local_res20 [2];
  undefined2 local_188;
  ITextData *local_180;
  uint local_178;
  undefined2 local_170;
  ITextData *local_168;
  uint local_160;
  UGeometryScriptDebug *local_158;
  UDynamicMesh *local_150;
  byte local_148 [8];
  longlong local_140;
  TReferenceControllerBase<1> *pTStack_138;
  byte local_130 [8];
  longlong local_128;
  TReferenceControllerBase<1> *local_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  FGeometryScriptIndexList local_108;
  code *local_f0;
  FGeometryScriptIndexList **local_e8;
  code *local_e0;
  char **local_d8;
  char *local_d0;
  undefined4 *local_c8;
  code **local_c0;
  FGeometryScriptIndexList *local_b8;
  char *local_b0;
  char *local_a8;
  byte *local_a0;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_150 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_148[0] = 0;
  local_140 = 0;
  pTStack_138 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_108.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_108.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_108.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_158 = (UGeometryScriptDebug *)0x0;
  this_00 = &local_108;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this_00 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  this = local_150;
  pUVar6 = local_158;
  local_130[0] = local_148[0];
  local_128 = local_140;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_120 = pTStack_138;
  if (pTStack_138 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_138->SharedReferenceCount = (atomic<int>)((int)pTStack_138->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGeometryScriptIndexList::Reset(this_00,MaterialID,0);
  if (this == (UDynamicMesh *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"GetMaterialIDsOfTriangles_InvalidMesh",
                        L"GetMaterialIDsOfTriangles: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar9);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_180 = (pFVar9->TextData).Reference;
    local_188 = 0x200;
    if (local_180 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180 + 8))(local_180,local_118);
    }
    local_178 = pFVar9->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_188) &&
          ((FScriptContainerElement *)&local_188 <
           pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      (pUVar6->Messages).ArrayNum = iVar8 + 1;
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
      *pFVar4 = local_188._0_1_;
      pFVar4[1] = local_188._1_1_;
      *(undefined8 *)(pFVar4 + 8) = 0;
      *(ITextData **)(pFVar4 + 8) = local_180;
      if (local_180 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_180 + 8))(local_180,local_114);
      }
      *(uint *)(pFVar4 + 0x10) = local_178;
    }
    if (local_180 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180 + 0x10))();
    }
    this = (UDynamicMesh *)0x0;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
  else {
    if (local_128 == 0) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                          L"GetMaterialIDsOfTriangles_InvalidList",
                          L"GetMaterialIDsOfTriangles: TriangleIDList is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar9);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_168 = (pFVar9->TextData).Reference;
      local_170 = 0x200;
      if (local_168 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168 + 8))(local_168,local_110);
      }
      local_160 = pFVar9->Flags;
      if (pUVar6 != (UGeometryScriptDebug *)0x0) {
        pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_170) &&
            ((FScriptContainerElement *)&local_170 <
             pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (pUVar6->Messages).ArrayNum;
        piVar1 = &(pUVar6->Messages).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
        }
        (pUVar6->Messages).ArrayNum = iVar8 + 1;
        pFVar4 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
        *pFVar4 = local_170._0_1_;
        pFVar4[1] = local_170._1_1_;
        *(undefined8 *)(pFVar4 + 8) = 0;
        *(ITextData **)(pFVar4 + 8) = local_168;
        if (local_168 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_168 + 8))(local_168,local_10c);
        }
        *(uint *)(pFVar4 + 0x10) = local_160;
      }
      local_78.TextData.Reference = local_88.TextData.Reference;
      if (local_168 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168 + 0x10))();
        local_78.TextData.Reference = local_88.TextData.Reference;
      }
    }
    else if (local_130[0] < 2) {
      if ((*(int *)(local_128 + 8) == 0) && (bVar7 = UDynamicMesh::IsEmpty(this), !bVar7)) {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_68,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                            L"GetMaterialIDsOfTriangles_EmptyList",
                            L"GetMaterialIDsOfTriangles: TriangleIDList is empty");
        UE::Geometry::AppendWarning(pUVar6,InvalidInputs,pFVar9);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
      }
      local_b0 = local_res10;
      local_res18[0] = '\x01';
      local_a8 = local_res18;
      local_a0 = local_130;
      local_res10[0] = '\0';
      local_e8 = &local_b8;
      local_f0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
                 ::Call;
      local_d0 = local_res10;
      local_c8 = local_res20;
      local_c0 = &local_f0;
      local_d8 = &local_d0;
      local_e0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_res20[0] = 0;
      local_b8 = this_00;
      UDynamicMesh::ProcessMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_e0);
      if (local_res10[0] == '\0') {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                            L"GetMaterialIDsOfTriangles_MissingMaterials",
                            L"GetMaterialIDsOfTriangles: MaterialID Attribute is not enabled");
        UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar9);
        local_78.TextData.Reference = local_58.TextData.Reference;
      }
      else {
        if (local_res18[0] != '\0') goto LAB_14ce04dd5;
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_48,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                            L"GetMaterialIDsOfTriangles_InvalidTriangles",
                            L"GetMaterialIDsOfTriangles: TriangleIDList has invalid triangles");
        UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar9);
        local_78.TextData.Reference = local_48.TextData.Reference;
      }
    }
    else {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                          L"GetMaterialIDsOfTriangles_InvalidList2",
                          L"GetMaterialIDsOfTriangles: TriangleIDList has incompatible index type");
      UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar9);
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
LAB_14ce04dd5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_138);
  return;
}

// execGetMaxMaterialID @ 14ce05b20

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execGetMaxMaterialID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  UDynamicMesh *local_58;
  code *local_50;
  undefined1 *local_48;
  code *local_40;
  uchar **local_38;
  uchar *local_30;
  undefined4 *local_28;
  code **local_20;
  
  local_58 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  local_res20[0] = 0;
  local_30 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_30 = param_2->MostRecentPropertyAddress;
  }
  local_48 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
             ::Call;
  *local_30 = '\0';
  if (local_58 != (UDynamicMesh *)0x0) {
    local_28 = local_res20;
    local_20 = &local_50;
    local_38 = &local_30;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_58,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_40
              );
    *(undefined4 *)param_3 = local_res20[0];
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetTriangleMaterialID @ 14ce08d80

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execGetTriangleMaterialID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  UDynamicMesh *local_68;
  uchar *local_60;
  undefined4 *local_58;
  code *local_50;
  uchar **local_48;
  code *local_40;
  undefined1 **local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  
  local_68 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  local_78[0] = 0;
  local_60 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_60 = param_2->MostRecentPropertyAddress;
  }
  local_70[0] = local_res20[0];
  local_58 = local_70;
  local_48 = &local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
             ::Call;
  if (local_68 == (UDynamicMesh *)0x0) {
    *(undefined4 *)param_3 = 0;
  }
  else {
    local_30 = local_res18;
    local_28 = local_78;
    local_20 = &local_50;
    local_38 = &local_30;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_68,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_40
              );
    *(undefined4 *)param_3 = local_78[0];
  }
  return;
}

// execGetTrianglesByMaterialID @ 14ce08f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execGetTrianglesByMaterialID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UGeometryScriptDebug *pUVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  UDynamicMesh *this;
  FGeometryScriptIndexList *this_00;
  char local_res10 [8];
  char local_res18 [8];
  undefined4 local_res20 [2];
  undefined2 local_128;
  ITextData *local_120;
  uint local_118;
  undefined2 local_110;
  ITextData *local_108;
  uint local_100;
  undefined4 local_f8 [2];
  undefined4 local_f0 [2];
  UGeometryScriptDebug *local_e8;
  UDynamicMesh *local_e0;
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  FGeometryScriptIndexList local_c8;
  code *local_b0;
  char **local_a8;
  code *local_a0;
  char **local_98;
  char *local_90;
  undefined4 *local_88;
  FGeometryScriptIndexList *local_80;
  char *local_78;
  undefined4 *local_70;
  code **local_68;
  FText local_60;
  FText local_50;
  FText local_40;
  
  local_e0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_c8.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_c8.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_c8.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_e8 = (UGeometryScriptDebug *)0x0;
  this_00 = &local_c8;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this_00 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  this = local_e0;
  pUVar5 = local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8[0] = local_res20[0];
  FGeometryScriptIndexList::Reset(this_00,Triangle,0);
  if (this == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"GetTrianglesByMaterialID_InvalidInput",
                        L"GetTrianglesByMaterialID: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_120 = (pFVar8->TextData).Reference;
    local_128 = 0x200;
    if (local_120 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120 + 8))(local_120,local_d8);
    }
    local_118 = pFVar8->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      (pUVar5->Messages).ArrayNum = iVar7 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data + (longlong)iVar7 * 0x18;
      *pFVar3 = local_128._0_1_;
      pFVar3[1] = local_128._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_120;
      if (local_120 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120 + 8))(local_120,local_d4);
      }
      *(uint *)(pFVar3 + 0x10) = local_118;
    }
    if (local_120 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120 + 0x10))();
    }
    this = (UDynamicMesh *)0x0;
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
  }
  else {
    local_90 = local_res18;
    local_res18[0] = '\x01';
    local_88 = local_f8;
    local_a8 = &local_90;
    local_res10[0] = '\0';
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_const_&>
               ::Call;
    local_78 = local_res10;
    local_70 = local_f0;
    local_68 = &local_b0;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshMaterialQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_f0[0] = 0;
    local_98 = &local_78;
    local_80 = this_00;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a0);
    if (local_res10[0] == '\0') {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_50,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                          L"GetTrianglesByMaterialID_MissingMaterialID",
                          L"GetTrianglesByMaterialID: MaterialID Attribute is not enabled");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_108 = (pFVar8->TextData).Reference;
      local_110 = 0x200;
      if (local_108 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108 + 8))(local_108,local_d0);
      }
      local_100 = pFVar8->Flags;
      if (pUVar5 != (UGeometryScriptDebug *)0x0) {
        pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_110) &&
            ((FScriptContainerElement *)&local_110 <
             pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (pUVar5->Messages).ArrayNum;
        piVar1 = &(pUVar5->Messages).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
        }
        (pUVar5->Messages).ArrayNum = iVar7 + 1;
        pFVar3 = (pUVar5->Messages).AllocatorInstance.Data + (longlong)iVar7 * 0x18;
        *pFVar3 = local_110._0_1_;
        pFVar3[1] = local_110._1_1_;
        *(undefined8 *)(pFVar3 + 8) = 0;
        *(ITextData **)(pFVar3 + 8) = local_108;
        if (local_108 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108 + 8))(local_108,local_cc);
        }
        *(uint *)(pFVar3 + 0x10) = local_100;
      }
      local_40.TextData.Reference = local_50.TextData.Reference;
      if (local_108 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108 + 0x10))();
        local_40.TextData.Reference = local_50.TextData.Reference;
      }
    }
    else {
      if (local_res18[0] != '\0') goto LAB_14ce09426;
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_40,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                          L"GetTrianglesByMaterialID_InvalidTriangles",
                          L"GetTrianglesByMaterialID: TriangleIDList has invalid triangles");
      UE::Geometry::AppendError(pUVar5,InvalidInputs,pFVar8);
    }
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
  }
LAB_14ce09426:
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.List.SharedReferenceCount.ReferenceController);
  return;
}

// execRemapAndCombineMaterials @ 14ce0d690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execRemapAndCombineMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  UDynamicMesh *pUVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FText *this;
  FScriptContainerElement *pFVar11;
  UDynamicMesh *this_00;
  uint uVar12;
  UDynamicMesh *pUVar13;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *this_01;
  bool bVar16;
  char local_res10 [8];
  ulonglong *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_158 [4];
  int local_154;
  undefined4 local_150 [2];
  undefined2 local_148;
  ITextData *local_140;
  uint local_138;
  int local_130 [2];
  undefined4 local_128 [2];
  longlong local_120;
  UDynamicMesh *local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_110;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_100;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_e0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_d0;
  longlong local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  UDynamicMesh *local_b8;
  code *local_b0;
  undefined4 **local_a8;
  code *local_a0;
  undefined1 **local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined4 *local_78;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_70;
  char *local_68;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  longlong *local_50;
  FText local_48;
  
  this_00 = (UDynamicMesh *)0x0;
  local_118 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  pTVar14 = &local_e0;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar14 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_d0 = &local_f0;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_d0 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_150[0] = 0;
  this_01 = &local_100;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    this_01 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_150,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_150);
  }
  local_154 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_154,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_154);
  }
  bVar16 = local_154 != 0;
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  pUVar7 = local_118;
  local_b8 = local_118;
  local_c8 = local_120;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_128[0] = local_150[0];
  local_res10[0] = bVar16;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::operator=(this_01,local_d0);
  if (pUVar7 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                      L"RemapAndCombineMaterials_InvalidInput",
                      L"RemapAndCombineMaterials: TargetMesh is Null");
    lVar6 = local_c8;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_140 = (this->TextData).Reference;
    local_148 = 0x200;
    if (local_140 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140 + 8))(local_140,local_c0);
    }
    local_138 = this->Flags;
    if (lVar6 != 0) {
      if (((*(undefined2 **)(lVar6 + 0x28) <= &local_148) &&
          (&local_148 < *(undefined2 **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0xc)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar6 + 0x30);
      if (iVar8 == *(int *)(lVar6 + 0x34)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
      }
      *(int *)(lVar6 + 0x30) = iVar8 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar8 * 0x18);
      *puVar2 = (undefined1)local_148;
      puVar2[1] = local_148._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_140;
      if (local_140 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_140 + 8))(local_140,local_bc);
      }
      *(uint *)(puVar2 + 0x10) = local_138;
    }
    if (local_140 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140 + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ArrayNum = 0;
    local_110.ArrayMax = 0;
    if (local_res10[0] == '\0') {
      if ((this_01 == pTVar14) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = pTVar14->ArrayNum;
      if (iVar8 != 0) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar8,&this_01->AllocatorInstance,&this_01->ArrayNum,
                            &this_01->ArrayMax);
        memcpy((this_01->AllocatorInstance).Data + (longlong)iVar10 * 8,
               (pTVar14->AllocatorInstance).Data,(longlong)iVar8 << 3);
      }
    }
    else {
      local_130[0] = -1;
      TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_110,local_130,pTVar14->ArrayNum);
      iVar8 = pTVar14->ArrayNum;
      pUVar13 = this_00;
      if (0 < iVar8) {
        do {
          uVar12 = (uint)this_00;
          uVar15 = ~uVar12 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar12 < iVar8) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this_01->AllocatorInstance).Data;
          if (pFVar4 != pFVar4 + (longlong)this_01->ArrayNum * 8) {
            pFVar11 = pFVar4;
            do {
              if (*(longlong *)pFVar11 ==
                  *(longlong *)((pTVar14->AllocatorInstance).Data + (longlong)pUVar13 * 8)) {
                iVar8 = (int)((longlong)pFVar11 - (longlong)pFVar4 >> 3);
                if (iVar8 != -1) goto LAB_14ce0dbeb;
                break;
              }
              pFVar11 = pFVar11 + 8;
            } while (pFVar11 != pFVar4 + (longlong)this_01->ArrayNum * 8);
          }
          uVar9 = 0;
          if ((int)uVar12 < pTVar14->ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar11 = (this_01->AllocatorInstance).Data;
          pFVar4 = (pTVar14->AllocatorInstance).Data + (longlong)pUVar13 * 8;
          if (((pFVar11 <= pFVar4) && (pFVar4 < pFVar11 + (longlong)this_01->ArrayMax * 8)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = this_01->ArrayNum;
          if (iVar8 == this_01->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&this_01->AllocatorInstance,&this_01->ArrayMax);
          }
          pFVar11 = (this_01->AllocatorInstance).Data;
          this_01->ArrayNum = iVar8 + 1;
          *(undefined8 *)(pFVar11 + (longlong)iVar8 * 8) = *(undefined8 *)pFVar4;
LAB_14ce0dbeb:
          uVar9 = 0;
          if ((int)uVar12 < local_110.ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = (UDynamicMesh *)(ulonglong)(uVar12 + 1);
          *(int *)(local_110.AllocatorInstance.Data + (longlong)pUVar13 * 4) = iVar8;
          iVar8 = pTVar14->ArrayNum;
          pUVar13 = (UDynamicMesh *)((longlong)&pUVar13->_padding_ + 1);
          pUVar7 = local_b8;
        } while ((int)(uVar12 + 1) < iVar8);
      }
    }
    this_00 = pUVar7;
    local_78 = local_128;
    local_68 = local_res10;
    local_res20[0] = 1;
    local_60 = local_d0;
    local_58 = &local_110;
    local_158[0] = 0;
    local_50 = &local_c8;
    local_a8 = &local_78;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::RemapAndCombineMaterials'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
               ::Call;
    local_90 = local_res20;
    local_88 = local_158;
    local_80 = &local_b0;
    local_98 = &local_90;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_70 = pTVar14;
    UDynamicMesh::EditMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_a0,
               GeneralEdit,Unknown,false);
    if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.AllocatorInstance.Data);
    }
  }
  *local_res18 = (ulonglong)this_00;
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  return;
}

// execRemapMaterialIDs @ 14ce0ddc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execRemapMaterialIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_c8 [2];
  undefined2 local_c0;
  ITextData *local_b8;
  uint local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  longlong local_98;
  UDynamicMesh *local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined4 *local_80;
  undefined4 *local_78;
  code *local_70;
  undefined4 **local_68;
  code *local_60;
  undefined1 **local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  FText local_38;
  
  local_90 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_c8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_98 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pUVar5 = local_90;
  lVar4 = local_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a0[0] = local_res20[0];
  local_a8[0] = local_c8[0];
  if (local_90 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                      L"RemapMaterialIDs_InvalidInput",L"RemapMaterialIDs: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_b8 = (this->TextData).Reference;
    local_c0 = 0x200;
    if (local_b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8 + 8))(local_b8,local_88);
    }
    local_b0 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_c0) &&
          (&local_c0 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_c0;
      puVar1[1] = local_c0._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_b8;
      if (local_b8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8 + 8))(local_b8,local_84);
      }
      *(uint *)(puVar1 + 0x10) = local_b0;
    }
    if (local_b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8 + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_80 = local_a8;
  local_res10[0] = 1;
  local_78 = local_a0;
  local_res18[0] = 0;
  local_68 = &local_80;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
             ::Call;
  local_50 = local_res10;
  local_48 = local_res18;
  local_40 = &local_70;
  local_58 = &local_50;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  UDynamicMesh::EditMesh
            (local_90,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_60,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar5;
  return;
}

// execRemapToNewMaterialIDsByMaterial @ 14ce0e100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execRemapToNewMaterialIDsByMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FText *pFVar10;
  int iVar11;
  longlong *plVar12;
  UDynamicMesh *this;
  uint uVar13;
  UDynamicMesh *pUVar14;
  UDynamicMesh *pUVar15;
  void **ppvVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  undefined1 local_res20 [8];
  int local_148 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_140;
  undefined2 local_130;
  ITextData *local_128;
  uint local_120;
  undefined2 local_118;
  ITextData *local_110;
  uint local_108;
  int local_100;
  longlong local_f8;
  UDynamicMesh *local_f0;
  longlong local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  void **local_b0;
  UDynamicMesh *local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a0;
  longlong *local_98;
  code *local_90;
  TArray<int,TSizedDefaultAllocator<32>_> **local_88;
  code *local_80;
  undefined1 **local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  FText local_58;
  FText local_48;
  
  pUVar14 = (UDynamicMesh *)0x0;
  local_f0 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_d0 = (void *)0x0;
  local_c8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_e0 = (void *)0x0;
  local_d8 = 0;
  ppvVar16 = &local_d0;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar16 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_148[0] = 0;
  local_b0 = &local_e0;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    local_b0 = (void **)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_f8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  this = local_f0;
  iVar8 = local_148[0];
  local_100 = local_148[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8 = local_f8;
  local_a8 = local_f0;
  if (local_f0 == (UDynamicMesh *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_58,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                         L"RemapToNewMaterialIDsByMaterial_InvalidInput",
                         L"RemapToNewMaterialIDsByMaterial: TargetMesh is Null");
    lVar6 = local_e8;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar10);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_128 = (pFVar10->TextData).Reference;
    local_130 = 0x200;
    if (local_128 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128 + 8))(local_128,local_c0);
    }
    local_120 = pFVar10->Flags;
    if (lVar6 != 0) {
      if (((*(undefined2 **)(lVar6 + 0x28) <= &local_130) &&
          (&local_130 < *(undefined2 **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0xc)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar6 + 0x30);
      if (iVar8 == *(int *)(lVar6 + 0x34)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
      }
      *(int *)(lVar6 + 0x30) = iVar8 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar8 * 0x18);
      *puVar2 = (undefined1)local_130;
      puVar2[1] = local_130._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_128;
      if (local_128 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128 + 8))(local_128,local_bc);
      }
      *(uint *)(puVar2 + 0x10) = local_120;
    }
    if (local_128 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128 + 0x10))();
    }
    this = pUVar14;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  else {
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_140,*(int *)(ppvVar16 + 1),Default);
    iVar11 = *(int *)(ppvVar16 + 1);
    pUVar15 = pUVar14;
    if (0 < iVar11) {
      do {
        uVar13 = (uint)pUVar14;
        uVar17 = ~uVar13 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar13 < iVar11) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar4 = *local_b0;
        if (plVar4 != plVar4 + *(int *)(local_b0 + 1)) {
          plVar12 = plVar4;
          do {
            if (*plVar12 == *(longlong *)((longlong)*ppvVar16 + (longlong)pUVar15 * 8)) {
              iVar11 = (int)((longlong)plVar12 - (longlong)plVar4 >> 3);
              if (iVar11 != -1) {
                uVar9 = 0;
                if ((int)uVar13 < local_140.ArrayNum) {
                  uVar9 = uVar17;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(int *)(local_140.AllocatorInstance.Data + (longlong)pUVar15 * 4) = iVar11;
                goto LAB_14ce0e76d;
              }
              break;
            }
            plVar12 = plVar12 + 1;
          } while (plVar12 != plVar4 + *(int *)(local_b0 + 1));
        }
        if (iVar8 < 0) {
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_48,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                               L"RemapToNewMaterialIDsByMaterial_MaterialMissing",
                               L"RemapToNewMaterialIDsByMaterial: Material in FromMaterialList not found in ToMaterialList, skipping"
                              );
          lVar6 = local_e8;
          if (2 < (byte)LogGeometry._0_1_) {
            FText::ToString(pFVar10);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
          }
          local_110 = (pFVar10->TextData).Reference;
          local_118 = 0x201;
          if (local_110 != (ITextData *)0x0) {
            (**(code **)((longlong)*local_110 + 8))(local_110,local_b8);
          }
          local_108 = pFVar10->Flags;
          if (lVar6 != 0) {
            if (((*(undefined2 **)(lVar6 + 0x28) <= &local_118) &&
                (&local_118 <
                 *(undefined2 **)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x34) * 0xc)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = *(int *)(lVar6 + 0x30);
            if (iVar8 == *(int *)(lVar6 + 0x34)) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,(ForAnyElementType *)(lVar6 + 0x28),(int *)(lVar6 + 0x34));
            }
            *(int *)(lVar6 + 0x30) = iVar8 + 1;
            puVar2 = (undefined1 *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar8 * 0x18);
            *puVar2 = (undefined1)local_118;
            puVar2[1] = local_118._1_1_;
            *(undefined8 *)(puVar2 + 8) = 0;
            *(ITextData **)(puVar2 + 8) = local_110;
            if (local_110 != (ITextData *)0x0) {
              (**(code **)((longlong)*local_110 + 8))(local_110,local_b4);
            }
            *(uint *)(puVar2 + 0x10) = local_108;
          }
          if (local_110 != (ITextData *)0x0) {
            (**(code **)((longlong)*local_110 + 0x10))();
          }
          if (local_48.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
          }
          uVar9 = 0;
          if ((int)uVar13 < local_140.ArrayNum) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(local_140.AllocatorInstance.Data + (longlong)pUVar15 * 4) = uVar13;
          iVar8 = local_100;
        }
        else {
          uVar9 = 0;
          if ((int)uVar13 < local_140.ArrayNum) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(int *)(local_140.AllocatorInstance.Data + (longlong)pUVar15 * 4) = iVar8;
        }
LAB_14ce0e76d:
        iVar11 = *(int *)(ppvVar16 + 1);
        pUVar14 = (UDynamicMesh *)(ulonglong)(uVar13 + 1);
        this = local_a8;
        pUVar15 = (UDynamicMesh *)((longlong)&pUVar15->_padding_ + 1);
        param_3 = local_res18;
      } while ((int)(uVar13 + 1) < iVar11);
    }
    local_a0 = &local_140;
    local_res10[0] = 1;
    local_98 = &local_e8;
    local_res20[0] = 0;
    local_88 = &local_a0;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::RemapToNewMaterialIDsByMaterial'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_&>
               ::Call;
    local_70 = local_res10;
    local_68 = local_res20;
    local_60 = &local_90;
    local_78 = &local_70;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshMaterialEdit'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_80,
               GeneralEdit,Unknown,false);
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
  }
  *(UDynamicMesh **)param_3 = this;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  return;
}

// execSetAllTriangleMaterialIDs @ 14ce0f180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execSetAllTriangleMaterialIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UGeometryScriptDebug *pUVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  UDynamicMesh *this;
  bool bVar10;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UGeometryScriptDebug *local_118;
  undefined2 local_110;
  ITextData *local_108;
  uint local_100;
  undefined2 local_f8;
  ITextData *local_f0;
  uint local_e8;
  UGeometryScriptDebug *local_e0;
  UDynamicMesh *local_d8;
  byte local_d0 [8];
  longlong local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  byte local_b8 [8];
  longlong local_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  byte *local_98;
  UGeometryScriptDebug **local_90;
  code *local_88;
  byte **local_80;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_d8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_d0[0] = 0;
  local_c8 = 0;
  pTStack_c0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d0);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar10 = local_res10[0] != 0;
  local_e0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  this = local_d8;
  local_b8[0] = local_d0[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b0 = local_c8;
  local_a8 = pTStack_c0;
  if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118 = local_e0;
  if (local_d8 == (UDynamicMesh *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"SetAllTriangleMaterialIDs_InvalidMesh",
                        L"SetAllTriangleMaterialIDs: TargetMesh is Null");
    pUVar6 = local_118;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar9);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_108 = (pFVar9->TextData).Reference;
    local_110 = 0x200;
    if (local_108 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108 + 8))(local_108,local_res18);
    }
    local_100 = pFVar9->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_110) &&
          ((FScriptContainerElement *)&local_110 <
           pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      (pUVar6->Messages).ArrayNum = iVar8 + 1;
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
      *pFVar4 = local_110._0_1_;
      pFVar4[1] = local_110._1_1_;
      *(undefined8 *)(pFVar4 + 8) = 0;
      *(ITextData **)(pFVar4 + 8) = local_108;
      if (local_108 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108 + 8))(local_108,local_res20);
      }
      *(uint *)(pFVar4 + 0x10) = local_100;
    }
    if (local_108 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108 + 0x10))();
    }
    this = (UDynamicMesh *)0x0;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  else if (local_c8 == 0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"SetAllTriangleMaterialIDs_InvalidList",
                        L"SetAllTriangleMaterialIDs: TriangleMaterialIDList is Null");
    pUVar6 = local_118;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar9);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_f0 = (pFVar9->TextData).Reference;
    local_f8 = 0x200;
    if (local_f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0 + 8))(local_f0,local_a0);
    }
    local_e8 = pFVar9->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 <
           pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      (pUVar6->Messages).ArrayNum = iVar8 + 1;
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
      *pFVar4 = local_f8._0_1_;
      pFVar4[1] = local_f8._1_1_;
      *(undefined8 *)(pFVar4 + 8) = 0;
      *(ITextData **)(pFVar4 + 8) = local_f0;
      if (local_f0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0 + 8))(local_f0,local_9c);
      }
      *(uint *)(pFVar4 + 0x10) = local_e8;
    }
    if (local_f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0 + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  else if ((local_d0[0] & 0xfb) == 0) {
    if ((*(int *)(local_c8 + 8) == 0) && (bVar7 = UDynamicMesh::IsEmpty(local_d8), !bVar7)) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                          L"SetAllTriangleMaterialIDs_EmptyList",
                          L"SetAllTriangleMaterialIDs: TriangleMaterialIDList is empty");
      UE::Geometry::AppendWarning(local_118,InvalidInputs,pFVar9);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
    local_98 = local_b8;
    local_90 = &local_118;
    local_80 = &local_98;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_88,
               GeneralEdit,Unknown,bVar10);
  }
  else {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"SetAllTriangleMaterialIDs_InvalidList2",
                        L"SetAllTriangleMaterialIDs: TriangleMaterialIDList has incompatible index type"
                       );
    UE::Geometry::AppendError(local_118,InvalidInputs,pFVar9);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  return;
}

// execSetMaterialIDForMeshSelection @ 14ce10a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execSetMaterialIDForMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  FText *this;
  UDynamicMesh *pUVar6;
  bool bVar7;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined2 local_b8;
  ITextData *local_b0;
  uint local_a8;
  longlong local_a0;
  UDynamicMesh *local_98 [2];
  FGeometryScriptMeshSelection local_88;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  FGeometrySelection **local_70;
  undefined4 *local_68;
  code *local_60;
  FGeometrySelection ***local_58;
  FGeometrySelection *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FText local_38;
  
  local_98[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_88);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar7 = local_res10[0] != 0;
  local_a0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  pUVar6 = local_98[0];
  lVar4 = local_a0;
  local_48 = local_88.GeoSelection.Object;
  pTStack_40 = local_88.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_88.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res20[0] = local_res18[0];
  if (local_98[0] == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                      L"SetMaterialIDForMeshSelection_InvalidMesh",
                      L"SetMaterialIDForMeshSelection: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_b0 = (this->TextData).Reference;
    local_b8 = 0x200;
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 8))(local_b0,local_78);
    }
    local_a8 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_b8) &&
          (&local_b8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)(lVar4 + 0x30);
      if (iVar5 == *(int *)(lVar4 + 0x34)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar5 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar5 * 0x18);
      *puVar1 = (undefined1)local_b8;
      puVar1[1] = local_b8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_b0;
      if (local_b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0 + 8))(local_b0,local_74);
      }
      *(uint *)(puVar1 + 0x10) = local_a8;
    }
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 0x10))();
    }
    pUVar6 = (UDynamicMesh *)0x0;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
    local_70 = &local_48;
    local_68 = local_res20;
    local_58 = &local_70;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (local_98[0],(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_60,
               GeneralEdit,Unknown,bVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  *(UDynamicMesh **)param_3 = pUVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSetMaterialIDOnTriangles @ 14ce10da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execSetMaterialIDOnTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UGeometryScriptDebug *pUVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  UDynamicMesh *this;
  bool bVar10;
  char local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined2 local_138;
  ITextData *local_130;
  uint local_128;
  undefined2 local_120;
  ITextData *local_118;
  uint local_110;
  undefined4 local_108 [2];
  UGeometryScriptDebug *local_100;
  UDynamicMesh *local_f8;
  byte local_f0 [8];
  longlong local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  byte local_d8 [8];
  longlong local_d0;
  TReferenceControllerBase<1> *local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  code *local_b0;
  byte **local_a8;
  byte *local_a0;
  char *local_98;
  undefined4 *local_90;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_f8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_f0[0] = 0;
  local_e8 = 0;
  pTStack_e0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f0);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar10 = local_res18[0] != 0;
  local_100 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  this = local_f8;
  pUVar6 = local_100;
  local_d8[0] = local_f0[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d0 = local_e8;
  local_c8 = pTStack_e0;
  if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_e0->SharedReferenceCount = (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108[0] = local_res20[0];
  if (local_f8 == (UDynamicMesh *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                        L"SetMaterialIDOnTriangles_InvalidMesh",
                        L"SetMaterialIDOnTriangles: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar9);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_130 = (pFVar9->TextData).Reference;
    local_138 = 0x200;
    if (local_130 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130 + 8))(local_130,local_c0);
    }
    local_128 = pFVar9->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 <
           pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      (pUVar6->Messages).ArrayNum = iVar8 + 1;
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
      *pFVar4 = local_138._0_1_;
      pFVar4[1] = local_138._1_1_;
      *(undefined8 *)(pFVar4 + 8) = 0;
      *(ITextData **)(pFVar4 + 8) = local_130;
      if (local_130 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130 + 8))(local_130,local_bc);
      }
      *(uint *)(pFVar4 + 0x10) = local_128;
    }
    if (local_130 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130 + 0x10))();
    }
    this = (UDynamicMesh *)0x0;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  else {
    if (local_e8 == 0) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                          L"SetMaterialIDOnTriangles_InvalidList",
                          L"SetMaterialIDOnTriangles: TriangleIDList is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar9);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_118 = (pFVar9->TextData).Reference;
      local_120 = 0x200;
      if (local_118 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118 + 8))(local_118,local_b8);
      }
      local_110 = pFVar9->Flags;
      if (pUVar6 != (UGeometryScriptDebug *)0x0) {
        pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_120) &&
            ((FScriptContainerElement *)&local_120 <
             pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (pUVar6->Messages).ArrayNum;
        piVar1 = &(pUVar6->Messages).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
        }
        (pUVar6->Messages).ArrayNum = iVar8 + 1;
        pFVar4 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
        *pFVar4 = local_120._0_1_;
        pFVar4[1] = local_120._1_1_;
        *(undefined8 *)(pFVar4 + 8) = 0;
        *(ITextData **)(pFVar4 + 8) = local_118;
        if (local_118 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118 + 8))(local_118,local_b4);
        }
        *(uint *)(pFVar4 + 0x10) = local_110;
      }
      local_68.TextData.Reference = local_78.TextData.Reference;
      if (local_118 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118 + 0x10))();
        local_68.TextData.Reference = local_78.TextData.Reference;
      }
    }
    else if (local_f0[0] < 2) {
      if ((*(int *)(local_e8 + 8) == 0) && (bVar7 = UDynamicMesh::IsEmpty(local_f8), !bVar7)) {
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                            L"SetMaterialIDOnTriangles_EmptyList",
                            L"SetMaterialIDOnTriangles: TriangleIDList is empty");
        UE::Geometry::AppendWarning(pUVar6,InvalidInputs,pFVar9);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
      local_a0 = local_d8;
      local_res10[0] = '\0';
      local_98 = local_res10;
      local_90 = local_108;
      local_a8 = &local_a0;
      local_b0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_b0,
                 GeneralEdit,Unknown,bVar10);
      if (local_res10[0] != '\x01') goto LAB_14ce11357;
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                          L"SetMaterialIDOnTriangles_InvalidTriangles",
                          L"SetMaterialIDOnTriangles: TriangleIDList has invalid triangles");
      UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar9);
      local_68.TextData.Reference = local_48.TextData.Reference;
    }
    else {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"UGeometryScriptLibrary_MeshMaterialFunctions",
                          L"SetMaterialIDOnTriangles_InvalidList2",
                          L"SetMaterialIDOnTriangles: TriangleIDList has incompatible index type");
      UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar9);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
LAB_14ce11357:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
  return;
}

// execSetPolygroupMaterialID @ 14ce11390

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execSetPolygroupMaterialID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  undefined8 local_88;
  UDynamicMesh *local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 **local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  uchar *local_38;
  
  local_80 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_a0 = CONCAT31(local_a0._1_3_,1);
  uStack_9c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_88 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pUVar2 = local_80;
  local_70 = local_88;
  local_90[0] = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98[0] = local_a8[0];
  local_78 = CONCAT44(uStack_9c,local_a0);
  *puVar3 = '\0';
  if (local_80 != (UDynamicMesh *)0x0) {
    local_58 = &local_78;
    local_50 = &local_70;
    local_48 = local_98;
    local_40 = local_90;
    local_60 = &local_58;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_38 = puVar3;
    UDynamicMesh::EditMesh
              (local_80,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execSetTriangleMaterialID @ 14ce13750

void __cdecl
UGeometryScriptLibrary_MeshMaterialFunctions::execSetTriangleMaterialID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  UDynamicMesh *local_60;
  code *local_58;
  undefined4 **local_50;
  undefined4 *local_48;
  uchar *local_40;
  undefined4 *local_38;
  
  local_60 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_78[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar2 = local_60;
  bVar4 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68[0] = local_res20[0];
  local_70[0] = local_78[0];
  *puVar3 = '\0';
  if (local_60 != (UDynamicMesh *)0x0) {
    local_48 = local_70;
    local_38 = local_68;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_40 = puVar3;
    UDynamicMesh::EditMesh
              (local_60,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_58,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

