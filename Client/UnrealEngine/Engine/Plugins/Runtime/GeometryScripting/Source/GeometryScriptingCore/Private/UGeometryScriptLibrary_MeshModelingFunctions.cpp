// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 40

// StaticClass @ 14ce1c510

UClass * __cdecl UGeometryScriptLibrary_MeshModelingFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshModelingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshModelingFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshModelingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshModelingFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshModelingFunctions @ 14ce26820

UGeometryScriptLibrary_MeshModelingFunctions * __thiscall
UGeometryScriptLibrary_MeshModelingFunctions::UGeometryScriptLibrary_MeshModelingFunctions
          (UGeometryScriptLibrary_MeshModelingFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshModelingFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshModelingFunctions @ 14ce26850

UGeometryScriptLibrary_MeshModelingFunctions * __thiscall
UGeometryScriptLibrary_MeshModelingFunctions::UGeometryScriptLibrary_MeshModelingFunctions
          (UGeometryScriptLibrary_MeshModelingFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshModelingFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshModelingFunctions @ 14ce272f0

void __thiscall
UGeometryScriptLibrary_MeshModelingFunctions::~UGeometryScriptLibrary_MeshModelingFunctions
          (UGeometryScriptLibrary_MeshModelingFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshModelingFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce2aee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  FGeometryScriptMeshSelection *this_00;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FGroupTopology *this_01;
  FGroupTopology *pFVar11;
  float fVar12;
  longlong lVar13;
  float fVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  FGroupTopology *pFVar17;
  TArrayView<int_const_,int> *pTVar18;
  TFunctionRef<bool___cdecl(int)> *pTVar19;
  undefined1 auStack_278 [32];
  uint *local_258;
  FScriptContainerElement *local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  uint local_228;
  undefined1 local_224 [4];
  TArray<int,TSizedDefaultAllocator<32>_> local_220;
  TArray<int,TSizedDefaultAllocator<32>_> local_210;
  TArray<int,TSizedDefaultAllocator<32>_> local_200;
  TArray<int,TSizedDefaultAllocator<32>_> local_1f0;
  FDynamicMesh3 *local_1e0;
  undefined8 local_1d8;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  code *local_1b8;
  FDynamicMesh3 **local_1b0;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  code *local_198;
  undefined1 *local_190;
  TArrayView<int_const_,int> local_188;
  TArrayView<int_const_,int> local_178;
  FMeshBevel local_168;
  ulonglong local_38;
  
  pTVar18 = &local_178;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  UE::Geometry::FMeshBevel::FMeshBevel(&local_168);
  pfVar4 = *(float **)this;
  pFVar17 = (FGroupTopology *)0x0;
  local_168.InsetDistance = (double)*pfVar4;
  local_168.MaterialIDMode = (EMaterialIDMode)(*(char *)(pfVar4 + 1) != '\0');
  local_168.SetConstantMaterialID = (int)pfVar4[2];
  fVar12 = 1.40116e-41;
  if ((int)pfVar4[3] < 9999) {
    fVar12 = pfVar4[3];
  }
  local_168.NumSubdivisions = (int)0.0;
  if (0 < (int)fVar12) {
    local_168.NumSubdivisions = (int)fVar12;
  }
  this_00 = *(FGeometryScriptMeshSelection **)((longlong)this + 0x10);
  local_168.RoundWeight = (double)pfVar4[4];
  if (__real_4024000000000000 <= (double)pfVar4[4]) {
    local_168.RoundWeight = __real_4024000000000000;
  }
  if (local_168.RoundWeight <= __real_c024000000000000) {
    local_168.RoundWeight = __real_c024000000000000;
  }
  cVar2 = **(char **)((longlong)this + 8);
  if (cVar2 == '\x03') {
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_210.ArrayMax = 0;
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray(this_00,param_1,&local_210,Edge);
    iVar3 = local_210.ArrayNum;
    if ((param_1->TriangleGroups).bIsSet == false) {
      local_190 = local_224;
      local_198 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>,bool,int>
                  ::Call;
      local_1a8 = local_210.AllocatorInstance.Data;
      if ((local_210.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iStack_1a0 = iVar3;
      pTVar19 = (TFunctionRef<bool___cdecl(int)> *)&local_198;
      local_178._12_4_ = uStack_19c;
      local_178.ArrayNum = iVar3;
      local_178.DataPtr = (int *)local_1a8;
    }
    else {
      local_1b0 = &local_1e0;
      local_1b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,bool,int>
                  ::Call;
      local_1c8 = local_210.AllocatorInstance.Data;
      local_1e0 = param_1;
      if ((local_210.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iStack_1c0 = iVar3;
      pTVar19 = (TFunctionRef<bool___cdecl(int)> *)&local_1b8;
      local_188._12_4_ = uStack_1bc;
      local_188.ArrayNum = iVar3;
      pTVar18 = &local_188;
      local_188.DataPtr = (int *)local_1c8;
    }
    UE::Geometry::FMeshBevel::InitializeFromTriangleEdges(&local_168,param_1,pTVar18,pTVar19);
    FVar15.Data = local_210.AllocatorInstance.Data;
  }
  else {
    if (cVar2 != '\0') {
      local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.ArrayNum = 0;
      local_200.ArrayMax = 0;
      FGeometryScriptMeshSelection::ConvertToMeshIndexArray(this_00,param_1,&local_200,PolygroupID);
      this_01 = ::operator_new(0x160);
      pFVar11 = pFVar17;
      if (this_01 != (FGroupTopology *)0x0) {
        pFVar11 = UE::Geometry::FGroupTopology::FGroupTopology(this_01,param_1,true);
      }
      local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.ArrayNum = 0;
      local_220.ArrayMax = 0;
      iVar3 = (pFVar11->Edges).ArrayNum;
      local_228 = 0;
      if (0 < iVar3) {
        do {
          iVar10 = (pFVar11->Edges).ArrayNum;
          uVar16 = (uint)pFVar17;
          uVar8 = 0;
          uVar9 = uVar8;
          if ((int)uVar16 < iVar10) {
            uVar9 = ~uVar16 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_258 = (uint *)(longlong)(int)uVar16;
            local_250 = (FScriptContainerElement *)(longlong)iVar10;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          uVar5 = *(undefined8 *)
                   ((pFVar11->Edges).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x50);
          pFVar1 = local_200.AllocatorInstance.Data + (longlong)local_200.ArrayNum * 4;
          for (FVar15.Data = local_200.AllocatorInstance.Data; FVar15.Data != pFVar1;
              FVar15.Data = FVar15.Data + 4) {
            if (*(int *)FVar15.Data == (int)uVar5) {
              fVar12 = 1.4013e-45;
              goto LAB_14ce2b1e0;
            }
          }
          fVar14 = 0.0;
          fVar12 = 0.0;
          if (local_200.AllocatorInstance.Data != pFVar1) {
LAB_14ce2b1e0:
            fVar14 = fVar12;
            local_1d8._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
            FVar15.Data = local_200.AllocatorInstance.Data;
            do {
              if (*(int *)FVar15.Data == local_1d8._4_4_) {
                uVar8 = 1;
                break;
              }
              FVar15.Data = FVar15.Data + 4;
            } while (FVar15.Data != pFVar1);
          }
          local_1d8 = uVar5;
          if ((cVar2 == '\x02') + 1 <= uVar8 + (int)fVar14) {
            if (local_220.AllocatorInstance.Data <= (FScriptContainerElement *)&local_228) {
              if ((FScriptContainerElement *)&local_228 <
                  local_220.AllocatorInstance.Data + (longlong)local_220.ArrayMax * 4) {
                local_240 = (longlong)local_220.ArrayNum;
                local_238 = 4;
                local_258 = &local_228;
                local_250 = local_220.AllocatorInstance.Data;
                local_248 = (longlong)local_220.ArrayMax;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
            if (local_220.ArrayNum == local_220.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_220.AllocatorInstance,&local_220.ArrayMax);
              local_220.ArrayNum = iVar10;
            }
            lVar13 = (longlong)local_220.ArrayNum;
            local_220.ArrayNum = local_220.ArrayNum + 1;
            *(uint *)(local_220.AllocatorInstance.Data + lVar13 * 4) = local_228;
          }
          local_228 = local_228 + 1;
          pFVar17 = (FGroupTopology *)(ulonglong)local_228;
        } while ((int)local_228 < iVar3);
      }
      UE::Geometry::FMeshBevel::InitializeFromGroupTopologyEdges
                (&local_168,param_1,pFVar11,&local_220);
      if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.AllocatorInstance.Data);
      }
      if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
      UE::Geometry::FMeshBevel::Apply(&local_168,param_1,(FDynamicMeshChangeTracker *)0x0);
      if (pFVar11 != (FGroupTopology *)0x0) {
        (**(code **)pFVar11->_padding_)(pFVar11,1);
      }
      goto LAB_14ce2b32c;
    }
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray(this_00,param_1,&local_1f0,Triangle);
    UE::Geometry::FMeshBevel::InitializeFromTriangleSet(&local_168,param_1,&local_1f0);
    FVar15.Data = local_1f0.AllocatorInstance.Data;
  }
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  UE::Geometry::FMeshBevel::Apply(&local_168,param_1,(FDynamicMeshChangeTracker *)0x0);
LAB_14ce2b32c:
  UE::Geometry::FMeshBevel::~FMeshBevel(&local_168);
  return;
}

// operator() @ 14ce2b370

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FText *pFVar1;
  FDynamicMeshEditor local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  FText local_18;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)this,param_1,&local_28,Triangle);
  if (local_28.ArrayNum == 0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshDisconnectFaces_NoTriangles",
                        L"ApplyMeshDisconnectFaces: Disconnect Area contains 0 triangles");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  else {
    local_res8.Mesh = param_1;
    UE::Geometry::FDynamicMeshEditor::DisconnectTriangles
              (&local_res8,&local_28,**(char **)((longlong)this + 0x10) == '\0');
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce2b430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFacesAlongEdges'::__l2::<lambda_1>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FText *pFVar7;
  ulonglong uVar8;
  byte bVar9;
  ForAnyElementType FVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  uint uVar13;
  ulong64 uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  uint *puVar19;
  ForAnyElementType FVar20;
  undefined1 auStackY_198 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TArray<int,TSizedDefaultAllocator<32>_> local_128;
  FDynamicMeshEditor local_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  FSparseArrayAllocationInfo local_b8;
  FText local_a8;
  void *local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  puVar19 = (uint *)0x0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)this,param_1,&local_128,Edge);
  FVar20.Data = local_128.AllocatorInstance.Data;
  iVar5 = local_128.ArrayNum;
  uVar14 = (ulong64)local_128.ArrayNum;
  if (local_128.ArrayNum == 0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshDisconnectFaces_NoEdges",
                        L"ApplyMeshDisconnectEdges: Selection contains no edges");
    UE::Geometry::AppendWarning
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar7);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    goto LAB_14ce2bba0;
  }
  local_110.Mesh = param_1;
  if ((local_128.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar14);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&local_98,iVar5);
  uVar12 = 1;
  if (3 < (uint)iVar5) {
    uVar18 = (ulonglong)(((uint)iVar5 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((local_50 == 0) || ((int)local_50 < (int)uVar12)) {
    local_50 = uVar12;
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar12 != 0) {
      uVar13 = uVar12;
      if (uVar12 < 2) {
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          uVar13 = 0;
          goto LAB_14ce2b5a6;
        }
      }
      else {
LAB_14ce2b5a6:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
      }
      if (0 < (int)uVar12) {
        uVar18 = (ulonglong)uVar12;
        puVar16 = puVar19;
        do {
          FVar10.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar10.Data = local_58.Data;
          }
          uVar8 = (ulonglong)puVar16 & (longlong)(int)uVar12 - 1U;
          puVar16 = (uint *)((longlong)puVar16 + 1);
          *(undefined4 *)((longlong)FVar10.Data + uVar8 * 4) = 0xffffffff;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    if (local_50 != 0) {
      local_100.Array = &local_88;
      local_168 = 0;
      uStack_164 = 1;
      uStack_154 = 0;
      uStack_150 = 0;
      puVar16 = puVar19;
      if (local_88.NumBits != 0) {
        FVar11 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_88.AllocatorInstance.SecondaryData;
        }
        uVar12 = *(uint *)FVar11;
        puVar17 = puVar19;
        while (uVar12 == 0) {
          uStack_150 = (int)puVar17 + 0x20;
          puVar17 = (uint *)(ulonglong)uStack_150;
          iVar5 = (int)puVar16;
          local_168 = iVar5 + 1;
          puVar16 = (uint *)(ulonglong)local_168;
          if ((int)((local_88.NumBits - 1U) + ((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
              (int)local_168) goto LAB_14ce2b6ae;
          uVar12 = *(uint *)((uchar *)((longlong)FVar11 + 4) + (longlong)iVar5 * 4);
        }
        uStack_164 = -uVar12 & uVar12;
        uVar18 = (ulonglong)uStack_164 * 2 + 1;
        lVar2 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uStack_154 = (int)lVar2 + -1 + uStack_150;
        puVar16 = (uint *)(ulonglong)uStack_154;
        if (local_88.NumBits < (int)uStack_154) {
LAB_14ce2b6ae:
          puVar16 = (uint *)(ulonglong)(uint)local_88.NumBits;
          uStack_154 = local_88.NumBits;
        }
      }
      local_100._padding_ = CONCAT44(uStack_164,local_168);
      local_100.CurrentBitIndex = uStack_154;
      local_100.UnvisitedBitMask = 0xffffffff;
      local_100._28_4_ = uStack_14c;
      local_100.BaseBitIndex = uStack_150;
      local_108 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&local_98;
      if ((int)puVar16 < local_88.NumBits) {
        do {
          iVar5 = (int)puVar16;
          uVar12 = local_50 - 1 &
                   *(uint *)(*(longlong *)&local_108->Elements + (longlong)iVar5 * 0xc);
          lVar2 = *(longlong *)&local_108->Elements + (longlong)iVar5 * 0xc;
          *(uint *)(lVar2 + 8) = uVar12;
          FVar10.Data = (FScriptContainerElement *)local_60;
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            FVar10.Data = local_58.Data;
          }
          uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
          *(undefined4 *)(lVar2 + 4) = *(undefined4 *)((longlong)FVar10.Data + uVar18 * 4);
          *(int *)((longlong)FVar10.Data + uVar18 * 4) = iVar5;
          local_100.UnvisitedBitMask = local_100.UnvisitedBitMask & ~local_100._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_100);
          puVar16 = (uint *)(ulonglong)(uint)local_100.CurrentBitIndex;
        } while (local_100.CurrentBitIndex < (local_100.Array)->NumBits);
      }
    }
  }
  pFVar1 = FVar20.Data + uVar14 * 4;
  iVar5 = local_68;
  for (; local_68 = iVar5, FVar20.Data != pFVar1; FVar20.Data = FVar20.Data + 4) {
    if (local_64 == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)&local_98,(int *)&local_90,
                         (int *)((longlong)&local_90 + 4));
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_88,1);
      FVar11 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_88.AllocatorInstance.SecondaryData;
      }
      bVar9 = (byte)iVar6 & 0x1f;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
        bVar9 = bVar9 - 0x20;
      }
      puVar16 = (uint *)((longlong)FVar11 + (longlong)(iVar6 >> 5) * 4);
      *puVar16 = *puVar16 & ~(1 << (bVar9 & 0x1f));
    }
    else {
      local_68 = *(int *)((longlong)local_98 + (longlong)iVar5 * 0xc + 4);
      local_64 = local_64 + -1;
      if (local_64 != 0) {
        *(undefined4 *)((longlong)local_98 + (longlong)local_68 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&local_98,&local_b8,iVar5);
    puVar16 = puVar19;
    if (local_b8.Pointer != (uint *)0x0) {
      *(uint *)local_b8.Pointer = *(uint *)FVar20.Data;
      *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
      puVar16 = local_b8.Pointer;
    }
    uVar12 = *puVar16;
    if (((int)local_90 - local_64 != 1) && ((int)local_90 != local_64)) {
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      for (iVar5 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_50 - 1 & uVar12) * 4);
          iVar5 != -1; iVar5 = *(int *)((longlong)local_98 + (longlong)iVar5 * 0xc + 4)) {
        if (*(uint *)((longlong)local_98 + (longlong)iVar5 * 0xc) == uVar12) {
          if (iVar5 != -1) {
            *(uint *)((longlong)local_98 + (longlong)iVar5 * 0xc) = uVar12;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)&local_98,local_b8.Index,1);
            goto LAB_14ce2baed;
          }
          break;
        }
      }
    }
    uVar15 = (int)local_90 - local_64;
    uVar13 = 1;
    if (3 < uVar15) {
      uVar18 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar13 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar15 < 1) || ((int)uVar13 <= (int)local_50)) {
      uVar12 = local_50 - 1 & uVar12;
      puVar16[2] = uVar12;
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
      puVar16[1] = *(uint *)((longlong)FVar10.Data + uVar18 * 4);
      *(int *)((longlong)FVar10.Data + uVar18 * 4) = local_b8.Index;
    }
    else {
      local_50 = uVar13;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar13 != 0) {
        uVar12 = uVar13;
        if (uVar13 < 2) {
          if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
            uVar12 = 0;
            goto LAB_14ce2b91f;
          }
        }
        else {
LAB_14ce2b91f:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4)
          ;
        }
        if (0 < (int)uVar13) {
          uVar18 = (ulonglong)uVar13;
          puVar16 = puVar19;
          do {
            FVar10.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar10.Data = local_58.Data;
            }
            uVar8 = (ulonglong)puVar16 & (longlong)(int)uVar13 - 1U;
            puVar16 = (uint *)((longlong)puVar16 + 1);
            *(undefined4 *)((longlong)FVar10.Data + uVar8 * 4) = 0xffffffff;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      if (local_50 != 0) {
        local_d8.Array = &local_88;
        local_148 = 0;
        uStack_144 = 1;
        uStack_134 = 0;
        uStack_130 = 0;
        puVar16 = puVar19;
        if (local_88.NumBits != 0) {
          FVar11 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_88.AllocatorInstance.SecondaryData;
          }
          uVar12 = *(uint *)FVar11;
          puVar17 = puVar19;
          while (uVar12 == 0) {
            uStack_130 = (int)puVar17 + 0x20;
            puVar17 = (uint *)(ulonglong)uStack_130;
            iVar5 = (int)puVar16;
            local_148 = iVar5 + 1;
            puVar16 = (uint *)(ulonglong)local_148;
            if ((int)((local_88.NumBits - 1U) + ((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5
                < (int)local_148) goto LAB_14ce2ba1e;
            uVar12 = *(uint *)((uchar *)((longlong)FVar11 + 4) + (longlong)iVar5 * 4);
          }
          uStack_144 = -uVar12 & uVar12;
          uVar18 = (ulonglong)uStack_144 * 2 + 1;
          lVar2 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uStack_134 = (int)lVar2 + -1 + uStack_130;
          puVar16 = (uint *)(ulonglong)uStack_134;
          if (local_88.NumBits < (int)uStack_134) {
LAB_14ce2ba1e:
            puVar16 = (uint *)(ulonglong)(uint)local_88.NumBits;
            uStack_134 = local_88.NumBits;
          }
        }
        local_d8._padding_ = CONCAT44(uStack_144,local_148);
        local_d8.CurrentBitIndex = uStack_134;
        local_d8.UnvisitedBitMask = 0xffffffff;
        local_d8._28_4_ = uStack_12c;
        local_d8.BaseBitIndex = uStack_130;
        local_e0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&local_98;
        if ((int)puVar16 < local_88.NumBits) {
          do {
            iVar5 = (int)puVar16;
            uVar12 = local_50 - 1 &
                     *(uint *)(*(longlong *)&local_e0->Elements + (longlong)iVar5 * 0xc);
            lVar2 = *(longlong *)&local_e0->Elements + (longlong)iVar5 * 0xc;
            *(uint *)(lVar2 + 8) = uVar12;
            FVar10.Data = (FScriptContainerElement *)local_60;
            if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar10.Data = local_58.Data;
            }
            uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
            *(undefined4 *)(lVar2 + 4) = *(undefined4 *)((longlong)FVar10.Data + uVar18 * 4);
            *(int *)((longlong)FVar10.Data + uVar18 * 4) = iVar5;
            local_d8.UnvisitedBitMask = local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
            puVar16 = (uint *)(ulonglong)(uint)local_d8.CurrentBitIndex;
          } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
        }
      }
    }
LAB_14ce2baed:
    iVar5 = local_68;
  }
  UE::Geometry::FDynamicMeshEditor::DisconnectTrianglesAlongEdges
            (&local_110,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&local_98,
             (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  uVar18 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar18 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
LAB_14ce2bba0:
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce2bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 auStackY_3c8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_398;
  FDynamicMeshEditResult local_388;
  FDynamicMeshEditor local_318;
  TArrayView<int_const_,int> local_310;
  FText local_300;
  FMeshIndexMappings local_2e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.ArrayNum = 0;
  local_398.ArrayMax = 0;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)this,param_1,&local_398,Triangle);
  if (local_398.ArrayNum == 0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_300,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshDuplicateFaces_NoTriangles",
                        L"ApplyMeshDuplicateFaces: Disconnect Area contains 0 triangles");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar4);
    if (local_300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
    }
  }
  else {
    local_318.Mesh = param_1;
    UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_2e8);
    local_310.ArrayNum = local_398.ArrayNum;
    local_310.DataPtr = (int *)local_398.AllocatorInstance.Data;
    local_388.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388.NewVertices.ArrayNum = 0;
    local_388.NewVertices.ArrayMax = 0;
    local_388.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388.NewTriangles.ArrayNum = 0;
    local_388.NewTriangles.ArrayMax = 0;
    local_388.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388.NewQuads.ArrayNum = 0;
    local_388.NewQuads.ArrayMax = 0;
    local_388.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388.NewPolygons.ArrayNum = 0;
    local_388.NewPolygons.ArrayMax = 0;
    local_388.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388.NewGroups.ArrayNum = 0;
    local_388.NewGroups.ArrayMax = 0;
    local_388.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388.NewNormalOverlayElements.ArrayNum = 0;
    local_388.NewNormalOverlayElements.ArrayMax = 0;
    local_388.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_388.NewColorOverlayElements.ArrayNum = 0;
    local_388.NewColorOverlayElements.ArrayMax = 0;
    if (local_398.ArrayNum < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Geometry::FDynamicMeshEditor::AppendTriangles
              (&local_318,param_1,&local_310,&local_2e8,&local_388,true);
    puVar1 = *(undefined8 **)((longlong)this + 0x10);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar1 != &local_388.NewTriangles) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      *puVar1 = local_388.NewTriangles.AllocatorInstance.Data;
      local_388.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar1 + 1) = local_388.NewTriangles.ArrayNum;
      *(int *)((longlong)puVar1 + 0xc) = local_388.NewTriangles.ArrayMax;
      local_388.NewTriangles.ArrayNum = 0;
      local_388.NewTriangles.ArrayMax = 0;
    }
    UELocal::ApplyPolygroupModeToNewTriangles
              (param_1,*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10),
               **(FGeometryScriptMeshEditPolygroupOptions **)((longlong)this + 0x18));
    if (local_388.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_388.NewColorOverlayElements.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_388.NewNormalOverlayElements.AllocatorInstance.Data,
               local_388.NewNormalOverlayElements.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)
        local_388.NewNormalOverlayElements.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_388.NewNormalOverlayElements.AllocatorInstance.Data);
    }
    if (local_388.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.NewGroups.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_388.NewPolygons.AllocatorInstance.Data,local_388.NewPolygons.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_388.NewPolygons.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_388.NewPolygons.AllocatorInstance.Data);
    }
    if (local_388.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.NewQuads.AllocatorInstance.Data);
    }
    if (local_388.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.NewTriangles.AllocatorInstance.Data);
    }
    if (local_388.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.NewVertices.AllocatorInstance.Data);
    }
    UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_2e8);
  }
  if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce2be60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  float *pfVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  FDynamicMesh3 *pFVar22;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298 [4];
  uint local_294;
  TArray<int,TSizedDefaultAllocator<32>_> local_290;
  uint local_280;
  undefined1 local_27c;
  undefined1 local_27b;
  undefined1 local_27a;
  undefined1 local_279;
  ForAnyElementType local_278;
  undefined8 local_270;
  undefined4 local_268;
  ForAnyElementType local_260;
  undefined8 local_258;
  ForAnyElementType local_250;
  undefined8 local_248;
  uint local_240 [2];
  FScriptContainerElement *local_238;
  FDynamicMesh3 *local_230;
  float *local_228;
  TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&> local_220;
  uint uStack_210;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  uint local_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  uint *local_1b8;
  ForAnyElementType *local_1b0;
  FInsetMeshRegion local_1a8;
  FInsetMeshRegion local_138;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pfVar17 = *(float **)this;
  local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.ArrayNum = 0;
  local_290.ArrayMax = 0;
  local_230 = param_1;
  local_228 = pfVar17;
  iVar4 = FGeometryScriptMeshSelection::GetNumSelected
                    (*(FGeometryScriptMeshSelection **)((longlong)this + 8));
  local_238 = (FScriptContainerElement *)&DAT_00000001;
  pFVar22 = param_1;
  if (iVar4 == 0) {
    uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    uVar12 = 0;
    if ((uVar15 != 0) &&
       (pFVar21 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar12 = 0,
       0xfffd < (ushort)(**(short **)pFVar21 - 1U))) {
      uVar12 = 1;
      uVar9 = 1;
      if (1 < (int)uVar15) {
        do {
          uVar12 = uVar9;
          uVar9 = (ulonglong)((uint)uVar12 & 0x1ff);
          lVar8 = *(longlong *)(pFVar21 + (uVar12 >> 9) * 8);
          if ((*(short *)(lVar8 + uVar9 * 2) != 0) && (*(short *)(lVar8 + uVar9 * 2) != -1)) break;
          uVar11 = (uint)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          uVar9 = uVar12;
        } while ((int)uVar11 < (int)uVar15);
      }
    }
    uVar11 = (uint)uVar12;
joined_r0x00014ce2bf48:
    if (uVar11 != uVar15) {
      while( true ) {
        uVar11 = (uint)uVar12;
        local_280 = uVar11;
        if (((local_290.AllocatorInstance.Data <= (FScriptContainerElement *)&local_280) &&
            ((FScriptContainerElement *)&local_280 <
             local_290.AllocatorInstance.Data + (longlong)local_290.ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_290.ArrayNum == local_290.ArrayMax) {
          local_290.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_290.AllocatorInstance,&local_290.ArrayMax);
        }
        uVar1 = local_290.ArrayNum + 1;
        uVar11 = uVar11 + 1;
        uVar12 = (ulonglong)uVar11;
        *(uint *)(local_290.AllocatorInstance.Data + (longlong)local_290.ArrayNum * 4) = local_280;
        pfVar17 = local_228;
        pFVar22 = local_230;
        local_290.ArrayNum = uVar1;
        if ((int)uVar15 <= (int)uVar11) break;
        while( true ) {
          uVar9 = (ulonglong)((uint)uVar12 & 0x1ff);
          lVar8 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (uVar12 >> 9) * 8);
          if ((*(short *)(lVar8 + uVar9 * 2) != 0) && (*(short *)(lVar8 + uVar9 * 2) != -1)) break;
          uVar11 = (uint)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          if ((int)uVar15 <= (int)uVar11) goto joined_r0x00014ce2bf48;
        }
      }
      goto joined_r0x00014ce2bf48;
    }
  }
  else {
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray
              (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,&local_290,Triangle);
  }
  iVar4 = local_290.ArrayNum;
  if (*(char *)(*(longlong *)this + 0x10) == '\x01') {
    uVar12 = (ulonglong)local_290.ArrayNum;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    pFVar19 = (FScriptContainerElement *)0x0;
    local_88 = (uint *)0x0;
    local_80 = 0;
    local_74 = 0;
    pFVar21 = local_290.AllocatorInstance.Data + uVar12 * 4;
    local_68 = (ForElementType<FSetElementId>)0x0;
    local_60 = 0;
    local_a8._8_8_ = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    FVar18.Data = local_290.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar12 != iVar4) {
        local_298[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_298);
      }
      uVar15 = local_80;
      uStack_210 = 0;
      if (FVar18.Data == pFVar21) break;
      local_294 = *(uint *)FVar18.Data;
      if ((param_1->TriangleGroups).bIsSet == false) {
        uStack_210 = 0xffffffff;
      }
      else if ((-1 < (int)local_294) &&
              ((int)local_294 <
               (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(local_294 >> 9) * 8) +
                               (ulonglong)(local_294 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uStack_210 = *(uint *)(*(longlong *)
                                  ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                   Data + (ulonglong)(local_294 >> 9) * 8) +
                                (ulonglong)(local_294 & 0x1ff) * 4);
        }
      }
      local_240[0] = uStack_210;
      if (local_a8._8_4_ != local_74) {
        FVar10 = (ForElementType<FSetElementId>)local_70;
        if (local_68 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = local_68;
        }
        uVar15 = *(uint *)((longlong)FVar10 + (ulonglong)(local_60 - 1U & uStack_210) * 4);
        while (uVar15 != 0xffffffff) {
          pFVar7 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)uVar15 * 0x20);
          if (*(uint *)pFVar7 == uStack_210) {
            pFVar13 = pFVar7 + 8;
            if (pFVar7 == (FScriptContainerElement *)0x0) {
              pFVar13 = pFVar19;
            }
            if (pFVar13 != (FScriptContainerElement *)0x0) {
                    /* WARNING: Load size is inaccurate */
              if (((*pFVar13 <= (FScriptContainerElement *)&local_294) &&
                  ((FScriptContainerElement *)&local_294 <
                   *pFVar13 + (longlong)*(int *)(pFVar13 + 0xc) * 4)) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar5 = *(int *)(pFVar13 + 8);
              if (iVar5 == *(int *)(pFVar13 + 0xc)) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
              }
              *(int *)(pFVar13 + 8) = iVar5 + 1;
                    /* WARNING: Load size is inaccurate */
              *(uint *)(*pFVar13 + (longlong)iVar5 * 4) = local_294;
              goto LAB_14ce2c23e;
            }
            break;
          }
          uVar15 = *(uint *)(pFVar7 + 0x18);
        }
      }
      local_250.Data = (FScriptContainerElement *)0x0;
      local_248 = 0;
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_250,(int *)((longlong)&local_248 + 4));
      local_248 = CONCAT44(local_248._4_4_,iVar5 + 1);
      *(uint *)(local_250.Data + (longlong)iVar5 * 4) = local_294;
      local_1b8 = local_240;
      local_1b0 = &local_250;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&>_>
                ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_a8,&local_220,(bool *)&local_1b8);
      if (local_250.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data);
      }
