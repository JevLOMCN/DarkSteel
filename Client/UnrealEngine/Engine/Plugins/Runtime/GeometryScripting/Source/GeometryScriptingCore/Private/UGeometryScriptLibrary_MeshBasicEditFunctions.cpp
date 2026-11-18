// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 58

// StaticClass @ 14cd97490

UClass * __cdecl UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshBasicEditFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshBasicEditFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshBasicEditFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshBasicEditFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshBasicEditFunctions @ 14cda5e80

UGeometryScriptLibrary_MeshBasicEditFunctions * __thiscall
UGeometryScriptLibrary_MeshBasicEditFunctions::UGeometryScriptLibrary_MeshBasicEditFunctions
          (UGeometryScriptLibrary_MeshBasicEditFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBasicEditFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshBasicEditFunctions @ 14cda5eb0

UGeometryScriptLibrary_MeshBasicEditFunctions * __thiscall
UGeometryScriptLibrary_MeshBasicEditFunctions::UGeometryScriptLibrary_MeshBasicEditFunctions
          (UGeometryScriptLibrary_MeshBasicEditFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBasicEditFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshBasicEditFunctions @ 14cda6a60

void __thiscall
UGeometryScriptLibrary_MeshBasicEditFunctions::~UGeometryScriptLibrary_MeshBasicEditFunctions
          (UGeometryScriptLibrary_MeshBasicEditFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBasicEditFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdaa850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  FDynamicMeshAttributeSet *pFVar5;
  longlong *plVar6;
  longlong lVar7;
  TDynamicMeshOverlay<float,4> *this_00;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FDynamicMeshAttributeSet *pFVar12;
  FText *pFVar13;
  TRefCountPtr<ITextData> TVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  TDynamicMeshOverlay<float,3> *this_01;
  TDynamicMeshOverlay<float,2> *this_02;
  ForAnyElementType *pFVar24;
  longlong lVar25;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b8;
  uint local_1a8 [2];
  longlong local_1a0;
  longlong local_198;
  undefined8 local_188;
  ForAnyElementType *local_178;
  longlong local_170;
  TDynamicMeshOverlay<float,2> *local_168;
  longlong local_160;
  float local_158;
  float local_154;
  FIndex3i_u_0 local_150;
  float local_144;
  float local_140;
  float local_13c;
  FIndex3i_u_0 local_138;
  FIndex3i_u_0 local_12c;
  FIndex3i_u_0 local_120 [2];
  undefined8 local_108;
  undefined8 uStack_100;
  TVector<double>_u_0 local_f8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  TVector2<float>_u_0 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  longlong local_b8 [8];
  FText local_78;
  FText local_68;
  FText local_58;
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  if ((param_1->TriangleGroups).bIsSet == false) {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(param_1,0);
  }
  pFVar5 = (param_1->AttributeSet).Ptr;
  pFVar12 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar12 = pFVar5;
  }
  if ((pFVar12->MaterialIDAttrib).Ptr == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar5);
  }
  pFVar5 = (param_1->AttributeSet).Ptr;
  pFVar12 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar12 = pFVar5;
  }
  local_168 = (TDynamicMeshOverlay<float,2> *)(pFVar12->MaterialIDAttrib).Ptr;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  uVar22 = *(uint *)(*(longlong *)this + 8);
  lVar19 = (longlong)(int)uVar22;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_1b8,uVar22,Default);
  uVar17 = 0;
  local_1a0 = lVar19;
  if (0 < (int)uVar22) {
    lVar20 = 0;
    lVar25 = 0;
    do {
      plVar6 = *(longlong **)this;
      uVar23 = 0;
      if ((int)uVar17 < (int)plVar6[1]) {
        uVar23 = ~uVar17 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *plVar6;
      local_c0 = 0;
      local_be = 0;
      pdVar2 = (double *)(lVar7 + lVar25);
      local_f8._s_0.X = *pdVar2;
      local_f8._s_0.Y = pdVar2[1];
      local_f8._s_0.Z = *(double *)(lVar7 + 0x10 + lVar25);
      local_d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_e0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      iVar10 = UE::Geometry::FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_f8._s_0);
      uVar23 = 0;
      if ((int)uVar17 < local_1b8.ArrayNum) {
        uVar23 = ~uVar17 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = uVar17 + 1;
      lVar25 = lVar25 + 0x18;
      *(int *)(local_1b8.AllocatorInstance.Data + lVar20 * 4) = iVar10;
      lVar20 = lVar20 + 1;
    } while (lVar20 < lVar19);
  }
  lVar19 = *(longlong *)((longlong)this + 8);
  if ((*(longlong *)(lVar19 + 8) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar17 = 0;
  pFVar24 = *(ForAnyElementType **)(lVar19 + 8);
  iVar10 = *(int *)(*(longlong *)this + 0xb8);
  local_198 = (longlong)iVar10;
  iVar16 = param_1->GroupIDCounter;
  iVar18 = *(int *)(*(longlong *)this + 200);
  param_1->GroupIDCounter = iVar16 + 1;
  local_178 = pFVar24;
  if (0 < iVar10) {
    lVar19 = 0;
    local_170 = 0;
    local_160 = (longlong)iVar18;
    do {
      lVar20 = local_170;
      iVar10 = iVar16;
      if (local_160 == local_198) {
        lVar25 = *(longlong *)this;
        uVar23 = 0;
        if ((int)uVar17 < *(int *)(lVar25 + 200)) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = *(int *)(*(longlong *)(lVar25 + 0xc0) + lVar19 * 4);
      }
      lVar25 = *(longlong *)this;
      uVar23 = 0;
      if ((int)uVar17 < *(int *)(lVar25 + 0xb8)) {
        uVar23 = ~uVar17 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar25 = *(longlong *)(lVar25 + 0xb0);
      uVar23 = *(uint *)(lVar25 + 8 + lVar20);
      local_188 = *(undefined8 *)(lVar25 + lVar20);
      uVar21 = 0;
      if ((int)uVar23 < local_1b8.ArrayNum) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar18 = *(int *)(local_1b8.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
      lVar20 = (longlong)(int)local_188._4_4_;
      uVar23 = 0;
      if ((int)local_188._4_4_ < local_1b8.ArrayNum) {
        uVar23 = ~local_188._4_4_ >> 0x1f;
      }
      iVar15 = local_1b8.ArrayNum;
      if (uVar23 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = local_1b8.ArrayNum;
      }
      iVar4 = *(int *)(local_1b8.AllocatorInstance.Data + lVar20 * 4);
      lVar20 = (longlong)(int)(uint)local_188;
      uVar23 = 0;
      if ((int)(uint)local_188 < iVar15) {
        uVar23 = ~(uint)local_188 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_150._s_0.A = *(undefined4 *)(local_1b8.AllocatorInstance.Data + lVar20 * 4);
      local_150._s_0.B = iVar4;
      local_150._s_0.C = iVar18;
      local_1a8[0] = UE::Geometry::FDynamicMesh3::AppendTriangle
                               (param_1,(FIndex3i *)&local_150._s_0,iVar10);
      if ((int)local_1a8[0] < 0) {
        if (local_1a8[0] == 0xfffffffe) {
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_78,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                               L"AppendBuffersToMesh_NonManifold",
                               L"AppendBuffersToMesh: Triangle cannot be added because it would create invalid Non-Manifold Mesh Topology"
                              );
          UE::Geometry::AppendError
                    ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),InvalidInputs,
                     pFVar13);
          TVar14.Reference = local_78.TextData.Reference;
        }
        else if (local_1a8[0] == 0xfffffffd) {
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_68,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                               L"AppendBuffersToMesh_Duplicate",
                               L"AppendBuffersToMesh: Triangle cannot be added because it is a duplicate of an existing Triangle"
                              );
          UE::Geometry::AppendError
                    ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),InvalidInputs,
                     pFVar13);
          TVar14.Reference = local_68.TextData.Reference;
        }
        else {
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_58,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                               L"AppendBuffersToMesh_Unknown",
                               L"AppendBuffersToMesh: adding Triangle Failed");
          UE::Geometry::AppendError
                    ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),
                     OperationFailed,pFVar13);
          TVar14.Reference = local_58.TextData.Reference;
        }
        if (TVar14.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar14.Reference + 0x10))();
        }
        local_1a8[0] = 0xffffffff;
      }
      else {
        *(undefined4 *)
         (*(longlong *)
           (*(longlong *)&(local_168->ElementsRefCounts).FreeIndices +
           (ulonglong)(local_1a8[0] >> 9) * 8) + (ulonglong)(local_1a8[0] & 0x1ff) * 4) =
             **(undefined4 **)((longlong)this + 0x18);
      }
      piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
      if (((pFVar24->Data <= (FScriptContainerElement *)local_1a8) &&
          ((FScriptContainerElement *)local_1a8 < pFVar24->Data + (longlong)*piVar1 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = *(int *)&pFVar24[1].Data;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar24,piVar1);
      }
      local_170 = local_170 + 0xc;
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 1;
      *(int *)&pFVar24[1].Data = iVar10 + 1;
      *(uint *)(pFVar24->Data + (longlong)iVar10 * 4) = local_1a8[0];
    } while (lVar19 < local_198);
  }
  if (*(uint *)(*(longlong *)this + 0x18) == uVar22) {
    pFVar5 = (param_1->AttributeSet).Ptr;
    pFVar12 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar12 = pFVar5;
    }
    if ((pFVar12->NormalLayers).Array.ArrayNum < 1) {
      this_01 = (TDynamicMeshOverlay<float,3> *)0x0;
    }
    else {
      this_01 = *(TDynamicMeshOverlay<float,3> **)
                 (pFVar12->NormalLayers).Array.AllocatorInstance.Data;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_1b8,uVar22,Default);
    lVar19 = local_1a0;
    uVar17 = 0;
    if (0 < local_1a0) {
      lVar20 = 0;
      lVar25 = 0;
      do {
        lVar7 = *(longlong *)this;
        uVar23 = 0;
        if ((int)uVar17 < *(int *)(lVar7 + 0x18)) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)(lVar7 + 0x10);
        local_13c = (float)*(double *)(lVar25 + 0x10 + lVar7);
        local_140 = (float)*(double *)(lVar25 + 8 + lVar7);
        local_144 = (float)*(double *)(lVar25 + lVar7);
        iVar10 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(this_01,&local_144);
        uVar23 = 0;
        if ((int)uVar17 < local_1b8.ArrayNum) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar17 = uVar17 + 1;
        lVar25 = lVar25 + 0x18;
        *(int *)(local_1b8.AllocatorInstance.Data + lVar20 * 4) = iVar10;
        lVar20 = lVar20 + 1;
        pFVar24 = local_178;
      } while (lVar20 < lVar19);
    }
    uVar17 = 0;
    if (0 < local_198) {
      lVar19 = 0;
      lVar20 = 0;
      do {
        uVar21 = ~uVar17 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar17 < *(int *)&pFVar24[1].Data) {
          uVar23 = uVar21;
        }
        if ((uVar23 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (-1 < *(int *)(pFVar24->Data + lVar19 * 4)) {
          lVar25 = *(longlong *)this;
          uVar23 = 0;
          if ((int)uVar17 < *(int *)(lVar25 + 0xb8)) {
            uVar23 = uVar21;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar25 = *(longlong *)(lVar25 + 0xb0);
          uVar23 = *(uint *)(lVar25 + 8 + lVar20);
          local_188 = *(undefined8 *)(lVar25 + lVar20);
          uVar11 = 0;
          if ((int)uVar23 < local_1b8.ArrayNum) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar10 = *(int *)(local_1b8.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
          lVar25 = (longlong)(int)local_188._4_4_;
          uVar23 = 0;
          if ((int)local_188._4_4_ < local_1b8.ArrayNum) {
            uVar23 = ~local_188._4_4_ >> 0x1f;
          }
          iVar16 = local_1b8.ArrayNum;
          if (uVar23 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar16 = local_1b8.ArrayNum;
          }
          iVar18 = *(int *)(local_1b8.AllocatorInstance.Data + lVar25 * 4);
          lVar25 = (longlong)(int)(uint)local_188;
          uVar23 = 0;
          if ((int)(uint)local_188 < iVar16) {
            uVar23 = ~(uint)local_188 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar24 = local_178;
          local_138._s_0.A = *(undefined4 *)(local_1b8.AllocatorInstance.Data + lVar25 * 4);
          uVar23 = 0;
          if ((int)uVar17 < *(int *)&local_178[1].Data) {
            uVar23 = uVar21;
          }
          local_138._s_0.B = iVar18;
          local_138._s_0.C = iVar10;
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                    (this_01,*(int *)(pFVar24->Data + lVar19 * 4),(FIndex3i *)&local_138._s_0,true);
        }
        uVar17 = uVar17 + 1;
        lVar19 = lVar19 + 1;
        lVar20 = lVar20 + 0xc;
      } while (lVar19 < local_198);
    }
  }
  iVar10 = 0;
  lVar19 = *(longlong *)this;
  local_b8[0] = lVar19 + 0x20;
  local_b8[1] = lVar19 + 0x30;
  local_b8[2] = lVar19 + 0x40;
  local_b8[3] = lVar19 + 0x50;
  local_b8[4] = lVar19 + 0x60;
  local_b8[5] = lVar19 + 0x70;
  local_b8[6] = lVar19 + 0x80;
  local_b8[7] = lVar19 + 0x90;
  lVar19 = 0;
  do {
    if (*(uint *)(local_b8[lVar19] + 8) != uVar22) break;
    iVar10 = iVar10 + 1;
    lVar19 = lVar19 + 1;
  } while (lVar19 < 8);
  (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xb0))();
  iVar16 = 0;
  if (0 < iVar10) {
    local_160 = (longlong)iVar10;
    local_170 = 0;
    do {
      lVar19 = local_170;
      pFVar5 = (param_1->AttributeSet).Ptr;
      pFVar12 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar12 = pFVar5;
      }
      if ((iVar16 < (pFVar12->UVLayers).Array.ArrayNum) && (-1 < iVar16)) {
        if ((iVar16 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_02 = *(TDynamicMeshOverlay<float,2> **)
                   ((pFVar12->UVLayers).Array.AllocatorInstance.Data + lVar19 * 8);
      }
      else {
        this_02 = (TDynamicMeshOverlay<float,2> *)0x0;
      }
      lVar19 = local_1a0;
      local_168 = this_02;
      if (local_1b8.ArrayNum < (int)uVar22) {
        iVar18 = uVar22 - local_1b8.ArrayNum;
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar18,&local_1b8.AllocatorInstance,&local_1b8.ArrayNum,
                            &local_1b8.ArrayMax);
        memset(local_1b8.AllocatorInstance.Data + (longlong)iVar10 * 4,0,(longlong)iVar18 << 2);
      }
      else {
        if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
        }
        if ((int)uVar22 < local_1b8.ArrayNum) {
          uVar17 = local_1b8.ArrayNum - uVar22;
          if (((int)(uVar17 | uVar22) < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (uVar17 != 0) {
            iVar10 = (local_1b8.ArrayNum - uVar17) - uVar22;
            if (iVar10 != 0) {
              memmove(local_1b8.AllocatorInstance.Data + lVar19 * 4,
                      local_1b8.AllocatorInstance.Data + lVar19 * 4 + (longlong)(int)uVar17 * 4,
                      (longlong)iVar10 << 2);
            }
            iVar10 = local_1b8.ArrayNum - uVar17;
            local_1b8.ArrayNum = iVar10;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&local_1b8.AllocatorInstance,iVar10,&local_1b8.ArrayMax);
          }
        }
      }
      lVar19 = local_170;
      uVar17 = 0;
      lVar20 = 0;
      if (0 < local_1a0) {
        lVar25 = 0;
        do {
          plVar6 = (longlong *)local_b8[lVar19];
          uVar23 = 0;
          if ((int)uVar17 < (int)plVar6[1]) {
            uVar23 = ~uVar17 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *plVar6;
          local_154 = (float)*(double *)(lVar25 + 8 + lVar7);
          local_158 = (float)*(double *)(lVar25 + lVar7);
          iVar10 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this_02,&local_158);
          uVar23 = 0;
          if ((int)uVar17 < local_1b8.ArrayNum) {
            uVar23 = ~uVar17 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar17 = uVar17 + 1;
          lVar25 = lVar25 + 0x10;
          *(int *)(local_1b8.AllocatorInstance.Data + lVar20 * 4) = iVar10;
          lVar20 = lVar20 + 1;
          pFVar24 = local_178;
        } while (lVar20 < local_1a0);
      }
      uVar17 = 0;
      lVar19 = 0;
      if (0 < local_198) {
        lVar20 = 0;
        do {
          uVar21 = ~uVar17 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar17 < *(int *)&pFVar24[1].Data) {
            uVar23 = uVar21;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (-1 < *(int *)(pFVar24->Data + lVar19 * 4)) {
            lVar25 = *(longlong *)this;
            uVar23 = 0;
            if ((int)uVar17 < *(int *)(lVar25 + 0xb8)) {
              uVar23 = uVar21;
            }
            if ((uVar23 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar25 = *(longlong *)(lVar25 + 0xb0);
            uVar23 = *(uint *)(lVar25 + 8 + lVar20);
            local_188 = *(undefined8 *)(lVar25 + lVar20);
            uVar11 = 0;
            if ((int)uVar23 < local_1b8.ArrayNum) {
              uVar11 = ~uVar23 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar10 = *(int *)(local_1b8.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
            lVar25 = (longlong)(int)local_188._4_4_;
            uVar23 = 0;
            if ((int)local_188._4_4_ < local_1b8.ArrayNum) {
              uVar23 = ~local_188._4_4_ >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar18 = *(int *)(local_1b8.AllocatorInstance.Data + lVar25 * 4);
            lVar25 = (longlong)(int)(uint)local_188;
            uVar23 = 0;
            if ((int)(uint)local_188 < local_1b8.ArrayNum) {
              uVar23 = ~(uint)local_188 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar24 = local_178;
            local_12c._s_0.A = *(undefined4 *)(local_1b8.AllocatorInstance.Data + lVar25 * 4);
            uVar23 = 0;
            if ((int)uVar17 < *(int *)&local_178[1].Data) {
              uVar23 = uVar21;
            }
            local_12c._s_0.B = iVar18;
            local_12c._s_0.C = iVar10;
            if ((uVar23 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                      (local_168,*(int *)(pFVar24->Data + lVar19 * 4),(FIndex3i *)&local_12c._s_0,
                       true);
          }
          uVar17 = uVar17 + 1;
          lVar19 = lVar19 + 1;
          lVar20 = lVar20 + 0xc;
        } while (lVar19 < local_198);
      }
      iVar16 = iVar16 + 1;
      local_170 = local_170 + 1;
    } while (local_170 < local_160);
  }
  if (*(uint *)(*(longlong *)this + 0xa8) == uVar22) {
    pFVar5 = (param_1->AttributeSet).Ptr;
    pFVar12 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar12 = pFVar5;
    }
    UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar12);
    pFVar5 = (param_1->AttributeSet).Ptr;
    pFVar12 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar12 = pFVar5;
    }
    this_00 = (TDynamicMeshOverlay<float,4> *)(pFVar12->ColorLayer).Ptr;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_1b8,uVar22,Default);
    lVar19 = local_1a0;
    uVar22 = 0;
    if (0 < local_1a0) {
      lVar20 = 0;
      lVar25 = 0;
      do {
        lVar7 = *(longlong *)this;
        uVar17 = 0;
        if ((int)uVar22 < *(int *)(lVar7 + 0xa8)) {
          uVar17 = ~uVar22 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar3 = (undefined8 *)(lVar25 + *(longlong *)(lVar7 + 0xa0));
        local_108 = *puVar3;
        uStack_100 = puVar3[1];
        iVar10 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement
                           (this_00,(float *)&local_108);
        uVar17 = 0;
        if ((int)uVar22 < local_1b8.ArrayNum) {
          uVar17 = ~uVar22 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar22 = uVar22 + 1;
        lVar25 = lVar25 + 0x10;
        *(int *)(local_1b8.AllocatorInstance.Data + lVar20 * 4) = iVar10;
        lVar20 = lVar20 + 1;
        pFVar24 = local_178;
      } while (lVar20 < lVar19);
    }
    uVar22 = 0;
    if (0 < local_198) {
      lVar19 = 0;
      lVar20 = 0;
      do {
        uVar23 = ~uVar22 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar22 < *(int *)&pFVar24[1].Data) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (-1 < *(int *)(pFVar24->Data + lVar19 * 4)) {
          lVar25 = *(longlong *)this;
          uVar17 = 0;
          if ((int)uVar22 < *(int *)(lVar25 + 0xb8)) {
            uVar17 = uVar23;
          }
          if ((uVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar25 = *(longlong *)(lVar25 + 0xb0);
          uVar17 = *(uint *)(lVar25 + 8 + lVar20);
          local_188 = *(undefined8 *)(lVar25 + lVar20);
          uVar21 = 0;
          if ((int)uVar17 < local_1b8.ArrayNum) {
            uVar21 = ~uVar17 >> 0x1f;
          }
          if (uVar21 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar10 = *(int *)(local_1b8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
          lVar25 = (longlong)(int)local_188._4_4_;
          uVar17 = 0;
          if ((int)local_188._4_4_ < local_1b8.ArrayNum) {
            uVar17 = ~local_188._4_4_ >> 0x1f;
          }
          iVar16 = local_1b8.ArrayNum;
          if (uVar17 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar16 = local_1b8.ArrayNum;
          }
          iVar18 = *(int *)(local_1b8.AllocatorInstance.Data + lVar25 * 4);
          lVar25 = (longlong)(int)(uint)local_188;
          uVar17 = 0;
          if ((int)(uint)local_188 < iVar16) {
            uVar17 = ~(uint)local_188 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar24 = local_178;
          local_120[0]._0_4_ = *(undefined4 *)(local_1b8.AllocatorInstance.Data + lVar25 * 4);
          uVar17 = 0;
          if ((int)uVar22 < *(int *)&local_178[1].Data) {
            uVar17 = uVar23;
          }
          local_120[0]._4_4_ = iVar18;
          local_120[0]._8_4_ = iVar10;
          if ((uVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                    (this_00,*(int *)(pFVar24->Data + lVar19 * 4),(FIndex3i *)&local_120[0]._s_0,
                     true);
        }
        uVar22 = uVar22 + 1;
        lVar19 = lVar19 + 1;
        lVar20 = lVar20 + 0xc;
      } while (lVar19 < local_198);
    }
  }
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cdb42b0

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVertexPair'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_res8 [8];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined1 local_90;
  void *local_50;
  void *local_30;
  char local_18;
  
  if (*(char *)((longlong)this + 0x10) != '\0') {
    bVar1 = UE::Geometry::FDynamicMesh3::IsBoundaryVertex(param_1,*(int *)this);
    if (!bVar1) {
      return;
    }
    bVar1 = UE::Geometry::FDynamicMesh3::IsBoundaryVertex(param_1,*(int *)((longlong)this + 4));
    if (!bVar1) {
      return;
    }
  }
  local_res8[0] = *(undefined1 *)((longlong)this + 0x11);
  local_d0 = 0;
  local_90 = 0;
  local_18 = '\0';
  iVar2 = (**(code **)(param_1->_padding_ + 0xa8))
                    (param_1,*(undefined4 *)this,*(undefined4 *)((longlong)this + 4),
                     *(undefined8 *)((longlong)this + 8),local_res8,local_d8);
  *(bool *)*(undefined8 *)((longlong)this + 0x18) = iVar2 == 0;
  if (local_18 != '\0') {
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
  }
  return;
}

// operator() @ 14cdb4390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVerticesInSelections'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  longlong *plVar9;
  double dVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  byte bVar17;
  longlong lVar18;
  uint *puVar19;
  ForElementType<FSetElementId> FVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_4b8 [32];
  undefined1 *local_498;
  undefined1 local_488;
  undefined1 local_487;
  undefined1 local_486 [2];
  int local_484;
  uint local_480;
  int local_47c;
  uint local_478 [2];
  uint local_470 [2];
  longlong *local_468;
  int iStack_460;
  uint uStack_45c;
  TBitArray<FDefaultBitArrayAllocator> *local_458;
  undefined4 uStack_450;
  uint uStack_44c;
  int local_448;
  undefined4 uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  longlong *local_438;
  undefined8 uStack_430;
  TBitArray<FDefaultBitArrayAllocator> *local_428;
  undefined4 uStack_420;
  uint uStack_41c;
  uint local_418;
  undefined4 uStack_414;
  int iStack_410;
  undefined4 uStack_40c;
  FDynamicMesh3 *local_408;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  TPairInitializer<int_const_&,TTuple<int,double>_&&> local_3f0;
  void *local_3e0;
  longlong *local_3d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d0;
  undefined8 uStack_3b0;
  longlong *local_3a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a0;
  undefined8 uStack_380;
  longlong *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_370;
  undefined8 uStack_350;
  code *local_348;
  FDynamicMesh3 **local_340;
  uint local_338 [2];
  double local_330;
  uint *local_328;
  uint *local_320;
  code *local_318;
  FDynamicMesh3 **local_310;
  FDynamicMesh3 *local_308;
  undefined1 *local_300;
  undefined2 local_2f8;
  FDynamicMesh3 *local_2f0;
  undefined8 local_2e8;
  undefined1 *local_2e0;
  undefined2 local_2d8;
  undefined1 local_2c8 [8];
  undefined8 local_2c0;
  undefined1 local_280;
  void *local_240;
  void *local_220;
  char local_208;
  undefined4 local_1dc;
  undefined4 local_1bc;
  undefined4 local_19c;
  undefined1 local_198 [32];
  uint *local_178;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  undefined1 local_160 [8];
  ForElementType<FSetElementId> local_158;
  int local_150;
  undefined1 local_148 [32];
  uint *local_128;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  local_300 = local_148;
  local_2f8 = *(undefined2 *)((longlong)this + 0x18);
  local_310 = &local_308;
  local_148._0_8_ = 0;
  local_318 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVerticesInSelections'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  local_148._8_8_ = 0;
  local_128 = (uint *)0x0;
  local_120 = 0;
  local_11c = 0x80;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = (ForElementType<FSetElementId>)0x0;
  local_100 = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_d8 = (uint *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  local_408 = param_1;
  local_3e0 = this;
  local_308 = param_1;
  FGeometryScriptMeshSelection::ProcessByVertexID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_318,false);
  local_2e8 = *(undefined8 *)this;
  local_2e0 = local_148;
  local_2d8 = *(undefined2 *)((longlong)this + 0x18);
  local_340 = &local_2f0;
  local_348 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVerticesInSelections'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void,int>
              ::Call;
  local_2f0 = param_1;
  FGeometryScriptMeshSelection::ProcessByVertexID
            (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_348,false);
  local_47c = 0;
  do {
    uVar24 = local_120;
    uVar23 = 0;
    uVar15 = 1;
    dVar6 = *(double *)((longlong)this + 0x28) * *(double *)((longlong)this + 0x28);
    local_484 = 0;
    local_198._0_8_ = 0;
    local_198._8_8_ = 0;
    local_178 = (uint *)0x0;
    local_170 = 0;
    local_16c = 0x80;
    local_168 = 0xffffffff;
    local_164 = 0;
    local_158 = (ForElementType<FSetElementId>)0x0;
    local_150 = 0;
    uStack_41c = uVar23;
    local_418 = uVar23;
    if (local_120 != 0) {
      puVar19 = (uint *)(local_148 + 0x10);
      if (local_128 != (uint *)0x0) {
        puVar19 = local_128;
      }
      uVar22 = *puVar19;
      local_418 = 0;
      uVar23 = 0;
      while (uVar22 == 0) {
        lVar18 = (longlong)(int)uVar23;
        local_418 = local_418 + 0x20;
        uVar23 = uVar23 + 1;
        uStack_41c = local_120;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar23)
        goto LAB_14cdb4600;
        uVar22 = puVar19[lVar18 + 1];
      }
      uVar15 = -uVar22 & uVar22;
      uVar4 = (ulonglong)uVar15 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_400 = (int)lVar18;
      uStack_41c = local_400 + -1 + local_418;
      if ((int)local_120 < (int)uStack_41c) {
        uStack_41c = local_120;
      }
    }
LAB_14cdb4600:
    local_438 = (longlong *)local_148;
    uStack_414 = local_1bc;
    local_428 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
    uVar22 = local_120 & 0xffffffe0;
    iStack_410 = local_148._8_4_ - local_114;
    uStack_430 = (double)CONCAT44(uVar15,uVar23);
    uStack_420 = 0xffffffff;
    TStack_3a0.CurrentBitIndex = uStack_41c;
    TStack_3a0.UnvisitedBitMask = 0xffffffff;
    TStack_3a0._padding_ = (longlong)uStack_430;
    iVar21 = (int)local_120 >> 5;
    TStack_3a0._28_4_ = local_1bc;
    TStack_3a0.BaseBitIndex = local_418;
    uStack_380 = CONCAT44(uStack_40c,iStack_410);
    bVar17 = (byte)local_120;
    local_3a8 = local_438;
    TStack_3a0.Array = local_428;
    if (((int)local_120 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar24 != local_120) {
      puVar19 = (uint *)(local_148 + 0x10);
      if (local_128 != (uint *)0x0) {
        puVar19 = local_128;
      }
      uVar23 = -1 << (bVar17 & 0x1f) & puVar19[iVar21];
      while (uVar23 == 0) {
        lVar18 = (longlong)iVar21;
        uVar22 = uVar22 + 0x20;
        iVar21 = iVar21 + 1;
        uVar24 = local_120;
        if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14cdb4720;
        uVar23 = puVar19[lVar18 + 1];
      }
      uVar4 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_3fc = (int)lVar18;
      uVar24 = (uVar22 - 1) + local_3fc;
      if ((int)local_120 < (int)uVar24) {
        uVar24 = local_120;
      }
    }
LAB_14cdb4720:
    while( true ) {
      plVar9 = local_3a8;
      if ((int)local_3a8[1] - *(int *)((longlong)local_3a8 + 0x34) != (int)uStack_380) {
        local_488 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_488);
      }
      uVar15 = local_d0;
      uVar23 = local_170;
      if (((TStack_3a0.CurrentBitIndex == uVar24) &&
          (TStack_3a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10))) &&
         (plVar9 == (longlong *)local_148)) break;
      local_480 = 0xffffffff;
      uStack_45c = 1;
      uVar23 = *(uint *)(*plVar9 + (longlong)TStack_3a0.CurrentBitIndex * 0xc);
      lVar18 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar23 >> 9) * 8);
      iStack_460 = 0;
      local_448 = 0;
      local_428 = *(TBitArray<FDefaultBitArrayAllocator> **)
                   (lVar18 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
      puVar1 = (undefined8 *)(lVar18 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
      local_438 = (longlong *)*puVar1;
      uStack_430 = (double)puVar1[1];
      uStack_44c = 0;
      if (local_d0 != 0) {
        puVar19 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar19 = local_d8;
        }
        uVar22 = *puVar19;
        while (uVar22 == 0) {
          lVar18 = (longlong)iStack_460;
          local_448 = local_448 + 0x20;
          iStack_460 = iStack_460 + 1;
          uStack_44c = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_460)
          goto LAB_14cdb4830;
          uVar22 = puVar19[lVar18 + 1];
        }
        uStack_45c = -uVar22 & uVar22;
        uVar4 = (ulonglong)uStack_45c * 2 + 1;
        lVar18 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3f8 = (int)lVar18;
        uStack_44c = local_448 + -1 + local_3f8;
        if ((int)local_d0 < (int)uStack_44c) {
          uStack_44c = local_d0;
        }
      }
LAB_14cdb4830:
      local_468 = (longlong *)local_f8;
      uStack_444 = local_19c;
      local_458 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
      uVar22 = local_d0 & 0xffffffe0;
      iStack_440 = local_f8._8_4_ - local_c4;
      TStack_3d0._padding_ = CONCAT44(uStack_45c,iStack_460);
      uStack_450 = 0xffffffff;
      TStack_3d0.CurrentBitIndex = uStack_44c;
      TStack_3d0.UnvisitedBitMask = 0xffffffff;
      iVar21 = (int)local_d0 >> 5;
      TStack_3d0._28_4_ = local_19c;
      TStack_3d0.BaseBitIndex = local_448;
      uStack_3b0 = CONCAT44(uStack_43c,iStack_440);
      bVar17 = (byte)local_d0;
      local_3d8 = local_468;
      TStack_3d0.Array = local_458;
      if (((int)local_d0 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_1 = local_408;
      pTVar11 = local_428;
      dVar10 = uStack_430;
      plVar9 = local_438;
      dVar7 = dVar6;
      if (uVar15 != local_d0) {
        puVar19 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar19 = local_d8;
        }
        uVar15 = -1 << (bVar17 & 0x1f) & puVar19[iVar21];
        while (uVar15 == 0) {
          lVar18 = (longlong)iVar21;
          uVar22 = uVar22 + 0x20;
          iVar21 = iVar21 + 1;
          uVar15 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_14cdb4970;
          uVar15 = puVar19[lVar18 + 1];
        }
        uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3f4 = (int)lVar18;
        uVar15 = (uVar22 - 1) + local_3f4;
        if ((int)local_d0 < (int)uVar15) {
          uVar15 = local_d0;
        }
      }
LAB_14cdb4970:
      while( true ) {
        plVar12 = local_3d8;
        if ((int)local_3d8[1] - *(int *)((longlong)local_3d8 + 0x34) != (int)uStack_3b0) {
          local_487 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_487);
        }
        if (((TStack_3d0.CurrentBitIndex == uVar15) &&
            (TStack_3d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
           (plVar12 == (longlong *)local_f8)) break;
        uVar22 = *(uint *)(*plVar12 + (longlong)TStack_3d0.CurrentBitIndex * 0xc);
        lVar18 = *(longlong *)
                  ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8)
        ;
        pdVar2 = (double *)(lVar18 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        local_428 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     (lVar18 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        dVar26 = *pdVar2 - (double)plVar9;
        dVar25 = pdVar2[1] - dVar10;
        dVar26 = dVar25 * dVar25 + dVar26 * dVar26 +
                 ((double)local_428 - (double)pTVar11) * ((double)local_428 - (double)pTVar11);
        if (dVar26 < dVar7) {
          dVar7 = dVar26;
          local_480 = uVar22;
        }
        TStack_3d0.UnvisitedBitMask = TStack_3d0.UnvisitedBitMask & ~TStack_3d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d0);
      }
      if (local_480 != 0xffffffff) {
        if (local_198._8_4_ != local_164) {
          FVar20 = (ForElementType<FSetElementId>)local_160;
          if (local_158 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = local_158;
          }
          uVar15 = *(uint *)((longlong)FVar20 + (ulonglong)(local_150 - 1U & local_480) * 4);
          while (uVar15 != 0xffffffff) {
            puVar19 = (uint *)((longlong)(int)uVar15 * 0x20 + local_198._0_8_);
            if (*puVar19 == local_480) {
              puVar16 = puVar19 + 2;
              if (puVar19 == (uint *)0x0) {
                puVar16 = (uint *)0x0;
              }
              if (puVar16 != (uint *)0x0) {
                local_484 = local_484 + 1;
                if (dVar7 < *(double *)(puVar16 + 2)) {
                  *(double *)(puVar16 + 2) = dVar7;
                  *puVar16 = uVar23;
                }
                goto LAB_14cdb4b0d;
              }
              break;
            }
            uVar15 = puVar19[6];
          }
        }
        local_328 = &local_480;
        local_320 = local_338;
        local_338[0] = uVar23;
        local_330 = dVar7;
        TSet<TTuple<int,TTuple<int,double>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,TTuple<int,double>_&&>_>
                  ((TSet<TTuple<int,TTuple<int,double>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,double>,0>,FDefaultSetAllocator>
                    *)local_198,&local_3f0,(bool *)&local_328);
      }
LAB_14cdb4b0d:
      TStack_3a0.UnvisitedBitMask = TStack_3a0.UnvisitedBitMask & ~TStack_3a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a0);
    }
    if ((local_47c == 1) || (local_484 == 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    iStack_460 = 0;
    uStack_45c = 1;
    local_448 = 0;
    uStack_44c = 0;
    if (local_170 != 0) {
      puVar19 = (uint *)(local_198 + 0x10);
      if (local_178 != (uint *)0x0) {
        puVar19 = local_178;
      }
      uVar24 = *puVar19;
      local_448 = 0;
      while (uVar24 == 0) {
        lVar18 = (longlong)iStack_460;
        local_448 = local_448 + 0x20;
        iStack_460 = iStack_460 + 1;
        uStack_44c = local_170;
        if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_460)
        goto LAB_14cdb4bf0;
        uVar24 = (puVar19 + 1)[lVar18];
      }
      uStack_45c = -uVar24 & uVar24;
      uVar4 = (ulonglong)uStack_45c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_3f0.Key._4_4_ = (int)lVar18;
      uStack_44c = local_448 + -1 + local_3f0.Key._4_4_;
      if ((int)local_170 < (int)uStack_44c) {
        uStack_44c = local_170;
      }
    }
LAB_14cdb4bf0:
    local_468 = (longlong *)local_198;
    uStack_444 = local_1dc;
    local_458 = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
    uVar24 = local_170 & 0xffffffe0;
    iStack_440 = local_198._8_4_ - local_164;
    TStack_370._padding_ = CONCAT44(uStack_45c,iStack_460);
    uStack_450 = 0xffffffff;
    TStack_370.CurrentBitIndex = uStack_44c;
    TStack_370.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)local_170 >> 5;
    TStack_370._28_4_ = local_1dc;
    TStack_370.BaseBitIndex = local_448;
    uStack_350 = CONCAT44(uStack_43c,iStack_440);
    bVar17 = (byte)local_170;
    local_378 = local_468;
    TStack_370.Array = local_458;
    if (((int)local_170 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this = local_3e0;
    param_1 = local_408;
    if (uVar23 != local_170) {
      puVar19 = (uint *)(local_198 + 0x10);
      if (local_178 != (uint *)0x0) {
        puVar19 = local_178;
      }
      uVar23 = -1 << (bVar17 & 0x1f) & puVar19[iVar21];
      while (uVar23 == 0) {
        lVar18 = (longlong)iVar21;
        uVar24 = uVar24 + 0x20;
        iVar21 = iVar21 + 1;
        uVar23 = local_170;
        if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14cdb4d12;
        uVar23 = (puVar19 + 1)[lVar18];
      }
      uVar4 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_3f0.Value._0_4_ = (int)lVar18;
      uVar23 = (uVar24 - 1) + (int)local_3f0.Value;
      if ((int)local_170 < (int)uVar23) {
        uVar23 = local_170;
      }
    }
LAB_14cdb4d12:
    while( true ) {
      plVar9 = local_378;
      if ((int)local_378[1] - *(int *)((longlong)local_378 + 0x34) != (int)uStack_350) {
        local_486[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_486);
      }
      if (((TStack_370.CurrentBitIndex == uVar23) &&
          (TStack_370.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10))) &&
         (plVar9 == (longlong *)local_198)) break;
      lVar18 = *plVar9;
      local_2c0 = 0;
      local_280 = 0;
      local_208 = '\0';
      puVar3 = (ulonglong *)((longlong)TStack_370.CurrentBitIndex * 0x20 + lVar18);
      uVar4 = *puVar3;
      uVar8 = puVar3[1];
      uVar24 = (uint)uVar4;
      uVar15 = (uint)uVar8;
      local_428 = *(TBitArray<FDefaultBitArrayAllocator> **)
                   ((longlong)TStack_370.CurrentBitIndex * 0x20 + 0x10 + lVar18);
      local_498 = local_2c8;
      iVar21 = (**(code **)(param_1->_padding_ + 0xa0))
                         (param_1,uVar8 & 0xffffffff,uVar4 & 0xffffffff,
                          *(undefined8 *)((longlong)this + 0x10));
      **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + (uint)(iVar21 == 0);
      if (!bVar13) {
        local_478[0] = uVar15;
        if (local_148._8_4_ != local_114) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_148,uVar15,
                     (int *)local_478);
        }
        local_470[0] = uVar24;
        if (local_f8._8_4_ != local_c4) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_f8,uVar24,
                     (int *)local_470);
        }
      }
      if (local_208 != '\0') {
        if (local_220 != (void *)0x0) {
          FMemory::Free(local_220);
        }
        if (local_240 != (void *)0x0) {
          FMemory::Free(local_240);
        }
      }
      TStack_370.UnvisitedBitMask = TStack_370.UnvisitedBitMask & ~TStack_370._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_370);
    }
    local_150 = 0;
    if (local_484 == 0) {
      if (local_158 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_198);
      goto LAB_14cdb4ec5;
    }
    if (local_158 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_158);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_198);
    local_47c = local_47c + 1;
    if (1 < local_47c) {
LAB_14cdb4ec5:
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_f8);
      local_100 = 0;
      if (local_108 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_108);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_148);
      return;
    }
  } while( true );
}

// operator() @ 14cdb6250

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  short sVar12;
  FText *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FText local_38;
  
  plVar6 = *(longlong **)this;
  if ((*plVar6 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  plVar6 = (longlong *)*plVar6;
  uVar16 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((int)plVar6[1] < (int)uVar16) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_38,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                         L"SetAllMeshVertexPositions_IncorrectCount",
                         L"SetAllMeshVertexPositions: size of provided PositionList is smaller than MaxVertexID of Mesh"
                        );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar13);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    uVar15 = 0;
    if ((uVar16 != 0) &&
       (pFVar7 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar15 = 0,
       0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
      uVar14 = 1;
      uVar15 = 1;
      if (1 < (int)uVar16) {
        do {
          sVar12 = *(short *)(*(longlong *)(pFVar7 + (ulonglong)(uVar14 >> 9) * 8) +
                             (ulonglong)(uVar14 & 0x1ff) * 2);
          if ((sVar12 != 0) && (uVar15 = uVar14, sVar12 != -1)) break;
          uVar14 = uVar14 + 1;
          uVar15 = uVar14;
        } while ((int)uVar14 < (int)uVar16);
      }
    }
joined_r0x00014cdb6359:
    if (uVar15 != uVar16) {
      while( true ) {
        uVar14 = 0;
        if ((int)uVar15 < (int)plVar6[1]) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *plVar6;
        lVar17 = (longlong)(int)uVar15;
        sVar12 = _dclass(*(undefined8 *)(lVar8 + lVar17 * 0x18));
        if (((sVar12 < 1) &&
            (sVar12 = _dclass(*(undefined8 *)(lVar8 + 8 + lVar17 * 0x18)), sVar12 < 1)) &&
           (sVar12 = _dclass(*(undefined8 *)(lVar8 + 0x10 + lVar17 * 0x18)), sVar12 < 1)) {
          puVar2 = (undefined8 *)(lVar8 + lVar17 * 0x18);
          uVar10 = puVar2[1];
          uVar5 = *(undefined8 *)(lVar8 + 0x10 + lVar17 * 0x18);
          lVar8 = *(longlong *)
                   ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8
                   );
          puVar3 = (undefined8 *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18) = uVar5;
          if ((param_1->ChangeStampShape).bIsEnabled != false) {
            this_00 = &(param_1->ChangeStampShape).Mutex;
            LOCK();
            bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
            if (bVar11) {
              this_00->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar11) {
              UE::FMutex::LockSlow(this_00);
            }
            puVar1 = &(param_1->ChangeStampShape).Value;
            *puVar1 = *puVar1 + 1;
            LOCK();
            aVar4 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            if (((byte)aVar4 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(this_00);
            }
          }
        }
        uVar15 = uVar15 + 1;
        if ((int)uVar16 <= (int)uVar15) break;
        while( true ) {
          lVar8 = *(longlong *)
                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar15 >> 9) * 8);
          if ((*(short *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) break;
          uVar15 = uVar15 + 1;
          if ((int)uVar16 <= (int)uVar15) goto joined_r0x00014cdb6359;
        }
      }
      goto joined_r0x00014cdb6359;
    }
  }
  return;
}

// operator() @ 14cdb81f0

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh'::__l5::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EMeshResult EVar3;
  ForAnyElementType FVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)this,param_1,&local_28,Triangle);
  iVar2 = local_28.ArrayNum;
  uVar5 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar5 * 4;
  FVar4.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    EVar3 = UE::Geometry::FDynamicMesh3::RemoveTriangle(param_1,*(int *)FVar4.Data,true,false);
    if (EVar3 == Ok) {
      **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    }
    uVar5 = local_28._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cdb8b00

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  short sVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar5 = **(uint **)this;
  if (((-1 < (int)uVar5) &&
      ((int)uVar5 <
       (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    **(undefined1 **)((longlong)this + 8) = 1;
    puVar6 = *(undefined8 **)((longlong)this + 0x10);
    uVar4 = puVar6[2];
    uVar8 = puVar6[1];
    uVar5 = **(uint **)this;
    sVar9 = _dclass(*puVar6);
    if (((sVar9 < 1) && (sVar9 = _dclass(uVar8), sVar9 < 1)) && (sVar9 = _dclass(uVar4), sVar9 < 1))
    {
      uVar8 = puVar6[1];
      uVar10 = (ulonglong)(uVar5 & 0x1ff);
      uVar4 = puVar6[2];
      lVar7 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar7 + uVar10 * 0x18);
      *puVar2 = *puVar6;
      puVar2[1] = uVar8;
      *(undefined8 *)(lVar7 + 0x10 + uVar10 * 0x18) = uVar4;
      if ((param_1->ChangeStampShape).bIsEnabled != false) {
        this_00 = &(param_1->ChangeStampShape).Mutex;
        LOCK();
        bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
        if (bVar11) {
          this_00->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar11) {
          UE::FMutex::LockSlow(this_00);
        }
        puVar1 = &(param_1->ChangeStampShape).Value;
        *puVar1 = *puVar1 + 1;
        LOCK();
        aVar3 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        if (((byte)aVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this_00);
        }
      }
    }
  }
  return;
}

// operator() @ 14cdb93b0

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh'::__l8::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ForAnyElementType *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  int local_48;
  FIndex3i_u_0 local_44;
  undefined8 local_38;
  
  plVar4 = *(longlong **)this;
  if (*plVar4 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  puVar5 = (undefined8 *)*plVar4;
  iVar3 = *(int *)(puVar5 + 1);
  puVar11 = (undefined8 *)*puVar5;
  puVar2 = (undefined8 *)((longlong)puVar11 + (longlong)iVar3 * 0xc);
  while( true ) {
    if (*(int *)(puVar5 + 1) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TIntVector3<int>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar11 == puVar2) break;
    local_44._s_0.C = *(undefined4 *)(puVar11 + 1);
    local_38 = *puVar11;
    local_44._s_0.A = (int)local_38;
    local_44._s_0.B = (int)((ulonglong)local_38 >> 0x20);
    local_48 = UE::Geometry::FDynamicMesh3::AppendTriangle
                         (param_1,(FIndex3i *)&local_44._s_0,**(int **)((longlong)this + 8));
    lVar6 = *(longlong *)((longlong)this + 0x10);
    if (*(longlong *)(lVar6 + 8) == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = *(ForAnyElementType **)(lVar6 + 8);
    if ((pFVar7->Data <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 4)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = *(int *)&pFVar7[1].Data;
    piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,pFVar7,piVar1);
    }
    *(int *)&pFVar7[1].Data = iVar10 + 1;
    puVar11 = (undefined8 *)((longlong)puVar11 + 0xc);
    *(int *)(pFVar7->Data + (longlong)iVar10 * 4) = local_48;
  }
  return;
}

// operator() @ 14cdb9570

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh'::__l8::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  double *pdVar2;
  longlong *plVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  double *pdVar10;
  undefined1 local_res8 [8];
  int local_78 [2];
  TVector<double>_u_0 local_70;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  TVector2<float>_u_0 local_40;
  undefined2 local_38;
  undefined1 local_36;
  
  plVar3 = *(longlong **)this;
  if (*plVar3 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  plVar3 = (longlong *)*plVar3;
  lVar7 = plVar3[1];
  pdVar10 = (double *)*plVar3;
  pdVar2 = pdVar10 + (longlong)(int)lVar7 * 3;
  while( true ) {
    if ((int)plVar3[1] != (int)lVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pdVar10 == pdVar2) break;
    local_70._s_0.X = *pdVar10;
    local_70._s_0.Y = pdVar10[1];
    local_50 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_70._s_0.Z = pdVar10[2];
    local_44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_58 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_4c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_40 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_38 = 0;
    local_36 = 0;
    local_78[0] = UE::Geometry::FDynamicMesh3::AppendVertex(param_1,(FVertexInfo *)&local_70._s_0);
    lVar4 = *(longlong *)((longlong)this + 8);
    if (*(longlong *)(lVar4 + 8) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = *(ForAnyElementType **)(lVar4 + 8);
    if ((pFVar5->Data <= (FScriptContainerElement *)local_78) &&
       ((FScriptContainerElement *)local_78 <
        pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar9 + 1;
    pdVar10 = pdVar10 + 3;
    *(int *)(pFVar5->Data + (longlong)iVar9 * 4) = local_78[0];
  }
  return;
}

// operator() @ 14cdb9760

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh'::__l8::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  EMeshResult EVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 8) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar4 = *(undefined8 **)(lVar3 + 8);
  piVar8 = (int *)*puVar4;
  iVar2 = *(int *)(puVar4 + 1);
  piVar1 = piVar8 + iVar2;
  while( true ) {
    if (*(int *)(puVar4 + 1) != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (piVar8 == piVar1) break;
    EVar7 = UE::Geometry::FDynamicMesh3::RemoveTriangle(param_1,*piVar8,true,false);
    if (EVar7 == Ok) {
      **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    }
    piVar8 = piVar8 + 1;
  }
  return;
}

// operator() @ 14cdb9820

void __thiscall
`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh'::__l8::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  EMeshResult EVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  if (*(longlong *)(lVar3 + 8) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar4 = *(undefined8 **)(lVar3 + 8);
  piVar8 = (int *)*puVar4;
  iVar2 = *(int *)(puVar4 + 1);
  piVar1 = piVar8 + iVar2;
  while( true ) {
    if (*(int *)(puVar4 + 1) != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (piVar8 == piVar1) break;
    EVar7 = UE::Geometry::FDynamicMesh3::RemoveVertex(param_1,*piVar8,false);
    if (EVar7 == Ok) {
      **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    }
    piVar8 = piVar8 + 1;
  }
  return;
}

// AddTriangleToMesh @ 14cdbf2a0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh
          (UDynamicMesh *param_1,TIntVector3<int> *param_2,int *param_3,int param_4,bool param_5,
          UGeometryScriptDebug *param_6)

{
  int iVar1;
  FText *pFVar2;
  EGeometryScriptErrorType EVar3;
  int local_res20 [2];
  undefined1 local_38 [16];
  int *local_28;
  TIntVector3<int> *local_20;
  int *local_18;
  
  *param_3 = -1;
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AddTriangleToMesh_InvalidMesh",L"AddTriangleToMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar2);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
  }
  else {
    local_18 = local_res20;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_28 = param_3;
    local_20 = param_2;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
               GeneralEdit,Unknown,param_5);
    iVar1 = *param_3;
    if (iVar1 < 0) {
      if (iVar1 == -2) {
        pFVar2 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)local_38,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                            L"AddTriangleToMesh_NonManifold",
                            L"AddTriangleToMesh: Triangle cannot be added because it would create invalid Non-Manifold Mesh Topology"
                           );
        EVar3 = InvalidInputs;
      }
      else if (iVar1 == -3) {
        pFVar2 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)local_38,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                            L"AddTriangleToMesh_Duplicate",
                            L"AddTriangleToMesh: Triangle cannot be added because it is a duplicate of an existing Triangle"
                           );
        EVar3 = InvalidInputs;
      }
      else {
        pFVar2 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)local_38,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                            L"AddTriangleToMesh_Unknown",
                            L"AddTriangleToMesh: adding Triangle Failed");
        EVar3 = OperationFailed;
      }
      UE::Geometry::AppendError(param_6,EVar3,pFVar2);
      if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      }
      *param_3 = -1;
      return param_1;
    }
  }
  return param_1;
}

// AddTrianglesToMesh @ 14cdbf3f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh
          (UDynamicMesh *param_1,FGeometryScriptTriangleList *param_2,
          FGeometryScriptIndexList *param_3,int param_4,bool param_5,UGeometryScriptDebug *param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FText *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  int local_res20 [2];
  undefined1 local_68 [16];
  FText local_58;
  undefined1 local_48 [16];
  FGeometryScriptIndexList *local_38;
  
  pTVar4 = (param_2->List).Object;
  local_res20[0] = param_4;
  if ((pTVar4 != (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar4->ArrayNum != 0)) {
    FGeometryScriptIndexList::Reset(param_3,Triangle,0);
    if (param_1 == (UDynamicMesh *)0x0) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                          L"AddTrianglesToMesh_InvalidMesh",L"AddTriangleToMesh: TargetMesh is Null"
                         );
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar6);
      if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
      }
    }
    else {
      local_48._8_8_ = local_res20;
      local_68._8_8_ = local_48;
      local_68._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      local_48._0_8_ = param_2;
      local_38 = param_3;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
                 GeneralEdit,Unknown,param_5);
      pTVar5 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::
               operator*<TArray<int,TSizedDefaultAllocator<32>_>_>(&param_3->List);
      pFVar8 = (pTVar5->AllocatorInstance).Data;
      iVar2 = pTVar5->ArrayNum;
      pFVar1 = pFVar8 + (longlong)iVar2 * 4;
      while( true ) {
        if (pTVar5->ArrayNum != iVar2) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar8 == pFVar1) break;
        iVar3 = *(int *)pFVar8;
        if (iVar3 < 0) {
          if (iVar3 == -2) {
            pFVar6 = FText::AsLocalizable_Advanced_LocText
                               ((FText *)local_68,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                                L"AddTrianglesToMesh_NonManifold",
                                L"AddTrianglesToMesh: Triangle cannot be added because it would create invalid Non-Manifold Mesh Topology"
                               );
            UE::Geometry::AppendError(param_6,InvalidInputs,pFVar6);
            TVar7.Reference = (ITextData *)local_68._0_8_;
          }
          else if (iVar3 == -3) {
            pFVar6 = FText::AsLocalizable_Advanced_LocText
                               (&local_58,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                                L"AddTrianglesToMesh_Duplicate",
                                L"AddTrianglesToMesh: Triangle cannot be added because it is a duplicate of an existing Triangle"
                               );
            UE::Geometry::AppendError(param_6,InvalidInputs,pFVar6);
            TVar7.Reference = local_58.TextData.Reference;
          }
          else {
            pFVar6 = FText::AsLocalizable_Advanced_LocText
                               ((FText *)local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                                L"AddTrianglesToMesh_Unknown",
                                L"AddTrianglesToMesh: adding Triangle Failed");
            UE::Geometry::AppendError(param_6,OperationFailed,pFVar6);
            TVar7.Reference = (ITextData *)local_48._0_8_;
          }
          if (TVar7.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar7.Reference + 0x10))();
          }
          *(int *)pFVar8 = -1;
        }
        pFVar8 = pFVar8 + 4;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return param_1;
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                      L"AddTrianglesToMesh_InvalidList",
                      L"AddTrianglesToMesh: NewTrianglesList is empty");
  UE::Geometry::AppendError(param_6,InvalidInputs,pFVar6);
  if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// AddVertexToMesh @ 14cdbf660

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh
          (UDynamicMesh *param_1,TVector<double> *param_2,int *param_3,bool param_4)

{
  int *local_28;
  TVector<double> *local_20;
  code *local_18;
  int **local_10;
  
  *param_3 = -1;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_28 = param_3;
    local_20 = param_2;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18,
               GeneralEdit,Unknown,param_4);
  }
  return param_1;
}

// AddVerticesToMesh @ 14cdbf6c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh
          (UDynamicMesh *param_1,FGeometryScriptVectorList *param_2,
          FGeometryScriptIndexList *param_3,bool param_4)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGeometryScriptVectorList *local_28;
  FGeometryScriptIndexList *local_20;
  code *local_18;
  FGeometryScriptVectorList **local_10;
  
  pTVar1 = (param_2->List).Object;
  if ((pTVar1 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pTVar1->ArrayNum == 0)) {
    pTVar2 = (param_2->List).SharedReferenceCount.ReferenceController;
  }
  else {
    FGeometryScriptIndexList::Reset(param_3,Vertex,0);
    if (param_1 != (UDynamicMesh *)0x0) {
      local_10 = &local_28;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      local_28 = param_2;
      local_20 = param_3;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18,
                 GeneralEdit,Unknown,param_4);
    }
    pTVar2 = (param_2->List).SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return param_1;
}

// AppendBuffersToMesh @ 14cdbf770

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh
          (UDynamicMesh *param_1,FGeometryScriptSimpleMeshBuffers *param_2,
          FGeometryScriptIndexList *param_3,int param_4,bool param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  int local_res20 [2];
  undefined1 local_38 [16];
  FGeometryScriptSimpleMeshBuffers *local_28;
  FGeometryScriptIndexList *local_20;
  UGeometryScriptDebug **local_18;
  int *local_10;
  
  local_res20[0] = param_4;
  FGeometryScriptIndexList::Reset(param_3,Triangle,0);
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshRepeated_InvalidInput1",
                        L"AppendMeshRepeated: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18 = &param_6;
  local_10 = local_res20;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,param_5);
  return param_1;
}

// AppendMesh @ 14cdc02b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMesh
          (UDynamicMesh *param_1,UDynamicMesh *param_2,TTransform<double> *param_3,bool param_4,
          FGeometryScriptAppendMeshOptions param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  undefined8 local_res8;
  UDynamicMesh *local_res10;
  undefined1 local_98 [16];
  FGeometryScriptAppendMeshOptions *local_88;
  undefined8 *local_80;
  UDynamicMesh **local_78;
  double *local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_68 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_60 = (param_3->Rotation).XY.m128d_f64[1];
  local_58 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_50 = (param_3->Rotation).ZW.m128d_f64[1];
  local_48 = (param_3->Translation).XY.m128d_f64[0];
  dStack_40 = (param_3->Translation).XY.m128d_f64[1];
  local_38 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_30 = (param_3->Translation).ZW.m128d_f64[1];
  local_28 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_20 = (param_3->Scale3D).XY.m128d_f64[1];
  local_18 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_10 = (param_3->Scale3D).ZW.m128d_f64[1];
  local_res8 = 0;
  local_res10 = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_98,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMesh_InvalidInput1",L"AppendMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_98._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_98._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_98,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMesh_InvalidInput2",L"AppendMesh: AppendMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_98._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_98._0_8_ + 0x10))();
    }
  }
  else {
    local_88 = &param_5;
    local_80 = &local_res8;
    local_78 = &local_res10;
    local_70 = &local_68;
    local_98._8_8_ = &local_88;
    local_98._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_98,
               GeneralEdit,Unknown,param_4);
  }
  return param_1;
}

// AppendMeshRepeated @ 14cdc07e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeated
          (UDynamicMesh *param_1,UDynamicMesh *param_2,TTransform<double> *param_3,int param_4,
          bool param_5,bool param_6,FGeometryScriptAppendMeshOptions param_7,
          UGeometryScriptDebug *param_8)

{
  FText *pFVar1;
  FDynamicMesh3 *local_res8;
  undefined1 local_2c8 [16];
  double local_2b8;
  FGeometryScriptAppendMeshOptions *local_2b0;
  TQuaternion<double>_u_0 *local_2a8;
  FDynamicMesh3 *local_2a0;
  int local_298;
  TQuaternion<double>_u_0 local_288;
  double local_268;
  double dStack_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  FDynamicMesh3 local_238;
  
  local_288._s_0.X = (param_3->Rotation).XY.m128d_f64[0];
  local_288._s_0.Y = (param_3->Rotation).XY.m128d_f64[1];
  local_288._s_0.Z = (param_3->Rotation).ZW.m128d_f64[0];
  local_288._s_0.W = (param_3->Rotation).ZW.m128d_f64[1];
  local_268 = (param_3->Translation).XY.m128d_f64[0];
  dStack_260 = (param_3->Translation).XY.m128d_f64[1];
  local_258 = (param_3->Translation).ZW.m128d_f64[0];
  local_250 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_248 = (param_3->Scale3D).XY.m128d_f64[1];
  local_2b8 = (param_3->Scale3D).ZW.m128d_f64[0];
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_2c8,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshRepeated_InvalidInput1",
                        L"AppendMeshRepeated: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar1);
    if ((ITextData *)local_2c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2c8._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_2 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_2c8,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshRepeated_InvalidInput2",
                        L"AppendMeshRepeated: AppendMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar1);
    if ((ITextData *)local_2c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2c8._0_8_ + 0x10))();
    }
  }
  else if (0 < param_4) {
    local_240 = local_2b8;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
    local_res8 = &local_238;
    local_2c8._8_8_ = &local_res8;
    local_2c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshRepeated'::__l11::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    UDynamicMesh::ProcessMesh
              (param_2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_2c8)
    ;
    if (param_5) {
      MeshTransforms::ApplyTransform(&local_238,(TTransformSRT3<double> *)&local_288._s_0,true,All);
    }
    local_2b0 = &param_7;
    local_2a8 = &local_288;
    local_2a0 = &local_238;
    local_2c8._8_8_ = &local_2b0;
    local_2c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshRepeated'::__l11::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_298 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_2c8,
               GeneralEdit,Unknown,param_6);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  }
  return param_1;
}

// AppendMeshRepeatedWithMaterials @ 14cdc0a00

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeatedWithMaterials
          (UDynamicMesh *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          UDynamicMesh *param_3,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_5,
          TTransform<double> *param_6,int param_7,bool param_8,bool param_9,
          FGeometryScriptAppendMeshOptions param_10,bool param_11,UGeometryScriptDebug *param_12)

{
  UDynamicMesh *pUVar1;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TTransform<double> local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  UE::Private::AppendHelpers::AppendMaterials(param_2,param_4,param_11,&local_78,param_5);
  local_68.Rotation.XY.m128d_f64[0] = (param_6->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_6->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_6->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_6->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_6->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_6->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_6->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_6->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_6->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_6->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_6->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_6->Scale3D).ZW.m128d_f64[1];
  pUVar1 = UE::Private::AppendHelpers::AppendMeshRepeated
                     (param_1,param_3,&local_78,&local_68,param_7,param_8,param_9,param_10,param_12)
  ;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return pUVar1;
}

// AppendMeshTransformed @ 14cdc0cd0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformed
          (UDynamicMesh *param_1,UDynamicMesh *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TTransform<double> *param_4,bool param_5,bool param_6,
          FGeometryScriptAppendMeshOptions param_7,UGeometryScriptDebug *param_8)

{
  UDynamicMesh *pUVar1;
  TTransform<double> local_68;
  
  local_68.Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_4->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_4->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_4->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_4->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_4->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_4->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_4->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_4->Scale3D).ZW.m128d_f64[1];
  pUVar1 = UE::Private::AppendHelpers::AppendMeshTransformed
                     (param_1,param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)0x0,param_3,
                      &local_68,param_5,param_6,param_7,param_8);
  return pUVar1;
}

// AppendMeshTransformedWithMaterials @ 14cdc0d70

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformedWithMaterials
          (UDynamicMesh *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          UDynamicMesh *param_3,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_6,
          TTransform<double> *param_7,bool param_8,bool param_9,
          FGeometryScriptAppendMeshOptions param_10,bool param_11,UGeometryScriptDebug *param_12)

{
  UDynamicMesh *pUVar1;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TTransform<double> local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  UE::Private::AppendHelpers::AppendMaterials(param_2,param_4,param_11,&local_78,param_5);
  local_68.Rotation.XY.m128d_f64[0] = (param_7->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_7->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_7->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_7->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_7->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_7->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_7->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_7->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_7->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_7->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_7->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_7->Scale3D).ZW.m128d_f64[1];
  pUVar1 = UE::Private::AppendHelpers::AppendMeshTransformed
                     (param_1,param_3,&local_78,param_6,&local_68,param_8,param_9,param_10,param_12)
  ;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return pUVar1;
}

// AppendMeshWithMaterials @ 14cdc0e90

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshWithMaterials
          (UDynamicMesh *param_1,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2,
          UDynamicMesh *param_3,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_5,
          TTransform<double> *param_6,bool param_7,FGeometryScriptAppendMeshOptions param_8,
          bool param_9,UGeometryScriptDebug *param_10)

{
  FText *pFVar1;
  UDynamicMesh *local_res8;
  undefined1 local_a8 [16];
  TTransform<double> local_98;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_98.Rotation.XY.m128d_f64[0] = 0.0;
  local_98.Rotation.XY.m128d_f64[1] = 0.0;
  UE::Private::AppendHelpers::AppendMaterials
            (param_2,param_4,param_9,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_98,param_5);
  local_98.Translation.ZW.m128d_f64[0] = (param_6->Rotation).XY.m128d_f64[0];
  local_98.Translation.ZW.m128d_f64[1] = (param_6->Rotation).XY.m128d_f64[1];
  local_98.Scale3D.XY.m128d_f64[0] = (param_6->Rotation).ZW.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[1] = (param_6->Rotation).ZW.m128d_f64[1];
  local_98.Scale3D.ZW.m128d_f64[0] = (param_6->Translation).XY.m128d_f64[0];
  local_98.Scale3D.ZW.m128d_f64[1] = (param_6->Translation).XY.m128d_f64[1];
  local_38 = (param_6->Translation).ZW.m128d_f64[0];
  dStack_30 = (param_6->Translation).ZW.m128d_f64[1];
  local_28 = (param_6->Scale3D).XY.m128d_f64[0];
  dStack_20 = (param_6->Scale3D).XY.m128d_f64[1];
  local_18 = (param_6->Scale3D).ZW.m128d_f64[0];
  dStack_10 = (param_6->Scale3D).ZW.m128d_f64[1];
  param_6 = &local_98;
  local_res8 = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_a8,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMesh_InvalidInput1",L"AppendMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar1);
    param_1 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
    }
  }
  else if (param_3 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_a8,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMesh_InvalidInput2",L"AppendMesh: AppendMesh is Null");
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar1);
    if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
    }
  }
  else {
    local_98.Rotation.ZW.m128d_f64[0] = (double)&param_8;
    local_98.Rotation.ZW.m128d_f64[1] = (double)&param_6;
    local_98.Translation.XY.m128d_f64[0] = (double)&local_res8;
    local_98.Translation.XY.m128d_f64[1] = (double)&local_98.Translation.ZW;
    local_a8._8_8_ = &local_98.Rotation.ZW;
    local_a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_a8,
               GeneralEdit,Unknown,param_7);
  }
  if ((void *)local_98.Rotation.XY.m128d_f64[0] != (void *)0x0) {
    FMemory::Free((void *)local_98.Rotation.XY.m128d_f64[0]);
  }
  return param_1;
}

// DeleteSelectedTrianglesFromMesh @ 14cdd31e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,int *param_3,bool param_4)

{
  FGeometrySelection *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDynamicMesh *pUVar4;
  FGeometryScriptMeshSelection *local_28;
  int *local_20;
  code *local_18;
  FGeometryScriptMeshSelection **local_10;
  
  if (param_1 != (UDynamicMesh *)0x0) {
    if ((param_2->GeoSelection).Object == (FGeometrySelection *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UDynamicMesh *)(*pcVar2)();
        return pUVar4;
      }
    }
    pFVar1 = (param_2->GeoSelection).Object;
    if (*(int *)&(pFVar1->Selection).Elements.field_0x8 !=
        *(int *)&(pFVar1->Selection).Elements.field_0x34) {
      local_10 = &local_28;
      *param_3 = 0;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      local_28 = param_2;
      local_20 = param_3;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18,
                 GeneralEdit,Unknown,param_4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// DeleteTriangleFromMesh @ 14cdd32b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh
          (UDynamicMesh *param_1,int param_2,bool *param_3,bool param_4)

{
  int local_res10 [6];
  int *local_28;
  bool *local_20;
  code *local_18;
  undefined4 **local_10;
  
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_20 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18,
               GeneralEdit,Unknown,param_4);
  }
  return param_1;
}

// DeleteTrianglesFromMesh @ 14cdd3380

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,int *param_3,bool param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FGeometryScriptIndexList *local_28;
  int *local_20;
  code *local_18;
  FGeometryScriptIndexList **local_10;
  
  pTVar1 = (param_2->List).Object;
  if ((pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (pTVar1->ArrayNum != 0)) {
    *param_3 = 0;
    if (param_1 != (UDynamicMesh *)0x0) {
      local_10 = &local_28;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      local_28 = param_2;
      local_20 = param_3;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18,
                 GeneralEdit,Unknown,param_4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return param_1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// DeleteVertexFromMesh @ 14cdd3410

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh
          (UDynamicMesh *param_1,int param_2,bool *param_3,bool param_4)

{
  int local_res10 [6];
  int *local_28;
  bool *local_20;
  code *local_18;
  undefined4 **local_10;
  
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_20 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18,
               GeneralEdit,Unknown,param_4);
  }
  return param_1;
}

// DeleteVerticesFromMesh @ 14cdd3470

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh
          (UDynamicMesh *param_1,FGeometryScriptIndexList *param_2,int *param_3,bool param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FGeometryScriptIndexList *local_28;
  int *local_20;
  code *local_18;
  FGeometryScriptIndexList **local_10;
  
  pTVar1 = (param_2->List).Object;
  if (((pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (pTVar1->ArrayNum != 0)) &&
     ((param_2->IndexType == Vertex || (param_2->IndexType == Any)))) {
    *param_3 = 0;
    if (param_1 != (UDynamicMesh *)0x0) {
      local_10 = &local_28;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      local_28 = param_2;
      local_20 = param_3;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18,
                 GeneralEdit,Unknown,param_4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return param_1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// DiscardMeshAttributes @ 14cdd3a00

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes
          (UDynamicMesh *param_1,bool param_2)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  if (param_1 != (UDynamicMesh *)0x0) {
    local_10 = local_res8;
    local_res8[0] = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_18,
               GeneralEdit,Unknown,param_2);
  }
  return param_1;
}

// GetPrivateStaticClass @ 14cdd8620

UClass * __cdecl UGeometryScriptLibrary_MeshBasicEditFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshBasicEditFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshBasicEditFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshBasicEditFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshBasicEditFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions.InnerSingleton;
}

// MergeMeshVertexPair @ 14cddd230

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVertexPair
          (UDynamicMesh *param_1,int param_2,int param_3,FGeometryScriptMergeVertexOptions param_4,
          bool *param_5,double param_6,bool param_7,UGeometryScriptDebug *param_8)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  int local_28;
  int local_24;
  double local_20;
  FGeometryScriptMergeVertexOptions local_18;
  bool *local_10;
  
  *param_5 = false;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"MergeMeshVertexPair_InvalidInput",
                        L"MergeMeshVertexPair: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_10 = param_5;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVertexPair'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_6;
  local_28 = param_2;
  local_24 = param_3;
  local_18 = param_4;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,param_7);
  return param_1;
}

// MergeMeshVerticesInSelections @ 14cddd300

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVerticesInSelections
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptMeshSelection *param_3,FGeometryScriptMergeVertexOptions param_4,
          int *param_5,double param_6,double param_7,bool param_8,UGeometryScriptDebug *param_9)

{
  FText *pFVar1;
  undefined1 local_48 [16];
  FGeometryScriptMeshSelection *local_38;
  FGeometryScriptMeshSelection *local_30;
  double local_28;
  FGeometryScriptMergeVertexOptions local_20;
  int *local_18;
  double local_10;
  
  *param_5 = 0;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"MergeMeshVerticesInSelections_InvalidInput",
                        L"MergeMeshVerticesInSelections: TargetMesh is Null");
    UE::Geometry::AppendError(param_9,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_18 = param_5;
  local_48._8_8_ = &local_38;
  local_28 = param_6;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVerticesInSelections'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_10 = param_7;
  local_38 = param_2;
  local_30 = param_3;
  local_20 = param_4;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
             GeneralEdit,Unknown,param_8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SetAllMeshVertexPositions @ 14cde36d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions
          (UDynamicMesh *param_1,FGeometryScriptVectorList *param_2,UGeometryScriptDebug *param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FText *pFVar2;
  UGeometryScriptDebug *local_res18 [2];
  FGeometryScriptVectorList *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"SetAllMeshVertexPositions_InvalidMesh",
                        L"SetAllMeshVertexPositions: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar2);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  pTVar1 = (param_2->List).Object;
  if ((pTVar1 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pTVar1->ArrayNum == 0)) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"SetAllMeshVertexPositions_InvalidList",
                        L"SetAllMeshVertexPositions: List is empty");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar2);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
  }
  else {
    local_20 = local_res18;
    local_18._8_8_ = &local_28;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_28 = param_2;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SetVertexPosition @ 14cde58e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition
          (UDynamicMesh *param_1,int param_2,TVector<double> *param_3,bool *param_4,bool param_5)

{
  int local_res10 [6];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  TVector<double> *local_18;
  
  *param_4 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_20 = param_4;
    local_18 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,param_5);
  }
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshBasicEditFunctions @ 14cde71a0

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshBasicEditFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x15;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddTriangleToMesh @ 14cdeb220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAddTriangleToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UGeometryScriptDebug *pUVar5;
  UDynamicMesh *this;
  int iVar6;
  FText *pFVar7;
  int *piVar8;
  bool bVar9;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  int local_108 [2];
  undefined2 local_100;
  ITextData *local_f8;
  uint local_f0;
  UGeometryScriptDebug *local_e8;
  UDynamicMesh *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [12];
  undefined8 local_b8;
  undefined4 local_b0;
  code *local_a8;
  int **local_a0;
  int *local_98;
  undefined8 *local_90;
  undefined4 *local_88;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  
  local_e0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_108[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_res18[0] = 0;
  piVar8 = local_108;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar8 = (int *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar9 = local_res10[0] != 0;
  local_e8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  this = local_e0;
  pUVar5 = local_e8;
  local_b8 = local_d8;
  local_b0 = local_d0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = local_res18[0];
  *piVar8 = -1;
  if (this == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AddTriangleToMesh_InvalidMesh",L"AddTriangleToMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_f8 = (pFVar7->TextData).Reference;
    local_100 = 0x200;
    if (local_f8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8 + 8))(local_f8,local_c8);
    }
    local_f0 = pFVar7->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_100) &&
          ((FScriptContainerElement *)&local_100 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (pUVar5->Messages).ArrayNum;
      piVar8 = &(pUVar5->Messages).ArrayMax;
      if (iVar6 == *piVar8) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar8);
      }
      (pUVar5->Messages).ArrayNum = iVar6 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
      *pFVar3 = local_100._0_1_;
      pFVar3[1] = local_100._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_f8;
      if (local_f8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8 + 8))(local_f8,local_c4);
      }
      *(uint *)(pFVar3 + 0x10) = local_f0;
    }
    if (local_f8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8 + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  else {
    local_90 = &local_b8;
    local_88 = local_res20;
    local_a0 = &local_98;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_98 = piVar8;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_a8,
               GeneralEdit,Unknown,bVar9);
    iVar6 = *piVar8;
    if (iVar6 < 0) {
      if (iVar6 == -2) {
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_80,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                            L"AddTriangleToMesh_NonManifold",
                            L"AddTriangleToMesh: Triangle cannot be added because it would create invalid Non-Manifold Mesh Topology"
                           );
        UE::Geometry::AppendError(pUVar5,InvalidInputs,pFVar7);
      }
      else if (iVar6 == -3) {
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_70,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                            L"AddTriangleToMesh_Duplicate",
                            L"AddTriangleToMesh: Triangle cannot be added because it is a duplicate of an existing Triangle"
                           );
        UE::Geometry::AppendError(pUVar5,InvalidInputs,pFVar7);
        local_80.TextData.Reference = local_70.TextData.Reference;
      }
      else {
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_60,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                            L"AddTriangleToMesh_Unknown",
                            L"AddTriangleToMesh: adding Triangle Failed");
        UE::Geometry::AppendError(pUVar5,OperationFailed,pFVar7);
        local_80.TextData.Reference = local_60.TextData.Reference;
      }
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
      *piVar8 = -1;
    }
  }
  *(UDynamicMesh **)param_3 = this;
  return;
}

// execAddTrianglesToMesh @ 14cdeb680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAddTrianglesToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  UGeometryScriptDebug *pUVar7;
  int iVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FText *pFVar11;
  TRefCountPtr<ITextData> TVar12;
  FScriptContainerElement *pFVar13;
  UDynamicMesh *this;
  FGeometryScriptIndexList *this_00;
  bool bVar14;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  int local_res20 [2];
  undefined4 local_198 [2];
  undefined2 local_190;
  ITextData *local_188;
  uint local_180;
  undefined2 local_178;
  ITextData *local_170;
  uint local_168;
  undefined2 local_160;
  ITextData *local_158;
  uint local_150;
  undefined2 local_148;
  ITextData *local_140;
  uint local_138;
  undefined4 local_130 [2];
  UGeometryScriptDebug *local_128;
  UDynamicMesh *local_120;
  longlong local_118;
  TReferenceControllerBase<1> *pTStack_110;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  UDynamicMesh *local_e8;
  longlong local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  FGeometryScriptIndexList local_c8;
  code *local_b0;
  longlong **local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  FGeometryScriptIndexList *local_90;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_120 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_118 = 0;
  pTStack_110 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_c8.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_c8.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_c8.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_198[0] = 0;
  this_00 = &local_c8;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this_00 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_198,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_198);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar14 = local_res20[0] != 0;
  local_128 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  this = local_120;
  pUVar7 = local_128;
  local_d8 = local_118;
  pTStack_d0 = pTStack_110;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_110->SharedReferenceCount = (atomic<int>)((int)pTStack_110->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8 = local_120;
  local_130[0] = local_198[0];
  if ((local_118 == 0) || (*(int *)(local_118 + 8) == 0)) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                         L"AddTrianglesToMesh_InvalidList",
                         L"AddTrianglesToMesh: NewTrianglesList is empty");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar11);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_140 = (pFVar11->TextData).Reference;
    local_148 = 0x200;
    if (local_140 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140 + 8))(local_140,local_f0);
    }
    local_138 = pFVar11->Flags;
    if (pUVar7 != (UGeometryScriptDebug *)0x0) {
      pFVar5 = (pUVar7->Messages).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 <
           pFVar5 + (longlong)(pUVar7->Messages).ArrayMax * 0x18)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (pUVar7->Messages).ArrayNum;
      piVar1 = &(pUVar7->Messages).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar7->Messages).AllocatorInstance,piVar1);
      }
      (pUVar7->Messages).ArrayNum = iVar9 + 1;
      pFVar5 = (pUVar7->Messages).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
      *pFVar5 = local_148._0_1_;
      pFVar5[1] = local_148._1_1_;
      *(undefined8 *)(pFVar5 + 8) = 0;
      *(ITextData **)(pFVar5 + 8) = local_140;
      if (local_140 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_140 + 8))(local_140,local_ec);
      }
      *(uint *)(pFVar5 + 0x10) = local_138;
    }
    if (local_140 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140 + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    FGeometryScriptIndexList::Reset(this_00,Triangle,0);
    if (this == (UDynamicMesh *)0x0) {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                           L"AddTrianglesToMesh_InvalidMesh",
                           L"AddTriangleToMesh: TargetMesh is Null");
      UE::Geometry::AppendError(pUVar7,InvalidInputs,pFVar11);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
    }
    else {
      local_a0 = &local_d8;
      local_98 = local_130;
      local_a8 = &local_a0;
      local_b0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      local_90 = this_00;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_b0,
                 GeneralEdit,Unknown,bVar14);
      pTVar10 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::
                operator*<TArray<int,TSizedDefaultAllocator<32>_>_>(&this_00->List);
      pFVar13 = (pTVar10->AllocatorInstance).Data;
      iVar9 = pTVar10->ArrayNum;
      pFVar5 = pFVar13 + (longlong)iVar9 * 4;
      while( true ) {
        if (pTVar10->ArrayNum != iVar9) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        this = local_e8;
        if (pFVar13 == pFVar5) break;
        iVar8 = *(int *)pFVar13;
        if (iVar8 < 0) {
          if (iVar8 == -2) {
            pFVar11 = FText::AsLocalizable_Advanced_LocText
                                (&local_88,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                                 L"AddTrianglesToMesh_NonManifold",
                                 L"AddTrianglesToMesh: Triangle cannot be added because it would create invalid Non-Manifold Mesh Topology"
                                );
            if (1 < (byte)LogGeometry._0_1_) {
              FText::ToString(pFVar11);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
            }
            local_188 = (pFVar11->TextData).Reference;
            local_190 = 0x200;
            if (local_188 != (ITextData *)0x0) {
              (**(code **)((longlong)*local_188 + 8))(local_188,local_108);
            }
            local_180 = pFVar11->Flags;
            if (pUVar7 != (UGeometryScriptDebug *)0x0) {
              pFVar4 = (pUVar7->Messages).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_190) &&
                  ((FScriptContainerElement *)&local_190 <
                   pFVar4 + (longlong)(pUVar7->Messages).ArrayMax * 0x18)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar8 = (pUVar7->Messages).ArrayNum;
              piVar1 = &(pUVar7->Messages).ArrayMax;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&(pUVar7->Messages).AllocatorInstance,piVar1);
              }
              (pUVar7->Messages).ArrayNum = iVar8 + 1;
              pFVar4 = (pUVar7->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
              *pFVar4 = local_190._0_1_;
              pFVar4[1] = local_190._1_1_;
              *(undefined8 *)(pFVar4 + 8) = 0;
              *(ITextData **)(pFVar4 + 8) = local_188;
              if (local_188 != (ITextData *)0x0) {
                (**(code **)((longlong)*local_188 + 8))(local_188,local_104);
              }
              *(uint *)(pFVar4 + 0x10) = local_180;
            }
            TVar12.Reference = local_88.TextData.Reference;
            if (local_188 != (ITextData *)0x0) {
              (**(code **)((longlong)*local_188 + 0x10))();
              TVar12.Reference = local_88.TextData.Reference;
            }
          }
          else if (iVar8 == -3) {
            pFVar11 = FText::AsLocalizable_Advanced_LocText
                                (&local_78,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                                 L"AddTrianglesToMesh_Duplicate",
                                 L"AddTrianglesToMesh: Triangle cannot be added because it is a duplicate of an existing Triangle"
                                );
            if (1 < (byte)LogGeometry._0_1_) {
              FText::ToString(pFVar11);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
            }
            local_170 = (pFVar11->TextData).Reference;
            local_178 = 0x200;
            if (local_170 != (ITextData *)0x0) {
              (**(code **)((longlong)*local_170 + 8))(local_170,local_100);
            }
            local_168 = pFVar11->Flags;
            if (pUVar7 != (UGeometryScriptDebug *)0x0) {
              pFVar4 = (pUVar7->Messages).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_178) &&
                  ((FScriptContainerElement *)&local_178 <
                   pFVar4 + (longlong)(pUVar7->Messages).ArrayMax * 0x18)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar8 = (pUVar7->Messages).ArrayNum;
              piVar1 = &(pUVar7->Messages).ArrayMax;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&(pUVar7->Messages).AllocatorInstance,piVar1);
              }
              (pUVar7->Messages).ArrayNum = iVar8 + 1;
              pFVar4 = (pUVar7->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
              *pFVar4 = local_178._0_1_;
              pFVar4[1] = local_178._1_1_;
              *(undefined8 *)(pFVar4 + 8) = 0;
              *(ITextData **)(pFVar4 + 8) = local_170;
              if (local_170 != (ITextData *)0x0) {
                (**(code **)((longlong)*local_170 + 8))(local_170,local_fc);
              }
              *(uint *)(pFVar4 + 0x10) = local_168;
            }
            TVar12.Reference = local_78.TextData.Reference;
            if (local_170 != (ITextData *)0x0) {
              (**(code **)((longlong)*local_170 + 0x10))();
              TVar12.Reference = local_78.TextData.Reference;
            }
          }
          else {
            pFVar11 = FText::AsLocalizable_Advanced_LocText
                                (&local_68,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                                 L"AddTrianglesToMesh_Unknown",
                                 L"AddTrianglesToMesh: adding Triangle Failed");
            if (1 < (byte)LogGeometry._0_1_) {
              FText::ToString(pFVar11);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
            }
            local_158 = (pFVar11->TextData).Reference;
            local_160 = 0x300;
            if (local_158 != (ITextData *)0x0) {
              (**(code **)((longlong)*local_158 + 8))(local_158,local_f8);
            }
            local_150 = pFVar11->Flags;
            if (pUVar7 != (UGeometryScriptDebug *)0x0) {
              pFVar4 = (pUVar7->Messages).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_160) &&
                  ((FScriptContainerElement *)&local_160 <
                   pFVar4 + (longlong)(pUVar7->Messages).ArrayMax * 0x18)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar8 = (pUVar7->Messages).ArrayNum;
              piVar1 = &(pUVar7->Messages).ArrayMax;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&(pUVar7->Messages).AllocatorInstance,piVar1);
              }
              (pUVar7->Messages).ArrayNum = iVar8 + 1;
              pFVar4 = (pUVar7->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
              *pFVar4 = local_160._0_1_;
              pFVar4[1] = local_160._1_1_;
              *(undefined8 *)(pFVar4 + 8) = 0;
              *(ITextData **)(pFVar4 + 8) = local_158;
              if (local_158 != (ITextData *)0x0) {
                (**(code **)((longlong)*local_158 + 8))(local_158,local_f4);
              }
              *(uint *)(pFVar4 + 0x10) = local_150;
            }
            TVar12.Reference = local_68.TextData.Reference;
            if (local_158 != (ITextData *)0x0) {
              (**(code **)((longlong)*local_158 + 0x10))();
              TVar12.Reference = local_68.TextData.Reference;
            }
          }
          if (TVar12.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar12.Reference + 0x10))();
          }
          *(int *)pFVar13 = -1;
        }
        pFVar13 = pFVar13 + 4;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  *local_res18 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110);
  return;
}

// execAddVertexToMesh @ 14cdebf90

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAddVertexToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *this;
  uchar *puVar2;
  bool bVar3;
  uchar local_res10 [8];
  int local_res18 [2];
  UDynamicMesh *local_res20;
  uchar *local_88;
  undefined8 *local_80;
  code *local_78;
  uchar **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
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
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
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
  this = local_res20;
  bVar3 = local_res18[0] != 0;
  local_48 = local_68;
  uStack_40 = uStack_60;
  local_38 = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2[0] = 0xff;
  puVar2[1] = 0xff;
  puVar2[2] = 0xff;
  puVar2[3] = 0xff;
  if (this != (UDynamicMesh *)0x0) {
    local_80 = &local_48;
    local_70 = &local_88;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_88 = puVar2;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_78,
               GeneralEdit,Unknown,bVar3);
  }
  *(UDynamicMesh **)param_3 = this;
  return;
}

// execAddVerticesToMesh @ 14cdec130

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAddVerticesToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *this;
  FGeometryScriptIndexList *this_00;
  bool bVar2;
  int local_res10 [2];
  UDynamicMesh *local_res18 [2];
  longlong local_88;
  TReferenceControllerBase<1> *pTStack_80;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  longlong *local_68;
  FGeometryScriptIndexList *local_60;
  code *local_58;
  undefined8 **local_50;
  FGeometryScriptIndexList local_48;
  
  local_res18[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_88 = 0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_48.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_48.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  this_00 = &local_48;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this_00 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res18[0];
  bVar2 = local_res10[0] != 0;
  local_78 = local_88;
  pTStack_70 = pTStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_88 != 0) && (*(int *)(local_88 + 8) != 0)) {
    FGeometryScriptIndexList::Reset(this_00,Vertex,0);
    if (this != (UDynamicMesh *)0x0) {
      local_68 = &local_78;
      local_50 = &local_68;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      local_60 = this_00;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_58,
                 GeneralEdit,Unknown,bVar2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  return;
}

// execAppendBuffersToMesh @ 14cdec330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendBuffersToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  void **ppvVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  FText *this;
  FGeometryScriptIndexList *this_00;
  UDynamicMesh *this_01;
  void **ppvVar7;
  bool bVar8;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined2 local_198;
  ITextData *local_190;
  uint local_188;
  longlong local_180;
  UDynamicMesh *local_178;
  longlong local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  FGeometryScriptIndexList local_90;
  code *local_78;
  void ***local_70;
  void **local_68;
  FGeometryScriptIndexList *local_60;
  longlong *local_58;
  undefined4 *local_50;
  FText local_48;
  
  local_178 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  local_90.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppvVar7 = &local_168;
  if (ppvVar2 != (void **)0x0) {
    ppvVar7 = ppvVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_90.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_90.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res18[0] = 0;
  this_00 = &local_90;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this_00 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar8 = local_res10[0] != 0;
  local_180 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  this_01 = local_178;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_170 = local_180;
  local_res20[0] = local_res18[0];
  FGeometryScriptIndexList::Reset(this_00,Triangle,0);
  if (this_01 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                      L"AppendMeshRepeated_InvalidInput1",L"AppendMeshRepeated: TargetMesh is Null")
    ;
    lVar5 = local_170;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_190 = (this->TextData).Reference;
    local_198 = 0x200;
    if (local_190 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190 + 8))(local_190,local_98);
    }
    local_188 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_198) &&
          (&local_198 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *(int *)(lVar5 + 0x30);
      if (iVar6 == *(int *)(lVar5 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar6 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar6 * 0x18);
      *puVar1 = (undefined1)local_198;
      puVar1[1] = local_198._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_190;
      if (local_190 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190 + 8))(local_190,local_94);
      }
      *(uint *)(puVar1 + 0x10) = local_188;
    }
    if (local_190 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190 + 0x10))();
    }
    this_01 = (UDynamicMesh *)0x0;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    local_58 = &local_170;
    local_50 = local_res20;
    local_70 = &local_68;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_68 = ppvVar7;
    local_60 = this_00;
    UDynamicMesh::EditMesh
              (this_01,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_78,
               GeneralEdit,Unknown,bVar8);
  }
  *(UDynamicMesh **)param_3 = this_01;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.List.SharedReferenceCount.ReferenceController);
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  return;
}

// execAppendMesh @ 14cdec870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  int iVar6;
  FText *pFVar7;
  bool bVar8;
  undefined1 auStack_218 [32];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  int local_1b8 [2];
  undefined2 local_1b0;
  ITextData *local_1a8;
  uint local_1a0;
  undefined2 local_198;
  ITextData *local_190;
  uint local_188;
  longlong local_180;
  UDynamicMesh *local_178;
  longlong local_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  undefined8 local_158;
  longlong local_150;
  code *local_148;
  undefined1 **local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  longlong *local_128;
  undefined8 *local_120;
  FText local_118;
  FText local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_178 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_170 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_1b8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1b8);
  }
  bVar8 = local_1b8[0] != 0;
  local_1c8[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1c8);
  }
  local_180 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  pUVar5 = local_178;
  lVar4 = local_180;
  local_f8 = local_98._0_8_;
  uStack_f0 = local_98._8_8_;
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  local_1c0[0] = local_1c8[0];
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_150 = local_170;
  local_b8 = local_58._0_8_;
  uStack_b0 = local_58._8_8_;
  local_a8 = local_48._0_8_;
  uStack_a0 = local_48._8_8_;
  local_158 = 0;
  if (local_178 == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_118,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMesh_InvalidInput1",L"AppendMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_1a8 = (pFVar7->TextData).Reference;
    local_1b0 = 0x200;
    if (local_1a8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a8 + 8))(local_1a8,local_168);
    }
    local_1a0 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_1b0) &&
          (&local_1b0 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
      *puVar1 = (undefined1)local_1b0;
      puVar1[1] = local_1b0._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_1a8;
      if (local_1a8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8 + 8))(local_1a8,local_164);
      }
      *(uint *)(puVar1 + 0x10) = local_1a0;
    }
    if (local_1a8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a8 + 0x10))();
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    if (local_170 == 0) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_108,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                          L"AppendMesh_InvalidInput2",L"AppendMesh: AppendMesh is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar7);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_190 = (pFVar7->TextData).Reference;
      local_198 = 0x200;
      if (local_190 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190 + 8))(local_190,local_160);
      }
      local_188 = pFVar7->Flags;
      if (lVar4 != 0) {
        if (((*(undefined2 **)(lVar4 + 0x28) <= &local_198) &&
            (&local_198 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)(lVar4 + 0x30);
        if (iVar6 == *(int *)(lVar4 + 0x34)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
        }
        *(int *)(lVar4 + 0x30) = iVar6 + 1;
        puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
        *puVar1 = (undefined1)local_198;
        puVar1[1] = local_198._1_1_;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(ITextData **)(puVar1 + 8) = local_190;
        if (local_190 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_190 + 8))(local_190,local_15c);
        }
        *(uint *)(puVar1 + 0x10) = local_188;
      }
      if (local_190 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190 + 0x10))();
      }
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
    }
    else {
      local_138 = local_1c0;
      local_130 = &local_158;
      local_128 = &local_150;
      local_120 = &local_f8;
      local_140 = &local_138;
      local_148 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      UDynamicMesh::EditMesh
                (local_178,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_148,
                 GeneralEdit,Unknown,bVar8);
    }
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

// execAppendMeshRepeated @ 14cdece70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMeshRepeated
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  UDynamicMesh *this;
  UDynamicMesh *this_00;
  int iVar4;
  FText *pFVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_488 [32];
  undefined1 local_438 [8];
  undefined1 local_430 [8];
  int local_428;
  int local_424;
  int local_420 [2];
  undefined2 local_418;
  ITextData *local_410;
  uint local_408;
  undefined2 local_400;
  ITextData *local_3f8;
  uint local_3f0;
  longlong local_3e8;
  UDynamicMesh *local_3e0;
  UDynamicMesh *local_3d8;
  undefined1 local_3d0 [4];
  undefined1 local_3cc [4];
  undefined1 local_3c8 [4];
  undefined1 local_3c4 [4];
  FDynamicMesh3 *local_3c0;
  code *local_3b8;
  FDynamicMesh3 **local_3b0;
  code *local_3a8;
  undefined1 **local_3a0;
  undefined1 *local_398;
  TQuaternion<double>_u_0 *local_390;
  FDynamicMesh3 *local_388;
  int local_380;
  FText local_378;
  FText local_368;
  TQuaternion<double>_u_0 local_358;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_2f8;
  undefined8 local_2e0;
  FDynamicMesh3 local_2d8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_488;
  local_3d8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3d8);
  }
  local_3e0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3e0);
  }
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_420[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_420,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_420);
  }
  local_428 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_428,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_428);
  }
  bVar7 = local_428 != 0;
  local_424 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_424,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_424);
  }
  bVar8 = local_424 != 0;
  local_438[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_438,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_438);
  }
  local_3e8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3e8);
  }
  this_00 = local_3d8;
  this = local_3e0;
  lVar2 = local_3e8;
  iVar4 = local_420[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_430[0] = local_438[0];
  if (local_3d8 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_378,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshRepeated_InvalidInput1",
                        L"AppendMeshRepeated: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar5);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_410 = (pFVar5->TextData).Reference;
    local_418 = 0x200;
    if (local_410 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_410 + 8))(local_410,local_3d0);
    }
    local_408 = pFVar5->Flags;
    if (lVar2 != 0) {
      if (((*(undefined2 **)(lVar2 + 0x28) <= &local_418) &&
          (&local_418 < *(undefined2 **)(lVar2 + 0x28) + (longlong)*(int *)(lVar2 + 0x34) * 0xc)) &&
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
      iVar4 = *(int *)(lVar2 + 0x30);
      if (iVar4 == *(int *)(lVar2 + 0x34)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar2 + 0x28),(int *)(lVar2 + 0x34));
      }
      lVar6 = (longlong)iVar4;
      *(int *)(lVar2 + 0x30) = iVar4 + 1;
      lVar2 = *(longlong *)(lVar2 + 0x28);
      *(undefined1 *)(lVar2 + lVar6 * 0x18) = (undefined1)local_418;
      *(undefined1 *)(lVar2 + 1 + lVar6 * 0x18) = local_418._1_1_;
      *(undefined8 *)(lVar2 + 8 + lVar6 * 0x18) = 0;
      *(ITextData **)(lVar2 + 8 + lVar6 * 0x18) = local_410;
      if (local_410 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_410 + 8))(local_410,local_3cc);
      }
      *(uint *)(lVar2 + 0x10 + lVar6 * 0x18) = local_408;
    }
    if (local_410 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_410 + 0x10))();
    }
    if (local_378.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    if (local_3e0 == (UDynamicMesh *)0x0) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_368,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                          L"AppendMeshRepeated_InvalidInput2",
                          L"AppendMeshRepeated: AppendMesh is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar5);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_3f8 = (pFVar5->TextData).Reference;
      local_400 = 0x200;
      if (local_3f8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3f8 + 8))(local_3f8,local_3c8);
      }
      local_3f0 = pFVar5->Flags;
      if (lVar2 != 0) {
        if (((*(undefined2 **)(lVar2 + 0x28) <= &local_400) &&
            (&local_400 < *(undefined2 **)(lVar2 + 0x28) + (longlong)*(int *)(lVar2 + 0x34) * 0xc))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar4 = *(int *)(lVar2 + 0x30);
        if (iVar4 == *(int *)(lVar2 + 0x34)) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar2 + 0x28),(int *)(lVar2 + 0x34));
        }
        lVar6 = (longlong)iVar4;
        *(int *)(lVar2 + 0x30) = iVar4 + 1;
        lVar2 = *(longlong *)(lVar2 + 0x28);
        *(undefined1 *)(lVar2 + lVar6 * 0x18) = (undefined1)local_400;
        *(undefined1 *)(lVar2 + 1 + lVar6 * 0x18) = local_400._1_1_;
        *(undefined8 *)(lVar2 + 8 + lVar6 * 0x18) = 0;
        *(ITextData **)(lVar2 + 8 + lVar6 * 0x18) = local_3f8;
        if (local_3f8 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3f8 + 8))(local_3f8,local_3c4);
        }
        *(uint *)(lVar2 + 0x10 + lVar6 * 0x18) = local_3f0;
      }
      if (local_3f8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3f8 + 0x10))();
      }
      if (local_368.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
      }
    }
    else if (0 < local_420[0]) {
      local_358._s_0.X = (double)local_a8._0_8_;
      local_358._s_0.Z = (double)local_98._0_8_;
      local_358._s_0.Y = (double)local_a8._8_8_;
      local_2f8 = local_78._0_8_;
      local_358._s_0.W = (double)local_98._8_8_;
      local_328 = local_78._0_8_;
      local_2e0 = local_58._0_8_;
      local_338 = local_88._0_8_;
      uStack_330 = local_88._8_8_;
      local_310 = local_58._0_8_;
      local_320 = local_68._0_8_;
      uStack_318 = local_68._8_8_;
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_2d8);
      local_3c0 = &local_2d8;
      local_3b0 = &local_3c0;
      local_3b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshRepeated'::__l11::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                  ::Call;
      UDynamicMesh::ProcessMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_3b8)
      ;
      if (bVar7) {
        MeshTransforms::ApplyTransform
                  (&local_2d8,(TTransformSRT3<double> *)&local_358._s_0,true,All);
      }
      local_398 = local_430;
      local_380 = iVar4;
      local_390 = &local_358;
      local_388 = &local_2d8;
      local_3a0 = &local_398;
      local_3a8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshRepeated'::__l11::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                  ::Call;
      UDynamicMesh::EditMesh
                (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_3a8,
                 GeneralEdit,Unknown,bVar8);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2d8);
    }
    *(UDynamicMesh **)param_3 = this_00;
  }
  return;
}

// execAppendMeshRepeatedWithMaterials @ 14cded5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMeshRepeatedWithMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  short sVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  code *pcVar6;
  undefined1 uVar7;
  UDynamicMesh *this;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  int iVar19;
  uint uVar20;
  FText *pFVar21;
  longlong lVar22;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  TVar23;
  uint uVar24;
  uint uVar25;
  FDynamicMeshAttributeSet *pFVar26;
  FDynamicMeshAttributeSet *this_00;
  uint uVar27;
  ForAnyElementType FVar28;
  int iVar29;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar30;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar31;
  bool bVar32;
  undefined1 auStackY_548 [32];
  undefined1 local_4f8;
  char local_4f7;
  undefined1 local_4f0 [8];
  bool local_4e8;
  int local_4e4;
  int local_4e0;
  int local_4dc;
  int local_4d8;
  int local_4d4;
  undefined2 local_4d0;
  ITextData *local_4c8;
  uint local_4c0;
  undefined2 local_4b8;
  ITextData *local_4b0;
  uint local_4a8;
  UDynamicMesh *local_4a0;
  FDynamicMeshAttributeSet *local_498;
  longlong local_490;
  TArray<int,TSizedDefaultAllocator<32>_> local_488;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_478;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_468;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_458;
  FDynamicMeshAttributeSet *local_448;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_440;
  undefined1 local_438 [4];
  undefined1 local_434 [4];
  FDynamicMesh3 *local_430;
  undefined8 *local_428;
  undefined1 local_420 [8];
  code *local_418;
  FDynamicMesh3 **local_410;
  code *local_408;
  undefined1 **local_400;
  undefined1 *local_3f8;
  TQuaternion<double>_u_0 *local_3f0;
  FDynamicMesh3 *local_3e8;
  int local_3e0;
  FText local_3d8;
  FText local_3c8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  double local_390;
  TQuaternion<double>_u_0 local_388;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  double local_340;
  FDynamicMesh3 local_338;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_548;
  pFVar26 = (FDynamicMeshAttributeSet *)0x0;
  local_498 = (FDynamicMeshAttributeSet *)0x0;
  local_428 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_498,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_498);
  }
  local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.ArrayNum = 0;
  local_458.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_458,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_458);
  }
  local_4a0 = (UDynamicMesh *)0x0;
  pTVar31 = &local_458;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar31 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4a0);
  }
  local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468.ArrayNum = 0;
  local_468.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_468,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_468);
  }
  local_478.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.ArrayNum = 0;
  local_478.ArrayMax = 0;
  pTVar30 = &local_468;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar30 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_478,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_478);
  }
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_440 = &local_478;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_440 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                param_2->MostRecentPropertyAddress;
  }
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_4d8 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4d8);
  }
  local_4e4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4e4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4e4);
  }
  local_4f7 = local_4e4 != 0;
  local_4e0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4e0);
  }
  local_4e8 = local_4e0 != 0;
  local_4f8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4f8);
  }
  local_4dc = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_4dc,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_4dc);
  }
  bVar32 = local_4dc != 0;
  local_490 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_490,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_490);
  }
  dVar18 = local_b8;
  dVar15 = local_d8;
  dVar12 = dStack_f0;
  dVar11 = local_f8;
  dVar10 = dStack_100;
  dVar9 = local_108;
  lVar8 = local_490;
  this = local_4a0;
  uVar7 = local_4f8;
  uVar13 = local_e8._0_8_;
  uVar14 = local_e8._8_8_;
  uVar16 = local_c8._0_8_;
  uVar17 = local_c8._8_8_;
  local_4d4 = local_4d8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_448 = local_498;
  local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.ArrayNum = 0;
  local_488.ArrayMax = 0;
  UE::Private::AppendHelpers::AppendMaterials(pTVar31,pTVar30,bVar32,&local_488,local_440);
  this_00 = local_448;
  iVar19 = local_4d4;
  local_4f0[0] = uVar7;
  if (local_448 == (FDynamicMeshAttributeSet *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_3d8,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                         L"AppendMeshRepeated_InvalidInput1",
                         L"AppendMeshRepeated: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar21);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_4c8 = (pFVar21->TextData).Reference;
    local_4d0 = 0x200;
    if (local_4c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4c8 + 8))(local_4c8,local_420);
    }
    local_4c0 = pFVar21->Flags;
    if (lVar8 != 0) {
      if (((*(undefined2 **)(lVar8 + 0x28) <= &local_4d0) &&
          (&local_4d0 < *(undefined2 **)(lVar8 + 0x28) + (longlong)*(int *)(lVar8 + 0x34) * 0xc)) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar32)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar19 = *(int *)(lVar8 + 0x30);
      if (iVar19 == *(int *)(lVar8 + 0x34)) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar8 + 0x28),(int *)(lVar8 + 0x34));
      }
      lVar22 = (longlong)iVar19;
      *(int *)(lVar8 + 0x30) = iVar19 + 1;
      pFVar4 = ((ForAnyElementType *)(lVar8 + 0x28))->Data;
      pFVar4[lVar22 * 0x18] = local_4d0._0_1_;
      pFVar4[lVar22 * 0x18 + 1] = local_4d0._1_1_;
      *(undefined8 *)(pFVar4 + lVar22 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar4 + lVar22 * 0x18 + 8) = local_4c8;
      if (local_4c8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4c8 + 8))(local_4c8,local_438);
      }
      *(uint *)(pFVar4 + lVar22 * 0x18 + 0x10) = local_4c0;
    }
    if (local_4c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4c8 + 0x10))();
    }
    this_00 = pFVar26;
    if (local_3d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
    }
    goto LAB_14cdedf9b;
  }
  if (this == (UDynamicMesh *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_3c8,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                         L"AppendMeshRepeated_InvalidInput2",
                         L"AppendMeshRepeated: AppendMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar21);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_4b0 = (pFVar21->TextData).Reference;
    local_4b8 = 0x200;
    if (local_4b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4b0 + 8))(local_4b0,local_434);
    }
    local_4a8 = pFVar21->Flags;
    if (lVar8 != 0) {
      if (((*(undefined2 **)(lVar8 + 0x28) <= &local_4b8) &&
          (&local_4b8 < *(undefined2 **)(lVar8 + 0x28) + (longlong)*(int *)(lVar8 + 0x34) * 0xc)) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar32)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar19 = *(int *)(lVar8 + 0x30);
      if (iVar19 == *(int *)(lVar8 + 0x34)) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar8 + 0x28),(int *)(lVar8 + 0x34));
      }
      lVar22 = (longlong)iVar19;
      *(int *)(lVar8 + 0x30) = iVar19 + 1;
      pFVar4 = ((ForAnyElementType *)(lVar8 + 0x28))->Data;
      pFVar4[lVar22 * 0x18] = local_4b8._0_1_;
      pFVar4[lVar22 * 0x18 + 1] = local_4b8._1_1_;
      *(undefined8 *)(pFVar4 + lVar22 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar4 + lVar22 * 0x18 + 8) = local_4b0;
      if (local_4b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_4b0 + 8))(local_4b0,&local_440);
      }
      *(uint *)(pFVar4 + lVar22 * 0x18 + 0x10) = local_4a8;
    }
    if (local_4b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4b0 + 0x10))();
    }
    if (local_3c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
    }
    goto LAB_14cdedf9b;
  }
  if (local_4d4 < 1) goto LAB_14cdedf9b;
  local_3a8 = dVar15;
  local_358 = dVar15;
  local_388._s_0.X = dVar9;
  local_388._s_0.Z = dVar11;
  local_390 = dVar18;
  local_340 = dVar18;
  local_388._s_0.Y = dVar10;
  local_388._s_0.W = dVar12;
  local_3b8 = uVar13;
  uStack_3b0 = uVar14;
  local_368 = uVar13;
  uStack_360 = uVar14;
  local_3a0 = uVar16;
  uStack_398 = uVar17;
  local_350 = uVar16;
  uStack_348 = uVar17;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_338);
  local_430 = &local_338;
  local_410 = &local_430;
  local_418 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshRepeated'::__l11::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
              ::Call;
  UDynamicMesh::ProcessMesh
            (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_418);
  if (local_338.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0) {
    TVar23.Ptr = pFVar26;
    if (local_338.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0) {
      TVar23.Ptr = local_338.AttributeSet.Ptr;
    }
    if (((TVar23.Ptr)->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      TVar23.Ptr = pFVar26;
      if (local_338.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0) {
        TVar23.Ptr = local_338.AttributeSet.Ptr;
      }
      pTVar5 = ((TVar23.Ptr)->MaterialIDAttrib).Ptr;
      uVar27 = local_338.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               local_338.TriangleRefCounts.RefCounts.CurBlockUsed;
      if ((uVar27 == 0) ||
         (pFVar26 = (FDynamicMeshAttributeSet *)0x0,
         (ushort)(**(short **)local_338.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data -
                 1U) < 0xfffe)) {
LAB_14cdede27:
        uVar24 = (uint)pFVar26;
      }
      else {
        pFVar26 = (FDynamicMeshAttributeSet *)&DAT_00000001;
        uVar24 = 1;
        if (1 < (int)uVar27) {
          do {
            sVar2 = *(short *)(*(longlong *)
                                (local_338.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                                + ((ulonglong)pFVar26 >> 9) * 8) +
                              (ulonglong)((uint)pFVar26 & 0x1ff) * 2);
            if ((sVar2 != 0) && (sVar2 != -1)) break;
            uVar24 = (uint)pFVar26 + 1;
            pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)uVar24;
          } while ((int)uVar24 < (int)uVar27);
          goto LAB_14cdede27;
        }
      }
      iVar19 = local_4d4;
      if (uVar24 != uVar27) {
        FVar28.Data = local_338.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
        iVar29 = local_488.ArrayNum;
        do {
          uVar25 = (uint)pFVar26;
          uVar24 = *(uint *)(*(longlong *)
                              (*(longlong *)&pTVar5->field_0x20 + ((ulonglong)pFVar26 >> 9) * 8) +
                            (ulonglong)(uVar25 & 0x1ff) * 4);
          if ((-1 < (int)uVar24) && ((int)uVar24 < iVar29)) {
            uVar20 = 0;
            if ((int)uVar24 < iVar29) {
              uVar20 = ~uVar24 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)
             (*(longlong *)(*(longlong *)&pTVar5->field_0x20 + ((ulonglong)pFVar26 >> 9) * 8) +
             (ulonglong)(uVar25 & 0x1ff) * 4) =
                 *(undefined4 *)(local_488.AllocatorInstance.Data + (longlong)(int)uVar24 * 4);
            iVar29 = local_488.ArrayNum;
            FVar28.Data = local_338.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
          }
          do {
            uVar25 = uVar25 + 1;
            pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)uVar25;
            if ((int)uVar27 <= (int)uVar25) {
              this_00 = local_448;
              iVar19 = local_4d4;
              if (uVar25 == uVar27) goto LAB_14cdedf19;
              break;
            }
            sVar2 = *(short *)(*(longlong *)(FVar28.Data + (ulonglong)(uVar25 >> 9) * 8) +
                              (ulonglong)(uVar25 & 0x1ff) * 2);
          } while ((sVar2 == 0) || (sVar2 == -1));
        } while( true );
      }
    }
  }
LAB_14cdedf19:
  if (local_4f7 != '\0') {
    MeshTransforms::ApplyTransform(&local_338,(TTransformSRT3<double> *)&local_388._s_0,true,All);
  }
  local_3f8 = local_4f0;
  local_3f0 = &local_388;
  local_3e8 = &local_338;
  local_400 = &local_3f8;
  local_408 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshRepeated'::__l11::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
              ::Call;
  local_3e0 = iVar19;
  UDynamicMesh::EditMesh
            ((UDynamicMesh *)this_00,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_408,GeneralEdit,
             Unknown,local_4e8);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_338);
LAB_14cdedf9b:
  if (local_488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.AllocatorInstance.Data);
  }
  *local_428 = this_00;
  if (local_478.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.AllocatorInstance.Data);
  }
  if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.AllocatorInstance.Data);
  }
  if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.AllocatorInstance.Data);
  }
  return;
}

// execAppendMeshTransformed @ 14cdee030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMeshTransformed
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UGeometryScriptDebug *pUVar5;
  int iVar6;
  FText *pFVar7;
  UDynamicMesh *pUVar8;
  void **ppvVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_258 [32];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  int local_1f8;
  int local_1f4;
  undefined2 local_1f0;
  ITextData *local_1e8;
  uint local_1e0;
  undefined2 local_1d8;
  ITextData *local_1d0;
  uint local_1c8;
  UGeometryScriptDebug *local_1c0;
  UDynamicMesh *local_1b8;
  longlong local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  undefined8 local_188;
  longlong local_180;
  code *local_178;
  undefined1 **local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  longlong *local_158;
  void **local_150;
  undefined1 local_148;
  undefined8 *local_140;
  FText local_138;
  FText local_128;
  FText local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_1b8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_1b0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1a8 = (void *)0x0;
  local_1a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  ppvVar9 = &local_1a8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_1f8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  bVar10 = local_1f8 != 0;
  local_1f4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f4);
  }
  bVar11 = local_1f4 != 0;
  local_208[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_208,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_208);
  }
  local_1c0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  pUVar8 = local_1b8;
  pUVar5 = local_1c0;
  local_108 = local_a8._0_8_;
  uStack_100 = local_a8._8_8_;
  local_f8 = local_98._0_8_;
  uStack_f0 = local_98._8_8_;
  local_200[0] = local_208[0];
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_180 = local_1b0;
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58._0_8_;
  uStack_b0 = local_58._8_8_;
  local_188 = 0;
  if (local_1b8 == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_138,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshTransformed_InvalidInput1",
                        L"AppendMeshTransformed: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_1e8 = (pFVar7->TextData).Reference;
    local_1f0 = 0x200;
    if (local_1e8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8 + 8))(local_1e8,local_198);
    }
    local_1e0 = pFVar7->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_1f0) &&
          ((FScriptContainerElement *)&local_1f0 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      (pUVar5->Messages).ArrayNum = iVar6 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
      *pFVar3 = local_1f0._0_1_;
      pFVar3[1] = local_1f0._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_1e8;
      if (local_1e8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1e8 + 8))(local_1e8,local_194);
      }
      *(uint *)(pFVar3 + 0x10) = local_1e0;
    }
    if (local_1e8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8 + 0x10))();
    }
    pUVar8 = (UDynamicMesh *)0x0;
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
  }
  else if (local_1b0 == 0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_128,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshTransformed_InvalidInput2",
                        L"AppendMeshTransformed: AppendMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_1d0 = (pFVar7->TextData).Reference;
    local_1d8 = 0x200;
    if (local_1d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d0 + 8))(local_1d0,local_190);
    }
    local_1c8 = pFVar7->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_1d8) &&
          ((FScriptContainerElement *)&local_1d8 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      (pUVar5->Messages).ArrayNum = iVar6 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
      *pFVar3 = local_1d8._0_1_;
      pFVar3[1] = local_1d8._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_1d0;
      if (local_1d0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1d0 + 8))(local_1d0,local_18c);
      }
      *(uint *)(pFVar3 + 0x10) = local_1c8;
    }
    if (local_1d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d0 + 0x10))();
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
  }
  else if (*(int *)(ppvVar9 + 1) == 0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_118,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"AppendMeshTransformed_NoTransforms",
                        L"AppendMeshTransformed: AppendTransforms array is empty");
    UE::Geometry::AppendError(pUVar5,InvalidInputs,pFVar7);
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
  }
  else {
    local_168 = local_200;
    local_160 = &local_188;
    local_158 = &local_180;
    local_140 = &local_108;
    local_170 = &local_168;
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshTransformed'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_150 = ppvVar9;
    local_148 = bVar10;
    UDynamicMesh::EditMesh
              (local_1b8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_178,
               GeneralEdit,Unknown,bVar11);
  }
  *(UDynamicMesh **)param_3 = pUVar8;
  if (local_1a8 != (void *)0x0) {
    FMemory::Free(local_1a8);
  }
  return;
}

// execAppendMeshTransformedWithMaterials @ 14cdee730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMeshTransformedWithMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  UGeometryScriptDebug *pUVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  int iVar20;
  FText *pFVar21;
  UDynamicMesh *this;
  void **ppvVar22;
  bool bVar23;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8 [8];
  bool local_2c0 [8];
  undefined1 local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  undefined2 local_2a8;
  ITextData *local_2a0;
  uint local_298;
  undefined2 local_290;
  ITextData *local_288;
  uint local_280;
  UGeometryScriptDebug *local_278;
  longlong local_270;
  UDynamicMesh *local_268;
  void *local_260;
  undefined8 local_258;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_250;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_240;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_230;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_220;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_218;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_210;
  TArray<int,TSizedDefaultAllocator<32>_> local_208;
  undefined1 local_1f8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  code *local_1d8;
  bool **local_1d0;
  bool *local_1c8;
  TArray<int,TSizedDefaultAllocator<32>_> **local_1c0;
  longlong *local_1b8;
  void **local_1b0;
  undefined1 local_1a8;
  double *local_1a0;
  FText local_198;
  FText local_188;
  FText local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_268 = (UDynamicMesh *)0x0;
  local_1e0 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_268,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_268);
  }
  local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.ArrayNum = 0;
  local_230.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_230,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_230);
  }
  local_270 = 0;
  local_220 = &local_230;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_220 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_270,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_270);
  }
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_240,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_240);
  }
  local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ArrayNum = 0;
  local_250.ArrayMax = 0;
  local_218 = &local_240;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_218 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_250,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_250);
  }
  local_260 = (void *)0x0;
  local_258 = 0;
  local_210 = &local_250;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_210 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_260,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_260);
  }
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  ppvVar22 = &local_260;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar22 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_2b4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b4);
  }
  local_2b8 = local_2b4 != 0;
  local_2b0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b0);
  }
  bVar23 = local_2b0 != 0;
  local_2c8[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2c8);
  }
  local_2ac = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2ac,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2ac);
  }
  local_2c0[0] = local_2ac != 0;
  local_278 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  dVar19 = dStack_b0;
  dVar18 = local_b8;
  dVar15 = dStack_d0;
  dVar14 = local_d8;
  dVar11 = dStack_f0;
  dVar10 = local_f8;
  dVar9 = dStack_100;
  dVar8 = local_108;
  this = local_268;
  lVar7 = local_270;
  pUVar6 = local_278;
  uVar5 = local_2c8[0];
  uVar12 = local_e8._0_8_;
  uVar13 = local_e8._8_8_;
  uVar16 = local_c8._0_8_;
  uVar17 = local_c8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.ArrayNum = 0;
  local_208.ArrayMax = 0;
  UE::Private::AppendHelpers::AppendMaterials(local_220,local_218,local_2c0[0],&local_208,local_210)
  ;
  local_168 = dVar8;
  dStack_160 = dVar9;
  local_1f0 = &local_208;
  local_158 = dVar10;
  dStack_150 = dVar11;
  local_148 = uVar12;
  uStack_140 = uVar13;
  local_138 = dVar14;
  dStack_130 = dVar15;
  local_128 = uVar16;
  uStack_120 = uVar17;
  local_118 = dVar18;
  dStack_110 = dVar19;
  local_2c0[0] = (bool)uVar5;
  local_1e8 = lVar7;
  if (this == (UDynamicMesh *)0x0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_198,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                         L"AppendMeshTransformed_InvalidInput1",
                         L"AppendMeshTransformed: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar21);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_2a0 = (pFVar21->TextData).Reference;
    local_2a8 = 0x200;
    if (local_2a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a0 + 8))(local_2a0,local_1f8);
    }
    local_298 = pFVar21->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_2a8) &&
          ((FScriptContainerElement *)&local_2a8 <
           pFVar3 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar20 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      (pUVar6->Messages).ArrayNum = iVar20 + 1;
      pFVar3 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar20 * 0x18;
      *pFVar3 = local_2a8._0_1_;
      pFVar3[1] = local_2a8._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_2a0;
      if (local_2a0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2a0 + 8))(local_2a0,&local_220);
      }
      *(uint *)(pFVar3 + 0x10) = local_298;
    }
    if (local_2a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a0 + 0x10))();
    }
    this = (UDynamicMesh *)0x0;
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
  }
  else if (lVar7 == 0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_188,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                         L"AppendMeshTransformed_InvalidInput2",
                         L"AppendMeshTransformed: AppendMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar21);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_288 = (pFVar21->TextData).Reference;
    local_290 = 0x200;
    if (local_288 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288 + 8))(local_288,&local_218);
    }
    local_280 = pFVar21->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_290) &&
          ((FScriptContainerElement *)&local_290 <
           pFVar3 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar20 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      (pUVar6->Messages).ArrayNum = iVar20 + 1;
      pFVar3 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar20 * 0x18;
      *pFVar3 = local_290._0_1_;
      pFVar3[1] = local_290._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_288;
      if (local_288 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_288 + 8))(local_288,&local_210);
      }
      *(uint *)(pFVar3 + 0x10) = local_280;
    }
    if (local_288 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288 + 0x10))();
    }
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
  }
  else if (*(int *)(ppvVar22 + 1) == 0) {
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_178,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                         L"AppendMeshTransformed_NoTransforms",
                         L"AppendMeshTransformed: AppendTransforms array is empty");
    UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar21);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
  }
  else {
    local_1c8 = local_2c0;
    local_1c0 = &local_1f0;
    local_1b8 = &local_1e8;
    local_1a8 = local_2b8;
    local_1a0 = &local_168;
    local_1d0 = &local_1c8;
    local_1d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMeshTransformed'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_1b0 = ppvVar22;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_1d8,
               GeneralEdit,Unknown,bVar23);
  }
  if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  *local_1e0 = this;
  if (local_260 != (void *)0x0) {
    FMemory::Free(local_260);
  }
  if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.AllocatorInstance.Data);
  }
  return;
}

// execAppendMeshWithMaterials @ 14cdef050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMeshWithMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  FText *pFVar20;
  UDynamicMesh *this;
  bool bVar21;
  bool bVar22;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  int local_288;
  int local_284;
  undefined2 local_280;
  ITextData *local_278;
  uint local_270;
  undefined2 local_268;
  ITextData *local_260;
  uint local_258;
  longlong local_250;
  longlong local_248;
  UDynamicMesh *local_240;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_238;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_228;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_218;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_208;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_200;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_1f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1f0;
  undefined1 local_1e0 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8;
  code *local_1c0;
  undefined1 **local_1b8;
  undefined1 *local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> **local_1a8;
  longlong *local_1a0;
  double *local_198;
  FText local_190;
  FText local_180;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_240 = (UDynamicMesh *)0x0;
  local_1c8 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_240,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_240);
  }
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  local_248 = 0;
  local_208 = &local_218;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_208 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_248,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_248);
  }
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  local_200 = &local_228;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_200 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1f8 = &local_238;
  if ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)0x0) {
    local_1f8 = (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                param_2->MostRecentPropertyAddress;
  }
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_288 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  bVar21 = local_288 != 0;
  local_298[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_298,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_298);
  }
  local_284 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_284,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_284);
  }
  bVar22 = local_284 != 0;
  local_250 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_250,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_250);
  }
  dVar18 = dStack_b0;
  dVar17 = local_b8;
  dVar14 = dStack_d0;
  dVar13 = local_d8;
  dVar10 = dStack_f0;
  dVar9 = local_f8;
  dVar8 = dStack_100;
  dVar7 = local_108;
  this = local_240;
  lVar6 = local_248;
  lVar5 = local_250;
  uVar4 = local_298[0];
  uVar11 = local_e8._0_8_;
  uVar12 = local_e8._8_8_;
  uVar15 = local_c8._0_8_;
  uVar16 = local_c8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  UE::Private::AppendHelpers::AppendMaterials(local_208,local_200,bVar22,&local_1f0,local_1f8);
  local_168 = dVar7;
  dStack_160 = dVar8;
  local_1d8 = &local_1f0;
  local_158 = dVar9;
  dStack_150 = dVar10;
  local_148 = uVar11;
  uStack_140 = uVar12;
  local_138 = dVar13;
  dStack_130 = dVar14;
  local_128 = uVar15;
  uStack_120 = uVar16;
  local_118 = dVar17;
  dStack_110 = dVar18;
  local_290[0] = uVar4;
  local_1d0 = lVar6;
  if (this == (UDynamicMesh *)0x0) {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_190,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                         L"AppendMesh_InvalidInput1",L"AppendMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar20);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_278 = (pFVar20->TextData).Reference;
    local_280 = 0x200;
    if (local_278 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278 + 8))(local_278,local_1e0);
    }
    local_270 = pFVar20->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_280) &&
          (&local_280 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar19 = *(int *)(lVar5 + 0x30);
      if (iVar19 == *(int *)(lVar5 + 0x34)) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar19 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar19 * 0x18);
      *puVar1 = (undefined1)local_280;
      puVar1[1] = local_280._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_278;
      if (local_278 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_278 + 8))(local_278,&local_208);
      }
      *(uint *)(puVar1 + 0x10) = local_270;
    }
    if (local_278 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278 + 0x10))();
    }
    this = (UDynamicMesh *)0x0;
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
  }
  else if (lVar6 == 0) {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_180,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                         L"AppendMesh_InvalidInput2",L"AppendMesh: AppendMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar20);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_260 = (pFVar20->TextData).Reference;
    local_268 = 0x200;
    if (local_260 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_260 + 8))(local_260,&local_200);
    }
    local_258 = pFVar20->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_268) &&
          (&local_268 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar19 = *(int *)(lVar5 + 0x30);
      if (iVar19 == *(int *)(lVar5 + 0x34)) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar19 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar19 * 0x18);
      *puVar1 = (undefined1)local_268;
      puVar1[1] = local_268._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_260;
      if (local_260 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_260 + 8))(local_260,&local_1f8);
      }
      *(uint *)(puVar1 + 0x10) = local_258;
    }
    if (local_260 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_260 + 0x10))();
    }
    if (local_180.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
    }
  }
  else {
    local_1b0 = local_290;
    local_1a8 = &local_1d8;
    local_1a0 = &local_1d0;
    local_198 = &local_168;
    local_1b8 = &local_1b0;
    local_1c0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Private::AppendHelpers::AppendMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_1c0,
               GeneralEdit,Unknown,bVar21);
  }
  if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  *local_1c8 = this;
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  return;
}

// execDeleteSelectedTrianglesFromMesh @ 14cdffed0

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteSelectedTrianglesFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UDynamicMesh *this;
  bool bVar3;
  uchar *puVar4;
  bool bVar5;
  uchar local_res10 [8];
  int local_res18 [2];
  UDynamicMesh *local_res20;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FGeometryScriptMeshSelection local_58;
  FGeometrySelection **local_48;
  uchar *local_40;
  code *local_38;
  FGeometrySelection ***local_30;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_58);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
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
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
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
  this = local_res20;
  bVar5 = local_res18[0] != 0;
  local_68 = local_58.GeoSelection.Object;
  pTStack_60 = local_58.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_58.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_res20 != (UDynamicMesh *)0x0) {
    if ((local_58.GeoSelection.Object == (FGeometrySelection *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)&(local_68->Selection).Elements.field_0x8 !=
        *(int *)&(local_68->Selection).Elements.field_0x34) {
      local_48 = &local_68;
      puVar4[0] = '\0';
      puVar4[1] = '\0';
      puVar4[2] = '\0';
      puVar4[3] = '\0';
      local_30 = &local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      local_40 = puVar4;
      UDynamicMesh::EditMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
                 GeneralEdit,Unknown,bVar5);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execDeleteTriangleFromMesh @ 14ce000e0

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteTriangleFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_58 [2];
  UDynamicMesh *local_50;
  undefined4 *local_48;
  uchar *local_40;
  code *local_38;
  undefined4 **local_30;
  
  local_50 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
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
  pUVar2 = local_50;
  bVar4 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58[0] = local_res20[0];
  *puVar3 = '\0';
  if (local_50 != (UDynamicMesh *)0x0) {
    local_48 = local_58;
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_40 = puVar3;
    UDynamicMesh::EditMesh
              (local_50,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execDeleteTrianglesFromMesh @ 14ce00470

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteTrianglesFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *this;
  uchar *puVar2;
  bool bVar3;
  uchar local_res10 [8];
  int local_res18 [2];
  UDynamicMesh *local_res20;
  undefined1 *local_78;
  uchar *local_70;
  code *local_68;
  undefined1 **local_60;
  undefined1 local_58 [8];
  longlong local_50;
  TReferenceControllerBase<1> *pTStack_48;
  undefined1 local_40 [8];
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58[0] = 0;
  local_50 = 0;
  pTStack_48 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
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
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
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
  this = local_res20;
  bVar3 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40[0] = local_58[0];
  local_38 = local_50;
  local_30 = pTStack_48;
  if (pTStack_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_48->SharedReferenceCount = (atomic<int>)((int)pTStack_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_50 != 0) && (*(int *)(local_50 + 8) != 0)) &&
     (puVar2[0] = '\0', puVar2[1] = '\0', puVar2[2] = '\0', puVar2[3] = '\0',
     this != (UDynamicMesh *)0x0)) {
    local_78 = local_40;
    local_60 = &local_78;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_70 = puVar2;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,
               GeneralEdit,Unknown,bVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  return;
}

// execDeleteVertexFromMesh @ 14ce00650

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteVertexFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_58 [2];
  UDynamicMesh *local_50;
  undefined4 *local_48;
  uchar *local_40;
  code *local_38;
  undefined4 **local_30;
  
  local_50 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
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
  pUVar2 = local_50;
  bVar4 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58[0] = local_res20[0];
  *puVar3 = '\0';
  if (local_50 != (UDynamicMesh *)0x0) {
    local_48 = local_58;
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_40 = puVar3;
    UDynamicMesh::EditMesh
              (local_50,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execDeleteVerticesFromMesh @ 14ce007e0

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteVerticesFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *this;
  uchar *puVar2;
  bool bVar3;
  uchar local_res10 [8];
  int local_res18 [2];
  UDynamicMesh *local_res20;
  char *local_78;
  uchar *local_70;
  code *local_68;
  undefined1 **local_60;
  char local_58 [8];
  longlong local_50;
  TReferenceControllerBase<1> *pTStack_48;
  char local_40 [8];
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58[0] = '\0';
  local_50 = 0;
  pTStack_48 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
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
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
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
  this = local_res20;
  bVar3 = local_res18[0] != 0;
  local_30 = pTStack_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_50;
  local_40[0] = local_58[0];
  if (pTStack_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_48->SharedReferenceCount = (atomic<int>)((int)pTStack_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((((local_50 != 0) && (*(int *)(local_50 + 8) != 0)) &&
      ((local_58[0] == '\x03' || (local_58[0] == '\0')))) &&
     (puVar2[0] = '\0', puVar2[1] = '\0', puVar2[2] = '\0', puVar2[3] = '\0',
     this != (UDynamicMesh *)0x0)) {
    local_78 = local_40;
    local_60 = &local_78;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_70 = puVar2;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,
               GeneralEdit,Unknown,bVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  return;
}

// execDiscardMeshAttributes @ 14ce00c50

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execDiscardMeshAttributes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  undefined1 local_res10 [8];
  int local_res18 [2];
  UDynamicMesh *local_res20;
  code *local_28;
  undefined1 *local_20;
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UDynamicMesh *)0x0) {
    local_20 = local_res10;
    local_res10[0] = 0;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_28,
               GeneralEdit,Unknown,local_res18[0] != 0);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execMergeMeshVertexPair @ 14ce0c100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execMergeMeshVertexPair
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined2 uVar4;
  longlong lVar5;
  UDynamicMesh *pUVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  uchar *puVar9;
  bool bVar10;
  uchar local_res10 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  undefined2 local_b8;
  ITextData *local_b0;
  uint local_a8;
  longlong local_a0;
  undefined8 local_98;
  UDynamicMesh *local_90;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  uchar *local_68;
  code *local_60;
  undefined4 *local_58;
  FText local_50;
  
  local_90 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_c0[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c0);
  }
  local_c4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c4);
  }
  local_res18[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  local_98 = 0;
  puVar9 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_c8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  bVar10 = local_c8 != 0;
  local_a0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  pUVar6 = local_90;
  lVar5 = local_a0;
  uVar4 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res18[0];
  *puVar9 = '\0';
  if (local_90 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_50,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                      L"MergeMeshVertexPair_InvalidInput",L"MergeMeshVertexPair: TargetMesh is Null"
                     );
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_b0 = (this->TextData).Reference;
    local_b8 = 0x200;
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 8))(local_b0,&local_res20);
    }
    local_a8 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_b8) &&
          (&local_b8 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      lVar8 = (longlong)iVar7;
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar5 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_b8._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_b8._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_b0;
      if (local_b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0 + 8))(local_b0,local_88);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_a8;
    }
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_70 = (undefined1)uVar4;
    local_6f = local_res20._1_1_;
    local_58 = &local_80;
    local_80 = local_c0[0];
    local_7c = local_c4;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVertexPair'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_78 = local_98;
    local_68 = puVar9;
    UDynamicMesh::EditMesh
              (local_90,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_60,
               GeneralEdit,Unknown,bVar10);
    *(UDynamicMesh **)param_3 = pUVar6;
  }
  return;
}

// execMergeMeshVerticesInSelections @ 14ce0c540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execMergeMeshVerticesInSelections
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined2 uVar4;
  longlong lVar5;
  int iVar6;
  FText *this;
  longlong lVar7;
  UDynamicMesh *pUVar8;
  uchar *puVar9;
  bool bVar10;
  undefined2 local_res10 [4];
  undefined2 local_res18;
  uchar local_res20 [8];
  int local_128 [2];
  undefined2 local_120;
  ITextData *local_118;
  uint local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  UDynamicMesh *local_f0;
  FGeometryScriptMeshSelection local_e8;
  FGeometryScriptMeshSelection local_d8;
  undefined1 local_c8 [16];
  FGeometrySelection *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  code *local_a8;
  FGeometrySelection ***local_a0;
  FGeometrySelection *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FGeometrySelection **local_88;
  FGeometrySelection **local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  uchar *local_68;
  undefined8 local_60;
  FText local_58 [2];
  
  local_f0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_d8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_e8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res10[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_f8 = 0;
  puVar9 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_100 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_128[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  bVar10 = local_128[0] != 0;
  local_108 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pUVar8 = local_f0;
  lVar5 = local_108;
  local_98 = local_e8.GeoSelection.Object;
  pTStack_90 = local_e8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10[0];
  uVar4 = local_res18;
  if (local_e8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = local_d8.GeoSelection.Object;
  pTStack_b0 = local_d8.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_d8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar9[0] = '\0';
  puVar9[1] = '\0';
  puVar9[2] = '\0';
  puVar9[3] = '\0';
  if (local_f0 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (local_58,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                      L"MergeMeshVerticesInSelections_InvalidInput",
                      L"MergeMeshVerticesInSelections: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_118 = (this->TextData).Reference;
    local_120 = 0x200;
    if (local_118 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118 + 8))(local_118,&local_res18);
    }
    local_110 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_120) &&
          (&local_120 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar5 + 0x30);
      if (iVar6 == *(int *)(lVar5 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      lVar7 = (longlong)iVar6;
      *(int *)(lVar5 + 0x30) = iVar6 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar5 + 0x28))->Data;
      pFVar2[lVar7 * 0x18] = local_120._0_1_;
      pFVar2[lVar7 * 0x18 + 1] = local_120._1_1_;
      *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar7 * 0x18 + 8) = local_118;
      if (local_118 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118 + 8))(local_118,local_c8);
      }
      *(uint *)(pFVar2 + lVar7 * 0x18 + 0x10) = local_110;
    }
    if (local_118 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118 + 0x10))();
    }
    if (local_58[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58[0].TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
    pUVar8 = (UDynamicMesh *)0x0;
  }
  else {
    local_70 = (undefined1)local_res10[0];
    local_88 = &local_b8;
    local_res18._1_1_ = (undefined1)((ushort)local_res10[0] >> 8);
    local_6f = local_res18._1_1_;
    local_a0 = &local_88;
    local_80 = &local_98;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVerticesInSelections'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_78 = local_f8;
    local_60 = local_100;
    local_res18 = uVar4;
    local_68 = puVar9;
    UDynamicMesh::EditMesh
              (local_f0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_a8,
               GeneralEdit,Unknown,bVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  *(UDynamicMesh **)param_3 = pUVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSetAllMeshVertexPositions @ 14ce0ecd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execSetAllMeshVertexPositions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  UDynamicMesh *pUVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_e8;
  ITextData *local_e0;
  uint local_d8;
  undefined2 local_d0;
  ITextData *local_c8;
  uint local_c0;
  longlong local_b8;
  UDynamicMesh *local_b0;
  longlong local_a8 [2];
  longlong local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  longlong *local_68;
  longlong *local_60;
  code *local_58;
  longlong **local_50;
  FText local_48;
  FText local_38;
  
  local_b0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_98 = 0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_b8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pUVar8 = local_b0;
  local_78 = local_98;
  pTStack_70 = pTStack_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8[0] = local_b8;
  if (local_b0 == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"SetAllMeshVertexPositions_InvalidMesh",
                        L"SetAllMeshVertexPositions: TargetMesh is Null");
    lVar4 = local_a8[0];
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_e0 = (pFVar7->TextData).Reference;
    local_e8 = 0x200;
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 8))(local_e0,local_res10);
    }
    local_d8 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_e8) &&
          (&local_e8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
      *puVar1 = (undefined1)local_e8;
      puVar1[1] = local_e8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_e0;
      if (local_e0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0 + 8))(local_e0,local_res18);
      }
      *(uint *)(puVar1 + 0x10) = local_d8;
    }
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 0x10))();
    }
    pUVar8 = (UDynamicMesh *)0x0;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else if ((local_98 == 0) || (*(int *)(local_98 + 8) == 0)) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshBasicEditFunctions",
                        L"SetAllMeshVertexPositions_InvalidList",
                        L"SetAllMeshVertexPositions: List is empty");
    lVar4 = local_a8[0];
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_c8 = (pFVar7->TextData).Reference;
    local_d0 = 0x200;
    if (local_c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8 + 8))(local_c8,local_res20);
    }
    local_c0 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_d0) &&
          (&local_d0 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
      *puVar1 = (undefined1)local_d0;
      puVar1[1] = local_d0._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_c8;
      if (local_c8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8 + 8))(local_c8,local_88);
      }
      *(uint *)(puVar1 + 0x10) = local_c0;
    }
    if (local_c8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8 + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
    local_68 = &local_78;
    local_60 = local_a8;
    local_50 = &local_68;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (local_b0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_58,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  *(UDynamicMesh **)param_3 = pUVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return;
}

// execSetVertexPosition @ 14ce146d0

void __cdecl
UGeometryScriptLibrary_MeshBasicEditFunctions::execSetVertexPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_98 [2];
  UDynamicMesh *local_90;
  code *local_88;
  undefined4 **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 *local_60;
  uchar *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_90 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
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
  pUVar2 = local_90;
  bVar4 = local_res18[0] != 0;
  local_48 = local_78;
  uStack_40 = uStack_70;
  local_38 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98[0] = local_res20[0];
  *puVar3 = '\0';
  if (local_90 != (UDynamicMesh *)0x0) {
    local_60 = local_98;
    local_50 = &local_48;
    local_80 = &local_60;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_58 = puVar3;
    UDynamicMesh::EditMesh
              (local_90,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_88,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

