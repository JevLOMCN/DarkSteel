// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 30

// StaticClass @ 14cea5480

UClass * __cdecl UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshVertexColorFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshVertexColorFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshVertexColorFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshVertexColorFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshVertexColorFunctions @ 14ceae5d0

UGeometryScriptLibrary_MeshVertexColorFunctions * __thiscall
UGeometryScriptLibrary_MeshVertexColorFunctions::UGeometryScriptLibrary_MeshVertexColorFunctions
          (UGeometryScriptLibrary_MeshVertexColorFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshVertexColorFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshVertexColorFunctions @ 14ceae600

UGeometryScriptLibrary_MeshVertexColorFunctions * __thiscall
UGeometryScriptLibrary_MeshVertexColorFunctions::UGeometryScriptLibrary_MeshVertexColorFunctions
          (UGeometryScriptLibrary_MeshVertexColorFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshVertexColorFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshVertexColorFunctions @ 14ceaeaf0

void __thiscall
UGeometryScriptLibrary_MeshVertexColorFunctions::~UGeometryScriptLibrary_MeshVertexColorFunctions
          (UGeometryScriptLibrary_MeshVertexColorFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshVertexColorFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ceaff40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshVertexColorFunctions::BlurMeshVertexColors'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  TDynamicMeshOverlay<float,4> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_198 [32];
  TArray<bool,TSizedDefaultAllocator<32>_> local_148;
  undefined1 *local_138;
  code *local_130;
  undefined1 **local_128;
  FText local_120;
  undefined1 local_108 [184];
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (((pFVar2 != (FDynamicMeshAttributeSet *)0x0) &&
      (pTVar3 = (TDynamicMeshOverlay<float,4> *)(pFVar2->ColorLayer).Ptr,
      pTVar3 != (TDynamicMeshOverlay<float,4> *)0x0)) && (0 < (pTVar3->ElementsRefCounts).UsedCount)
     ) {
    UE::Geometry::FSmoothDynamicMeshAttributes::FSmoothDynamicMeshAttributes
              ((FSmoothDynamicMeshAttributes *)local_108,param_1);
    local_108[0x10] = true;
    local_108._44_4_ = **(int **)this;
    local_108._48_8_ = **(double **)((longlong)this + 8);
    local_108[0x28] = **(EEdgeWeights **)((longlong)this + 0x10);
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,4,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
    pFVar8 = *(FScriptContainerElement **)((longlong)this + 0x18);
    if (((local_148.AllocatorInstance.Data <= pFVar8) &&
        (pFVar8 < local_148.AllocatorInstance.Data + local_148.ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    iVar1 = iVar6 + 1;
    local_148.AllocatorInstance.Data[iVar6] = *pFVar8;
    pFVar8 = (FScriptContainerElement *)(*(longlong *)((longlong)this + 0x18) + 1);
    local_148.ArrayNum = iVar1;
    if (((local_148.AllocatorInstance.Data <= pFVar8) &&
        (pFVar8 < local_148.AllocatorInstance.Data + local_148.ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_148.ArrayNum == local_148.ArrayMax) {
      local_148.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    iVar6 = local_148.ArrayNum + 1;
    local_148.AllocatorInstance.Data[local_148.ArrayNum] = *pFVar8;
    pFVar8 = (FScriptContainerElement *)(*(longlong *)((longlong)this + 0x18) + 2);
    local_148.ArrayNum = iVar6;
    if (((local_148.AllocatorInstance.Data <= pFVar8) &&
        (pFVar8 < local_148.AllocatorInstance.Data + local_148.ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_148.ArrayNum == local_148.ArrayMax) {
      local_148.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    iVar6 = local_148.ArrayNum + 1;
    local_148.AllocatorInstance.Data[local_148.ArrayNum] = *pFVar8;
    pFVar8 = (FScriptContainerElement *)(*(longlong *)((longlong)this + 0x18) + 3);
    local_148.ArrayNum = iVar6;
    if (((local_148.AllocatorInstance.Data <= pFVar8) &&
        (pFVar8 < local_148.AllocatorInstance.Data + local_148.ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    local_148.ArrayNum = iVar6 + 1;
    local_148.AllocatorInstance.Data[iVar6] = *pFVar8;
    bVar5 = FGeometryScriptMeshSelection::IsEmpty
                      (*(FGeometryScriptMeshSelection **)((longlong)this + 0x20));
    if (!bVar5) {
      local_138 = local_108;
      local_128 = &local_138;
      local_130 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshVertexColorFunctions::BlurMeshVertexColors'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>,void,int>
                  ::Call;
      FGeometryScriptMeshSelection::ProcessByVertexID
                (*(FGeometryScriptMeshSelection **)((longlong)this + 0x20),param_1,
                 (TFunctionRef<void___cdecl(int)> *)&local_130,false);
    }
    bVar5 = UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,4>
                      ((FSmoothDynamicMeshAttributes *)local_108,pTVar3,&local_148);
    if (!bVar5) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_120,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                          L"BlurMeshVertexColors_BlurFailed",
                          L"BlurMeshVertexColors: Failed to blur the colors.");
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x28),OperationFailed,
                 pFVar7);
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
    }
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    local_48 = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_108 + 0x78));
    if ((FScriptContainerElement *)local_108._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._104_8_);
    }
    if ((FScriptContainerElement *)local_108._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._88_8_);
    }
    if ((FScriptContainerElement *)local_108._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._72_8_);
    }
    if ((FScriptContainerElement *)local_108._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._24_8_);
    }
  }
  return;
}

// operator() @ 14ceb03b0

void __thiscall
`UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB'::__l2::
<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined4 uVar1;
  short sVar2;
  FDynamicMeshAttributeSet *pFVar3;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float _Y;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar10 = __real_3b4d2e1c;
  fVar9 = __real_414eb852;
  fVar8 = __real_3f870a3d;
  _Y = __real_3ed55555;
  fVar7 = __real_3d6147ae;
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (((pFVar3 != (FDynamicMeshAttributeSet *)0x0) &&
      (pTVar4 = (pFVar3->ColorLayer).Ptr,
      pTVar4 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) &&
     (0 < *(int *)&pTVar4->field_0x38)) {
    uVar15 = *(int *)&pTVar4->field_0x8 * 0x200 + *(int *)&pTVar4->field_0xc;
    uVar14 = 0;
    if ((uVar15 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar4->field_0x10 - 1U))) {
      uVar13 = 1;
      uVar14 = 1;
      if (1 < (int)uVar15) {
        do {
          sVar2 = *(short *)((*(undefined8 **)&pTVar4->field_0x10)[uVar13 >> 9] +
                            (ulonglong)(uVar13 & 0x1ff) * 2);
          if ((sVar2 != 0) && (uVar14 = uVar13, sVar2 != -1)) break;
          uVar13 = uVar13 + 1;
          uVar14 = uVar13;
        } while ((int)uVar13 < (int)uVar15);
      }
    }
joined_r0x00014ceb0449:
    if (uVar14 != uVar15) {
      while( true ) {
        lVar5 = *(longlong *)&pTVar4->field_0x48;
        uVar13 = uVar14 * 4;
        uVar18 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
        uVar19 = (ulonglong)(uVar13 + 1 & 0x1ff);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8);
        uVar17 = (ulonglong)(uVar13 + 2 & 0x1ff);
        uVar16 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
        fVar22 = *(float *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 4);
        fVar20 = *(float *)(*(longlong *)(lVar5 + uVar18 * 8) + uVar19 * 4);
        fVar21 = *(float *)(*(longlong *)(lVar5 + uVar16 * 8) + uVar17 * 4);
        uVar11 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
        uVar12 = (ulonglong)(uVar13 + 3 & 0x1ff);
        uVar1 = *(undefined4 *)(*(longlong *)(lVar5 + uVar11 * 8) + uVar12 * 4);
        if (fVar10 < fVar22) {
          fVar22 = powf(fVar22,_Y);
          fVar22 = fVar22 * fVar8 - fVar7;
        }
        else {
          fVar22 = fVar22 * fVar9;
        }
        if (fVar10 < fVar20) {
          fVar20 = powf(fVar20,_Y);
          fVar20 = fVar20 * fVar8 - fVar7;
        }
        else {
          fVar20 = fVar20 * fVar9;
        }
        if (fVar10 < fVar21) {
          fVar21 = powf(fVar21,_Y);
          fVar21 = fVar21 * fVar8 - fVar7;
        }
        else {
          fVar21 = fVar21 * fVar9;
        }
        uVar14 = uVar14 + 1;
        *(float *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 4) = fVar22;
        *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar18 * 8) + uVar19 * 4) =
             fVar20;
        *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar16 * 8) + uVar17 * 4) =
             fVar21;
        *(undefined4 *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar11 * 8) + uVar12 * 4) =
             uVar1;
        if ((int)uVar15 <= (int)uVar14) break;
        while( true ) {
          lVar5 = *(longlong *)(*(longlong *)&pTVar4->field_0x10 + (ulonglong)(uVar14 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
          uVar14 = uVar14 + 1;
          if ((int)uVar15 <= (int)uVar14) goto joined_r0x00014ceb0449;
        }
      }
      goto joined_r0x00014ceb0449;
    }
  }
  return;
}

// operator() @ 14ceb0710

void __thiscall
`UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear'::__l2::
<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined4 uVar1;
  short sVar2;
  FDynamicMeshAttributeSet *pFVar3;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float _Y;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  _Y = __real_4019999a;
  fVar10 = __real_3f72a76f;
  fVar9 = __real_3d9e8391;
  fVar8 = __real_3d55891a;
  fVar7 = __real_3d25aee6;
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (((pFVar3 != (FDynamicMeshAttributeSet *)0x0) &&
      (pTVar4 = (pFVar3->ColorLayer).Ptr,
      pTVar4 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) &&
     (0 < *(int *)&pTVar4->field_0x38)) {
    uVar15 = *(int *)&pTVar4->field_0x8 * 0x200 + *(int *)&pTVar4->field_0xc;
    uVar14 = 0;
    if ((uVar15 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar4->field_0x10 - 1U))) {
      uVar13 = 1;
      uVar14 = 1;
      if (1 < (int)uVar15) {
        do {
          sVar2 = *(short *)((*(undefined8 **)&pTVar4->field_0x10)[uVar13 >> 9] +
                            (ulonglong)(uVar13 & 0x1ff) * 2);
          if ((sVar2 != 0) && (uVar14 = uVar13, sVar2 != -1)) break;
          uVar13 = uVar13 + 1;
          uVar14 = uVar13;
        } while ((int)uVar13 < (int)uVar15);
      }
    }
joined_r0x00014ceb07a9:
    if (uVar14 != uVar15) {
      while( true ) {
        lVar5 = *(longlong *)&pTVar4->field_0x48;
        uVar13 = uVar14 * 4;
        uVar18 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
        uVar19 = (ulonglong)(uVar13 + 1 & 0x1ff);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8);
        uVar17 = (ulonglong)(uVar13 + 2 & 0x1ff);
        uVar16 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
        fVar22 = *(float *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 4);
        fVar20 = *(float *)(*(longlong *)(lVar5 + uVar18 * 8) + uVar19 * 4);
        fVar21 = *(float *)(*(longlong *)(lVar5 + uVar16 * 8) + uVar17 * 4);
        uVar11 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
        uVar12 = (ulonglong)(uVar13 + 3 & 0x1ff);
        uVar1 = *(undefined4 *)(*(longlong *)(lVar5 + uVar11 * 8) + uVar12 * 4);
        if (fVar7 < fVar22) {
          fVar22 = powf(fVar22 * fVar10 + fVar8,_Y);
        }
        else {
          fVar22 = fVar22 * fVar9;
        }
        if (fVar7 < fVar20) {
          fVar20 = powf(fVar20 * fVar10 + fVar8,_Y);
        }
        else {
          fVar20 = fVar20 * fVar9;
        }
        if (fVar7 < fVar21) {
          fVar21 = powf(fVar21 * fVar10 + fVar8,_Y);
        }
        else {
          fVar21 = fVar21 * fVar9;
        }
        uVar14 = uVar14 + 1;
        *(float *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 4) = fVar22;
        *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar18 * 8) + uVar19 * 4) =
             fVar20;
        *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar16 * 8) + uVar17 * 4) =
             fVar21;
        *(undefined4 *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar11 * 8) + uVar12 * 4) =
             uVar1;
        if ((int)uVar15 <= (int)uVar14) break;
        while( true ) {
          lVar5 = *(longlong *)(*(longlong *)&pTVar4->field_0x10 + (ulonglong)(uVar14 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
          uVar14 = uVar14 + 1;
          if ((int)uVar15 <= (int)uVar14) goto joined_r0x00014ceb07a9;
        }
      }
      goto joined_r0x00014ceb07a9;
    }
  }
  return;
}