LAB_14ce2c23e:
      uVar12 = (ulonglong)(uint)local_290.ArrayNum;
      FVar18.Data = FVar18.Data + 4;
    }
    uStack_20c = (uint)local_238;
    uStack_1fc = uStack_210;
    local_1f8 = uStack_210;
    if (local_80 != 0) {
      puVar20 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar20 = local_88;
      }
      uVar11 = *puVar20;
      pFVar21 = pFVar19;
      local_1f8 = 0;
      uStack_210 = 0;
      while (uVar11 == 0) {
        iVar4 = (int)pFVar19;
        local_1f8 = (int)pFVar21 + 0x20;
        pFVar21 = (FScriptContainerElement *)(ulonglong)local_1f8;
        uStack_210 = iVar4 + 1;
        pFVar19 = (FScriptContainerElement *)(ulonglong)uStack_210;
        uStack_1fc = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_210)
        goto LAB_14ce2c391;
        uVar11 = puVar20[(longlong)iVar4 + 1];
      }
      uStack_20c = -uVar11 & uVar11;
      uVar12 = (ulonglong)uStack_20c * 2 + 1;
      lVar8 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_220.Key._4_4_ = (int)lVar8;
      uStack_1fc = (local_1f8 - 1) + local_220.Key._4_4_;
      if ((int)local_80 < (int)uStack_1fc) {
        uStack_1fc = local_80;
      }
    }
