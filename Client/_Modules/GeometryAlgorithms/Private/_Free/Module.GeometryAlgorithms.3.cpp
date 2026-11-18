// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 1

// ComputeUVs @ 149629d30

bool __cdecl
XAtlasWrapper::ComputeUVs
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          XAtlasChartOptions *param_3,XAtlasPackOptions *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7)

{
  Vertex *pVVar1;
  uint uVar2;
  uint uVar3;
  Mesh *pMVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  AddMeshError AVar11;
  int iVar12;
  Atlas *pAVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint uStack_19c;
  float fStack_198;
  uint uStack_194;
  undefined1 local_190;
  undefined1 uStack_18f;
  undefined1 uStack_18e;
  undefined1 uStack_18d;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined2 uStack_18a;
  double local_188;
  double dStack_180;
  _func___cdecl_void_float_ptr_float_ptr_uint_uint_ptr_uint *local_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  uint local_150;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined2 uStack_14a;
  PackOptions local_148;
  MeshDecl local_128;
  int local_c8;
  int iStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint local_b8;
  ChartOptions local_a8 [2];
  
  pTVar8 = param_7;
  fStack_170 = param_3->MaxChartArea;
  fStack_16c = param_3->MaxBoundaryLength;
  fStack_168 = param_3->NormalDeviationWeight;
  fStack_164 = param_3->RoundnessWeight;
  uStack_19c = param_4->Padding;
  uStack_194 = param_4->Resolution;
  uStack_18e = param_4->bBruteForce;
  uStack_18d = param_4->bCreateImage;
  uStack_18c = param_4->bRotateChartsToAxis;
  uStack_18b = param_4->bRotateCharts;
  local_178 = param_3->ParamFunc;
  local_150 = param_3->MaxIterations;
  local_14c = param_3->bUseInputMeshUvs;
  local_14b = param_3->bFixWinding;
  fStack_160 = param_3->StraightnessWeight;
  fStack_15c = param_3->NormalSeamWeight;
  fStack_158 = param_3->TextureSeamWeight;
  fStack_154 = param_3->MaxCost;
  local_1a0 = param_4->MaxChartSize;
  local_190 = param_4->bBilinear;
  fStack_198 = param_4->TexelsPerUnit;
  uStack_18f = param_4->bBlockAlign;
  uStack_18a = local_148._22_2_;
  pAVar13 = xatlas::Create();
  local_128.vertexCount = param_2->ArrayNum;
  local_128.vertexPositionData = (param_2->AllocatorInstance).Data;
  uVar14 = 0;
  local_128.indexCount = param_1->ArrayNum;
  local_128.indexData = (param_1->AllocatorInstance).Data;
  local_128.vertexNormalData = (void *)0x0;
  local_128.vertexUvData = (void *)0x0;
  local_128.faceIgnoreData = (bool *)0x0;
  local_128.faceMaterialData = (uint *)0x0;
  local_128.faceVertexCount = (uchar *)0x0;
  local_128.vertexNormalStride = 0;
  local_128.vertexUvStride = 0;
  local_128.indexOffset = 0;
  local_128.faceCount = 0;
  local_128.epsilon = 1.1920929e-07;
  local_128.vertexPositionStride = 0xc;
  local_128.indexFormat = UInt32;
  AVar11 = xatlas::AddMesh(pAVar13,&local_128,0);
  xatlas::AddMeshJoin(pAVar13);
  if ((AVar11 != Success) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Error == xatlas::AddMeshError::Success",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\XAtlasWrapper.cpp"
                         ,0x51,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  local_148.padding = uStack_19c;
  local_148.maxChartSize = local_1a0;
  local_148.resolution = uStack_194;
  local_148.texelsPerUnit = fStack_198;
  local_148.blockAlign = (bool)uStack_18f;
  local_148.bilinear = (bool)local_190;
  local_148.bruteForce = (bool)uStack_18e;
  local_148.createImage = (bool)uStack_18d;
  local_148.rotateChartsToAxis = (bool)uStack_18c;
  local_148.rotateCharts = (bool)uStack_18b;
  local_148._22_2_ = uStack_18a;
  local_a8[0].paramFunc = local_178;
  local_a8[0].maxChartArea = fStack_170;
  local_a8[0].maxBoundaryLength = fStack_16c;
  local_a8[0].useInputMeshUvs = (bool)local_14c;
  local_a8[0].maxIterations = local_150;
  local_a8[0].fixWinding = (bool)local_14b;
  local_a8[0]._46_2_ = uStack_14a;
  local_a8[0].normalDeviationWeight = fStack_168;
  local_a8[0].roundnessWeight = fStack_164;
  local_a8[0].straightnessWeight = fStack_160;
  local_a8[0].normalSeamWeight = fStack_15c;
  local_a8[0].textureSeamWeight = fStack_158;
  local_a8[0].maxCost = fStack_154;
  xatlas::Generate(pAVar13,local_a8,&local_148);
  if ((pAVar13->meshCount != 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Atlas->meshCount == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\GeometryAlgorithms\\Private\\XAtlasWrapper.cpp"
                         ,0x55,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  param_6->ArrayNum = 0;
  if (param_6->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_6->AllocatorInstance,0,&param_6->ArrayMax);
  }
  param_7->ArrayNum = 0;
  if (param_7->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  dVar7 = __real_3ff0000000000000;
  uVar2 = pAVar13->width;
  uVar3 = pAVar13->height;
  param_7._0_4_ = 0;
  if (pAVar13->meshCount != 0) {
    do {
      pMVar4 = pAVar13->meshes;
      uVar15 = 0;
      if (pMVar4[uVar14].vertexCount != 0) {
        do {
          pFVar5 = (param_5->AllocatorInstance).Data;
          pVVar1 = pMVar4[uVar14].vertexArray + uVar15;
          local_c8 = pVVar1->atlasIndex;
          iStack_c4 = pVVar1->chartIndex;
          fStack_c0 = pVVar1->uv[0];
          fStack_bc = pVVar1->uv[1];
          uVar16 = pMVar4[uVar14].vertexArray[uVar15].xref;
          local_188 = (double)fStack_c0 * (dVar7 / (double)uVar2);
          dStack_180 = (double)fStack_bc * (dVar7 / (double)uVar3);
          local_b8 = uVar16;
          if (((pFVar5 <= (FScriptContainerElement *)&local_188) &&
              ((FScriptContainerElement *)&local_188 < pFVar5 + (longlong)param_5->ArrayMax * 0x10))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          iVar12 = param_5->ArrayNum;
          if (iVar12 == param_5->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar12 + 1;
          pFVar5 = (param_5->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(double *)pFVar5 = local_188;
          *(double *)(pFVar5 + 8) = dStack_180;
          pFVar5 = (pTVar8->AllocatorInstance).Data;
          local_1a8 = uVar16;
          if (((pFVar5 <= (FScriptContainerElement *)&local_1a8) &&
              ((FScriptContainerElement *)&local_1a8 < pFVar5 + (longlong)pTVar8->ArrayMax * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          iVar12 = pTVar8->ArrayNum;
          if (iVar12 == pTVar8->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
          }
          uVar16 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar16;
          pTVar8->ArrayNum = iVar12 + 1;
          *(uint *)((pTVar8->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_1a8;
        } while (uVar16 < pMVar4[uVar14].vertexCount);
      }
      uVar15 = 0;
      if (pMVar4[uVar14].indexCount != 0) {
        do {
          local_1a4 = pMVar4[uVar14].indexArray[uVar15];
          pFVar5 = (param_6->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_1a4) &&
              ((FScriptContainerElement *)&local_1a4 < pFVar5 + (longlong)param_6->ArrayMax * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          iVar12 = param_6->ArrayNum;
          if (iVar12 == param_6->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_6->AllocatorInstance,&param_6->ArrayMax);
          }
          uVar16 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar16;
          param_6->ArrayNum = iVar12 + 1;
          *(uint *)((param_6->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_1a4;
        } while (uVar16 < pMVar4[uVar14].indexCount);
      }
      param_7._0_4_ = (uint)param_7 + 1;
      uVar14 = (ulonglong)(uint)param_7;
    } while ((uint)param_7 < pAVar13->meshCount);
  }
  xatlas::Destroy(pAVar13);
  return true;
}