// operator() @ 14ceb0e30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  TDynamicMeshOverlay<float,4> *this_00;
  FScriptContainerElement *pFVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  FDynamicMeshAttributeSet *pFVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  FDynamicMeshAttributeSet *pFVar15;
  FDynamicMeshAttributeSet *pFVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  FIndex3i_u_0 local_78;
  undefined8 local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  bVar20 = (param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0;
  if (bVar20) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  pFVar15 = (param_1->AttributeSet).Ptr;
  pFVar16 = (FDynamicMeshAttributeSet *)0x0;
  pFVar10 = pFVar16;
  if (pFVar15 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar10 = pFVar15;
  }
  bVar21 = (pFVar10->ColorLayer).Ptr ==
           (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
  if (bVar21) {
    UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar15);
  }
  pFVar15 = (param_1->AttributeSet).Ptr;
  pFVar10 = pFVar16;
  if (pFVar15 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar10 = pFVar15;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(pFVar10->ColorLayer).Ptr;
  if ((**(char **)this != '\0') && (!bVar21 && !bVar20)) {
    UE::Geometry::TDynamicMeshOverlay<float,4>::ClearElements(this_00);
  }
  if ((this_00->ElementsRefCounts).UsedCount != 0) {
    uVar19 = (this_00->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
             (this_00->ElementsRefCounts).RefCounts.CurBlockUsed;
    if ((uVar19 != 0) &&
       (pFVar4 = (this_00->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
      pFVar16 = (FDynamicMeshAttributeSet *)&DAT_00000001;
      uVar14 = 1;
      if ((int)uVar19 < 2) goto LAB_14ceb128c;
      do {
        sVar1 = *(short *)(*(longlong *)(pFVar4 + ((ulonglong)pFVar16 >> 9) * 8) +
                          (ulonglong)((uint)pFVar16 & 0x1ff) * 2);
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        uVar14 = (uint)pFVar16 + 1;
        pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
      } while ((int)uVar14 < (int)uVar19);
    }
    uVar14 = (uint)pFVar16;
LAB_14ceb128c:
    if (uVar14 == uVar19) {
      return;
    }
    puVar5 = *(undefined4 **)((longlong)this + 8);
    puVar6 = *(undefined4 **)((longlong)this + 0x10);
LAB_14ceb12a0:
    do {
      pFVar4 = (this_00->Elements).Blocks.AllocatorInstance.Data;
      uVar14 = (uint)pFVar16;
      uVar12 = uVar14 * 4;
      uVar3 = *puVar6;
      uVar25 = *(undefined4 *)
                (*(longlong *)(pFVar4 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((char)uVar3 != '\0') {
        uVar25 = *puVar5;
      }
      uVar24 = *(undefined4 *)
                (*(longlong *)(pFVar4 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
      if ((char)((uint)uVar3 >> 8) != '\0') {
        uVar24 = puVar5[1];
      }
      uVar23 = *(undefined4 *)
                (*(longlong *)(pFVar4 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
      if ((char)((uint)uVar3 >> 0x10) != '\0') {
        uVar23 = puVar5[2];
      }
      uVar22 = *(undefined4 *)
                (*(longlong *)(pFVar4 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar12 + 3 & 0x1ff) * 4);
      if ((char)((uint)uVar3 >> 0x18) != '\0') {
        uVar22 = puVar5[3];
      }
      uVar17 = uVar14 * 4;
      uVar12 = uVar14 + 1;
      pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
      *(undefined4 *)
       (*(longlong *)(pFVar4 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar17 & 0x1ff) * 4) = uVar25;
      *(undefined4 *)
       (*(longlong *)
         ((this_00->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar17 + 1 & 0x1ff) * 4) =
           uVar24;
      *(undefined4 *)
       (*(longlong *)
         ((this_00->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar17 + 2 & 0x1ff) * 4) =
           uVar23;
      *(undefined4 *)
       (*(longlong *)
         ((this_00->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar17 + 3 & 0x1ff) * 4) =
           uVar22;
      if ((int)uVar12 < (int)uVar19) {
        do {
          uVar13 = (ulonglong)((uint)pFVar16 & 0x1ff);
          lVar18 = *(longlong *)
                    ((this_00->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    ((ulonglong)pFVar16 >> 9) * 8);
          if ((*(short *)(lVar18 + uVar13 * 2) != 0) && (*(short *)(lVar18 + uVar13 * 2) != -1))
          goto LAB_14ceb12a0;
          uVar12 = (uint)pFVar16 + 1;
          pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar12;
        } while ((int)uVar12 < (int)uVar19);
      }
      if (uVar12 == uVar19) {
        return;
      }
    } while( true );
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&local_58,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  uVar19 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  pFVar15 = pFVar16;
  if ((uVar19 == 0) ||
     (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar15 = (FDynamicMeshAttributeSet *)0x0, (ushort)(**(short **)pFVar4 - 1U) < 0xfffe)) {
LAB_14ceb0f46:
    uVar14 = (uint)pFVar15;
  }
  else {
    pFVar15 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar14 = 1;
    if (1 < (int)uVar19) {
      do {
        uVar13 = (ulonglong)((uint)pFVar15 & 0x1ff);
        lVar18 = *(longlong *)(pFVar4 + ((ulonglong)pFVar15 >> 9) * 8);
        if ((*(short *)(lVar18 + uVar13 * 2) != 0) && (*(short *)(lVar18 + uVar13 * 2) != -1))
        break;
        uVar14 = (uint)pFVar15 + 1;
        pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
      } while ((int)uVar14 < (int)uVar19);
      goto LAB_14ceb0f46;
    }
  }
joined_r0x00014ceb0f49:
  if (uVar14 != uVar19) {
    while( true ) {
      local_48 = **(undefined8 **)((longlong)this + 8);
      uStack_40 = (*(undefined8 **)((longlong)this + 8))[1];
      iVar8 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement(this_00,(float *)&local_48);
      uVar12 = (uint)pFVar15;
      uVar14 = 0;
      if ((int)uVar12 < local_58.ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar14 = uVar12 + 1;
      pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
      *(int *)(local_58.AllocatorInstance.Data + (longlong)(int)uVar12 * 4) = iVar8;
      if ((int)uVar19 <= (int)uVar14) break;
      pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        uVar13 = (ulonglong)((uint)pFVar15 & 0x1ff);
        if ((*(short *)(*(longlong *)(pFVar4 + ((ulonglong)pFVar15 >> 9) * 8) + uVar13 * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar4 + ((ulonglong)pFVar15 >> 9) * 8) + uVar13 * 2) != -1))
        break;
        uVar14 = (uint)pFVar15 + 1;
        pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
        if ((int)uVar19 <= (int)uVar14) goto joined_r0x00014ceb0f49;
      }
    }
    goto joined_r0x00014ceb0f49;
  }
  uVar19 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar19 != 0) &&
     (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar16 = (FDynamicMeshAttributeSet *)0x0, 0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    pFVar16 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar14 = 1;
    if ((int)uVar19 < 2) goto joined_r0x00014ceb1079;
    do {
      uVar13 = (ulonglong)((uint)pFVar16 & 0x1ff);
      lVar18 = *(longlong *)(pFVar4 + ((ulonglong)pFVar16 >> 9) * 8);
      if ((*(short *)(lVar18 + uVar13 * 2) != 0) && (*(short *)(lVar18 + uVar13 * 2) != -1)) break;
      uVar14 = (uint)pFVar16 + 1;
      pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar19);
  }
  uVar14 = (uint)pFVar16;
joined_r0x00014ceb1079:
  do {
    if (uVar14 == uVar19) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      uVar14 = (uint)pFVar16;
      lVar18 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + ((ulonglong)pFVar16 >> 9) * 8)
      ;
      uVar12 = *(uint *)(lVar18 + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
      local_68 = *(undefined8 *)(lVar18 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
      uVar9 = 0;
      uVar17 = uVar9;
      if ((int)uVar12 < local_58.ArrayNum) {
        uVar17 = ~uVar12 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar8 = *(int *)(local_58.AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
      lVar18 = (longlong)(int)local_68._4_4_;
      uVar12 = uVar9;
      if ((int)local_68._4_4_ < local_58.ArrayNum) {
        uVar12 = ~local_68._4_4_ >> 0x1f;
      }
      iVar11 = local_58.ArrayNum;
      if (uVar12 == 0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = local_58.ArrayNum;
      }
      iVar2 = *(int *)(local_58.AllocatorInstance.Data + lVar18 * 4);
      lVar18 = (longlong)(int)(uint)local_68;
      if ((int)(uint)local_68 < iVar11) {
        uVar9 = ~(uint)local_68 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_78._s_0.A = *(undefined4 *)(local_58.AllocatorInstance.Data + lVar18 * 4);
      local_78._s_0.B = iVar2;
      local_78._s_0.C = iVar8;
      UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                (this_00,uVar14,(FIndex3i *)&local_78._s_0,true);
      uVar14 = uVar14 + 1;
      pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
      if ((int)uVar19 <= (int)uVar14) break;
      while( true ) {
        uVar13 = (ulonglong)((uint)pFVar16 & 0x1ff);
        lVar18 = *(longlong *)
                  ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  ((ulonglong)pFVar16 >> 9) * 8);
        if ((*(short *)(lVar18 + uVar13 * 2) != 0) && (*(short *)(lVar18 + uVar13 * 2) != -1))
        break;
        uVar14 = (uint)pFVar16 + 1;
        pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
        if ((int)uVar19 <= (int)uVar14) goto joined_r0x00014ceb1079;
      }
    }
  } while( true );
}

// operator() @ 14ceb1430

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined8 *puVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  FDynamicMeshAttributeSet *pFVar5;
  TDynamicMeshOverlay<float,4> *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FText *pFVar12;
  FDynamicMeshAttributeSet *pFVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FIndex3i_u_0 local_78;
  undefined8 local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  FText local_38;
  
  plVar4 = *(longlong **)this;
  if ((*plVar4 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar4 = (longlong *)*plVar4;
  if ((int)plVar4[1] <
      (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed)) {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_38,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                         L"SetMeshPerVertexColors_IncorrectCount",
                         L"SetMeshPerVertexColors: size of provided VertexColorList is smaller than MaxVertexID of Mesh"
                        );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar12);
    if (local_38.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    return;
  }
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  pFVar5 = (param_1->AttributeSet).Ptr;
  pFVar13 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar13 = pFVar5;
  }
  if ((pFVar13->ColorLayer).Ptr ==
      (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar5);
  }
  pFVar5 = (param_1->AttributeSet).Ptr;
  pFVar13 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar13 = pFVar5;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(pFVar13->ColorLayer).Ptr;
  UE::Geometry::TDynamicMeshOverlay<float,4>::ClearElements(this_00);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&local_58,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  uVar16 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar15 = 0;
  if (((uVar16 != 0) &&
      (pFVar6 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar15 = 0,
      0xfffd < (ushort)(**(short **)pFVar6 - 1U))) && (uVar15 = 1, 1 < (int)uVar16)) {
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
joined_r0x00014ceb15d3:
  if (uVar15 != uVar16) {
    while( true ) {
      uVar9 = 0;
      if ((int)uVar15 < (int)plVar4[1]) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (longlong)(int)uVar15;
      puVar1 = (undefined8 *)(*plVar4 + lVar17 * 0x10);
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      iVar10 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement(this_00,(float *)&local_48)
      ;
      uVar9 = 0;
      if ((int)uVar15 < local_58.ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar15 = uVar15 + 1;
      *(int *)(local_58.AllocatorInstance.Data + lVar17 * 4) = iVar10;
      if ((int)uVar16 <= (int)uVar15) break;
      pFVar6 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar15 >> 9) * 8) +
                       (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar15 >> 9) * 8) +
                      (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) break;
        uVar15 = uVar15 + 1;
        if ((int)uVar16 <= (int)uVar15) goto joined_r0x00014ceb15d3;
      }
    }
    goto joined_r0x00014ceb15d3;
  }
  uVar15 = 0;
  uVar16 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar16 != 0) &&
     (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar15 = 1;
    bVar8 = uVar16 == 1;
    if ((int)uVar16 < 2) goto LAB_14ceb1768;
    do {
      lVar17 = *(longlong *)(pFVar6 + (ulonglong)(uVar15 >> 9) * 8);
      if ((*(short *)(lVar17 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar17 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) break;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
  bVar8 = uVar15 == uVar16;
LAB_14ceb1768:
  if (!bVar8) {
LAB_14ceb1772:
    do {
      lVar17 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
      uVar9 = *(uint *)(lVar17 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      local_68 = *(undefined8 *)(lVar17 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      uVar11 = 0;
      if ((int)uVar9 < local_58.ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = *(int *)(local_58.AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      lVar17 = (longlong)(int)local_68._4_4_;
      uVar9 = 0;
      if ((int)local_68._4_4_ < local_58.ArrayNum) {
        uVar9 = ~local_68._4_4_ >> 0x1f;
      }
      iVar14 = local_58.ArrayNum;
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = local_58.ArrayNum;
      }
      iVar3 = *(int *)(local_58.AllocatorInstance.Data + lVar17 * 4);
      lVar17 = (longlong)(int)(uint)local_68;
      uVar9 = 0;
      if ((int)(uint)local_68 < iVar14) {
        uVar9 = ~(uint)local_68 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_78._s_0.A = *(undefined4 *)(local_58.AllocatorInstance.Data + lVar17 * 4);
      local_78._s_0.B = iVar3;
      local_78._s_0.C = iVar10;
      UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                (this_00,uVar15,(FIndex3i *)&local_78._s_0,true);
      uVar15 = uVar15 + 1;
      if ((int)uVar15 < (int)uVar16) {
        do {
          lVar17 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar15 >> 9) * 8);
          if ((*(short *)(lVar17 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar17 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) goto LAB_14ceb1772;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar16);
      }
    } while (uVar15 != uVar16);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ceb1940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  float *pfVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  EGeometryScriptMeshSelectionType EVar9;
  int iVar10;
  uint uVar11;
  FDynamicMeshAttributeSet *pFVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FDynamicMeshAttributeSet *pFVar18;
  ForAnyElementType FVar19;
  ForElementType<FSetElementId> FVar20;
  longlong lVar21;
  uint uVar22;
  ForElementType<FSetElementId> FVar23;
  ForElementType<FSetElementId> FVar24;
  ForElementType<FSetElementId> FVar25;
  bool bVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d7 [3];
  int local_1d4;
  TDynamicMeshOverlay<float,4> *local_1d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  FIndex3i_u_0 local_1a8;
  TPairInitializer<int_const_&,int_const_&> local_198;
  uint local_188 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_180;
  int **local_170;
  int *local_168;
  FIndex3i_u_0 local_160;
  undefined8 local_150;
  code *local_140;
  TDynamicMeshOverlay<float,4> ***local_138;
  code *local_130;
  FDynamicMesh3 **local_128;
  TDynamicMeshOverlay<float,4> **local_120;
  undefined8 local_118;
  undefined8 local_110;
  FDynamicMesh3 *local_108;
  TDynamicMeshOverlay<float,4> **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ForElementType<FSetElementId> local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForElementType<FSetElementId> local_98;
  int local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar26 = (param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0;
  if (bVar26) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  pFVar3 = (param_1->AttributeSet).Ptr;
  pFVar18 = (FDynamicMeshAttributeSet *)0x0;
  pFVar12 = pFVar18;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar12 = pFVar3;
  }
  bVar27 = (pFVar12->ColorLayer).Ptr ==
           (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
  if (bVar27) {
    UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar3);
  }
  pFVar3 = (param_1->AttributeSet).Ptr;
  pFVar12 = pFVar18;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar12 = pFVar3;
  }
  local_1d0 = (TDynamicMeshOverlay<float,4> *)(pFVar12->ColorLayer).Ptr;
  if (!bVar27 && !bVar26) goto LAB_14ceb1d4a;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&local_1c8,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  uVar8 = _UNK_15076b1f8;
  uVar7 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar22 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar22 == 0) ||
     (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar4 - 1U) < 0xfffe)) {
LAB_14ceb1a76:
    uVar16 = (uint)pFVar18;
  }
  else {
    pFVar18 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar16 = 1;
    if (1 < (int)uVar22) {
      do {
        uVar13 = (ulonglong)((uint)pFVar18 & 0x1ff);
        lVar21 = *(longlong *)(pFVar4 + ((ulonglong)pFVar18 >> 9) * 8);
        if ((*(short *)(lVar21 + uVar13 * 2) != 0) && (*(short *)(lVar21 + uVar13 * 2) != -1))
        break;
        uVar16 = (uint)pFVar18 + 1;
        pFVar18 = (FDynamicMeshAttributeSet *)(ulonglong)uVar16;
      } while ((int)uVar16 < (int)uVar22);
      goto LAB_14ceb1a76;
    }
  }
joined_r0x00014ceb1a78:
  if (uVar16 != uVar22) {
    while( true ) {
      local_e8 = uVar7;
      uStack_e0 = uVar8;
      iVar10 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement
                         (local_1d0,(float *)&local_e8);
      uVar17 = (uint)pFVar18;
      uVar16 = 0;
      if ((int)uVar17 < local_1c8.ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_1e8 = (longlong)(int)uVar17;
        local_1e0 = (longlong)local_1c8.ArrayNum;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar16 = uVar17 + 1;
      pFVar18 = (FDynamicMeshAttributeSet *)(ulonglong)uVar16;
      *(int *)(local_1c8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) = iVar10;
      if ((int)uVar22 <= (int)uVar16) break;
      while( true ) {
        uVar13 = (ulonglong)((uint)pFVar18 & 0x1ff);
        lVar21 = *(longlong *)
                  ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  ((ulonglong)pFVar18 >> 9) * 8);
        if ((*(short *)(lVar21 + uVar13 * 2) != 0) && (*(short *)(lVar21 + uVar13 * 2) != -1))
        break;
        uVar16 = (uint)pFVar18 + 1;
        pFVar18 = (FDynamicMeshAttributeSet *)(ulonglong)uVar16;
        if ((int)uVar22 <= (int)uVar16) goto joined_r0x00014ceb1a78;
      }
    }
    goto joined_r0x00014ceb1a78;
  }
  uVar16 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar22 = 0;
  if ((uVar16 != 0) &&
     (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar22 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar17 = 1;
    uVar22 = 1;
    if (1 < (int)uVar16) {
      do {
        lVar21 = *(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8);
        if ((*(short *)(lVar21 + (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
           (uVar22 = uVar17, *(short *)(lVar21 + (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) break;
        uVar17 = uVar17 + 1;
        uVar22 = uVar17;
      } while ((int)uVar17 < (int)uVar16);
    }
  }
joined_r0x00014ceb1ba8:
  if (uVar22 != uVar16) {
    while( true ) {
      lVar21 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8);
      uVar17 = *(uint *)(lVar21 + 8 + (ulonglong)(uVar22 & 0x1ff) * 0xc);
      local_150 = *(undefined8 *)(lVar21 + (ulonglong)(uVar22 & 0x1ff) * 0xc);
      uVar11 = 0;
      if ((int)uVar17 < local_1c8.ArrayNum) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_1e8 = (longlong)(int)uVar17;
        local_1e0 = (longlong)local_1c8.ArrayNum;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = *(int *)(local_1c8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
      lVar21 = (longlong)(int)local_150._4_4_;
      uVar17 = 0;
      if ((int)local_150._4_4_ < local_1c8.ArrayNum) {
        uVar17 = ~local_150._4_4_ >> 0x1f;
      }
      iVar15 = local_1c8.ArrayNum;
      if (uVar17 == 0) {
        local_1e0 = (longlong)local_1c8.ArrayNum;
        local_1e8 = lVar21;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar15 = local_1c8.ArrayNum;
      }
      iVar1 = *(int *)(local_1c8.AllocatorInstance.Data + lVar21 * 4);
      lVar21 = (longlong)(int)(uint)local_150;
      uVar17 = 0;
      if ((int)(uint)local_150 < iVar15) {
        uVar17 = ~(uint)local_150 >> 0x1f;
      }
      if (uVar17 == 0) {
        local_1e0 = (longlong)iVar15;
        local_1e8 = lVar21;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_160._s_0.A = *(undefined4 *)(local_1c8.AllocatorInstance.Data + lVar21 * 4);
      local_160._s_0.B = iVar1;
      local_160._s_0.C = iVar10;
      UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                (local_1d0,uVar22,(FIndex3i *)&local_160._s_0,true);
      uVar22 = uVar22 + 1;
      if ((int)uVar16 <= (int)uVar22) break;
      while( true ) {
        lVar21 = *(longlong *)
                  ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar22 >> 9) * 8);
        if ((*(short *)(lVar21 + (ulonglong)(uVar22 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar21 + (ulonglong)(uVar22 & 0x1ff) * 2) != -1)) break;
        uVar22 = uVar22 + 1;
        if ((int)uVar16 <= (int)uVar22) goto joined_r0x00014ceb1ba8;
      }
    }
    goto joined_r0x00014ceb1ba8;
  }
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
LAB_14ceb1d4a:
  if (**(char **)this == '\0') {
    EVar9 = FGeometryScriptMeshSelection::GetSelectionType
                      (*(FGeometryScriptMeshSelection **)((longlong)this + 0x18));
    if ((EVar9 == Vertices) ||
       (EVar9 = FGeometryScriptMeshSelection::GetSelectionType
                          (*(FGeometryScriptMeshSelection **)((longlong)this + 0x18)),
       EVar9 == Edges)) {
      local_100 = &local_1d0;
      local_f8 = *(undefined8 *)((longlong)this + 8);
      local_f0 = *(undefined8 *)((longlong)this + 0x10);
      local_130 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor'::__l2::<lambda_1>::operator()'::__l40::<lambda_1>,void,int>
                  ::Call;
      local_128 = &local_108;
      local_108 = param_1;
      FGeometryScriptMeshSelection::ProcessByVertexID
                (*(FGeometryScriptMeshSelection **)((longlong)this + 0x18),param_1,
                 (TFunctionRef<void___cdecl(int)> *)&local_130,false);
    }
    else {
      local_120 = &local_1d0;
      local_118 = *(undefined8 *)((longlong)this + 8);
      local_110 = *(undefined8 *)((longlong)this + 0x10);
      local_138 = &local_120;
      local_140 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor'::__l2::<lambda_1>::operator()'::__l42::<lambda_2>,void,int>
                  ::Call;
      FGeometryScriptMeshSelection::ProcessByTriangleID
                (*(FGeometryScriptMeshSelection **)((longlong)this + 0x18),param_1,
                 (TFunctionRef<void___cdecl(int)> *)&local_140,false);
    }
  }
  else {
    pfVar5 = *(float **)((longlong)this + 8);
    uVar2 = **(undefined4 **)((longlong)this + 0x10);
    uVar31 = FLinearColor::Black.field0_0x0._s_0.R;
    if ((char)uVar2 != '\0') {
      uVar31 = *pfVar5;
    }
    uVar30 = FLinearColor::Black.field0_0x0._s_0.G;
    if ((char)((uint)uVar2 >> 8) != '\0') {
      uVar30 = pfVar5[1];
    }
    uVar29 = FLinearColor::Black.field0_0x0._s_0.B;
    if ((char)((uint)uVar2 >> 0x10) != '\0') {
      uVar29 = pfVar5[2];
    }
    uVar28 = FLinearColor::Black.field0_0x0._s_0.A;
    if ((char)((uint)uVar2 >> 0x18) != '\0') {
      uVar28 = pfVar5[3];
    }
    local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.ArrayNum = 0;
    local_180.ArrayMax = 0;
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray
              (*(FGeometryScriptMeshSelection **)((longlong)this + 0x18),param_1,&local_180,Triangle
              );
    FVar25 = (ForElementType<FSetElementId>)0x0;
    iVar10 = local_180.ArrayNum;
    local_d8 = (ForElementType<FSetElementId>)0x0;
    local_d0 = 0;
    local_b8 = 0;
    pFVar4 = local_180.AllocatorInstance.Data + (longlong)local_180.ArrayNum * 4;
    local_b0 = 0;
    local_ac = 0x80;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = (ForElementType<FSetElementId>)0x0;
    local_90 = 0;
    FVar19.Data = local_180.AllocatorInstance.Data;
    FVar23 = FVar25;
    FVar24 = FVar25;
    while( true ) {
      if (local_180.ArrayNum != iVar10) {
        local_1d8 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
        FVar23 = local_d8;
        FVar24 = local_98;
      }
      if (FVar19.Data == pFVar4) break;
      uVar13 = (ulonglong)(*(uint *)FVar19.Data & 0x1ff);
      lVar21 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(*(uint *)FVar19.Data >> 9) * 8);
      local_198.Value = *(int **)(lVar21 + uVar13 * 0xc);
      local_188[0] = *(uint *)(lVar21 + 8 + uVar13 * 0xc);
      if ((int)local_d0 != local_a4) {
        FVar20 = (ForElementType<FSetElementId>)local_a0;
        if (FVar24 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar24;
        }
        uVar22 = *(uint *)((longlong)FVar20 + (ulonglong)(local_90 - 1U & (uint)local_198.Value) * 4
                          );
        while (uVar22 != 0xffffffff) {
          puVar14 = (uint *)((longlong)(int)uVar22 * 0x10 + (longlong)FVar23);
          if (*puVar14 == (uint)local_198.Value) {
            FVar20 = (ForElementType<FSetElementId>)(puVar14 + 1);
            if (puVar14 == (uint *)0x0) {
              FVar20 = FVar25;
            }
            if (FVar20 != (ForElementType<FSetElementId>)0x0) goto LAB_14ceb1f49;
            break;
          }
          uVar22 = puVar14[2];
        }
      }
      local_1b8 = (float)uVar31;
      local_1b4 = (float)uVar30;
      local_1b0 = (float)uVar29;
      local_1ac = (float)uVar28;
      local_1d4 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement(local_1d0,&local_1b8);
      local_170 = &local_198.Value;
      local_168 = &local_1d4;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&local_d8,&local_198,(bool *)&local_170);
      FVar23 = local_d8;
      FVar24 = local_98;
LAB_14ceb1f49:
      if ((int)local_d0 != local_a4) {
        FVar20 = (ForElementType<FSetElementId>)local_a0;
        if (FVar24 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar24;
        }
        uVar22 = *(uint *)((longlong)FVar20 + (ulonglong)(local_90 - 1U & local_198.Value._4_4_) * 4
                          );
        while (uVar22 != 0xffffffff) {
          puVar14 = (uint *)((longlong)(int)uVar22 * 0x10 + (longlong)FVar23);
          if (*puVar14 == local_198.Value._4_4_) {
            FVar20 = (ForElementType<FSetElementId>)(puVar14 + 1);
            if (puVar14 == (uint *)0x0) {
              FVar20 = FVar25;
            }
            if (FVar20 != (ForElementType<FSetElementId>)0x0) goto LAB_14ceb1ffa;
            break;
          }
          uVar22 = puVar14[2];
        }
      }
      local_1b8 = (float)uVar31;
      local_1b4 = (float)uVar30;
      local_1b0 = (float)uVar29;
      local_1ac = (float)uVar28;
      local_1d4 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement(local_1d0,&local_1b8);
      local_170 = (int **)((longlong)&local_198.Value + 4);
      local_168 = &local_1d4;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&local_d8,&local_198,(bool *)&local_170);
      FVar23 = local_d8;
      FVar24 = local_98;
LAB_14ceb1ffa:
      if ((int)local_d0 != local_a4) {
        FVar20 = (ForElementType<FSetElementId>)local_a0;
        if (FVar24 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar24;
        }
        uVar22 = *(uint *)((longlong)FVar20 + (ulonglong)(local_90 - 1U & local_188[0]) * 4);
        while (uVar22 != 0xffffffff) {
          puVar14 = (uint *)((longlong)(int)uVar22 * 0x10 + (longlong)FVar23);
          if (*puVar14 == local_188[0]) {
            FVar20 = (ForElementType<FSetElementId>)(puVar14 + 1);
            if (puVar14 == (uint *)0x0) {
              FVar20 = FVar25;
            }
            if (FVar20 != (ForElementType<FSetElementId>)0x0) goto LAB_14ceb20a4;
            break;
          }
          uVar22 = puVar14[2];
        }
      }
      local_1b8 = (float)uVar31;
      local_1b4 = (float)uVar30;
      local_1b0 = (float)uVar29;
      local_1ac = (float)uVar28;
      local_1d4 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement(local_1d0,&local_1b8);
      local_170 = (int **)local_188;
      local_168 = &local_1d4;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&local_d8,&local_198,(bool *)&local_170);
      FVar23 = local_d8;
      FVar24 = local_98;
LAB_14ceb20a4:
      FVar19.Data = FVar19.Data + 4;
    }
    iVar10 = local_180.ArrayNum;
    pFVar4 = local_180.AllocatorInstance.Data + (longlong)local_180.ArrayNum * 4;
    FVar19.Data = local_180.AllocatorInstance.Data;
    while( true ) {
      if (local_180.ArrayNum != iVar10) {
        local_1d7[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1d7);
        FVar23 = local_d8;
        FVar24 = local_98;
      }
      if (FVar19.Data == pFVar4) break;
      uVar22 = *(uint *)FVar19.Data;
      lVar21 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8);
      local_1a8._0_8_ = *(undefined8 *)(lVar21 + (ulonglong)(uVar22 & 0x1ff) * 0xc);
      local_1a8._s_0.C = *(uint *)(lVar21 + 8 + (ulonglong)(uVar22 & 0x1ff) * 0xc);
      FVar20 = FVar25;
      if ((int)local_d0 != local_a4) {
        FVar20 = (ForElementType<FSetElementId>)local_a0;
        if (FVar24 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar24;
        }
        uVar16 = *(uint *)((longlong)FVar20 + (ulonglong)(local_90 - 1U & local_1a8._s_0.A) * 4);
        while (FVar20 = FVar25, uVar16 != 0xffffffff) {
          FVar20 = (ForElementType<FSetElementId>)((longlong)(int)uVar16 * 0x10 + (longlong)FVar23);
          if (*(uint *)FVar20 == local_1a8._s_0.A) {
            if (FVar20 != (ForElementType<FSetElementId>)0x0) goto LAB_14ceb219f;
            break;
          }
          uVar16 = *(uint *)((longlong)FVar20 + 8);
        }
      }
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      FVar23 = local_d8;
      FVar24 = local_98;
      if (bVar26) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_14ceb219f:
      local_1a8._s_0.A = *(uint *)((longlong)FVar20 + 4);
      FVar20 = FVar25;
      if ((int)local_d0 != local_a4) {
        FVar20 = (ForElementType<FSetElementId>)local_a0;
        if (FVar24 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar24;
        }
        uVar16 = *(uint *)((longlong)FVar20 + (ulonglong)(local_90 - 1U & local_1a8._s_0.B) * 4);
        while (FVar20 = FVar25, uVar16 != 0xffffffff) {
          FVar20 = (ForElementType<FSetElementId>)((longlong)(int)uVar16 * 0x10 + (longlong)FVar23);
          if (*(uint *)FVar20 == local_1a8._s_0.B) {
            if (FVar20 != (ForElementType<FSetElementId>)0x0) goto LAB_14ceb221c;
            break;
          }
          uVar16 = *(uint *)((longlong)FVar20 + 8);
        }
      }
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      FVar23 = local_d8;
      FVar24 = local_98;
      if (bVar26) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_14ceb221c:
      local_1a8._s_0.B = *(uint *)((longlong)FVar20 + 4);
      FVar20 = FVar25;
      if ((int)local_d0 != local_a4) {
        FVar20 = (ForElementType<FSetElementId>)local_a0;
        if (FVar24 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar24;
        }
        uVar16 = *(uint *)((longlong)FVar20 + (ulonglong)(local_90 - 1U & local_1a8._s_0.C) * 4);
        while (FVar20 = FVar25, uVar16 != 0xffffffff) {
          FVar20 = (ForElementType<FSetElementId>)((longlong)(int)uVar16 * 0x10 + (longlong)FVar23);
          if (*(uint *)FVar20 == local_1a8._s_0.C) {
            if (FVar20 != (ForElementType<FSetElementId>)0x0) goto LAB_14ceb2297;
            break;
          }
          uVar16 = *(uint *)((longlong)FVar20 + 8);
        }
      }
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar26) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_14ceb2297:
      local_1a8._s_0.C = *(uint *)((longlong)FVar20 + 4);
      UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                (local_1d0,uVar22,(FIndex3i *)&local_1a8._s_0,true);
      FVar19.Data = FVar19.Data + 4;
      FVar23 = local_d8;
      FVar24 = local_98;
    }
    local_90 = 0;
    if (FVar24 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar24);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_d8);
    if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14ceb2410

void __thiscall
`UGeometryScriptLibrary_MeshVertexColorFunctions::TransferVertexColorsFromMesh'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  FText *pFVar2;
  undefined1 local_118 [16];
  undefined8 local_108;
  FTransferVertexColorAttribute *local_100;
  ETransferMethod *local_f8;
  undefined8 local_f0;
  FTransferVertexColorAttribute local_e8;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if ((pFVar1 != (FDynamicMeshAttributeSet *)0x0) &&
     ((pFVar1->ColorLayer).Ptr !=
      (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) {
    UE::Geometry::FTransferVertexColorAttribute::FTransferVertexColorAttribute
              (&local_e8,param_1,(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0);
    local_f8 = *(ETransferMethod **)((longlong)this + 8);
    local_e8.TransferMethod = *local_f8;
    local_e8.bUseParallel = true;
    local_e8.bHardEdges = (bool)local_f8[0x24];
    local_e8.BiasRatio = *(float *)(local_f8 + 0x28);
    local_108 = *(undefined8 *)((longlong)this + 0x18);
    local_100 = &local_e8;
    local_f0 = *(undefined8 *)this;
    local_118._8_8_ = &local_108;
    local_118._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``UGeometryScriptLibrary_MeshVertexColorFunctions::TransferVertexColorsFromMesh'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              ((UDynamicMesh *)**(undefined8 **)((longlong)this + 0x10),
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_118,AttributeEdit,
               Unknown,false);
    UE::Geometry::FTransferVertexColorAttribute::~FTransferVertexColorAttribute(&local_e8);
    return;
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_118,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                      L"TransferVertexColorsFromMesh_NoColor",
                      L"Source Mesh has no vertex color attribute");
  UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar2);
  if ((ITextData *)local_118._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_118._0_8_ + 0x10))();
  }
  return;
}

// operator() @ 14ceb2520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors'::__l5::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  short sVar5;
  ForAnyElementType *pFVar6;
  FDynamicMeshAttributeSet *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  ulonglong uVar35;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *this_00;
  float fVar36;
  int local_res10 [2];
  uint local_res18;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_128;
  longlong *local_118;
  undefined8 local_110;
  TVector4<float>_u_0 local_f8;
  TVector4<float>_u_0 local_e8;
  TVector4<float>_u_0 local_d8;
  TVector4<float>_u_0 local_c8;
  TVector4<float>_u_0 local_b8;
  TVector4<float>_u_0 local_a8 [4];
  
  pFVar6 = *(ForAnyElementType **)this;
  uVar34 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar35 = (ulonglong)uVar34;
  if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
  }
  puVar1 = (uint *)((longlong)&pFVar6[1].Data + 4);
  *(undefined4 *)&pFVar6[1].Data = 0;
  if (*puVar1 != uVar34) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar34,pFVar6,0,(int *)puVar1);
  }
  if (0 < (int)uVar34) {
    do {
      if (((pFVar6->Data <
            (FScriptContainerElement *)((longlong)&FLinearColor::Transparent.field0_0x0 + 1)) &&
          (&FLinearColor::Transparent < pFVar6->Data + (longlong)(int)*puVar1 * 0x10)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar34 = *(uint *)&pFVar6[1].Data;
      if (uVar34 == *puVar1) {
        uVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,pFVar6,(int *)puVar1);
      }
      *(uint *)&pFVar6[1].Data = uVar34 + 1;
      ((FLinearColor_u_0 *)(pFVar6->Data + (longlong)(int)uVar34 * 0x10))->_s_0 =
           (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
      uVar35 = uVar35 - 1;
    } while (uVar35 != 0);
  }
  *(bool *)*(undefined8 *)((longlong)this + 8) =
       (param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0;
  uVar15 = _UNK_150689648;
  uVar14 = ___xmm_3f800000000000000000000000000000;
  pFVar7 = (param_1->AttributeSet).Ptr;
  if (pFVar7 == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  this_00 = (pFVar7->ColorLayer).Ptr;
  if (this_00 == (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    return;
  }
  local_res20 = this_00;
  if (**(char **)((longlong)this + 0x10) == '\0') {
    uVar34 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar35 = 0;
    if ((uVar34 == 0) ||
       (uVar35 = 0,
       (ushort)(**(short **)(param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data -
               1U) < 0xfffe)) {
LAB_14ceb2d29:
      uVar28 = (uint)uVar35;
    }
    else {
      uVar35 = 1;
      uVar28 = 1;
      if (1 < (int)uVar34) {
        do {
          sVar5 = *(short *)(*(longlong *)
                              ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                              + (uVar35 >> 9) * 8) + (ulonglong)((uint)uVar35 & 0x1ff) * 2);
          if ((sVar5 != 0) && (sVar5 != -1)) break;
          uVar28 = (uint)uVar35 + 1;
          uVar35 = (ulonglong)uVar28;
        } while ((int)uVar28 < (int)uVar34);
        goto LAB_14ceb2d29;
      }
    }
joined_r0x00014ceb2d2b:
    if (uVar28 != uVar34) {
      while( true ) {
        uVar28 = (uint)uVar35;
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)&this_00->field_0x78 + (ulonglong)(uVar28 * 3 >> 9) * 8) +
                         (ulonglong)(uVar28 * 3 & 0x1ff) * 4)) {
          local_c8._0_8_ = uVar14;
          local_c8._8_8_ = uVar15;
          local_b8._0_8_ = uVar14;
          local_b8._8_8_ = uVar15;
          local_a8[0]._0_8_ = uVar14;
          local_a8[0]._8_8_ = uVar15;
          lVar31 = *(longlong *)
                    ((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar35 >> 9) * 8);
          local_110 = *(undefined8 *)(lVar31 + (ulonglong)(uVar28 & 0x1ff) * 0xc);
          uVar30 = *(uint *)(lVar31 + 8 + (ulonglong)(uVar28 & 0x1ff) * 0xc);
          UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>::
          GetTriElements(this_00,uVar28,(TVector4<float> *)&local_c8._s_0,
                         (TVector4<float> *)&local_b8._s_0,(TVector4<float> *)&local_a8[0]._s_0);
          uVar21 = local_c8._8_8_;
          uVar20 = local_c8._0_8_;
          lVar31 = (longlong)(int)(uint)local_110;
          plVar8 = *(longlong **)this;
          uVar25 = 0;
          if ((int)(uint)local_110 < (int)plVar8[1]) {
            uVar25 = ~(uint)local_110 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar23 = local_b8._8_8_;
          uVar22 = local_b8._0_8_;
          lVar33 = (longlong)(int)local_110._4_4_;
          puVar4 = (undefined8 *)(*plVar8 + lVar31 * 0x10);
          *puVar4 = uVar20;
          puVar4[1] = uVar21;
          plVar8 = *(longlong **)this;
          uVar25 = 0;
          if ((int)local_110._4_4_ < (int)plVar8[1]) {
            uVar25 = ~local_110._4_4_ >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar21 = local_a8[0]._8_8_;
          uVar20 = local_a8[0]._0_8_;
          puVar4 = (undefined8 *)(*plVar8 + lVar33 * 0x10);
          *puVar4 = uVar22;
          puVar4[1] = uVar23;
          plVar8 = *(longlong **)this;
          uVar25 = 0;
          if ((int)uVar30 < (int)plVar8[1]) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar4 = (undefined8 *)(*plVar8 + (longlong)(int)uVar30 * 0x10);
          *puVar4 = uVar20;
          puVar4[1] = uVar21;
          this_00 = local_res20;
        }
        uVar28 = uVar28 + 1;
        uVar35 = (ulonglong)uVar28;
        if ((int)uVar34 <= (int)uVar28) break;
        while( true ) {
          uVar27 = (ulonglong)((uint)uVar35 & 0x1ff);
          lVar31 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar35 >> 9) * 8);
          if ((*(short *)(lVar31 + uVar27 * 2) != 0) && (*(short *)(lVar31 + uVar27 * 2) != -1))
          break;
          uVar28 = (uint)uVar35 + 1;
          uVar35 = (ulonglong)uVar28;
          if ((int)uVar34 <= (int)uVar28) goto joined_r0x00014ceb2d2b;
        }
      }
      goto joined_r0x00014ceb2d2b;
    }
    goto LAB_14ceb2f30;
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  local_res10[0] = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_128,local_res10,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar15 = _UNK_150689648;
  uVar14 = ___xmm_3f800000000000000000000000000000;
  uVar34 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar35 = 0;
  fVar13 = __real_3f800000;
  if ((uVar34 == 0) ||
     (uVar35 = 0,
     (ushort)(**(short **)(param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data - 1U)
     < 0xfffe)) {
LAB_14ceb2737:
    uVar28 = (uint)uVar35;
  }
  else {
    uVar35 = 1;
    uVar28 = 1;
    if (1 < (int)uVar34) {
      do {
        sVar5 = *(short *)(*(longlong *)
                            ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (uVar35 >> 9) * 8) + (ulonglong)((uint)uVar35 & 0x1ff) * 2);
        if ((sVar5 != 0) && (sVar5 != -1)) break;
        uVar28 = (uint)uVar35 + 1;
        uVar35 = (ulonglong)uVar28;
      } while ((int)uVar28 < (int)uVar34);
      goto LAB_14ceb2737;
    }
  }
joined_r0x00014ceb2739:
  __real_3f800000 = fVar13;
  if (uVar28 != uVar34) {
    while( true ) {
      uVar28 = (uint)uVar35;
      if (-1 < *(int *)(*(longlong *)
                         (*(longlong *)&this_00->field_0x78 + (ulonglong)(uVar28 * 3 >> 9) * 8) +
                       (ulonglong)(uVar28 * 3 & 0x1ff) * 4)) {
        local_f8._0_8_ = uVar14;
        local_f8._8_8_ = uVar15;
        local_e8._0_8_ = uVar14;
        local_e8._8_8_ = uVar15;
        local_d8._0_8_ = uVar14;
        local_d8._8_8_ = uVar15;
        lVar31 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar35 >> 9) * 8);
        local_res18 = *(uint *)(lVar31 + 8 + (ulonglong)(uVar28 & 0x1ff) * 0xc);
        local_110 = *(undefined8 *)(lVar31 + (ulonglong)(uVar28 & 0x1ff) * 0xc);
        UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>::GetTriElements
                  (this_00,uVar28,(TVector4<float> *)&local_f8._s_0,
                   (TVector4<float> *)&local_e8._s_0,(TVector4<float> *)&local_d8._s_0);
        local_118 = *(longlong **)this;
        uVar30 = (uint)local_110;
        lVar31 = (longlong)(int)(uint)local_110;
        uVar16 = local_f8._s_0.X;
        uVar17 = local_f8._s_0.Y;
        uVar32 = ~(uint)local_110;
        uVar18 = local_f8._s_0.Z;
        uVar19 = local_f8._s_0.W;
        uVar25 = 0;
        if ((int)(uint)local_110 < (int)local_118[1]) {
          uVar25 = uVar32 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar33 = *local_118;
        *(float *)(lVar33 + lVar31 * 0x10) = (float)uVar16 + *(float *)(lVar33 + lVar31 * 0x10);
        *(float *)(lVar33 + 4 + lVar31 * 0x10) =
             (float)uVar17 + *(float *)(lVar33 + 4 + lVar31 * 0x10);
        *(float *)(lVar33 + 8 + lVar31 * 0x10) =
             (float)uVar18 + *(float *)(lVar33 + 8 + lVar31 * 0x10);
        *(float *)(lVar33 + 0xc + lVar31 * 0x10) =
             (float)uVar19 + *(float *)(lVar33 + 0xc + lVar31 * 0x10);
        uVar25 = 0;
        if ((int)uVar30 < local_128.ArrayNum) {
          uVar25 = uVar32 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar16 = local_e8._s_0.X;
        uVar17 = local_e8._s_0.Y;
        uVar18 = local_e8._s_0.Z;
        *(int *)(local_128.AllocatorInstance.Data + lVar31 * 4) =
             *(int *)(local_128.AllocatorInstance.Data + lVar31 * 4) + 1;
        uVar30 = local_110._4_4_;
        lVar31 = (longlong)(int)local_110._4_4_;
        uVar19 = local_e8._s_0.W;
        uVar32 = ~local_110._4_4_;
        local_118 = *(longlong **)this;
        uVar25 = 0;
        if ((int)local_110._4_4_ < (int)local_118[1]) {
          uVar25 = uVar32 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar33 = *local_118;
        *(float *)(lVar33 + lVar31 * 0x10) = (float)uVar16 + *(float *)(lVar33 + lVar31 * 0x10);
        *(float *)(lVar33 + 4 + lVar31 * 0x10) =
             (float)uVar17 + *(float *)(lVar33 + 4 + lVar31 * 0x10);
        *(float *)(lVar33 + 8 + lVar31 * 0x10) =
             (float)uVar18 + *(float *)(lVar33 + 8 + lVar31 * 0x10);
        *(float *)(lVar33 + 0xc + lVar31 * 0x10) =
             (float)uVar19 + *(float *)(lVar33 + 0xc + lVar31 * 0x10);
        uVar25 = 0;
        if ((int)uVar30 < local_128.ArrayNum) {
          uVar25 = uVar32 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar30 = local_res18;
        lVar33 = (longlong)(int)local_res18;
        uVar16 = local_d8._s_0.X;
        uVar17 = local_d8._s_0.Y;
        uVar32 = ~local_res18;
        *(int *)(local_128.AllocatorInstance.Data + lVar31 * 4) =
             *(int *)(local_128.AllocatorInstance.Data + lVar31 * 4) + 1;
        uVar18 = local_d8._s_0.Z;
        uVar19 = local_d8._s_0.W;
        local_118 = *(longlong **)this;
        uVar25 = 0;
        if ((int)local_res18 < (int)local_118[1]) {
          uVar25 = uVar32 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar31 = *local_118;
        *(float *)(lVar31 + lVar33 * 0x10) = (float)uVar16 + *(float *)(lVar31 + lVar33 * 0x10);
        *(float *)(lVar31 + 4 + lVar33 * 0x10) =
             (float)uVar17 + *(float *)(lVar31 + 4 + lVar33 * 0x10);
        *(float *)(lVar31 + 8 + lVar33 * 0x10) =
             (float)uVar18 + *(float *)(lVar31 + 8 + lVar33 * 0x10);
        *(float *)(lVar31 + 0xc + lVar33 * 0x10) =
             (float)uVar19 + *(float *)(lVar31 + 0xc + lVar33 * 0x10);
        uVar25 = 0;
        if ((int)uVar30 < local_128.ArrayNum) {
          uVar25 = uVar32 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(int *)(local_128.AllocatorInstance.Data + lVar33 * 4) =
             *(int *)(local_128.AllocatorInstance.Data + lVar33 * 4) + 1;
        this_00 = local_res20;
      }
      uVar28 = uVar28 + 1;
      uVar35 = (ulonglong)uVar28;
      fVar13 = __real_3f800000;
      if ((int)uVar34 <= (int)uVar28) break;
      while( true ) {
        uVar27 = (ulonglong)((uint)uVar35 & 0x1ff);
        lVar31 = *(longlong *)
                  ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar35 >> 9) * 8);
        if ((*(short *)(lVar31 + uVar27 * 2) != 0) && (*(short *)(lVar31 + uVar27 * 2) != -1))
        break;
        uVar28 = (uint)uVar35 + 1;
        uVar35 = (ulonglong)uVar28;
        if ((int)uVar34 <= (int)uVar28) goto joined_r0x00014ceb2739;
      }
    }
    goto joined_r0x00014ceb2739;
  }
  uVar29 = 0;
  uVar35 = uVar29;
  uVar27 = uVar29;
  iVar26 = local_128.ArrayNum;
  if (0 < local_128.ArrayNum) {
    do {
      uVar28 = (uint)uVar29;
      uVar30 = ~uVar28 >> 0x1f;
      uVar34 = 0;
      if ((int)uVar28 < iVar26) {
        uVar34 = uVar30;
      }
      if (uVar34 == 0) {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar26 = local_128.ArrayNum;
      }
      if (1 < *(int *)(local_128.AllocatorInstance.Data + uVar35)) {
        uVar34 = 0;
        if ((int)uVar28 < iVar26) {
          uVar34 = uVar30;
        }
        if ((uVar34 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar8 = *(longlong **)this;
        uVar34 = 0;
        if ((int)uVar28 < (int)plVar8[1]) {
          uVar34 = uVar30;
        }
        fVar36 = fVar13 / (float)*(int *)(local_128.AllocatorInstance.Data + uVar35);
        if ((uVar34 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar31 = *plVar8;
        pfVar2 = (float *)(lVar31 + uVar27);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)(lVar31 + uVar27);
        *pfVar3 = *pfVar2 * fVar36;
        pfVar3[1] = fVar10 * fVar36;
        pfVar3[2] = fVar11 * fVar36;
        pfVar3[3] = fVar12 * fVar36;
        iVar26 = local_128.ArrayNum;
      }
      uVar29 = (ulonglong)(uVar28 + 1);
      uVar35 = uVar35 + 4;
      uVar27 = uVar27 + 0x10;
    } while ((int)(uVar28 + 1) < iVar26);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
LAB_14ceb2f30:
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// BlurMeshVertexColors @ 14ceb4540

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::BlurMeshVertexColors
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,int param_3,double param_4,
          EGeometryScriptBlurColorMode param_5,FGeometryScriptBlurMeshVertexColorsOptions param_6,
          UGeometryScriptDebug *param_7)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int local_res18 [2];
  double local_res20;
  undefined1 local_48 [16];
  int *local_38;
  double *local_30;
  EGeometryScriptBlurColorMode *local_28;
  FGeometryScriptBlurMeshVertexColorsOptions *local_20;
  FGeometryScriptMeshSelection *local_18;
  UGeometryScriptDebug **local_10;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"BlurMeshVertexColors_InvalidInput",
                        L"BlurMeshVertexColors: TargetMesh is Null.");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if (param_3 < 0) {
    pwVar3 = L"BlurMeshVertexColors: Number of iterations must be non-negative.";
    pwVar2 = L"BlurMeshVertexColors_InvalidIterationNumber";
  }
  else {
    if (0.0 <= param_4) {
      local_38 = local_res18;
      local_30 = &local_res20;
      local_28 = &param_5;
      local_20 = &param_6;
      local_10 = &param_7;
      local_48._8_8_ = &local_38;
      local_48._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::BlurMeshVertexColors'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      local_18 = param_2;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
                 GeneralEdit,Unknown,false);
      goto LAB_14ceb466e;
    }
    pwVar3 = L"BlurMeshVertexColors: Blur strength must be non-negative.";
    pwVar2 = L"BlurMeshVertexColors_InvalidStrength";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_48,L"UGeometryScriptLibrary_MeshVertexColorFunctions",pwVar2,
                      pwVar3);
  UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
  if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
  }
LAB_14ceb466e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ConvertMeshVertexColorsLinearToSRGB @ 14ceb5830

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"ConvertMeshVertexColorsLinearToSRGB_InvalidInput",
                        L"ConvertMeshVertexColorsLinearToSRGB: TargetMesh is Null");
    UE::Geometry::AppendError(param_2,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_res8;
  local_res8[0] = 0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ConvertMeshVertexColorsSRGBToLinear @ 14ceb58e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"ConvertMeshVertexColorsSRGBToLinear_InvalidInput",
                        L"ConvertMeshVertexColorsSRGBToLinear: TargetMesh is Null");
    UE::Geometry::AppendError(param_2,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_res8;
  local_res8[0] = 0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// GetMeshPerVertexColors @ 14cebac30

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors
          (UDynamicMesh *param_1,FGeometryScriptColorList *param_2,bool *param_3,bool *param_4,
          bool param_5)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  code *local_38;
  undefined8 *local_30;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *local_28;
  bool *local_20;
  bool *local_18;
  bool *local_10;
  
  FGeometryScriptColorList::Reset(param_2,0);
  if ((param_2->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
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
  local_28 = (param_2->List).Object;
  *param_4 = false;
  *param_3 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_18 = &param_5;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_20 = param_4;
    local_10 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return param_1;
}

// GetPrivateStaticClass @ 14cebccb0

UClass * __cdecl UGeometryScriptLibrary_MeshVertexColorFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshVertexColorFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshVertexColorFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshVertexColorFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshVertexColorFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions.InnerSingleton;
}

// SetMeshConstantVertexColor @ 14cec2240

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor
          (UDynamicMesh *param_1,FLinearColor *param_2,FGeometryScriptColorFlags param_3,
          bool param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FGeometryScriptColorFlags local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  undefined1 *local_28;
  FLinearColor *local_20;
  FGeometryScriptColorFlags *local_18;
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"SetMeshConstantVertexColor_InvalidInput",
                        L"SetMeshConstantVertexColor: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = local_res20;
  local_18 = local_res18;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// SetMeshPerVertexColors @ 14cec2300

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors
          (UDynamicMesh *param_1,FGeometryScriptColorList *param_2,UGeometryScriptDebug *param_3)

{
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar1;
  FText *pFVar2;
  UGeometryScriptDebug *local_res18 [2];
  FGeometryScriptColorList *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"SetMeshPerVertexColors_InvalidMesh",
                        L"SetMeshPerVertexColors: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar2);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  pTVar1 = (param_2->List).Object;
  if ((pTVar1 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) || (pTVar1->ArrayNum == 0)
     ) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"SetMeshPerVertexColors_InvalidList",
                        L"SetMeshPerVertexColors: List is empty");
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
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
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

// SetMeshSelectionVertexColor @ 14cec2420

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,FLinearColor *param_3,
          FGeometryScriptColorFlags param_4,bool param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  FGeometryScriptColorFlags local_res20 [2];
  undefined1 local_38 [16];
  bool *local_28;
  FLinearColor *local_20;
  FGeometryScriptColorFlags *local_18;
  FGeometryScriptMeshSelection *local_10;
  
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"SetMeshSelectionVertexColor_InvalidInput",
                        L"SetMeshSelectionVertexColor: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_28 = &param_5;
  local_18 = local_res20;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_3;
  local_10 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshVertexColorFunctions @ 14cec2680

void __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshVertexColorFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr =
       Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransferVertexColorsFromMesh @ 14cec2dd0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::TransferVertexColorsFromMesh
          (UDynamicMesh *param_1,UDynamicMesh *param_2,
          FGeometryScriptTransferMeshVertexColorsOptions *param_3,
          FGeometryScriptMeshSelection *param_4,UGeometryScriptDebug *param_5)

{
  UDynamicMesh *pUVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  UDynamicMesh *local_res10 [3];
  undefined1 local_38 [16];
  UGeometryScriptDebug **local_28;
  FGeometryScriptTransferMeshVertexColorsOptions *local_20;
  UDynamicMesh **local_18;
  FGeometryScriptMeshSelection *local_10;
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pwVar4 = L"TransferVertexColorsFromMesh: Source Mesh is Null";
    pwVar3 = L"TransferVertexColorsFromMesh_InvalidSourceMesh";
  }
  else {
    if (param_2 != (UDynamicMesh *)0x0) {
      local_28 = &param_5;
      local_18 = local_res10;
      local_38._8_8_ = &local_28;
      local_38._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::TransferVertexColorsFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      local_20 = param_3;
      local_10 = param_4;
      UDynamicMesh::ProcessMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38
                );
      goto LAB_14cec2e80;
    }
    pwVar4 = L"TransferVertexColorsFromMesh: Target Mesh is Null";
    pwVar3 = L"TransferVertexColorsFromMesh_InvalidTargetMesh";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_38,L"UGeometryScriptLibrary_MeshVertexColorFunctions",pwVar3,
                      pwVar4);
  UE::Geometry::AppendError(param_5,InvalidInputs,pFVar2);
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
LAB_14cec2e80:
  pUVar1 = local_res10[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  return pUVar1;
}

// execBlurMeshVertexColors @ 14cec5610

void __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::execBlurMeshVertexColors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  int local_d8 [2];
  UGeometryScriptDebug *local_d0;
  undefined1 local_c8 [16];
  int local_b8 [2];
  undefined4 local_b0 [2];
  UGeometryScriptDebug *local_a8;
  double local_a0;
  UDynamicMesh *local_98 [2];
  FGeometryScriptMeshSelection local_88;
  double local_78 [2];
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  int *local_58;
  double *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  FGeometrySelection **local_38;
  UGeometryScriptDebug **local_30;
  
  local_98[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
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
  local_d8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_a0 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
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
  local_res20[0] = 0x1010101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_a8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pUVar3 = local_98[0];
  local_68 = local_88.GeoSelection.Object;
  pTStack_60 = local_88.GeoSelection.SharedReferenceCount.ReferenceController;
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
  local_78[0] = local_a0;
  local_d0 = local_a8;
  local_b0[0] = local_res20[0];
  local_res18[0] = local_res10[0];
  local_b8[0] = local_d8[0];
  if (local_98[0] == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c8,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"BlurMeshVertexColors_InvalidInput",
                        L"BlurMeshVertexColors: TargetMesh is Null.");
    UE::Geometry::AppendError(local_d0,InvalidInputs,pFVar2);
    pUVar3 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
    }
  }
  else {
    if (local_d8[0] < 0) {
      pwVar5 = L"BlurMeshVertexColors: Number of iterations must be non-negative.";
      pwVar4 = L"BlurMeshVertexColors_InvalidIterationNumber";
    }
    else {
      if (0.0 <= local_a0) {
        local_58 = local_b8;
        local_50 = local_78;
        local_48 = local_res18;
        local_40 = local_b0;
        local_38 = &local_68;
        local_30 = &local_d0;
        local_c8._8_8_ = &local_58;
        local_c8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::BlurMeshVertexColors'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
        UDynamicMesh::EditMesh
                  (local_98[0],(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_c8
                   ,GeneralEdit,Unknown,false);
        goto LAB_14cec593b;
      }
      pwVar5 = L"BlurMeshVertexColors: Blur strength must be non-negative.";
      pwVar4 = L"BlurMeshVertexColors_InvalidStrength";
    }
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c8,L"UGeometryScriptLibrary_MeshVertexColorFunctions",pwVar4,
                        pwVar5);
    UE::Geometry::AppendError(local_d0,InvalidInputs,pFVar2);
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
    }
  }
LAB_14cec593b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execConvertMeshVertexColorsLinearToSRGB @ 14cec7370

void __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::execConvertMeshVertexColorsLinearToSRGB
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined1 local_28 [16];
  
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
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"ConvertMeshVertexColorsLinearToSRGB_InvalidInput",
                        L"ConvertMeshVertexColorsLinearToSRGB: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_28._8_8_ = local_res10;
  local_res10[0] = 0;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execConvertMeshVertexColorsSRGBToLinear @ 14cec74c0

void __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::execConvertMeshVertexColorsSRGBToLinear
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined1 local_28 [16];
  
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
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"ConvertMeshVertexColorsSRGBToLinear_InvalidInput",
                        L"ConvertMeshVertexColorsSRGBToLinear: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_28._8_8_ = local_res10;
  local_res10[0] = 0;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execGetMeshPerVertexColors @ 14cecc720

void __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::execGetMeshPerVertexColors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptColorList *pFVar1;
  FProperty *pFVar2;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  UDynamicMesh *this;
  bool bVar5;
  uchar *puVar6;
  FGeometryScriptColorList *this_00;
  uchar *puVar7;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  int local_88 [2];
  UDynamicMesh *local_80;
  FGeometryScriptColorList local_78;
  code *local_68;
  undefined8 *local_60;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *local_58;
  uchar *local_50;
  undefined1 *local_48;
  uchar *local_40;
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.List.Object = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  local_78.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar1 = (FGeometryScriptColorList *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_00 = &local_78;
  if (pFVar1 != (FGeometryScriptColorList *)0x0) {
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
  puVar6 = param_2->MostRecentPropertyAddress;
  local_res18[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_res10;
  if (puVar6 != (uchar *)0x0) {
    puVar7 = puVar6;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_88[0] = 0;
  puVar6 = local_res18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  this = local_80;
  local_res20[0] = local_88[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptColorList::Reset(this_00,0);
  if ((this_00->List).Object == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = (this_00->List).Object;
  *puVar6 = '\0';
  *puVar7 = '\0';
  if (this != (UDynamicMesh *)0x0) {
    local_48 = local_res20;
    local_60 = &local_58;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_58 = pTVar3;
    local_50 = puVar6;
    local_40 = puVar7;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_68);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.List.SharedReferenceCount.ReferenceController);
  return;
}

// execSetMeshConstantVertexColor @ 14ced8330

void __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::execSetMeshConstantVertexColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  int local_res20 [2];
  undefined4 local_98 [2];
  UGeometryScriptDebug *local_90;
  UDynamicMesh *local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  
  local_88[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
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
  local_res18[0] = 0x1010101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  local_90 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pUVar3 = local_88[0];
  pUVar2 = local_90;
  local_58 = local_78;
  uStack_50 = uStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98[0] = local_res18[0];
  local_res10[0] = bVar5;
  if (local_88[0] == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"SetMeshConstantVertexColor_InvalidInput",
                        L"SetMeshConstantVertexColor: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_48 = local_res10;
    local_40 = &local_58;
    local_38 = local_98;
    local_68._8_8_ = &local_48;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_88[0],(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

// execSetMeshPerVertexColors @ 14ced8560

void __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::execSetMeshPerVertexColors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  UGeometryScriptDebug *local_res20;
  longlong local_58;
  TReferenceControllerBase<1> *pTStack_50;
  longlong local_48;
  TReferenceControllerBase<1> *pTStack_40;
  longlong *local_38;
  UGeometryScriptDebug **local_30;
  undefined1 local_28 [16];
  
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
  local_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
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
  local_48 = local_58;
  pTStack_40 = pTStack_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res20 = local_res10;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"SetMeshPerVertexColors_InvalidMesh",
                        L"SetMeshPerVertexColors: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar2);
    pUVar3 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
  }
  else if ((local_58 == 0) || (*(int *)(local_58 + 8) == 0)) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"SetMeshPerVertexColors_InvalidList",
                        L"SetMeshPerVertexColors: List is empty");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar2);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
  }
  else {
    local_38 = &local_48;
    local_30 = &local_res20;
    local_28._8_8_ = &local_38;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

// execSetMeshSelectionVertexColor @ 14ced8770

void __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::execSetMeshSelectionVertexColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  int local_res20 [2];
  undefined4 local_b8 [2];
  UGeometryScriptDebug *local_b0;
  UDynamicMesh *local_a8 [2];
  FGeometryScriptMeshSelection local_98;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined4 *local_48;
  FGeometrySelection **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_a8[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res18[0] = 0x1010101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  local_b0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pUVar4 = local_a8[0];
  pUVar2 = local_b0;
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
  local_38 = local_78;
  uStack_30 = uStack_70;
  local_b8[0] = local_res18[0];
  local_res10[0] = bVar5;
  if (local_a8[0] == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_88,L"UGeometryScriptLibrary_MeshVertexColorFunctions",
                        L"SetMeshSelectionVertexColor_InvalidInput",
                        L"SetMeshSelectionVertexColor: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
    }
  }
  else {
    local_58 = local_res10;
    local_50 = &local_38;
    local_48 = local_b8;
    local_40 = &local_68;
    local_88._8_8_ = &local_58;
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_a8[0],(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_88,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execTransferVertexColorsFromMesh @ 14ced9730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshVertexColorFunctions::execTransferVertexColorsFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FText *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong local_res10;
  UGeometryScriptDebug *local_res18;
  longlong local_res20;
  UDynamicMesh *local_d8;
  UGeometryScriptDebug *local_d0;
  undefined1 local_c8 [16];
  FGeometryScriptMeshSelection local_b8;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  FGeometrySelection *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  UGeometryScriptDebug **local_68;
  undefined8 *local_60;
  longlong *local_58;
  FGeometrySelection **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_d8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
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
  uStack_a0 = ___xmm_bff0000000000000bff0000000000000;
  uStack_98 = _UNK_15076c718;
  local_a8 = 0;
  uStack_90 = CONCAT31(uStack_90._1_3_,1);
  uStack_8c = 0;
  uStack_88 = 0;
  local_84 = local_84 & 0xffffff00;
  local_80 = 0x38d1b717;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_b8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
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
  local_78 = local_b8.GeoSelection.Object;
  pTStack_70 = local_b8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_b8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = CONCAT71(uStack_a7,local_a8);
  uStack_30 = CONCAT44(uStack_8c,uStack_90);
  local_d0 = local_res18;
  uStack_40 = uStack_a0;
  local_res10 = local_res20;
  local_38 = uStack_98;
  local_28 = CONCAT44(local_84,uStack_88);
  uStack_20 = CONCAT44(uStack_7c,local_80);
  if (local_d8 == (UDynamicMesh *)0x0) {
    pwVar5 = L"TransferVertexColorsFromMesh: Source Mesh is Null";
    pwVar4 = L"TransferVertexColorsFromMesh_InvalidSourceMesh";
  }
  else {
    if (local_res20 != 0) {
      local_68 = &local_d0;
      local_60 = &local_48;
      local_58 = &local_res10;
      local_50 = &local_78;
      local_c8._8_8_ = &local_68;
      local_c8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshVertexColorFunctions::TransferVertexColorsFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      UDynamicMesh::ProcessMesh
                (local_d8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                          local_c8);
      goto LAB_14ced9989;
    }
    pwVar5 = L"TransferVertexColorsFromMesh: Target Mesh is Null";
    pwVar4 = L"TransferVertexColorsFromMesh_InvalidTargetMesh";
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_c8,L"UGeometryScriptLibrary_MeshVertexColorFunctions",pwVar4,
                      pwVar5);
  UE::Geometry::AppendError(local_d0,InvalidInputs,pFVar3);
  if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
  }
LAB_14ced9989:
  lVar2 = local_res10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  *(longlong *)param_3 = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