LAB_14ce2c391:
    local_220.Value = (TArray<int,TSizedDefaultAllocator<32>_> *)local_a8;
    uStack_1f4 = local_ac;
    local_208 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    iStack_1f0 = local_a8._8_4_ - local_74;
    uVar11 = local_80 & 0xffffffe0;
    uStack_200 = 0xffffffff;
    TStack_1e0.CurrentBitIndex = uStack_1fc;
    TStack_1e0.UnvisitedBitMask = 0xffffffff;
    TStack_1e0._padding_ = CONCAT44(uStack_20c,uStack_210);
    iVar4 = (int)local_80 >> 5;
    TStack_1e0._28_4_ = local_ac;
    TStack_1e0.BaseBitIndex = local_1f8;
    uStack_1c0 = CONCAT44(uStack_1ec,iStack_1f0);
    bVar6 = (byte)local_80;
    local_1e8 = local_220.Value;
    TStack_1e0.Array = local_208;
    if (((int)local_80 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pfVar17 = local_228;
    pFVar22 = local_230;
    if (uVar15 != local_80) {
      puVar20 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar20 = local_88;
      }
      uVar15 = -1 << (bVar6 & 0x1f) & puVar20[iVar4];
      while (uVar15 == 0) {
        lVar8 = (longlong)iVar4;
        uVar11 = uVar11 + 0x20;
        iVar4 = iVar4 + 1;
        uVar15 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar4)
        goto LAB_14ce2c4b0;
        uVar15 = puVar20[lVar8 + 1];
      }
      uVar12 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar15 = (uVar11 - 1) + (int)lVar8;
      if ((int)local_80 < (int)uVar15) {
        uVar15 = local_80;
      }
    }
LAB_14ce2c4b0:
    while( true ) {
      pTVar16 = local_1e8;
      if (local_1e8->ArrayNum - *(int *)((longlong)&local_1e8[3].AllocatorInstance.Data + 4) !=
          (int)uStack_1c0) {
        `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_27c);
      }
      if (((TStack_1e0.CurrentBitIndex == uVar15) &&
          (TStack_1e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
         (pTVar16 == (TArray<int,TSizedDefaultAllocator<32>_> *)local_a8)) break;
      pFVar21 = (pTVar16->AllocatorInstance).Data;
      lVar8 = (longlong)TStack_1e0.CurrentBitIndex * 0x20;
      local_268 = *(undefined4 *)(pFVar21 + lVar8);
      local_260.Data = (FScriptContainerElement *)0x0;
      iVar4 = *(int *)(pFVar21 + lVar8 + 0x10);
      _Src = *(void **)(pFVar21 + lVar8 + 8);
      local_258 = CONCAT44(local_258._4_4_,iVar4);
      if (iVar4 == 0) {
        local_258 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar4,0,&local_260,iVar4,(int *)((longlong)&local_258 + 4));
        memcpy(local_260.Data,_Src,(longlong)iVar4 << 2);
      }
      UE::Geometry::FInsetMeshRegion::FInsetMeshRegion(&local_1a8,pFVar22);
      if (local_1a8.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Triangles.AllocatorInstance.Data);
      }
      local_1a8.Triangles.ArrayNum = (int)local_258;
      local_1a8.Triangles.AllocatorInstance.Data = local_260.Data;
      local_1a8.Triangles.ArrayMax = local_258._4_4_;
      local_258 = 0;
      local_260.Data = (FScriptContainerElement *)0x0;
      if (0 < local_1a8.Triangles.ArrayNum) {
        local_1a8.InsetDistance = (double)*pfVar17;
        if (0.0 < *pfVar17 || *pfVar17 == 0.0) {
          local_1a8.bReproject = *(bool *)(pfVar17 + 1);
        }
        else {
          local_1a8.bReproject = false;
        }
        local_1a8.Softness = pfVar17[2];
        local_1a8.bSolveRegionInteriors = *(char *)((longlong)pfVar17 + 5) == '\0';
        local_1a8.AreaCorrection = pfVar17[3];
        UE::Geometry::FInsetMeshRegion::Apply(&local_1a8);
        iVar4 = local_1a8.InsetRegions.ArrayNum;
        uVar12 = (ulonglong)local_1a8.InsetRegions.ArrayNum;
        pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  (local_1a8.InsetRegions.AllocatorInstance.Data + uVar12 * 0x50);
        FVar18.Data = local_1a8.InsetRegions.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar12 != iVar4) {
            `TCheckedPointerIterator<UE::Geometry::FInsetMeshRegion::FInsetInfo,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(&local_27b);
          }
          if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data == pTVar16) break;
          UELocal::ApplyPolygroupModeToNewTriangles
                    (pFVar22,(TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data,
                     *(FGeometryScriptMeshEditPolygroupOptions *)(pfVar17 + 5));
          uVar12 = (ulonglong)(uint)local_1a8.InsetRegions.ArrayNum;
          FVar18.Data = FVar18.Data + 0x50;
        }
      }
      UE::Geometry::FInsetMeshRegion::~FInsetMeshRegion(&local_1a8);
      if (local_260.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data);
      }
      TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
    }
    local_60 = 0;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
  else if (*(char *)(*(longlong *)this + 0x10) == '\x02') {
    uVar12 = (ulonglong)local_290.ArrayNum;
    local_238 = local_290.AllocatorInstance.Data + uVar12 * 4;
    FVar18.Data = local_290.AllocatorInstance.Data;
    while( true ) {
      pFVar21 = local_238;
      if ((uint)uVar12 != iVar4) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_27a);
      }
      if (FVar18.Data == pFVar21) break;
      uVar15 = *(uint *)FVar18.Data;
      local_278.Data = (FScriptContainerElement *)0x0;
      local_270 = 0;
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_278,(int *)((longlong)&local_270 + 4));
      local_270 = CONCAT44(local_270._4_4_,iVar5 + 1);
      *(uint *)(local_278.Data + (longlong)iVar5 * 4) = uVar15;
      UE::Geometry::FInsetMeshRegion::FInsetMeshRegion(&local_138,pFVar22);
      if (local_138.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Triangles.AllocatorInstance.Data);
      }
      local_138.Triangles.ArrayNum = (int)local_270;
      local_138.Triangles.AllocatorInstance.Data = local_278.Data;
      local_138.Triangles.ArrayMax = local_270._4_4_;
      local_270 = 0;
      local_278.Data = (FScriptContainerElement *)0x0;
      if (0 < local_138.Triangles.ArrayNum) {
        local_138.InsetDistance = (double)*pfVar17;
        if (0.0 < *pfVar17 || *pfVar17 == 0.0) {
          local_138.bReproject = *(bool *)(pfVar17 + 1);
        }
        else {
          local_138.bReproject = false;
        }
        local_138.Softness = pfVar17[2];
        local_138.bSolveRegionInteriors = *(char *)((longlong)pfVar17 + 5) == '\0';
        local_138.AreaCorrection = pfVar17[3];
        UE::Geometry::FInsetMeshRegion::Apply(&local_138);
        iVar5 = local_138.InsetRegions.ArrayNum;
        uVar12 = (ulonglong)local_138.InsetRegions.ArrayNum;
        pTVar16 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  (local_138.InsetRegions.AllocatorInstance.Data + uVar12 * 0x50);
        FVar14.Data = local_138.InsetRegions.AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar12 != iVar5) {
            `TCheckedPointerIterator<UE::Geometry::FInsetMeshRegion::FInsetInfo,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(&local_279);
          }
          if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data == pTVar16) break;
          UELocal::ApplyPolygroupModeToNewTriangles
                    (pFVar22,(TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data,
                     *(FGeometryScriptMeshEditPolygroupOptions *)(pfVar17 + 5));
          uVar12 = (ulonglong)(uint)local_138.InsetRegions.ArrayNum;
          FVar14.Data = FVar14.Data + 0x50;
        }
      }
      UE::Geometry::FInsetMeshRegion::~FInsetMeshRegion(&local_138);
      if (local_278.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data);
      }
      uVar12 = (ulonglong)(uint)local_290.ArrayNum;
      FVar18.Data = FVar18.Data + 4;
    }
  }
  else {
    ``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces'::__l2::<lambda_1>::
    operator()'::__l2::<lambda_1>::operator()(&local_230,&local_290);
  }
  if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce2c8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  ForAnyElementType *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  undefined4 *puVar16;
  uint uVar17;
  ForAnyElementType *pFVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [4];
  uint local_1a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  uint local_190;
  undefined1 local_18c;
  undefined1 local_18b [3];
  ForAnyElementType local_188;
  undefined8 local_180;
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  uint local_168 [2];
  undefined4 local_160;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  FDynamicMesh3 *local_148;
  undefined8 local_140;
  TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&> local_138;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  uint *local_c8;
  ForAnyElementType *local_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  ForAnyElementType *pFVar22;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_140 = *(undefined8 *)this;
  pFVar22 = (ForAnyElementType *)0x0;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  local_148 = param_1;
  iVar9 = FGeometryScriptMeshSelection::GetNumSelected
                    (*(FGeometryScriptMeshSelection **)((longlong)this + 8));
  local_138.Value = (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000001;
  uVar21 = 0;
  if (iVar9 == 0) {
    uVar19 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    pFVar18 = pFVar22;
    if ((uVar19 != 0) &&
       (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       pFVar18 = (ForAnyElementType *)0x0, 0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
      pFVar18 = (ForAnyElementType *)&DAT_00000001;
      pFVar7 = (ForAnyElementType *)&DAT_00000001;
      if (1 < (int)uVar19) {
        do {
          pFVar18 = pFVar7;
          lVar14 = (ulonglong)((uint)pFVar18 & 0x1ff) * 2;
          if ((*(short *)(lVar14 + *(longlong *)(pFVar3 + ((ulonglong)pFVar18 >> 9) * 8)) != 0) &&
             (*(short *)(lVar14 + *(longlong *)(pFVar3 + ((ulonglong)pFVar18 >> 9) * 8)) != -1))
          break;
          uVar17 = (uint)pFVar18 + 1;
          pFVar18 = (ForAnyElementType *)(ulonglong)uVar17;
          pFVar7 = pFVar18;
        } while ((int)uVar17 < (int)uVar19);
      }
    }
    uVar17 = (uint)pFVar18;
joined_r0x00014ce2c997:
    if (uVar17 != uVar19) {
      while( true ) {
        uVar17 = (uint)pFVar18;
        local_190 = uVar17;
        if (((local_1a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_190) &&
            ((FScriptContainerElement *)&local_190 <
             local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayMax * 4)) &&
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
        if (local_1a0.ArrayNum == local_1a0.ArrayMax) {
          local_1a0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1a0.AllocatorInstance,&local_1a0.ArrayMax);
        }
        uVar1 = local_1a0.ArrayNum + 1;
        uVar17 = uVar17 + 1;
        pFVar18 = (ForAnyElementType *)(ulonglong)uVar17;
        *(uint *)(local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayNum * 4) = local_190;
        local_1a0.ArrayNum = uVar1;
        if ((int)uVar19 <= (int)uVar17) break;
        pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          lVar14 = ((ulonglong)pFVar18 >> 9) * 8;
          lVar5 = (ulonglong)((uint)pFVar18 & 0x1ff) * 2;
          if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar14)) != 0) &&
             (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar14)) != -1)) break;
          uVar17 = (uint)pFVar18 + 1;
          pFVar18 = (ForAnyElementType *)(ulonglong)uVar17;
          if ((int)uVar19 <= (int)uVar17) goto joined_r0x00014ce2c997;
        }
      }
      goto joined_r0x00014ce2c997;
    }
  }
  else {
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray
              (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,&local_1a0,Triangle);
  }
  iVar9 = local_1a0.ArrayNum;
  if (*(char *)(*(longlong *)this + 0x20) == '\x01') {
    uVar12 = (ulonglong)local_1a0.ArrayNum;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    pFVar3 = local_1a0.AllocatorInstance.Data + uVar12 * 4;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    FVar20.Data = local_1a0.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar12 != iVar9) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      uVar19 = local_70;
      if (FVar20.Data == pFVar3) break;
      local_1a4 = *(uint *)FVar20.Data;
      if ((param_1->TriangleGroups).bIsSet == false) {
        local_168[0] = 0xffffffff;
      }
      else {
        local_168[0] = uVar21;
        if ((-1 < (int)local_1a4) &&
           ((int)local_1a4 <
            (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar14 = (ulonglong)(local_1a4 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar14) + (ulonglong)(local_1a4 & 0x1ff) * 2) - 1U) <
              0xfffe) {
            local_168[0] = *(uint *)(*(longlong *)
                                      ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance
                                       .Data + lVar14) + (ulonglong)(local_1a4 & 0x1ff) * 4);
          }
        }
      }
      if (local_98._8_4_ != local_64) {
        FVar15 = (ForElementType<FSetElementId>)local_60;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = local_58;
        }
        uVar19 = *(uint *)((longlong)FVar15 + (ulonglong)(local_50 - 1U & local_168[0]) * 4);
        while (uVar19 != 0xffffffff) {
          puVar13 = (uint *)((longlong)(int)uVar19 * 0x20 + local_98._0_8_);
          if (*puVar13 == local_168[0]) {
            pFVar18 = (ForAnyElementType *)(puVar13 + 2);
            if (puVar13 == (uint *)0x0) {
              pFVar18 = pFVar22;
            }
            if (pFVar18 != (ForAnyElementType *)0x0) {
              if (((pFVar18->Data <= (FScriptContainerElement *)&local_1a4) &&
                  ((FScriptContainerElement *)&local_1a4 <
                   pFVar18->Data + (longlong)*(int *)((longlong)&pFVar18[1].Data + 4) * 4)) &&
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
              iVar10 = *(int *)&pFVar18[1].Data;
              piVar2 = (int *)((longlong)&pFVar18[1].Data + 4);
              if (iVar10 == *piVar2) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar18,piVar2);
              }
              *(int *)&pFVar18[1].Data = iVar10 + 1;
              *(uint *)(pFVar18->Data + (longlong)iVar10 * 4) = local_1a4;
              goto LAB_14ce2cc76;
            }
            break;
          }
          uVar19 = puVar13[6];
        }
      }
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180 = 0;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_188,(int *)((longlong)&local_180 + 4));
      local_180 = CONCAT44(local_180._4_4_,iVar10 + 1);
      *(uint *)(local_188.Data + (longlong)iVar10 * 4) = local_1a4;
      local_c8 = local_168;
      local_c0 = &local_188;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&>_>
                ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_98,&local_138,(bool *)&local_c8);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
LAB_14ce2cc76:
      uVar12 = (ulonglong)(uint)local_1a0.ArrayNum;
      FVar20.Data = FVar20.Data + 4;
    }
    local_108 = 0;
    uStack_11c = (uint)local_138.Value;
    uStack_10c = local_108;
    if (local_70 != 0) {
      puVar13 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar13 = local_78;
      }
      uVar17 = *puVar13;
      pFVar18 = pFVar22;
      local_108 = 0;
      uVar21 = 0;
      while (uVar17 == 0) {
        iVar9 = (int)pFVar22;
        local_108 = (int)pFVar18 + 0x20;
        pFVar18 = (ForAnyElementType *)(ulonglong)local_108;
        uVar21 = iVar9 + 1;
        pFVar22 = (ForAnyElementType *)(ulonglong)uVar21;
        uStack_10c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
        goto LAB_14ce2cdc1;
        uVar17 = puVar13[(longlong)iVar9 + 1];
      }
      uStack_11c = -uVar17 & uVar17;
      uVar12 = (ulonglong)uStack_11c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_138.Key._4_4_ = (int)lVar14;
      uStack_10c = (local_108 - 1) + local_138.Key._4_4_;
      if ((int)local_70 < (int)uStack_10c) {
        uStack_10c = local_70;
      }
    }
LAB_14ce2cdc1:
    local_128 = (longlong *)local_98;
    uStack_104 = local_9c;
    local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_100 = local_98._8_4_ - local_64;
    uVar17 = local_70 & 0xffffffe0;
    uStack_110 = 0xffffffff;
    TStack_f0.CurrentBitIndex = uStack_10c;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_11c,uVar21);
    iVar9 = (int)local_70 >> 5;
    TStack_f0._28_4_ = local_9c;
    TStack_f0.BaseBitIndex = local_108;
    uStack_d0 = CONCAT44(uStack_fc,iStack_100);
    bVar11 = (byte)local_70;
    uStack_120 = uVar21;
    local_f8 = local_128;
    TStack_f0.Array = local_118;
    if (((int)local_70 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar19 != local_70) {
      puVar13 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar13 = local_78;
      }
      uVar21 = -1 << (bVar11 & 0x1f) & puVar13[iVar9];
      while (uVar21 == 0) {
        lVar14 = (longlong)iVar9;
        uVar17 = uVar17 + 0x20;
        iVar9 = iVar9 + 1;
        uVar19 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14ce2ced0;
        uVar21 = puVar13[lVar14 + 1];
      }
      uVar12 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar19 = (uVar17 - 1) + (int)lVar14;
      if ((int)local_70 < (int)uVar19) {
        uVar19 = local_70;
      }
    }
LAB_14ce2ced0:
    while( true ) {
      plVar6 = local_f8;
      if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
        `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_18c);
      }
      if (((TStack_f0.CurrentBitIndex == uVar19) &&
          (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar6 == (longlong *)local_98)) break;
      puVar16 = (undefined4 *)((longlong)TStack_f0.CurrentBitIndex * 0x20 + *plVar6);
      local_160 = *puVar16;
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = puVar16[4];
      lVar14 = (longlong)local_158.ArrayNum;
      _Src = *(void **)(puVar16 + 2);
      if (local_158.ArrayNum == 0) {
        local_158.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_158.ArrayNum,0,&local_158.AllocatorInstance,local_158.ArrayNum,
                   &local_158.ArrayMax);
        memcpy(local_158.AllocatorInstance.Data,_Src,lVar14 << 2);
      }
      ``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>
      ::operator()'::__l2::<lambda_1>::operator()(&local_148,&local_158);
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  else if (*(char *)(*(longlong *)this + 0x20) == '\x02') {
    uVar12 = (ulonglong)local_1a0.ArrayNum;
    pFVar3 = local_1a0.AllocatorInstance.Data + uVar12 * 4;
    FVar20.Data = local_1a0.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar12 != iVar9) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_18b);
      }
      if (FVar20.Data == pFVar3) break;
      uVar21 = *(uint *)FVar20.Data;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 0;
      local_178.ArrayMax = 0;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_178.AllocatorInstance,&local_178.ArrayMax);
      local_178.ArrayNum = iVar10 + 1;
      *(uint *)(local_178.AllocatorInstance.Data + (longlong)iVar10 * 4) = uVar21;
      ``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>
      ::operator()'::__l2::<lambda_1>::operator()(&local_148,&local_178);
      if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      uVar12 = (ulonglong)(uint)local_1a0.ArrayNum;
      FVar20.Data = FVar20.Data + 4;
    }
  }
  else {
    ``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>::
    operator()'::__l2::<lambda_1>::operator()(&local_148,&local_1a0);
  }
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce2d0c0

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffset'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  float *pfVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar5;
  FMeshNormals local_2d8;
  FMeshOffset local_2b8;
  
  FMeshOffset::FMeshOffset(&local_2b8,param_1);
  pfVar1 = *(float **)this;
  local_2b8.bFixedBoundary = *(bool *)(pfVar1 + 1);
  local_2b8.OffsetDistance = (double)*pfVar1;
  fVar4 = 1.4013e-42;
  if ((int)pfVar1[2] < 1000) {
    fVar4 = pfVar1[2];
  }
  local_2b8.Steps = (int)1.4013e-45;
  if (1 < (int)fVar4) {
    local_2b8.Steps = (int)fVar4;
  }
  local_2b8.SmoothAlpha = (double)pfVar1[3];
  if (__real_3ff0000000000000 <= (double)pfVar1[3]) {
    local_2b8.SmoothAlpha = __real_3ff0000000000000;
  }
  if (local_2b8.SmoothAlpha <= 0.0) {
    local_2b8.SmoothAlpha = 0.0;
  }
  local_2b8.bReprojectSmooth = *(bool *)(pfVar1 + 4);
  local_2b8.BoundaryAlpha = (double)pfVar1[5];
  if (__real_3feccccccccccccd <= (double)pfVar1[5]) {
    local_2b8.BoundaryAlpha = __real_3feccccccccccccd;
  }
  if (local_2b8.BoundaryAlpha <= 0.0) {
    local_2b8.BoundaryAlpha = 0.0;
  }
  FMeshOffset::Apply(&local_2b8,(FProgressCancel *)0x0);
  UE::Geometry::FDynamicMesh3::operator=(param_1,&local_2b8.ResultMesh);
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (((pFVar2 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar2->NormalLayers).Array.ArrayNum))
     && (pFVar3 = (pFVar2->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar3 != 0)) {
    pTVar5 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    local_2d8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.Normals.ArrayNum = 0;
    local_2d8.Normals.ArrayMax = 0;
    if (0 < (pFVar2->NormalLayers).Array.ArrayNum) {
      pTVar5 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)pFVar3;
    }
    local_2d8.Mesh = param_1;
    UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg(&local_2d8,pTVar5,true,true);
    UE::Geometry::FMeshNormals::CopyToOverlay(&local_2d8,pTVar5,false);
    if (local_2d8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Normals.AllocatorInstance.Data);
    }
  }
  local_2b8._padding_ = (longlong)&___7FMeshOffset__6B_;
  if (local_2b8.BoundaryVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.BoundaryVerts.AllocatorInstance.Data);
  }
  if (local_2b8.bIsBoundary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.bIsBoundary.AllocatorInstance.Data);
  }
  if (local_2b8.PositionBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.PositionBuffer.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2b8.ResultMesh);
  return;
}

// operator() @ 14ce2d250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  ForAnyElementType *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  undefined4 *puVar16;
  uint uVar17;
  ForAnyElementType *pFVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [4];
  uint local_1a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  uint local_190;
  undefined1 local_18c;
  undefined1 local_18b [3];
  ForAnyElementType local_188;
  undefined8 local_180;
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  uint local_168 [2];
  undefined4 local_160;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  FDynamicMesh3 *local_148;
  undefined8 local_140;
  TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&> local_138;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  uint *local_c8;
  ForAnyElementType *local_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  ForAnyElementType *pFVar22;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_140 = *(undefined8 *)this;
  pFVar22 = (ForAnyElementType *)0x0;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  local_148 = param_1;
  iVar9 = FGeometryScriptMeshSelection::GetNumSelected
                    (*(FGeometryScriptMeshSelection **)((longlong)this + 8));
  local_138.Value = (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000001;
  uVar21 = 0;
  if (iVar9 == 0) {
    uVar19 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    pFVar18 = pFVar22;
    if ((uVar19 != 0) &&
       (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       pFVar18 = (ForAnyElementType *)0x0, 0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
      pFVar18 = (ForAnyElementType *)&DAT_00000001;
      pFVar7 = (ForAnyElementType *)&DAT_00000001;
      if (1 < (int)uVar19) {
        do {
          pFVar18 = pFVar7;
          lVar14 = (ulonglong)((uint)pFVar18 & 0x1ff) * 2;
          if ((*(short *)(lVar14 + *(longlong *)(pFVar3 + ((ulonglong)pFVar18 >> 9) * 8)) != 0) &&
             (*(short *)(lVar14 + *(longlong *)(pFVar3 + ((ulonglong)pFVar18 >> 9) * 8)) != -1))
          break;
          uVar17 = (uint)pFVar18 + 1;
          pFVar18 = (ForAnyElementType *)(ulonglong)uVar17;
          pFVar7 = pFVar18;
        } while ((int)uVar17 < (int)uVar19);
      }
    }
    uVar17 = (uint)pFVar18;
joined_r0x00014ce2d347:
    if (uVar17 != uVar19) {
      while( true ) {
        uVar17 = (uint)pFVar18;
        local_190 = uVar17;
        if (((local_1a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_190) &&
            ((FScriptContainerElement *)&local_190 <
             local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayMax * 4)) &&
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
        if (local_1a0.ArrayNum == local_1a0.ArrayMax) {
          local_1a0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_1a0.AllocatorInstance,&local_1a0.ArrayMax);
        }
        uVar1 = local_1a0.ArrayNum + 1;
        uVar17 = uVar17 + 1;
        pFVar18 = (ForAnyElementType *)(ulonglong)uVar17;
        *(uint *)(local_1a0.AllocatorInstance.Data + (longlong)local_1a0.ArrayNum * 4) = local_190;
        local_1a0.ArrayNum = uVar1;
        if ((int)uVar19 <= (int)uVar17) break;
        pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          lVar14 = ((ulonglong)pFVar18 >> 9) * 8;
          lVar5 = (ulonglong)((uint)pFVar18 & 0x1ff) * 2;
          if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar14)) != 0) &&
             (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar14)) != -1)) break;
          uVar17 = (uint)pFVar18 + 1;
          pFVar18 = (ForAnyElementType *)(ulonglong)uVar17;
          if ((int)uVar19 <= (int)uVar17) goto joined_r0x00014ce2d347;
        }
      }
      goto joined_r0x00014ce2d347;
    }
  }
  else {
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray
              (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,&local_1a0,Triangle);
  }
  iVar9 = local_1a0.ArrayNum;
  if (*(char *)(*(longlong *)this + 5) == '\x01') {
    uVar12 = (ulonglong)local_1a0.ArrayNum;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    pFVar3 = local_1a0.AllocatorInstance.Data + uVar12 * 4;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    FVar20.Data = local_1a0.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar12 != iVar9) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      uVar19 = local_70;
      if (FVar20.Data == pFVar3) break;
      local_1a4 = *(uint *)FVar20.Data;
      if ((param_1->TriangleGroups).bIsSet == false) {
        local_168[0] = 0xffffffff;
      }
      else {
        local_168[0] = uVar21;
        if ((-1 < (int)local_1a4) &&
           ((int)local_1a4 <
            (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar14 = (ulonglong)(local_1a4 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar14) + (ulonglong)(local_1a4 & 0x1ff) * 2) - 1U) <
              0xfffe) {
            local_168[0] = *(uint *)(*(longlong *)
                                      ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance
                                       .Data + lVar14) + (ulonglong)(local_1a4 & 0x1ff) * 4);
          }
        }
      }
      if (local_98._8_4_ != local_64) {
        FVar15 = (ForElementType<FSetElementId>)local_60;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = local_58;
        }
        uVar19 = *(uint *)((longlong)FVar15 + (ulonglong)(local_50 - 1U & local_168[0]) * 4);
        while (uVar19 != 0xffffffff) {
          puVar13 = (uint *)((longlong)(int)uVar19 * 0x20 + local_98._0_8_);
          if (*puVar13 == local_168[0]) {
            pFVar18 = (ForAnyElementType *)(puVar13 + 2);
            if (puVar13 == (uint *)0x0) {
              pFVar18 = pFVar22;
            }
            if (pFVar18 != (ForAnyElementType *)0x0) {
              if (((pFVar18->Data <= (FScriptContainerElement *)&local_1a4) &&
                  ((FScriptContainerElement *)&local_1a4 <
                   pFVar18->Data + (longlong)*(int *)((longlong)&pFVar18[1].Data + 4) * 4)) &&
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
              iVar10 = *(int *)&pFVar18[1].Data;
              piVar2 = (int *)((longlong)&pFVar18[1].Data + 4);
              if (iVar10 == *piVar2) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar18,piVar2);
              }
              *(int *)&pFVar18[1].Data = iVar10 + 1;
              *(uint *)(pFVar18->Data + (longlong)iVar10 * 4) = local_1a4;
              goto LAB_14ce2d626;
            }
            break;
          }
          uVar19 = puVar13[6];
        }
      }
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180 = 0;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_188,(int *)((longlong)&local_180 + 4));
      local_180 = CONCAT44(local_180._4_4_,iVar10 + 1);
      *(uint *)(local_188.Data + (longlong)iVar10 * 4) = local_1a4;
      local_c8 = local_168;
      local_c0 = &local_188;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&>_>
                ((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_98,&local_138,(bool *)&local_c8);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
LAB_14ce2d626:
      uVar12 = (ulonglong)(uint)local_1a0.ArrayNum;
      FVar20.Data = FVar20.Data + 4;
    }
    local_108 = 0;
    uStack_11c = (uint)local_138.Value;
    uStack_10c = local_108;
    if (local_70 != 0) {
      puVar13 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar13 = local_78;
      }
      uVar17 = *puVar13;
      pFVar18 = pFVar22;
      local_108 = 0;
      uVar21 = 0;
      while (uVar17 == 0) {
        iVar9 = (int)pFVar22;
        local_108 = (int)pFVar18 + 0x20;
        pFVar18 = (ForAnyElementType *)(ulonglong)local_108;
        uVar21 = iVar9 + 1;
        pFVar22 = (ForAnyElementType *)(ulonglong)uVar21;
        uStack_10c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
        goto LAB_14ce2d771;
        uVar17 = puVar13[(longlong)iVar9 + 1];
      }
      uStack_11c = -uVar17 & uVar17;
      uVar12 = (ulonglong)uStack_11c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_138.Key._4_4_ = (int)lVar14;
      uStack_10c = (local_108 - 1) + local_138.Key._4_4_;
      if ((int)local_70 < (int)uStack_10c) {
        uStack_10c = local_70;
      }
    }
LAB_14ce2d771:
    local_128 = (longlong *)local_98;
    uStack_104 = local_9c;
    local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_100 = local_98._8_4_ - local_64;
    uVar17 = local_70 & 0xffffffe0;
    uStack_110 = 0xffffffff;
    TStack_f0.CurrentBitIndex = uStack_10c;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_11c,uVar21);
    iVar9 = (int)local_70 >> 5;
    TStack_f0._28_4_ = local_9c;
    TStack_f0.BaseBitIndex = local_108;
    uStack_d0 = CONCAT44(uStack_fc,iStack_100);
    bVar11 = (byte)local_70;
    uStack_120 = uVar21;
    local_f8 = local_128;
    TStack_f0.Array = local_118;
    if (((int)local_70 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar19 != local_70) {
      puVar13 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar13 = local_78;
      }
      uVar21 = -1 << (bVar11 & 0x1f) & puVar13[iVar9];
      while (uVar21 == 0) {
        lVar14 = (longlong)iVar9;
        uVar17 = uVar17 + 0x20;
        iVar9 = iVar9 + 1;
        uVar19 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14ce2d880;
        uVar21 = puVar13[lVar14 + 1];
      }
      uVar12 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar19 = (uVar17 - 1) + (int)lVar14;
      if ((int)local_70 < (int)uVar19) {
        uVar19 = local_70;
      }
    }
LAB_14ce2d880:
    while( true ) {
      plVar6 = local_f8;
      if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
        `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_18c);
      }
      if (((TStack_f0.CurrentBitIndex == uVar19) &&
          (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar6 == (longlong *)local_98)) break;
      puVar16 = (undefined4 *)((longlong)TStack_f0.CurrentBitIndex * 0x20 + *plVar6);
      local_160 = *puVar16;
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = puVar16[4];
      lVar14 = (longlong)local_158.ArrayNum;
      _Src = *(void **)(puVar16 + 2);
      if (local_158.ArrayNum == 0) {
        local_158.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_158.ArrayNum,0,&local_158.AllocatorInstance,local_158.ArrayNum,
                   &local_158.ArrayMax);
        memcpy(local_158.AllocatorInstance.Data,_Src,lVar14 << 2);
      }
      ``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>::
      operator()'::__l2::<lambda_1>::operator()(&local_148,&local_158);
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  else if (*(char *)(*(longlong *)this + 5) == '\x02') {
    uVar12 = (ulonglong)local_1a0.ArrayNum;
    pFVar3 = local_1a0.AllocatorInstance.Data + uVar12 * 4;
    FVar20.Data = local_1a0.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar12 != iVar9) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_18b);
      }
      if (FVar20.Data == pFVar3) break;
      uVar21 = *(uint *)FVar20.Data;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 0;
      local_178.ArrayMax = 0;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_178.AllocatorInstance,&local_178.ArrayMax);
      local_178.ArrayNum = iVar10 + 1;
      *(uint *)(local_178.AllocatorInstance.Data + (longlong)iVar10 * 4) = uVar21;
      ``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>::
      operator()'::__l2::<lambda_1>::operator()(&local_148,&local_178);
      if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      uVar12 = (ulonglong)(uint)local_1a0.ArrayNum;
      FVar20.Data = FVar20.Data + 4;
    }
  }
  else {
    ``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>::
    operator()'::__l2::<lambda_1>::operator()(&local_148,&local_1a0);
  }
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce2da70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  code *pcVar8;
  undefined8 uVar9;
  char cVar10;
  bool bVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  FText *pFVar16;
  byte bVar17;
  longlong lVar18;
  undefined ***pppuVar19;
  undefined1 *puVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  float fVar24;
  uint *puVar25;
  undefined1 *puVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  undefined1 auStack_7c8 [32];
  int *local_7a8;
  FScriptContainerElement *local_7a0;
  longlong local_798;
  longlong local_790;
  undefined8 local_788;
  undefined1 local_778;
  undefined1 local_777;
  undefined1 local_776 [6];
  TArray<int,TSizedDefaultAllocator<32>_> local_770;
  int local_760 [2];
  undefined4 local_758 [2];
  int local_750 [2];
  longlong *local_748;
  float fStack_740;
  uint uStack_73c;
  TBitArray<FDefaultBitArrayAllocator> *local_738;
  undefined4 uStack_730;
  float fStack_72c;
  float local_728;
  undefined4 uStack_724;
  int iStack_720;
  undefined4 uStack_71c;
  ulonglong local_718;
  longlong *local_710;
  int local_708;
  int local_704;
  int local_700;
  int local_6fc;
  int local_6f8;
  FDynamicMesh3 *local_6f0;
  longlong *local_6e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6e0;
  undefined8 uStack_6c0;
  longlong *local_6b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6b0;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  double local_658;
  double local_650;
  double local_648;
  double local_640;
  double local_638;
  double local_630;
  FText local_628;
  TArray<int,TSizedDefaultAllocator<32>_> local_618 [2];
  undefined4 local_5ec;
  undefined4 local_5cc;
  undefined1 local_5c8 [32];
  uint *local_5a8;
  float local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  int local_594;
  undefined1 local_590 [8];
  undefined1 *local_588;
  int local_580;
  undefined1 local_578 [32];
  uint *local_558;
  float local_550;
  undefined4 local_54c;
  undefined4 local_548;
  int local_544;
  ForElementType<FSetElementId> local_538;
  int local_530;
  code *local_528;
  undefined8 uStack_520;
  undefined **local_518 [3];
  undefined ***pppuStack_500;
  code *local_4f8;
  undefined8 uStack_4f0;
  longlong local_4e8 [3];
  longlong *plStack_4d0;
  undefined1 local_4c8 [16];
  undefined **local_4b8;
  undefined8 *puStack_4b0;
  undefined8 local_4a8;
  undefined ***pppuStack_4a0;
  longlong local_498;
  longlong local_488 [3];
  longlong *local_470;
  code *local_468;
  undefined8 uStack_460;
  longlong local_458 [3];
  longlong *plStack_440;
  longlong local_438;
  longlong local_428 [3];
  longlong *local_410;
  undefined8 local_408 [2];
  longlong local_3f8;
  longlong local_3e8 [3];
  longlong *local_3d0;
  undefined1 local_3c8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_3b8;
  FMeshBevel local_2f8;
  FGroupTopology local_1c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  local_710 = this;
  local_6f0 = param_1;
  UE::Geometry::FGroupTopology::FGroupTopology(&local_1c8,param_1,true);
  lVar18 = *(longlong *)this;
  fVar24 = 0.0;
  local_770.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_770.ArrayNum = 0;
  local_770.ArrayMax = 0;
  fVar27 = 0.0;
  if (*(char *)(lVar18 + 0x14) != '\0') {
    if (*(char *)(lVar18 + 0x48) == '\0') {
      local_688 = ___xmm_7fefffffffffffff7fefffffffffffff;
      uStack_680 = _UNK_150a9e648;
      uStack_668 = ___xmm_ffefffffffffffffffefffffffffffff;
      local_660 = _UNK_1508ffb58;
      local_678 = ___xmm_ffefffffffffffff7fefffffffffffff;
      uStack_670 = _UNK_150a9e6d8;
    }
    else {
      local_688 = *(undefined8 *)(lVar18 + 0x18);
      uStack_680 = *(undefined8 *)(lVar18 + 0x20);
      local_678 = *(undefined8 *)(lVar18 + 0x28);
      uStack_670 = *(undefined8 *)(lVar18 + 0x30);
      uStack_668 = *(undefined8 *)(lVar18 + 0x38);
      local_660 = *(undefined8 *)(lVar18 + 0x40);
    }
    local_5c8._0_8_ = 0;
    local_5c8._8_8_ = 0;
    local_5a8 = (uint *)0x0;
    local_5a0 = 0.0;
    local_59c = 0x80;
    local_598 = 0xffffffff;
    local_594 = 0;
    local_588 = (undefined1 *)0x0;
    local_580 = 0;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_3b8,param_1,true);
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FTreeTraversal::FTreeTraversal
              ((FTreeTraversal *)local_4c8);
    pppuStack_500 = pppuStack_4a0;
    uVar14 = local_4a8;
    uVar9 = local_4c8._8_8_;
    local_528 = (code *)local_4c8._0_8_;
    local_4c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
         ::Call;
    local_4c8._8_8_ = uStack_520;
    local_4a8 = local_518[2];
    pppuStack_4a0 = (undefined ***)0x0;
    local_4b8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,0>
                 ::_vftable_;
    puStack_4b0 = &local_688;
    uStack_520 = uVar9;
    local_518[2] = (undefined **)uVar14;
    if (local_528 != (code *)0x0) {
      pppuVar19 = local_518;
      if (pppuStack_500 != (undefined ***)0x0) {
        pppuVar19 = pppuStack_500;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    lVar18 = *(longlong *)this;
    local_4f8 = (code *)0x0;
    plVar12 = FMemory::Malloc(0x28,8);
    plStack_4d0 = plStack_440;
    lVar6 = local_458[2];
    uVar9 = uStack_460;
    pcVar8 = local_468;
    *plVar12 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>,0,1>
                ::_vftable_;
    plVar12[1] = (longlong)&local_688;
    plVar12[2] = (longlong)local_5c8;
    plVar12[3] = (longlong)param_1;
    plVar12[4] = lVar18;
    if (plVar12 + 1 != (longlong *)0x0) {
      local_4f8 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,void,int>
                  ::Call;
    }
    local_468 = local_4f8;
    uStack_460 = uStack_4f0;
    local_458[2] = local_4e8[2];
    plStack_440 = plVar12;
    local_4f8 = pcVar8;
    uStack_4f0 = uVar9;
    local_4e8[0]._0_4_ = (undefined4)local_458[0];
    local_4e8[0]._4_4_ = local_458[0]._4_4_;
    local_4e8[1]._0_4_ = (undefined4)local_458[1];
    local_4e8[1]._4_4_ = local_458[1]._4_4_;
    local_4e8[2] = lVar6;
    if (pcVar8 != (code *)0x0) {
      plVar12 = local_4e8;
      if (plStack_4d0 != (longlong *)0x0) {
        plVar12 = plStack_4d0;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    local_408[0] = __real_7fefffffffffffff;
    uVar13 = (ulonglong)(local_3b8.RootIndex & 0x1ff);
    local_3f8 = 0;
    local_3d0 = (longlong *)0x0;
    local_3c8 = 0;
    local_758[0] = 0;
    lVar18 = *(longlong *)
              (local_3b8.BoxCenters.Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)local_3b8.RootIndex >> 9) * 8);
    local_640 = *(double *)(lVar18 + uVar13 * 0x18);
    lVar6 = *(longlong *)
             (local_3b8.BoxExtents.Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)local_3b8.RootIndex >> 9) * 8);
    local_638 = *(double *)(lVar18 + 8 + uVar13 * 0x18);
    local_630 = *(double *)(lVar18 + 0x10 + uVar13 * 0x18);
    dVar2 = *(double *)(lVar6 + uVar13 * 0x18);
    dVar3 = *(double *)(lVar6 + 8 + uVar13 * 0x18);
    local_658 = local_640 - dVar2;
    dVar4 = *(double *)(lVar6 + 0x10 + uVar13 * 0x18);
    local_650 = local_638 - dVar3;
    local_640 = local_640 + dVar2;
    local_638 = local_638 + dVar3;
    local_648 = local_630 - dVar4;
    local_630 = local_630 + dVar4;
    UE::Core::Private::Function::CheckCallable((void *)local_4c8._0_8_);
    uVar9 = local_4c8._0_8_;
    pppuVar19 = &local_4b8;
    if (pppuStack_4a0 != (undefined ***)0x0) {
      pppuVar19 = pppuStack_4a0;
    }
    uVar14 = (*(code *)(*pppuVar19)[1])();
    cVar10 = (*(code *)uVar9)(uVar14,&local_658,local_758);
    if (cVar10 != '\0') {
      local_7a8 = (int *)local_408;
      (**(code **)(local_3b8._padding_ + 0x80))(&local_3b8,local_3b8.RootIndex,0,local_4c8);
    }
    if (local_3f8 != 0) {
      plVar12 = local_3e8;
      if (local_3d0 != (longlong *)0x0) {
        plVar12 = local_3d0;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    fVar28 = local_5a0;
    local_718 = 1;
    local_578._0_8_ = 0;
    local_578._8_8_ = 0;
    local_558 = (uint *)0x0;
    local_550 = 0.0;
    local_54c = 0x80;
    local_548 = 0xffffffff;
    local_544 = 0;
    local_538 = (ForElementType<FSetElementId>)0x0;
    local_530 = 0;
    uStack_73c = 1;
    fStack_72c = fVar27;
    fStack_740 = fVar27;
    local_728 = fVar27;
    if (local_5a0 != 0.0) {
      puVar25 = (uint *)(local_5c8 + 0x10);
      if (local_5a8 != (uint *)0x0) {
        puVar25 = local_5a8;
      }
      uStack_73c = *puVar25;
      local_728 = fVar24;
      fStack_740 = fVar24;
      while (uStack_73c == 0) {
        lVar18 = (longlong)(int)fStack_740;
        local_728 = (float)((int)local_728 + 0x20);
        fStack_740 = (float)((int)fStack_740 + 1);
        uStack_73c = 1;
        fStack_72c = local_5a0;
        if ((int)((int)local_5a0 + -1 + ((int)local_5a0 + -1 >> 0x1f & 0x1fU)) >> 5 <
            (int)fStack_740) goto LAB_14ce2df80;
        uStack_73c = puVar25[lVar18 + 1];
      }
      uStack_73c = -uStack_73c & uStack_73c;
      uVar13 = (ulonglong)uStack_73c * 2 + 1;
      lVar18 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_708 = (int)lVar18;
      fStack_72c = (float)((int)local_728 + -1 + local_708);
      if ((int)local_5a0 < (int)fStack_72c) {
        fStack_72c = local_5a0;
      }
    }
LAB_14ce2df80:
    local_748 = (longlong *)local_5c8;
    uStack_724 = local_5cc;
    local_738 = (TBitArray<FDefaultBitArrayAllocator> *)(local_5c8 + 0x10);
    iStack_720 = local_5c8._8_4_ - local_594;
    uVar29 = (uint)local_5a0 & 0xffffffe0;
    TStack_6e0._padding_ = CONCAT44(uStack_73c,fStack_740);
    uStack_730 = 0xffffffff;
    TStack_6e0.CurrentBitIndex = (int)fStack_72c;
    TStack_6e0.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)local_5a0 >> 5;
    TStack_6e0._28_4_ = local_5cc;
    TStack_6e0.BaseBitIndex = (int)local_728;
    uStack_6c0 = CONCAT44(uStack_71c,iStack_720);
    bVar17 = SUB41(local_5a0,0);
    local_6e8 = local_748;
    TStack_6e0.Array = local_738;
    if (((int)local_5a0 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (fVar28 != local_5a0) {
      puVar25 = (uint *)(local_5c8 + 0x10);
      if (local_5a8 != (uint *)0x0) {
        puVar25 = local_5a8;
      }
      uVar23 = -1 << (bVar17 & 0x1f) & puVar25[iVar21];
      while (uVar23 == 0) {
        lVar18 = (longlong)iVar21;
        uVar29 = uVar29 + 0x20;
        iVar21 = iVar21 + 1;
        fVar28 = local_5a0;
        if ((int)((int)local_5a0 + -1 + ((int)local_5a0 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14ce2e0a1;
        uVar23 = puVar25[lVar18 + 1];
      }
      uVar13 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_704 = (int)lVar18;
      fVar28 = (float)((uVar29 - 1) + local_704);
      if ((int)local_5a0 < (int)fVar28) {
        fVar28 = local_5a0;
      }
    }
LAB_14ce2e0a1:
    while( true ) {
      plVar12 = local_6e8;
      if ((int)local_6e8[1] - *(int *)((longlong)local_6e8 + 0x34) != (int)uStack_6c0) {
        local_778 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_778);
      }
      fVar30 = local_550;
      this = local_710;
      if ((((float)TStack_6e0.CurrentBitIndex == fVar28) &&
          (TStack_6e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_5c8 + 0x10))) &&
         (plVar12 == (longlong *)local_5c8)) break;
      local_750[0] = UE::Geometry::FGroupTopology::FindGroupEdgeID
                               (&local_1c8,
                                *(int *)(*plVar12 + (longlong)TStack_6e0.CurrentBitIndex * 0xc));
      if (-1 < local_750[0]) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_578,&local_700,
                   (bool *)local_750);
      }
      TStack_6e0.UnvisitedBitMask = TStack_6e0.UnvisitedBitMask & ~TStack_6e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6e0);
    }
    if (*(char *)(*local_710 + 0xb0) == '\0') {
      pTVar15 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_578,
                           local_618);
      if (&local_770 != pTVar15) {
        if (local_770.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_770.AllocatorInstance.Data);
        }
        local_770.AllocatorInstance.Data = (pTVar15->AllocatorInstance).Data;
        (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_770.ArrayNum = pTVar15->ArrayNum;
        local_770.ArrayMax = pTVar15->ArrayMax;
        pTVar15->ArrayNum = 0;
        pTVar15->ArrayMax = 0;
      }
      if (local_618[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_618[0].AllocatorInstance.Data);
      }
    }
    else {
      fStack_72c = fVar24;
      local_728 = fVar24;
      if (local_550 != 0.0) {
        puVar25 = (uint *)(local_578 + 0x10);
        if (local_558 != (uint *)0x0) {
          puVar25 = local_558;
        }
        uVar29 = *puVar25;
        while (uVar29 == 0) {
          lVar18 = (longlong)(int)fVar24;
          local_728 = (float)((int)local_728 + 0x20);
          fVar24 = (float)((int)fVar24 + 1);
          fStack_72c = local_550;
          if ((int)((int)local_550 + -1 + ((int)local_550 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)fVar24)
          goto LAB_14ce2e1e2;
          uVar29 = (puVar25 + 1)[lVar18];
        }
        local_718 = (ulonglong)(-uVar29 & uVar29);
        uVar13 = local_718 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_6fc = (int)lVar18;
        fStack_72c = (float)((int)local_728 + -1 + local_6fc);
        if ((int)local_550 < (int)fStack_72c) {
          fStack_72c = local_550;
        }
      }
LAB_14ce2e1e2:
      local_748 = (longlong *)local_578;
      uStack_73c = (uint)local_718;
      uVar29 = (uint)local_550 & 0xffffffe0;
      uStack_724 = local_5ec;
      local_738 = (TBitArray<FDefaultBitArrayAllocator> *)(local_578 + 0x10);
      iStack_720 = local_578._8_4_ - local_544;
      uStack_730 = 0xffffffff;
      TStack_6b0.CurrentBitIndex = (int)fStack_72c;
      TStack_6b0.UnvisitedBitMask = 0xffffffff;
      TStack_6b0._padding_ = CONCAT44(uStack_73c,fVar24);
      iVar21 = (int)local_550 >> 5;
      TStack_6b0._28_4_ = local_5ec;
      TStack_6b0.BaseBitIndex = (int)local_728;
      uStack_690 = CONCAT44(uStack_71c,iStack_720);
      bVar17 = SUB41(local_550,0);
      fStack_740 = fVar24;
      local_6b8 = local_748;
      TStack_6b0.Array = local_738;
      if (((int)local_550 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (fVar30 != local_550) {
        puVar25 = (uint *)(local_578 + 0x10);
        if (local_558 != (uint *)0x0) {
          puVar25 = local_558;
        }
        uVar23 = -1 << (bVar17 & 0x1f) & puVar25[iVar21];
        while (uVar23 == 0) {
          lVar18 = (longlong)iVar21;
          uVar29 = uVar29 + 0x20;
          iVar21 = iVar21 + 1;
          fVar30 = local_550;
          if ((int)((int)local_550 + -1 + ((int)local_550 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_14ce2e300;
          uVar23 = (puVar25 + 1)[lVar18];
        }
        uVar13 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_6f8 = (int)lVar18;
        fVar30 = (float)((uVar29 - 1) + local_6f8);
        if ((int)local_550 < (int)fVar30) {
          fVar30 = local_550;
        }
      }
LAB_14ce2e300:
      while( true ) {
        plVar12 = local_6b8;
        if ((int)local_6b8[1] - *(int *)((longlong)local_6b8 + 0x34) != (int)uStack_690) {
          local_777 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_777);
        }
        if ((((float)TStack_6b0.CurrentBitIndex == fVar30) &&
            (TStack_6b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_578 + 0x10))) &&
           (this = local_710, plVar12 == (longlong *)local_578)) break;
        local_760[0] = *(int *)(*plVar12 + (longlong)TStack_6b0.CurrentBitIndex * 0xc);
        pTVar15 = UE::Geometry::FGroupTopology::GetGroupEdgeEdges(&local_1c8,local_760[0]);
        pFVar22 = (pTVar15->AllocatorInstance).Data;
        iVar21 = pTVar15->ArrayNum;
        pFVar1 = pFVar22 + (longlong)iVar21 * 4;
        lVar18 = local_5c8._0_8_;
        puVar26 = local_588;
        while( true ) {
          if (pTVar15->ArrayNum != iVar21) {
            local_776[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_776);
            lVar18 = local_5c8._0_8_;
            puVar26 = local_588;
          }
          if (pFVar22 == pFVar1) break;
          if (local_5c8._8_4_ == local_594) goto LAB_14ce2e4b0;
          puVar20 = local_590;
          if (puVar26 != (undefined1 *)0x0) {
            puVar20 = puVar26;
          }
          iVar5 = *(int *)(puVar20 + (ulonglong)(local_580 - 1U & *(uint *)pFVar22) * 4);
          while( true ) {
            if (iVar5 == -1) goto LAB_14ce2e4b0;
            if (*(uint *)(lVar18 + (longlong)iVar5 * 0xc) == *(uint *)pFVar22) break;
            iVar5 = *(int *)(lVar18 + 4 + (longlong)iVar5 * 0xc);
          }
          pFVar22 = pFVar22 + 4;
        }
        if (local_770.AllocatorInstance.Data <= (FScriptContainerElement *)local_760) {
          if ((FScriptContainerElement *)local_760 <
              local_770.AllocatorInstance.Data + (longlong)local_770.ArrayMax * 4) {
            local_790 = (longlong)local_770.ArrayNum;
            local_788 = 4;
            local_7a8 = local_760;
            local_7a0 = local_770.AllocatorInstance.Data;
            local_798 = (longlong)local_770.ArrayMax;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        iVar21 = local_770.ArrayNum;
        if (local_770.ArrayNum == local_770.ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_770.AllocatorInstance,&local_770.ArrayMax);
        }
        local_770.ArrayNum = iVar21 + 1;
        *(int *)(local_770.AllocatorInstance.Data + (longlong)iVar21 * 4) = local_760[0];
LAB_14ce2e4b0:
        TStack_6b0.UnvisitedBitMask = TStack_6b0.UnvisitedBitMask & ~TStack_6b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6b0);
      }
    }
    if (local_770.ArrayNum == 0) {
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_628,L"UGeometryScriptLibrary_MeshModelingFunctions",
                           L"ApplyMeshPolygroupBevel_FilterIsEmpty",
                           L"ApplyMeshPolygroupBevel: Filter box does not contain any Polygroup Edges, bevel will not be applied"
                          );
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar16
                );
      if (local_628.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_628.TextData.Reference + 0x10))();
      }
      local_530 = 0;
      if (local_538 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_538);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_578);
      if (local_438 != 0) {
        plVar12 = local_428;
        if (local_410 != (longlong *)0x0) {
          plVar12 = local_410;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (local_468 != (code *)0x0) {
        plVar12 = local_458;
        if (plStack_440 != (longlong *)0x0) {
          plVar12 = plStack_440;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (local_498 != 0) {
        plVar12 = local_488;
        if (local_470 != (longlong *)0x0) {
          plVar12 = local_470;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if ((code *)local_4c8._0_8_ != (code *)0x0) {
        pppuVar19 = &local_4b8;
        if (pppuStack_4a0 != (undefined ***)0x0) {
          pppuVar19 = pppuStack_4a0;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
      ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_3b8);
      local_580 = 0;
      if (local_588 != (undefined1 *)0x0) {
        FMemory::Free(local_588);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_5c8);
      goto LAB_14ce2e820;
    }
    local_530 = 0;
    if (local_538 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_538);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_578);
    if (local_438 != 0) {
      plVar12 = local_428;
      if (local_410 != (longlong *)0x0) {
        plVar12 = local_410;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_468 != (code *)0x0) {
      plVar12 = local_458;
      if (plStack_440 != (longlong *)0x0) {
        plVar12 = plStack_440;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_498 != 0) {
      plVar12 = local_488;
      if (local_470 != (longlong *)0x0) {
        plVar12 = local_470;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if ((code *)local_4c8._0_8_ != (code *)0x0) {
      pppuVar19 = &local_4b8;
      if (pppuStack_4a0 != (undefined ***)0x0) {
        pppuVar19 = pppuStack_4a0;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_3b8);
    local_580 = 0;
    if (local_588 != (undefined1 *)0x0) {
      FMemory::Free(local_588);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_5c8);
    param_1 = local_6f0;
  }
  UE::Geometry::FMeshBevel::FMeshBevel(&local_2f8);
  pfVar7 = *(float **)this;
  local_2f8.InsetDistance = (double)*pfVar7;
  local_2f8.MaterialIDMode = (EMaterialIDMode)(*(char *)(pfVar7 + 1) != '\0');
  local_2f8.SetConstantMaterialID = (int)pfVar7[2];
  fVar24 = 1.40116e-41;
  if ((int)pfVar7[3] < 9999) {
    fVar24 = pfVar7[3];
  }
  local_2f8.NumSubdivisions = (int)fVar27;
  if (0 < (int)fVar24) {
    local_2f8.NumSubdivisions = (int)fVar24;
  }
  local_2f8.RoundWeight = (double)pfVar7[4];
  if (__real_4024000000000000 <= (double)pfVar7[4]) {
    local_2f8.RoundWeight = __real_4024000000000000;
  }
  if (local_2f8.RoundWeight <= __real_c024000000000000) {
    local_2f8.RoundWeight = __real_c024000000000000;
  }
  if (local_770.ArrayNum < 1) {
    UE::Geometry::FMeshBevel::InitializeFromGroupTopology(&local_2f8,param_1,&local_1c8);
  }
  else {
    UE::Geometry::FMeshBevel::InitializeFromGroupTopologyEdges
              (&local_2f8,param_1,&local_1c8,&local_770);
  }
  UE::Geometry::FMeshBevel::Apply(&local_2f8,param_1,(FDynamicMeshChangeTracker *)0x0);
  UE::Geometry::FMeshBevel::~FMeshBevel(&local_2f8);
LAB_14ce2e820:
  if (local_770.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_770.AllocatorInstance.Data);
  }
  UE::Geometry::FGroupTopology::~FGroupTopology(&local_1c8);
  return;
}

// operator() @ 14ce2e880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshShell'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  float *pfVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  float fVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  char cVar18;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar21;
  char cVar22;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar23;
  undefined1 auStackY_a08 [32];
  undefined1 local_9d8;
  char local_9d7;
  char local_9d6;
  TArray<int,TSizedDefaultAllocator<32>_> local_9d0;
  uint local_9c0;
  uint local_9bc;
  FDynamicMeshEditor local_9b8;
  FMeshNormals local_9b0;
  FDynamicMesh3 *local_998;
  FScriptContainerElement *local_990;
  FJoinMeshLoops local_988;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_908;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_8d8;
  FMeshOffset local_8a8;
  FDynamicMesh3 local_5f8;
  undefined1 local_3c8 [104];
  longlong *local_360;
  ForAnyElementType local_358;
  undefined8 local_350;
  bool local_348;
  ForAnyElementType local_340;
  undefined8 local_338;
  undefined1 local_328 [72];
  int local_2e0;
  bool local_288;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_a08;
  pTVar21 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  local_3c8._8_8_ = (FEdgeLoop *)0x0;
  local_3c8._16_8_ = 0;
  local_3c8._24_8_ = (FEdgeSpan *)0x0;
  local_3c8._32_4_ = 0;
  local_3c8._36_4_ = 0;
  local_3c8[0x28] = false;
  local_3c8[0x29] = false;
  local_3c8[0x2a] = false;
  local_3c8._48_4_ = ConvertToOpenSpan;
  local_3c8._64_8_ = 0;
  local_360 = (longlong *)0x0;
  local_358.Data = (FScriptContainerElement *)0x0;
  local_350._0_4_ = 0;
  local_350._4_4_ = 0;
  local_348 = false;
  local_340.Data = (FScriptContainerElement *)0x0;
  local_338._0_4_ = 0;
  local_338._4_4_ = 0;
  local_3c8._44_4_ = Compute;
  local_998 = param_1;
  local_3c8._0_8_ = param_1;
  UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_3c8);
  iVar6 = -1;
  if (0.0 < **(float **)this || **(float **)this == 0.0) {
    iVar6 = 1;
  }
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_5f8);
  UE::Geometry::FDynamicMesh3::Copy(&local_5f8,param_1,true,true,true,true);
  cVar22 = 0.0 <= (double)iVar6;
  local_9d7 = cVar22;
  if ((bool)cVar22) {
    UE::Geometry::FDynamicMesh3::ReverseOrientation(&local_5f8,true);
  }
  FMeshOffset::FMeshOffset(&local_8a8,param_1);
  pfVar1 = *(float **)this;
  local_8a8.bFixedBoundary = *(bool *)(pfVar1 + 1);
  local_8a8.OffsetDistance = (double)*pfVar1;
  fVar11 = 1.4013e-42;
  if ((int)pfVar1[2] < 1000) {
    fVar11 = pfVar1[2];
  }
  local_8a8.Steps = (int)1.4013e-45;
  if (1 < (int)fVar11) {
    local_8a8.Steps = (int)fVar11;
  }
  local_8a8.SmoothAlpha = (double)pfVar1[3];
  if (__real_3ff0000000000000 <= (double)pfVar1[3]) {
    local_8a8.SmoothAlpha = __real_3ff0000000000000;
  }
  if (local_8a8.SmoothAlpha <= 0.0) {
    local_8a8.SmoothAlpha = 0.0;
  }
  local_8a8.bReprojectSmooth = *(bool *)(pfVar1 + 4);
  local_8a8.BoundaryAlpha = (double)pfVar1[5];
  if (__real_3feccccccccccccd <= (double)pfVar1[5]) {
    local_8a8.BoundaryAlpha = __real_3feccccccccccccd;
  }
  if (local_8a8.BoundaryAlpha <= 0.0) {
    local_8a8.BoundaryAlpha = 0.0;
  }
  FMeshOffset::Apply(&local_8a8,(FProgressCancel *)0x0);
  UE::Geometry::FDynamicMesh3::operator=(param_1,&local_8a8.ResultMesh);
  if (!(bool)cVar22) {
    UE::Geometry::FDynamicMesh3::ReverseOrientation(param_1,true);
  }
  local_9b8.Mesh = param_1;
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings((FMeshIndexMappings *)local_328);
  local_908._0_8_ = 0;
  local_908._40_8_ = 0;
  local_8d8._0_8_ = 0;
  local_8d8._40_8_ = 0;
  UE::Geometry::FDynamicMeshEditor::AppendMesh
            (&local_9b8,&local_5f8,(FMeshIndexMappings *)local_328,&local_8d8,&local_908,false);
  uVar12 = (ulonglong)(int)local_3c8._16_4_;
  local_9bc = local_3c8._16_4_;
  cVar18 = *(char *)(*(longlong *)this + 4);
  local_990 = (FScriptContainerElement *)(local_3c8._8_8_ + uVar12 * 0x40);
  pTVar20 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_3c8._8_8_ + 8);
  uVar16 = uVar12;
  local_9d6 = cVar18;
  do {
    pFVar3 = local_990;
    if ((int)uVar12 != (int)uVar16) {
      local_9d8 = 0;
      `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_9d8);
    }
    if ((FScriptContainerElement *)&pTVar20[-1].ArrayNum == pFVar3) {
      pFVar2 = (param_1->AttributeSet).Ptr;
      if (((pFVar2 != (FDynamicMeshAttributeSet *)0x0) &&
          (0 < (pFVar2->NormalLayers).Array.ArrayNum)) &&
         (pFVar3 = (pFVar2->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar3 != 0)) {
        local_9b0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_9b0.Normals.ArrayNum = 0;
        local_9b0.Normals.ArrayMax = 0;
        if (0 < (pFVar2->NormalLayers).Array.ArrayNum) {
          pTVar21 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)pFVar3;
        }
        local_9b0.Mesh = param_1;
        UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg(&local_9b0,pTVar21,true,true);
        UE::Geometry::FMeshNormals::CopyToOverlay(&local_9b0,pTVar21,false);
        if (local_9b0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9b0.Normals.AllocatorInstance.Data);
        }
      }
      UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings((FMeshIndexMappings *)local_328);
      local_8a8._padding_ = (longlong)&___7FMeshOffset__6B_;
      if (local_8a8.BoundaryVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a8.BoundaryVerts.AllocatorInstance.Data);
      }
      if (local_8a8.bIsBoundary.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a8.bIsBoundary.AllocatorInstance.Data);
      }
      if (local_8a8.PositionBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a8.PositionBuffer.AllocatorInstance.Data);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_8a8.ResultMesh);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_5f8);
      if (local_340.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data);
      }
      if (local_358.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data);
      }
      if (local_3c8._64_8_ != 0) {
        plVar14 = (longlong *)(local_3c8 + 0x50);
        if (local_360 != (longlong *)0x0) {
          plVar14 = local_360;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_3c8._24_8_,local_3c8._32_4_);
      if ((FEdgeSpan *)local_3c8._24_8_ != (FEdgeSpan *)0x0) {
        FMemory::Free((void *)local_3c8._24_8_);
      }
      DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_3c8._8_8_,local_3c8._16_4_);
      if ((FEdgeLoop *)local_3c8._8_8_ != (FEdgeLoop *)0x0) {
        FMemory::Free((void *)local_3c8._8_8_);
      }
      return;
    }
    uVar7 = pTVar20->ArrayNum;
    local_9d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9d0.ArrayNum = 0;
    local_9d0.ArrayMax = 0;
    local_9c0 = uVar7;
    if ((int)uVar7 < 1) {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
    }
    else {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar7,&local_9d0.AllocatorInstance,&local_9d0.ArrayNum,
                         &local_9d0.ArrayMax);
      memset(local_9d0.AllocatorInstance.Data + (longlong)iVar6 * 4,0,(longlong)(int)uVar7 << 2);
      pTVar9 = pTVar21;
      pTVar23 = pTVar21;
      do {
        uVar17 = (uint)pTVar9;
        uVar7 = 0;
        if ((int)uVar17 < pTVar20->ArrayNum) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = *(uint *)((longlong)&pTVar23->field_0x0 +
                         (longlong)(pTVar20->AllocatorInstance).Data);
        if ((local_288 == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bWantForward",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                               ,0x9a,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_328._8_4_ != local_328._52_4_) {
          puVar15 = local_328 + 0x38;
          if ((undefined1 *)local_328._64_8_ != (undefined1 *)0x0) {
            puVar15 = (undefined1 *)local_328._64_8_;
          }
          uVar8 = *(uint *)(puVar15 + (ulonglong)(local_2e0 - 1U & uVar7) * 4);
          while (uVar8 != 0xffffffff) {
            puVar13 = (uint *)((longlong)(int)uVar8 * 0x10 + local_328._0_8_);
            if (*puVar13 == uVar7) {
              pTVar9 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)(puVar13 + 1)
              ;
              if (puVar13 == (uint *)0x0) {
                pTVar9 = pTVar21;
              }
              if (pTVar9 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
                uVar7 = *(uint *)pTVar9;
                goto LAB_14ce2ec4f;
              }
              break;
            }
            uVar8 = puVar13[2];
          }
        }
        uVar7 = 0xffffffff;
LAB_14ce2ec4f:
        uVar8 = 0;
        if ((int)uVar17 < local_9d0.ArrayNum) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar9 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                 (ulonglong)(uVar17 + 1);
        *(uint *)(local_9d0.AllocatorInstance.Data + (longlong)pTVar23) = uVar7;
        pTVar23 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                  &pTVar23->field_0x4;
        param_1 = local_998;
        cVar22 = local_9d7;
        cVar18 = local_9d6;
      } while ((int)(uVar17 + 1) < (int)local_9c0);
    }
    if (cVar22 == '\0') {
      pTVar10 = &local_9d0;
      pTVar19 = pTVar20;
    }
    else {
      pTVar10 = pTVar20;
      pTVar19 = &local_9d0;
    }
    if (cVar18 == '\0') {
      UE::Geometry::FJoinMeshLoops::FJoinMeshLoops(&local_988,param_1,pTVar10,pTVar19);
      UE::Geometry::FJoinMeshLoops::Apply(&local_988);
      local_988._padding_ = (longlong)&___7FJoinMeshLoops_Geometry_UE__6B_;
      if (local_988.QuadGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.QuadGroups.AllocatorInstance.Data);
      }
      if (local_988.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.NewGroups.AllocatorInstance.Data);
      }
      if (local_988.JoinTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.JoinTriangles.AllocatorInstance.Data);
      }
      if (local_988.JoinQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.JoinQuads.AllocatorInstance.Data);
      }
      if (local_988.LoopB.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.LoopB.AllocatorInstance.Data);
      }
      if (local_988.LoopA.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.LoopA.AllocatorInstance.Data);
      }
    }
    else {
      UE::Geometry::FDynamicMeshEditor::WeldVertexLoops(&local_9b8,pTVar10,pTVar19);
    }
    if (local_9d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d0.AllocatorInstance.Data);
    }
    uVar12 = local_3c8._16_8_ & 0xffffffff;
    pTVar20 = pTVar20 + 4;
    uVar16 = (ulonglong)local_9bc;
  } while( true );
}

// ApplyMeshBevelEdgeSelection @ 14ce5ab30

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelEdgeSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptMeshBevelSelectionOptions *param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  
  local_68 = (param_2->GeoSelection).Object;
  local_60 = (param_2->GeoSelection).SharedReferenceCount.ReferenceController;
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = param_3->RoundWeight;
  local_res8[0] = 3;
  local_48._0_4_ = param_3->BevelDistance;
  local_48._4_1_ = param_3->bInferMaterialID;
  local_48._5_3_ = *(undefined3 *)&param_3->field_0x5;
  uStack_40._0_4_ = param_3->SetMaterialID;
  uStack_40._4_4_ = param_3->Subdivisions;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_58,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshBevelSelection_InvalidInput",
                        L"ApplyMeshBevelSelection: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_58._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_58._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_28 = &local_48;
    local_20 = local_res8;
    local_18 = &local_68;
    local_58._8_8_ = &local_28;
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_58,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyMeshBevelSelection @ 14ce5ac50

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          EGeometryScriptMeshBevelSelectionMode param_3,
          FGeometryScriptMeshBevelSelectionOptions *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  EGeometryScriptMeshBevelSelectionMode local_res18 [16];
  undefined1 local_38 [16];
  FGeometryScriptMeshBevelSelectionOptions *local_28;
  EGeometryScriptMeshBevelSelectionMode *local_20;
  FGeometryScriptMeshSelection *local_18;
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshBevelSelection_InvalidInput",
                        L"ApplyMeshBevelSelection: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_20 = local_res18;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_4;
  local_18 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyMeshDisconnectFaces @ 14ce5ad20

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,bool param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_res18 [8];
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  FGeometryScriptMeshSelection *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshDisconnectFaces_InvalidInput",
                        L"ApplyMeshDisconnectFaces: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_20 = &local_res20;
  local_18 = local_res18;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyMeshDisconnectFacesAlongEdges @ 14ce5ae00

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFacesAlongEdges
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,UGeometryScriptDebug *param_3
          )

{
  FText *pFVar1;
  UGeometryScriptDebug *local_res18 [2];
  FGeometryScriptMeshSelection *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshDisconnectEdges_InvalidInput",
                        L"ApplyMeshDisconnectEdges: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar1);
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFacesAlongEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyMeshDuplicateFaces @ 14ce5aed0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptMeshSelection *param_3,FGeometryScriptMeshEditPolygroupOptions param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FGeometryScriptMeshEditPolygroupOptions local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  undefined1 local_38 [16];
  FGeometryScriptMeshSelection *local_28;
  UGeometryScriptDebug **local_20;
  TArray<int,TSizedDefaultAllocator<32>_> *local_18;
  FGeometryScriptMeshEditPolygroupOptions *local_10;
  
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshDuplicateFaces_InvalidInput",
                        L"ApplyMeshDuplicateFaces: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_20 = &param_5;
  local_18 = &local_48;
  local_10 = &local_res20;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection
            (param_1,&local_48,Triangles,param_3);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyMeshExtrude_Compatibility_5p0 @ 14ce5b000

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshExtrude_Compatibility_5p0
          (UDynamicMesh *param_1,FGeometryScriptMeshExtrudeOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  FGeometryScriptMeshSelection *pFVar4;
  FText *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_e8 [16];
  float local_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined1 local_a8;
  undefined7 uStack_a7;
  float *local_a0;
  FGeometryScriptMeshSelection *local_98;
  float local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined8 local_58;
  FGeometryScriptMeshSelection local_48 [4];
  
  uStack_d0 = *(undefined8 *)&(param_2->ExtrudeDirection).field0_0x0;
  uStack_c8 = *(undefined8 *)((longlong)&(param_2->ExtrudeDirection).field0_0x0 + 8);
  fVar1 = param_2->ExtrudeDistance;
  uVar3 = *(undefined8 *)((longlong)&(param_2->ExtrudeDirection).field0_0x0 + 0x10);
  uVar6 = (undefined4)uVar3;
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_a8 = param_2->bSolidsToShells;
  fVar2 = param_2->UVScale;
  uStack_d4 = uStack_d4 & 0xffffff00;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = uStack_b4 & 0xffffff00;
  uStack_b0 = 0;
  pFVar4 = FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(local_48);
  uStack_84 = uStack_d4;
  uStack_80 = (undefined4)uStack_d0;
  uStack_7c = uStack_d0._4_4_;
  local_78 = (undefined4)uStack_c8;
  uStack_74 = uStack_c8._4_4_;
  local_68 = local_b8;
  uStack_64 = uStack_b4;
  uStack_60 = uStack_b0;
  local_58 = CONCAT71(uStack_a7,local_a8);
  local_d8 = fVar1;
  uStack_c0 = uVar6;
  uStack_bc = uVar7;
  fStack_ac = fVar2;
  local_88 = fVar1;
  uStack_70 = uVar6;
  uStack_6c = uVar7;
  fStack_5c = fVar2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_e8,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshLinearExtrudeFaces_InvalidInput",
                        L"ApplyMeshLinearExtrudeFaces: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar5);
    param_1 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_e8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_e8._0_8_ + 0x10))();
    }
  }
  else {
    local_a0 = &local_88;
    local_e8._8_8_ = &local_a0;
    local_e8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_98 = pFVar4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_e8,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar4->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyMeshInsetOutsetFaces @ 14ce5b180

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces
          (UDynamicMesh *param_1,FGeometryScriptMeshInsetOutsetFacesOptions *param_2,
          FGeometryScriptMeshSelection *param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptMeshInsetOutsetFacesOptions *local_28;
  FGeometryScriptMeshSelection *local_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshInsetOutsetFaces_InvalidInput",
                        L"ApplyMeshInsetOutsetFaces: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyMeshLinearExtrudeFaces @ 14ce5b250

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces
          (UDynamicMesh *param_1,FGeometryScriptMeshLinearExtrudeOptions *param_2,
          FGeometryScriptMeshSelection *param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptMeshLinearExtrudeOptions *local_28;
  FGeometryScriptMeshSelection *local_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshLinearExtrudeFaces_InvalidInput",
                        L"ApplyMeshLinearExtrudeFaces: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyMeshOffset @ 14ce5b320

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffset
          (UDynamicMesh *param_1,FGeometryScriptMeshOffsetOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  FGeometryScriptMeshOffsetOptions *local_res8;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshOffset_InvalidInput",L"ApplyMeshOffset: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffset'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_res8 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyMeshOffsetFaces @ 14ce5b3d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces
          (UDynamicMesh *param_1,FGeometryScriptMeshOffsetFacesOptions *param_2,
          FGeometryScriptMeshSelection *param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptMeshOffsetFacesOptions *local_28;
  FGeometryScriptMeshSelection *local_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshOffsetFaces_InvalidInput",
                        L"ApplyMeshOffsetFaces: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyMeshPolygroupBevel @ 14ce5b4a0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel
          (UDynamicMesh *param_1,FGeometryScriptMeshBevelOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  UGeometryScriptDebug *local_38;
  undefined1 local_30 [16];
  FGeometryScriptMeshBevelOptions *local_20;
  UGeometryScriptDebug **local_18;
  
  local_38 = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshPolygroupBevel_InvalidInput",
                        L"ApplyMeshPolygroupBevel: TargetMesh is Null");
    UE::Geometry::AppendError(local_38,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18 = &local_38;
  local_30._8_8_ = &local_20;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyMeshShell @ 14ce5b550

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshShell
          (UDynamicMesh *param_1,FGeometryScriptMeshOffsetOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  FGeometryScriptMeshOffsetOptions *local_res8;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshShell_InvalidInput",L"ApplyMeshShell: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshShell'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_res8 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// GetPrivateStaticClass @ 14ce6ccf0

UClass * __cdecl UGeometryScriptLibrary_MeshModelingFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshModelingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshModelingFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshModelingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshModelingFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshModelingFunctions @ 14ce74ec0

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshModelingFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyMeshBevelEdgeSelection @ 14ce85790

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshBevelEdgeSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FSharedReferencer<1> FVar3;
  FText *pFVar4;
  UDynamicMesh *pUVar5;
  atomic<int> *paVar6;
  undefined1 local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined1 local_b8 [24];
  undefined4 local_a0;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined8 **ppuStack_98;
  undefined4 local_90;
  FGeometryScriptMeshSelection local_88;
  FGeometrySelection *local_78;
  TReferenceControllerBase<1> *local_70;
  ITextData *local_68;
  undefined8 **ppuStack_60;
  undefined4 local_58;
  ITextData **local_48;
  undefined1 *local_40;
  FGeometrySelection **local_38;
  
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
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_88);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a0 = 0x3f800000;
  uStack_9c = 0;
  ppuStack_98 = (ITextData ***)0x0;
  local_90 = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FVar3.ReferenceController = local_88.GeoSelection.SharedReferenceCount.ReferenceController;
  pUVar5 = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8[6] = uStack_9a;
  local_b8[5] = uStack_9b;
  if (local_88.GeoSelection.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar6 = &(local_88.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount
    ;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_b8[4] = uStack_9c;
  local_b8._0_4_ = local_a0;
  local_b8[7] = uStack_99;
  ppuStack_60 = ppuStack_98;
  local_78 = local_88.GeoSelection.Object;
  local_70 = local_88.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_88.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_58 = local_90;
  local_res10[0] = 3;
  local_68 = (ITextData *)local_b8._0_8_;
  if (local_res20 == (UDynamicMesh *)0x0) {
    local_b8._8_8_ = ppuStack_60;
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_b8,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshBevelSelection_InvalidInput",
                        L"ApplyMeshBevelSelection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    pUVar5 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_b8._0_8_ + 0x10))();
    }
  }
  else {
    local_48 = &local_68;
    local_40 = local_res10;
    local_38 = &local_78;
    local_b8._8_8_ = &local_48;
    local_b8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_b8,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  *(UDynamicMesh **)param_3 = pUVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyMeshBevelSelection @ 14ce85a20

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshBevelSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined4 local_a0;
  FGeometryScriptMeshSelection local_98;
  undefined1 local_88 [16];
  FGeometrySelection *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined8 *local_68;
  undefined1 *local_60;
  FGeometrySelection **local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_b8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_b0 = 0x3f800000;
  uStack_ac = uStack_ac & 0xffffff00;
  uStack_a8 = 0;
  local_a0 = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar4 = local_b8;
  pUVar2 = local_res20;
  local_48 = CONCAT44(uStack_ac,local_b0);
  local_78 = local_98.GeoSelection.Object;
  pTStack_70 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_40 = uStack_a8;
  local_38 = local_a0;
  local_res18[0] = local_res10[0];
  if (local_b8 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_88,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshBevelSelection_InvalidInput",
                        L"ApplyMeshBevelSelection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
    }
  }
  else {
    local_68 = &local_48;
    local_60 = local_res18;
    local_58 = &local_78;
    local_88._8_8_ = &local_68;
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_b8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_88,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyMeshDisconnectFaces @ 14ce85c80

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshDisconnectFaces
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  bool bVar4;
  undefined1 local_res10 [8];
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_88;
  UGeometryScriptDebug *local_80;
  FGeometryScriptMeshSelection local_78;
  undefined1 local_68 [16];
  FGeometrySelection *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FGeometrySelection **local_48;
  UGeometryScriptDebug **local_40;
  undefined1 *local_38;
  
  local_88 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_78);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
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
  bVar4 = local_res18[0] != 0;
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar3 = local_88;
  local_58 = local_78.GeoSelection.Object;
  pTStack_50 = local_78.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80 = local_res20;
  local_res10[0] = bVar4;
  if (local_88 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshDisconnectFaces_InvalidInput",
                        L"ApplyMeshDisconnectFaces: TargetMesh is Null");
    UE::Geometry::AppendError(local_80,InvalidInputs,pFVar2);
    pUVar3 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
  }
  else {
    local_48 = &local_58;
    local_40 = &local_80;
    local_38 = local_res10;
    local_68._8_8_ = &local_48;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_88,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyMeshDisconnectFacesAlongEdges @ 14ce85e90

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshDisconnectFacesAlongEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  UGeometryScriptDebug *local_res20;
  FGeometryScriptMeshSelection local_58;
  FGeometrySelection **local_48;
  UGeometryScriptDebug **local_40;
  undefined1 local_38 [16];
  FGeometrySelection *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
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
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18;
  local_28 = local_58.GeoSelection.Object;
  pTStack_20 = local_58.GeoSelection.SharedReferenceCount.ReferenceController;
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
  local_res20 = local_res10;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshDisconnectEdges_InvalidInput",
                        L"ApplyMeshDisconnectEdges: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar2);
    pUVar3 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
  }
  else {
    local_48 = &local_28;
    local_40 = &local_res20;
    local_38._8_8_ = &local_48;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFacesAlongEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyMeshDuplicateFaces @ 14ce86050

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshDuplicateFaces
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FGeometryScriptMeshSelection *pFVar3;
  UDynamicMesh *pUVar4;
  uint local_res10;
  undefined4 uStackX_14;
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  UGeometryScriptDebug *local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  FGeometryScriptMeshSelection local_a0;
  FGeometryScriptMeshSelection local_88;
  undefined1 local_78 [16];
  undefined8 local_68 [2];
  FGeometrySelection *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FGeometrySelection **local_48;
  UGeometryScriptDebug **local_40;
  TArray<int,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 *local_30;
  
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
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_88);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_a0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_res10 = local_res10 & 0xffffff00;
  uStackX_14 = 0;
  pFVar3 = &local_a0;
  if ((FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptMeshSelection *)0x0) {
    pFVar3 = (FGeometryScriptMeshSelection *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar4 = local_res20;
  local_58 = local_88.GeoSelection.Object;
  pTStack_50 = local_88.GeoSelection.SharedReferenceCount.ReferenceController;
  local_68[0] = CONCAT44(uStackX_14,local_res10);
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
  local_b8 = local_res18;
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_78,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshDuplicateFaces_InvalidInput",
                        L"ApplyMeshDuplicateFaces: TargetMesh is Null");
    UE::Geometry::AppendError(local_b8,InvalidInputs,pFVar2);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
    }
  }
  else {
    local_48 = &local_58;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40 = &local_b8;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    local_38 = &local_b0;
    local_30 = local_68;
    local_78._8_8_ = &local_48;
    local_78._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_78,
               GeneralEdit,Unknown,false);
    UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection
              (pUVar4,&local_b0,Triangles,pFVar3);
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyMeshExtrude_Compatibility_5p0 @ 14ce862f0

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshExtrude_Compatibility_5p0
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FGeometryScriptMeshSelection *pFVar5;
  FText *pFVar6;
  UDynamicMesh *this;
  undefined4 uVar7;
  undefined4 uVar8;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18 [2];
  undefined1 local_128 [16];
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined4 *local_b8;
  FGeometryScriptMeshSelection *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  FGeometryScriptMeshSelection local_68 [4];
  
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
  local_100 = __real_3ff0000000000000;
  local_110 = 0;
  uStack_108 = 0;
  local_118[0] = 0x3f800000;
  local_f8 = 0x3f800000;
  local_f4 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar4 = local_f8;
  uVar3 = local_118[0];
  this = local_res18[0];
  pUVar2 = local_res10;
  uVar7 = (undefined4)local_100;
  uVar8 = (undefined4)((ulonglong)local_100 >> 0x20);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uStack_ec = uStack_ec & 0xffffff00;
  local_d0 = local_d0 & 0xffffff00;
  uStack_cc = uStack_cc & 0xffffff00;
  uStack_c8 = 0;
  uStack_e8 = local_110;
  uStack_e0 = uStack_108;
  local_c0 = local_f4;
  pFVar5 = FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(local_68);
  local_a8 = uVar3;
  uStack_a4 = uStack_ec;
  uStack_a0 = (undefined4)uStack_e8;
  uStack_9c = uStack_e8._4_4_;
  local_98 = (undefined4)uStack_e0;
  uStack_94 = uStack_e0._4_4_;
  local_f0 = uVar3;
  local_88 = local_d0;
  uStack_84 = uStack_cc;
  uStack_80 = uStack_c8;
  uStack_7c = uVar4;
  uStack_c4 = uVar4;
  local_78 = CONCAT71(uStack_bf,local_c0);
  uStack_d8 = uVar7;
  uStack_d4 = uVar8;
  uStack_90 = uVar7;
  uStack_8c = uVar8;
  if (this == (UDynamicMesh *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_128,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshLinearExtrudeFaces_InvalidInput",
                        L"ApplyMeshLinearExtrudeFaces: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar6);
    this = (UDynamicMesh *)0x0;
    if ((ITextData *)local_128._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_128._0_8_ + 0x10))();
    }
  }
  else {
    local_b8 = &local_a8;
    local_128._8_8_ = &local_b8;
    local_128._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_b0 = pFVar5;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_128,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar5->GeoSelection).SharedReferenceCount.ReferenceController);
  *(UDynamicMesh **)param_3 = this;
  return;
}

// execApplyMeshInsetOutsetFaces @ 14ce86560

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshInsetOutsetFaces
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  FGeometryScriptMeshSelection local_98;
  undefined8 *local_88;
  FGeometrySelection **local_80;
  undefined1 local_78 [16];
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58 = 0x3f800000;
  uStack_54 = 1;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = local_48 & 0xffffff00;
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res18;
  pUVar2 = local_res10;
  local_68 = local_98.GeoSelection.Object;
  pTStack_60 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = CONCAT26(uStack_52,CONCAT24(uStack_54,local_58));
  uStack_30 = CONCAT44(uStack_4c,uStack_50);
  local_28 = CONCAT44(uStack_44,local_48);
  uStack_20 = CONCAT44(uStack_3c,uStack_40);
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_78,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshInsetOutsetFaces_InvalidInput",
                        L"ApplyMeshInsetOutsetFaces: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
    }
  }
  else {
    local_88 = &local_38;
    local_80 = &local_68;
    local_78._8_8_ = &local_88;
    local_78._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_78,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyMeshLinearExtrudeFaces @ 14ce867a0

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshLinearExtrudeFaces
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  FGeometryScriptMeshSelection local_d8;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 *local_80;
  FGeometrySelection **local_78;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  uStack_a0 = __real_3ff0000000000000;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0x3f800000;
  uStack_b4 = uStack_b4 & 0xffffff00;
  local_98 = local_98 & 0xffffff00;
  uStack_94 = uStack_94 & 0xffffff00;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  local_88 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
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
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res18;
  pUVar2 = local_res10;
  local_68 = local_d8.GeoSelection.Object;
  pTStack_60 = local_d8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_d8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = CONCAT44(uStack_b4,local_b8);
  uStack_50 = uStack_b0;
  local_48 = uStack_a8;
  uStack_40 = uStack_a0;
  local_28 = CONCAT71(uStack_87,local_88);
  local_38 = CONCAT44(uStack_94,local_98);
  uStack_30 = CONCAT44(uStack_8c,uStack_90);
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c8,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshLinearExtrudeFaces_InvalidInput",
                        L"ApplyMeshLinearExtrudeFaces: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
    }
  }
  else {
    local_80 = &local_58;
    local_78 = &local_68;
    local_c8._8_8_ = &local_80;
    local_c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_c8,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyMeshOffset @ 14ce86a00

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  undefined8 *local_res20;
  undefined1 local_68 [16];
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58 = 0x3f800000;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_50 = 5;
  uStack_4c = 0x3dcccccd;
  local_48 = local_48 & 0xffffff00;
  uStack_44 = 0x3e4ccccd;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18;
  pUVar2 = local_res10;
  local_38 = CONCAT44(uStack_54,local_58);
  uStack_30 = CONCAT44(uStack_4c,uStack_50);
  local_28 = CONCAT44(uStack_44,local_48);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshOffset_InvalidInput",L"ApplyMeshOffset: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_res20 = &local_38;
    local_68._8_8_ = &local_res20;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffset'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

// execApplyMeshOffsetFaces @ 14ce86bc0

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshOffsetFaces
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  FGeometryScriptMeshSelection local_98;
  undefined8 *local_88;
  FGeometrySelection **local_80;
  undefined1 local_78 [16];
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58 = 0x3f800000;
  uStack_54 = 2;
  uStack_50 = uStack_50 & 0xffffff00;
  uStack_4c = 0;
  local_48 = 0x3f800000;
  uStack_44 = CONCAT31(uStack_44._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res18;
  pUVar2 = local_res10;
  local_68 = local_98.GeoSelection.Object;
  pTStack_60 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = CONCAT26(uStack_52,CONCAT24(uStack_54,local_58));
  uStack_30 = CONCAT44(uStack_4c,uStack_50);
  local_28 = CONCAT44(uStack_44,local_48);
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_78,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshOffsetFaces_InvalidInput",
                        L"ApplyMeshOffsetFaces: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
    }
  }
  else {
    local_88 = &local_38;
    local_80 = &local_68;
    local_78._8_8_ = &local_88;
    local_78._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_78,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyMeshPolygroupBevel @ 14ce86df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshPolygroupBevel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined1 auStack_218 [32];
  UGeometryScriptDebug *local_1e8;
  UDynamicMesh *local_1e0;
  UGeometryScriptDebug *local_1d8;
  undefined1 local_1d0 [16];
  undefined8 *local_1c0;
  UGeometryScriptDebug **local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined4 uStack_9f;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1e0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e0);
  }
  local_e8 = 0x3f800000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_98[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_88[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_88[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_78[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_78[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_68[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_68[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_58[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_58[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_48[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_48[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  uStack_d0 = 0;
  local_a8 = 0;
  uStack_e4 = uStack_e4 & 0xffffff00;
  uStack_e0 = 0;
  local_d8 = 0x3f800000;
  uStack_d4 = uStack_d4 & 0xffffff00;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9b = 0;
  uStack_99 = 0;
  local_38 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_1e8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  pUVar2 = local_1e0;
  local_1a8 = CONCAT44(uStack_e4,local_e8);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_198 = CONCAT44(uStack_d4,local_d8);
  uStack_1a0 = uStack_e0;
  uStack_190 = uStack_d0;
  local_188 = local_c8;
  uStack_180 = uStack_c0;
  uStack_160 = CONCAT17(uStack_99,CONCAT25(uStack_9b,CONCAT41(uStack_9f,uStack_a0)));
  local_178 = local_b8;
  uStack_170 = uStack_b0;
  local_168 = local_a8;
  local_158 = local_98[0];
  dStack_150 = local_98[1];
  local_148 = local_88[0];
  dStack_140 = local_88[1];
  local_138 = local_78[0];
  dStack_130 = local_78[1];
  local_128 = local_68[0];
  dStack_120 = local_68[1];
  local_118 = local_58[0];
  dStack_110 = local_58[1];
  local_f8 = CONCAT71(uStack_37,local_38);
  local_1d8 = local_1e8;
  local_108 = local_48[0];
  dStack_100 = local_48[1];
  uStack_f0 = uStack_30;
  if (local_1e0 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_1d0,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshPolygroupBevel_InvalidInput",
                        L"ApplyMeshPolygroupBevel: TargetMesh is Null");
    UE::Geometry::AppendError(local_1d8,InvalidInputs,pFVar3);
    if ((ITextData *)local_1d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1d0._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_1c0 = &local_1a8;
    local_1b8 = &local_1d8;
    local_1d0._8_8_ = &local_1c0;
    local_1d0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_1e0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_1d0,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execApplyMeshShell @ 14ce870d0

void __cdecl
UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshShell
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  undefined8 *local_res20;
  undefined1 local_68 [16];
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58 = 0x3f800000;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_50 = 5;
  uStack_4c = 0x3dcccccd;
  local_48 = local_48 & 0xffffff00;
  uStack_44 = 0x3e4ccccd;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18;
  pUVar2 = local_res10;
  local_38 = CONCAT44(uStack_54,local_58);
  uStack_30 = CONCAT44(uStack_4c,uStack_50);
  local_28 = CONCAT44(uStack_44,local_48);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshModelingFunctions",
                        L"ApplyMeshShell_InvalidInput",L"ApplyMeshShell: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_res20 = &local_38;
    local_68._8_8_ = &local_res20;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshShell'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

