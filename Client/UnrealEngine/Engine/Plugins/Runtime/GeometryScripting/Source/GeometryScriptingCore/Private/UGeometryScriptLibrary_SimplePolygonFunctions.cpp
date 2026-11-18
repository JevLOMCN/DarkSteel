// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 32

// StaticClass @ 14cea3050

UClass * __cdecl UGeometryScriptLibrary_SimplePolygonFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_SimplePolygonFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_SimplePolygonFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_SimplePolygonFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_SimplePolygonFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_SimplePolygonFunctions @ 14ceae8d0

UGeometryScriptLibrary_SimplePolygonFunctions * __thiscall
UGeometryScriptLibrary_SimplePolygonFunctions::UGeometryScriptLibrary_SimplePolygonFunctions
          (UGeometryScriptLibrary_SimplePolygonFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_SimplePolygonFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_SimplePolygonFunctions @ 14ceae900

UGeometryScriptLibrary_SimplePolygonFunctions * __thiscall
UGeometryScriptLibrary_SimplePolygonFunctions::UGeometryScriptLibrary_SimplePolygonFunctions
          (UGeometryScriptLibrary_SimplePolygonFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_SimplePolygonFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_SimplePolygonFunctions @ 14ceaebf0

void __thiscall
UGeometryScriptLibrary_SimplePolygonFunctions::~UGeometryScriptLibrary_SimplePolygonFunctions
          (UGeometryScriptLibrary_SimplePolygonFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_SimplePolygonFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddPolygonVertex @ 14ceb4140

int __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::AddPolygonVertex
          (FGeometryScriptSimplePolygon *param_1,TVector2<double> *param_2)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  
  if ((param_1->Vertices).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FGeometryScriptSimplePolygon::Reset(param_1,0);
    if ((param_1->Vertices).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
  }
  pTVar1 = (param_1->Vertices).Object;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar2 <= param_2) && (param_2 < pFVar2 + (longlong)pTVar1->ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  iVar6 = pTVar1->ArrayNum;
  if (iVar6 == pTVar1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar6 + 1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(double *)pFVar2 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar4;
  return iVar6;
}

// Conv_ArrayOfVector2DToGeometryScriptSimplePolygon @ 14ceb50c0

FGeometryScriptSimplePolygon * __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::Conv_ArrayOfVector2DToGeometryScriptSimplePolygon
          (FGeometryScriptSimplePolygon *__return_storage_ptr__,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGeometryScriptSimplePolygon *pFVar3;
  
  (__return_storage_ptr__->Vertices).Object =
       (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Vertices).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptSimplePolygon::Reset(__return_storage_ptr__,0);
  if ((__return_storage_ptr__->Vertices).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGeometryScriptSimplePolygon *)(*pcVar1)();
      return pFVar3;
    }
  }
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
            ((__return_storage_ptr__->Vertices).Object,param_1);
  return __return_storage_ptr__;
}

// Conv_ArrayToGeometryScriptSimplePolygon @ 14ceb51a0

FGeometryScriptSimplePolygon * __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::Conv_ArrayToGeometryScriptSimplePolygon
          (FGeometryScriptSimplePolygon *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  FGeometryScriptSimplePolygon *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Vertices).Object =
       (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Vertices).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptSimplePolygon::Reset(__return_storage_ptr__,0);
  if ((__return_storage_ptr__->Vertices).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FGeometryScriptSimplePolygon *)(*pcVar6)();
      return pFVar11;
    }
  }
  uVar2 = param_1->ArrayNum;
  pTVar4 = (__return_storage_ptr__->Vertices).Object;
  if (-1 < (int)uVar2) {
    if (pTVar4->ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&pTVar4->AllocatorInstance,pTVar4->ArrayNum,&pTVar4->ArrayMax);
    }
    iVar3 = param_1->ArrayNum;
    pFVar12 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar12 + (longlong)iVar3 * 0x18;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar1) break;
      uVar7 = *(undefined8 *)pFVar12;
      uVar8 = *(undefined8 *)(pFVar12 + 8);
      if ((__return_storage_ptr__->Vertices).Object ==
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FGeometryScriptSimplePolygon *)(*pcVar6)();
          return pFVar11;
        }
      }
      pTVar4 = (__return_storage_ptr__->Vertices).Object;
      iVar10 = pTVar4->ArrayNum;
      if (iVar10 == pTVar4->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
      }
      pTVar4->ArrayNum = iVar10 + 1;
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      pFVar12 = pFVar12 + 0x18;
      *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x10) = uVar7;
      *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x10 + 8) = uVar8;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Conv_GeometryScriptSimplePolygonToArray @ 14ceb5440

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::Conv_GeometryScriptSimplePolygonToArray
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometryScriptSimplePolygon *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pTVar5 = (param_1->Vertices).Object;
  if (pTVar5 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar3 = pTVar5->ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    if (((param_1->Vertices).Object ==
         (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar11;
    }
    pTVar5 = (param_1->Vertices).Object;
    iVar4 = pTVar5->ArrayNum;
    pFVar14 = (pTVar5->AllocatorInstance).Data;
    pFVar13 = pFVar14 + (longlong)iVar4 * 0x10;
    while( true ) {
      if (pTVar5->ArrayNum != iVar4) {
        `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar14 == pFVar13) break;
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      lVar12 = (longlong)iVar10;
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      uVar2 = *(undefined8 *)(pFVar14 + 8);
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      uVar7 = *(undefined8 *)pFVar14;
      pFVar14 = pFVar14 + 0x10;
      *(undefined8 *)(pFVar6 + lVar12 * 0x18) = uVar7;
      *(undefined8 *)(pFVar6 + lVar12 * 0x18 + 8) = uVar2;
      *(undefined8 *)(pFVar6 + lVar12 * 0x18 + 0x10) = 0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Vertices).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_GeometryScriptSimplePolygonToArrayOfVector2D @ 14ceb5590

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::Conv_GeometryScriptSimplePolygonToArrayOfVector2D
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometryScriptSimplePolygon *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar3 = (param_1->Vertices).Object;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  if (pTVar3 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    _Src = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Vertices).SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Vertices).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConvertSplineToPolygon @ 14ceb62c0

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::ConvertSplineToPolygon
          (USplineComponent *param_1,FGeometryScriptSimplePolygon *param_2,
          FGeometryScriptSplineSamplingOptions *param_3,EGeometryScriptAxis param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EGeometryScriptSampleSpacing EVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  TVector<double> *pTVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  TVector<double> local_88 [3];
  
  FGeometryScriptSimplePolygon::Reset(param_2,0);
  if (param_1 == (USplineComponent *)0x0) {
    return;
  }
  uVar17 = 0;
  bVar7 = USplineComponent::IsClosedLoop(param_1);
  EVar4 = param_3->SampleSpacing;
  if (EVar4 != ErrorTolerance) {
    fVar20 = param_1->Duration;
    uVar18 = param_3->NumSamples;
    if (param_3->NumSamples < 2) {
      uVar18 = 2;
    }
    if (((param_2->Vertices).Object ==
         (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar5 = (param_2->Vertices).Object;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (pTVar5->ArrayMax < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar18,&pTVar5->AllocatorInstance,pTVar5->ArrayNum,&pTVar5->ArrayMax);
    }
    if ((int)uVar18 < 1) {
      return;
    }
    lVar11 = 8;
    if (param_4 != Z) {
      lVar11 = 0x10;
    }
    uVar13 = uVar17;
    if (param_4 == X) {
      uVar13 = 8;
    }
    fVar21 = __real_3f800000 / (float)(int)(uVar18 - (bVar7 ^ 1));
    while( true ) {
      if (((param_2->Vertices).Object ==
           (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar5 = (param_2->Vertices).Object;
      pTVar12 = USplineComponent::GetLocationAtTime
                          (param_1,local_88,(float)(int)uVar17 * fVar21 * fVar20,
                           (uint)(param_3->CoordinateSpace).Value,EVar4 == UniformDistance);
      uStack_90 = *(undefined8 *)((longlong)&pTVar12->field0_0x0 + lVar11);
      local_98 = *(undefined8 *)((longlong)&pTVar12->field0_0x0 + uVar13);
      pFVar15 = (pTVar5->AllocatorInstance).Data;
      if (((pFVar15 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar15 + (longlong)pTVar5->ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) break;
      iVar10 = pTVar5->ArrayNum;
      if (iVar10 == pTVar5->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
      }
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      pTVar5->ArrayNum = iVar10 + 1;
      pFVar15 = (pTVar5->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar15 = local_98;
      *(undefined8 *)(pFVar15 + 8) = uStack_90;
      if ((int)uVar18 <= (int)uVar16) {
        return;
      }
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar20 = param_3->ErrorTolerance * param_3->ErrorTolerance;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  if (fVar20 <= __real_38d1b717) {
    fVar20 = __real_38d1b717;
  }
  USplineComponent::ConvertSplineToPolyLine
            (param_1,(uint)(param_3->CoordinateSpace).Value,fVar20,&local_a8);
  if (bVar7) {
    if (local_a8.ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (local_a8.ArrayNum - (local_a8.ArrayNum + -1)) + -1;
    iVar10 = local_a8.ArrayNum;
    if (iVar9 != 0) {
      memmove(local_a8.AllocatorInstance.Data + (longlong)(local_a8.ArrayNum + -1) * 0x18,
              local_a8.AllocatorInstance.Data + (longlong)(local_a8.ArrayNum + -1) * 0x18 + 0x18,
              (longlong)iVar9 * 0x18);
      iVar10 = local_a8.ArrayNum;
    }
    local_a8.ArrayNum = iVar10 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&local_a8.AllocatorInstance,iVar10 + -1,&local_a8.ArrayMax);
  }
  if (((param_2->Vertices).Object ==
       (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = local_a8.ArrayNum;
  uVar13 = (ulonglong)local_a8.ArrayNum;
  pTVar5 = (param_2->Vertices).Object;
  iVar10 = pTVar5->ArrayNum;
  piVar1 = &pTVar5->ArrayNum;
  if (iVar10 < local_a8.ArrayNum) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_a8.ArrayNum - iVar10,&pTVar5->AllocatorInstance,piVar1,&pTVar5->ArrayMax
              );
  }
  else {
    if (local_a8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_a8._8_8_ & 0xffffffff);
    }
    uVar14 = uVar13;
    if (iVar10 <= local_a8.ArrayNum) goto LAB_14ceb6536;
    uVar18 = iVar10 - local_a8.ArrayNum;
    if ((int)(uVar18 | local_a8.ArrayNum) < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = local_a8._8_8_ & 0xffffffff;
    }
    if (uVar18 == 0) goto LAB_14ceb6536;
    pFVar15 = (pTVar5->AllocatorInstance).Data + uVar13 * 0x10;
    iVar10 = (*piVar1 - iVar9) - uVar18;
    if (iVar10 != 0) {
      memmove(pFVar15,pFVar15 + (longlong)(int)uVar18 * 0x10,(longlong)iVar10 << 4);
    }
    *piVar1 = *piVar1 - uVar18;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar5->AllocatorInstance,*piVar1,&pTVar5->ArrayMax);
  }
  uVar14 = local_a8._8_8_ & 0xffffffff;
LAB_14ceb6536:
  uVar13 = uVar17;
  uVar19 = uVar17;
  if (0 < (int)uVar14) {
    do {
      uVar16 = (uint)uVar17;
      uVar18 = 0;
      if ((int)uVar16 < (int)uVar14) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar2 = *(undefined8 *)
               (local_a8.AllocatorInstance.Data + (ulonglong)((param_4 != Z) + 1) * 8 + uVar13);
      uVar3 = *(undefined8 *)
               (local_a8.AllocatorInstance.Data + (ulonglong)(param_4 == X) * 8 + uVar13);
      if (((param_2->Vertices).Object ==
           (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar5 = (param_2->Vertices).Object;
      uVar18 = 0;
      if ((int)uVar16 < pTVar5->ArrayNum) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar15 = (pTVar5->AllocatorInstance).Data;
      uVar17 = (ulonglong)(uVar16 + 1);
      *(undefined8 *)(pFVar15 + uVar19) = uVar3;
      *(undefined8 *)(pFVar15 + uVar19 + 8) = uVar2;
      uVar14 = local_a8._8_8_ & 0xffffffff;
      uVar13 = uVar13 + 0x18;
      uVar19 = uVar19 + 0x10;
    } while ((int)(uVar16 + 1) < local_a8.ArrayNum);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// GetPolygonArcLength @ 14cebbc10

double __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonArcLength
          (FGeometryScriptSimplePolygon *param_1)

{
  int iVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_28 [2];
  
  pTVar2 = (param_1->Vertices).Object;
  if ((pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar2->ArrayNum != 0)) {
    iVar1 = pTVar2->ArrayNum;
    local_28[0].DataPtr = (TVector2<double> *)(pTVar2->AllocatorInstance).Data;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        dVar5 = (double)(*pcVar3)();
        return dVar5;
      }
    }
    local_28[0].ArrayNum = iVar1;
    dVar5 = UE::Geometry::CurveUtil::ArcLength<double,UE::Math::TVector2<double>_>(local_28,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Vertices).SharedReferenceCount.ReferenceController);
    return dVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Vertices).SharedReferenceCount.ReferenceController);
  return 0.0;
}

// GetPolygonArea @ 14cebbd20

double __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonArea(FGeometryScriptSimplePolygon *param_1)

{
  int iVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_28 [2];
  
  pTVar2 = (param_1->Vertices).Object;
  if ((pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar2->ArrayNum != 0)) {
    iVar1 = pTVar2->ArrayNum;
    local_28[0].DataPtr = (TVector2<double> *)(pTVar2->AllocatorInstance).Data;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        dVar5 = (double)(*pcVar3)();
        return dVar5;
      }
    }
    local_28[0].ArrayNum = iVar1;
    dVar5 = UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>(local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Vertices).SharedReferenceCount.ReferenceController);
    return dVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Vertices).SharedReferenceCount.ReferenceController);
  return 0.0;
}

// GetPolygonBounds @ 14cebbe60

TBox2<double> * __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonBounds
          (TBox2<double> *__return_storage_ptr__,FGeometryScriptSimplePolygon *param_1)

{
  double dVar1;
  int iVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined1 local_res10 [8];
  
  pTVar3 = (param_1->Vertices).Object;
  if ((pTVar3 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar3->ArrayNum != 0)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    __return_storage_ptr__->bIsValid = false;
    iVar2 = pTVar3->ArrayNum;
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    pFVar4 = pFVar5 + (longlong)iVar2 * 0x10;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar4) break;
      if (__return_storage_ptr__->bIsValid == false) {
        dVar8 = *(double *)pFVar5;
        dVar9 = *(double *)(pFVar5 + 8);
        __return_storage_ptr__->bIsValid = true;
        pFVar5 = pFVar5 + 0x10;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar9;
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar9;
      }
      else {
        dVar8 = *(double *)pFVar5;
        uVar6 = SUB84(dVar8,0);
        uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        if (dVar9 <= dVar8) {
          uVar6 = SUB84(dVar9,0);
          uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
        }
        dVar8 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar7,uVar6);
        if (*(double *)(pFVar5 + 8) <= dVar8) {
          dVar8 = *(double *)(pFVar5 + 8);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
        dVar8 = *(double *)pFVar5;
        uVar6 = SUB84(dVar8,0);
        uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
        dVar1 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
        if (dVar8 <= dVar1) {
          uVar6 = SUB84(dVar1,0);
          uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar7,uVar6);
        if (dVar9 <= *(double *)(pFVar5 + 8)) {
          dVar9 = *(double *)(pFVar5 + 8);
        }
        pFVar5 = pFVar5 + 0x10;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar9;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Vertices).SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&__return_storage_ptr__->bIsValid = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Vertices).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPolygonTangent @ 14cebc630

TVector2<double> * __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonTangent
          (TVector2<double> *__return_storage_ptr__,FGeometryScriptSimplePolygon *param_1,
          int param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TVector2<double>_u_0 TVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TVector2<double> *pTVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  
  pTVar2 = (param_1->Vertices).Object;
  if ((pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar2->ArrayNum != 0)) {
    *param_3 = false;
    if ((param_1->Vertices).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector2<double> *)(*pcVar5)();
        return pTVar10;
      }
    }
    pTVar2 = (param_1->Vertices).Object;
    iVar14 = pTVar2->ArrayNum;
    iVar11 = param_2 % iVar14;
    iVar14 = iVar11 + iVar14;
    if (-1 < iVar11) {
      iVar14 = iVar11;
    }
    if (pTVar2 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector2<double> *)(*pcVar5)();
        return pTVar10;
      }
    }
    pTVar2 = (param_1->Vertices).Object;
    iVar11 = pTVar2->ArrayNum;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector2<double> *)(*pcVar5)();
        return pTVar10;
      }
    }
    uVar12 = (iVar14 + 1) % iVar11;
    uVar13 = (iVar11 + -1 + iVar14) % iVar11;
    uVar9 = 0;
    if ((int)uVar12 < iVar11) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector2<double> *)(*pcVar5)();
        return pTVar10;
      }
    }
    pFVar1 = pFVar3 + (longlong)(int)uVar12 * 0x10;
    dVar7 = *(double *)pFVar1;
    dVar15 = *(double *)(pFVar1 + 8);
    uVar9 = 0;
    if ((int)uVar13 < iVar11) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector2<double> *)(*pcVar5)();
        return pTVar10;
      }
    }
    pFVar3 = pFVar3 + (longlong)(int)uVar13 * 0x10;
    dVar7 = dVar7 - *(double *)pFVar3;
    dVar15 = dVar15 - *(double *)(pFVar3 + 8);
    dVar16 = SQRT(dVar15 * dVar15 + dVar7 * dVar7);
    if (dVar16 <= 0.0) {
      dVar16 = 0.0;
      dVar15 = 0.0;
    }
    else {
      dVar16 = __real_3ff0000000000000 / dVar16;
      dVar15 = dVar16 * dVar15;
      dVar16 = dVar16 * dVar7;
    }
    pTVar4 = (param_1->Vertices).SharedReferenceCount.ReferenceController;
    TVar6._8_4_ = SUB84(dVar15,0);
    TVar6._s_0.X = dVar16;
    TVar6._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    __return_storage_ptr__->field0_0x0 = TVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return __return_storage_ptr__;
  }
  *param_3 = true;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Vertices).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPolygonVertex @ 14cebc9a0

TVector2<double> * __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonVertex
          (TVector2<double> *__return_storage_ptr__,FGeometryScriptSimplePolygon *param_1,
          int param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  TVector2<double> *pTVar8;
  uint uVar9;
  uint uVar10;
  
  pTVar3 = (param_1->Vertices).Object;
  if ((pTVar3 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar3->ArrayNum != 0)) {
    *param_3 = false;
    if ((param_1->Vertices).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TVector2<double> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pTVar3 = (param_1->Vertices).Object;
    if (pTVar3 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TVector2<double> *)(*pcVar5)();
        return pTVar8;
      }
    }
    iVar2 = ((param_1->Vertices).Object)->ArrayNum;
    uVar9 = param_2 % iVar2;
    uVar10 = uVar9 + iVar2;
    if (-1 < (int)uVar9) {
      uVar10 = uVar9;
    }
    uVar9 = 0;
    if ((int)uVar10 < pTVar3->ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TVector2<double> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pFVar1 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
    dVar6 = *(double *)(pFVar1 + 8);
    pTVar4 = (param_1->Vertices).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return __return_storage_ptr__;
  }
  *param_3 = true;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Vertices).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPolygonVertexCount @ 14cebcb50

int __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonVertexCount
          (FGeometryScriptSimplePolygon *param_1)

{
  int iVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar2 = (param_1->Vertices).Object;
  pTVar3 = (param_1->Vertices).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return iVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return 0;
}

// GetPrivateStaticClass @ 14cebd2b0

UClass * __cdecl UGeometryScriptLibrary_SimplePolygonFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_SimplePolygonFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_SimplePolygonFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_SimplePolygonFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_SimplePolygonFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions.InnerSingleton;
}

// SetPolygonVertex @ 14cec2500

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::SetPolygonVertex
          (FGeometryScriptSimplePolygon *param_1,int param_2,TVector2<double> *param_3,bool *param_4
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  
  pTVar3 = (param_1->Vertices).Object;
  if ((pTVar3 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar3->ArrayNum != 0)) {
    dVar5 = (param_3->field0_0x0)._s_0.X;
    dVar6 = (param_3->field0_0x0)._s_0.Y;
    *param_4 = false;
    if ((param_1->Vertices).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar3 = (param_1->Vertices).Object;
    if (pTVar3 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = ((param_1->Vertices).Object)->ArrayNum;
    uVar8 = param_2 % iVar2;
    uVar9 = uVar8 + iVar2;
    if (-1 < (int)uVar8) {
      uVar9 = uVar8;
    }
    uVar8 = 0;
    if ((int)uVar9 < pTVar3->ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar1 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
    *(double *)pFVar1 = dVar5;
    *(double *)(pFVar1 + 8) = dVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Vertices).SharedReferenceCount.ReferenceController);
    return;
  }
  *param_4 = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Vertices).SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesUGeometryScriptLibrary_SimplePolygonFunctions @ 14cec2880

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::
StaticRegisterNativesUGeometryScriptLibrary_SimplePolygonFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddPolygonVertex @ 14cec4be0

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execAddPolygonVertex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGeometryScriptSimplePolygon *this;
  undefined8 local_38;
  undefined8 uStack_30;
  FGeometryScriptSimplePolygon local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.Vertices.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.Vertices.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FGeometryScriptSimplePolygon *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimplePolygon *)0x0) {
    this = (FGeometryScriptSimplePolygon *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_38 = local_18;
  uStack_30 = uStack_10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((this->Vertices).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FGeometryScriptSimplePolygon::Reset(this,0);
    if ((this->Vertices).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  pTVar2 = (this->Vertices).Object;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) {
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
  iVar6 = pTVar2->ArrayNum;
  if (iVar6 == pTVar2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  pTVar2->ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar3 = local_38;
  *(undefined8 *)(pFVar3 + 8) = uStack_30;
  *(int *)param_3 = iVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Vertices.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_ArrayOfVector2DToGeometryScriptSimplePolygon @ 14cec64a0

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execConv_ArrayOfVector2DToGeometryScriptSimplePolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this;
  bool bVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FGeometryScriptSimplePolygon local_28;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Vertices.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.Vertices.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = &local_18;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptSimplePolygon::Reset(&local_28,0);
  this = local_28.Vertices.Object;
  if (local_28.Vertices.Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=(this,pTVar4);
  if (param_3 != &local_28) {
    *(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> **)param_3 = this;
    local_28.Vertices.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0
    ;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_28.Vertices.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Vertices.SharedReferenceCount.ReferenceController);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execConv_ArrayToGeometryScriptSimplePolygon @ 14cec6720

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execConv_ArrayToGeometryScriptSimplePolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  int iVar11;
  void **ppvVar12;
  undefined8 *puVar13;
  undefined1 local_res10 [8];
  FGeometryScriptSimplePolygon local_78;
  void *local_68;
  undefined8 local_60;
  undefined8 local_48;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.Vertices.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_78.Vertices.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ppvVar12 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar12 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptSimplePolygon::Reset(&local_78,0);
  pTVar9 = local_78.Vertices.Object;
  if (local_78.Vertices.Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar2 = *(uint *)(ppvVar12 + 1);
  if (-1 < (int)uVar2) {
    if (pTVar9->ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&pTVar9->AllocatorInstance,pTVar9->ArrayNum,&pTVar9->ArrayMax);
    }
    iVar3 = *(int *)(ppvVar12 + 1);
    puVar13 = *ppvVar12;
    puVar1 = puVar13 + (longlong)iVar3 * 3;
    while( true ) {
      if (*(int *)(ppvVar12 + 1) != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (puVar13 == puVar1) break;
      local_48 = puVar13[2];
      uVar7 = *puVar13;
      uVar8 = puVar13[1];
      if (pTVar9 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar11 = pTVar9->ArrayNum;
      if (iVar11 == pTVar9->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar11 + 1;
      pFVar5 = (pTVar9->AllocatorInstance).Data;
      puVar13 = puVar13 + 3;
      *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0x10) = uVar7;
      *(undefined8 *)(pFVar5 + (longlong)iVar11 * 0x10 + 8) = uVar8;
    }
    if (param_3 != &local_78) {
      *(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> **)param_3 = pTVar9;
      local_78.Vertices.Object =
           (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)((longlong)param_3 + 8),
                 &local_78.Vertices.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.Vertices.SharedReferenceCount.ReferenceController);
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// execConv_GeometryScriptSimplePolygonToArray @ 14cec6d90

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execConv_GeometryScriptSimplePolygonToArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 local_res10 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  longlong *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  local_38 = (longlong *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar7 = pTStack_30;
  plVar6 = local_38;
  uVar9 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (local_38 != (longlong *)0x0) {
    uVar2 = *(uint *)(local_38 + 1);
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar2,&local_48,0,(int *)((longlong)&local_40 + 4));
      uVar9 = local_40 & 0xffffffff;
    }
    lVar5 = plVar6[1];
    puVar11 = (undefined8 *)*plVar6;
    puVar12 = puVar11 + (longlong)(int)lVar5 * 2;
    while( true ) {
      iVar8 = (int)uVar9;
      if ((int)plVar6[1] != (int)lVar5) {
        `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        iVar8 = (int)local_40;
      }
      if (puVar11 == puVar12) break;
      if (iVar8 == local_40._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_48,(int *)((longlong)&local_40 + 4));
      }
      lVar10 = (longlong)iVar8;
      local_40 = CONCAT44(local_40._4_4_,iVar8 + 1U);
      uVar1 = puVar11[1];
      uVar4 = *puVar11;
      puVar11 = puVar11 + 2;
      *(undefined8 *)(local_48.Data + lVar10 * 0x18) = uVar4;
      *(undefined8 *)(local_48.Data + lVar10 * 0x18 + 8) = uVar1;
      *(undefined8 *)(local_48.Data + lVar10 * 0x18 + 0x10) = 0;
      uVar9 = (ulonglong)(iVar8 + 1U);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_40;
    *(int *)((longlong)param_3 + 0xc) = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execConv_GeometryScriptSimplePolygonToArrayOfVector2D @ 14cec6f70

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execConv_GeometryScriptSimplePolygonToArrayOfVector2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  TReferenceControllerBase<1> *pTVar3;
  ForAnyElementType local_28;
  undefined8 local_20;
  undefined8 *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = (undefined8 *)0x0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = pTStack_10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_18 == (undefined8 *)0x0) {
    local_20 = 0;
  }
  else {
    iVar1 = *(int *)(local_18 + 1);
    _Src = (void *)*local_18;
    local_20 = CONCAT44(local_20._4_4_,iVar1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
      memcpy(local_28.Data,_Src,(longlong)iVar1 << 4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execConvertSplineToPolygon @ 14cec7da0

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execConvertSplineToPolygon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FProperty *pFVar5;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  float fVar9;
  char cVar10;
  undefined2 uVar11;
  USplineComponent *this;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FGeometryScriptSimplePolygon *pFVar16;
  TVector<double> *pTVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  FGeometryScriptSimplePolygon *this_00;
  float fVar25;
  char local_res10 [16];
  uint local_res20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_118;
  Type local_108;
  uint local_100;
  float fStack_fc;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined4 uStack_f4;
  undefined4 local_f0;
  USplineComponent *local_e8;
  FGeometryScriptSimplePolygon *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FGeometryScriptSimplePolygon local_c8;
  ulonglong local_b8;
  undefined1 local_a8 [16];
  undefined4 local_98;
  TVector<double> local_88 [3];
  
  uVar21 = 0;
  local_e8 = (USplineComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_c8.Vertices.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_c8.Vertices.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  fVar9 = __real_3f800000;
  local_100 = 10;
  this_00 = &local_c8;
  if ((FGeometryScriptSimplePolygon *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimplePolygon *)0x0) {
    this_00 = (FGeometryScriptSimplePolygon *)param_2->MostRecentPropertyAddress;
  }
  fStack_fc = 1.0;
  uStack_f8 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  local_f0 = 0x3f800000;
  local_e0 = this_00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_e8;
  uVar11 = uStack_f8;
  fVar25 = fStack_fc;
  uVar22 = local_100;
  cVar10 = local_res10[0];
  auVar8._4_4_ = fStack_fc;
  auVar8._0_4_ = local_100;
  auVar8._8_2_ = uStack_f8;
  auVar8[10] = uStack_f6;
  auVar8[0xb] = uStack_f5;
  auVar8._12_4_ = uStack_f4;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = local_f0;
  local_a8 = auVar8;
  FGeometryScriptSimplePolygon::Reset(this_00,0);
  if (this == (USplineComponent *)0x0) goto LAB_14cec847b;
  local_108 = (Type)(cVar10 == '\0');
  local_res20 = (cVar10 != '\x02') + 1;
  bVar12 = USplineComponent::IsClosedLoop(this);
  if ((char)uVar11 != '\x02') {
    fVar25 = this->Duration;
    uVar18 = (ulonglong)uVar22;
    local_res20 = CONCAT31(local_res20._1_3_,(char)uVar11 == '\0');
    if ((int)uVar22 < 2) {
      uVar18 = 2;
    }
    iVar15 = (int)uVar18;
    if (((this_00->Vertices).Object ==
         (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar6 = (this_00->Vertices).Object;
    if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar18);
    }
    if (pTVar6->ArrayMax < iVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar15,&pTVar6->AllocatorInstance,pTVar6->ArrayNum,&pTVar6->ArrayMax);
    }
    if (0 < iVar15) {
      local_108 = (Type)local_a8[9];
      pFVar16 = (FGeometryScriptSimplePolygon *)&DAT_00000008;
      if (cVar10 != '\x02') {
        pFVar16 = (FGeometryScriptSimplePolygon *)&DAT_00000010;
      }
      local_b8 = uVar21;
      if (cVar10 == '\0') {
        local_b8 = 8;
      }
      local_e0 = pFVar16;
      do {
        if (((this_00->Vertices).Object ==
             (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar6 = (this_00->Vertices).Object;
        pTVar17 = USplineComponent::GetLocationAtTime
                            (this,local_88,
                             (float)(int)uVar21 * (fVar9 / (float)(int)(iVar15 - (bVar12 ^ 1))) *
                             fVar25,local_108,local_res20._0_1_);
        uStack_d0 = *(undefined8 *)
                     ((longlong)&(pFVar16->Vertices).Object + (longlong)&pTVar17->field0_0x0);
        local_d8 = *(undefined8 *)((longlong)&pTVar17->field0_0x0 + local_b8);
        pFVar20 = (pTVar6->AllocatorInstance).Data;
        if (((pFVar20 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 < pFVar20 + (longlong)pTVar6->ArrayMax * 0x10)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = pTVar6->ArrayNum;
        if (iVar14 == pTVar6->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
        }
        uVar22 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar22;
        pTVar6->ArrayNum = iVar14 + 1;
        pFVar20 = (pTVar6->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar20 = local_d8;
        *(undefined8 *)(pFVar20 + 8) = uStack_d0;
      } while ((int)uVar22 < iVar15);
    }
    goto LAB_14cec847b;
  }
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar25 = fVar25 * fVar25;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  if (fVar25 <= __real_38d1b717) {
    fVar25 = __real_38d1b717;
  }
  USplineComponent::ConvertSplineToPolyLine(this,auVar8._9_4_ & 0xff,fVar25,&local_118);
  if (bVar12) {
    if (local_118.ArrayNum < 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar14 = (local_118.ArrayNum - (local_118.ArrayNum + -1)) + -1;
    iVar15 = local_118.ArrayNum;
    if (iVar14 != 0) {
      memmove(local_118.AllocatorInstance.Data + (longlong)(local_118.ArrayNum + -1) * 0x18,
              local_118.AllocatorInstance.Data + (longlong)(local_118.ArrayNum + -1) * 0x18 + 0x18,
              (longlong)iVar14 * 0x18);
      iVar15 = local_118.ArrayNum;
    }
    local_118.ArrayNum = iVar15 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&local_118.AllocatorInstance,iVar15 + -1,&local_118.ArrayMax);
  }
  if (((this_00->Vertices).Object ==
       (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = local_118.ArrayNum;
  uVar18 = (ulonglong)local_118.ArrayNum;
  pTVar6 = (this_00->Vertices).Object;
  iVar15 = pTVar6->ArrayNum;
  piVar1 = &pTVar6->ArrayNum;
  if (iVar15 < local_118.ArrayNum) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_118.ArrayNum - iVar15,&pTVar6->AllocatorInstance,piVar1,
               &pTVar6->ArrayMax);
LAB_14cec8162:
    uVar19 = local_118._8_8_ & 0xffffffff;
  }
  else {
    if (local_118.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_118._8_8_ & 0xffffffff);
    }
    uVar19 = uVar18;
    if (local_118.ArrayNum < iVar15) {
      uVar22 = iVar15 - local_118.ArrayNum;
      if ((int)(uVar22 | local_118.ArrayNum) < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar19 = local_118._8_8_ & 0xffffffff;
      }
      if (uVar22 != 0) {
        pFVar20 = (pTVar6->AllocatorInstance).Data + uVar18 * 0x10;
        iVar15 = (*piVar1 - iVar14) - uVar22;
        if (iVar15 != 0) {
          memmove(pFVar20,pFVar20 + (longlong)(int)uVar22 * 0x10,(longlong)iVar15 << 4);
        }
        *piVar1 = *piVar1 - uVar22;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar6->AllocatorInstance,*piVar1,&pTVar6->ArrayMax);
        goto LAB_14cec8162;
      }
    }
  }
  uVar18 = uVar21;
  uVar24 = uVar21;
  if (0 < (int)uVar19) {
    do {
      uVar23 = (uint)uVar21;
      uVar22 = 0;
      if ((int)uVar23 < (int)uVar19) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined8 *)
               (local_118.AllocatorInstance.Data + (ulonglong)local_res20 * 8 + uVar18);
      uVar4 = *(undefined8 *)(local_118.AllocatorInstance.Data + (ulonglong)local_108 * 8 + uVar18);
      if (((this_00->Vertices).Object ==
           (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar6 = (this_00->Vertices).Object;
      uVar22 = 0;
      if ((int)uVar23 < pTVar6->ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar20 = (pTVar6->AllocatorInstance).Data;
      uVar21 = (ulonglong)(uVar23 + 1);
      *(undefined8 *)(pFVar20 + uVar24) = uVar4;
      *(undefined8 *)(pFVar20 + uVar24 + 8) = uVar3;
      uVar19 = local_118._8_8_ & 0xffffffff;
      uVar18 = uVar18 + 0x18;
      uVar24 = uVar24 + 0x10;
      this_00 = local_e0;
    } while ((int)(uVar23 + 1) < local_118.ArrayNum);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
LAB_14cec847b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.Vertices.SharedReferenceCount.ReferenceController);
  return;
}

// execGetPolygonArcLength @ 14cecddf0

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonArcLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_28 [2];
  
  local_38 = (undefined8 *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar5 = pTStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_38 == (undefined8 *)0x0) || (*(int *)(local_38 + 1) == 0)) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    local_28[0].DataPtr = (TVector2<double> *)*local_38;
    iVar1 = *(int *)(local_38 + 1);
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28[0].ArrayNum = iVar1;
    dVar4 = UE::Geometry::CurveUtil::ArcLength<double,UE::Math::TVector2<double>_>(local_28,true);
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(ulonglong *)param_3 = CONCAT44(uVar8,uVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execGetPolygonArea @ 14cece0d0

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_28 [2];
  
  local_38 = (undefined8 *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar5 = pTStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_38 == (undefined8 *)0x0) || (*(int *)(local_38 + 1) == 0)) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    local_28[0].DataPtr = (TVector2<double> *)*local_38;
    iVar1 = *(int *)(local_38 + 1);
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28[0].ArrayNum = iVar1;
    dVar4 = UE::Geometry::CurveUtil::SignedArea2<double,UE::Math::TVector2<double>_>(local_28);
    uVar7 = SUB84(dVar4,0);
    uVar8 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(ulonglong *)param_3 = CONCAT44(uVar8,uVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execGetPolygonBounds @ 14cece420

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonBounds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined8 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  double *pdVar5;
  double *pdVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 local_res10 [8];
  undefined8 *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  ulonglong local_98;
  
  local_c8 = (undefined8 *)0x0;
  pTStack_c0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pTVar4 = pTStack_c0;
  puVar3 = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_c8 == (undefined8 *)0x0) || (*(int *)(local_c8 + 1) == 0)) {
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    local_98 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar17 = 0;
    uVar18 = 0;
  }
  else {
    pdVar5 = (double *)*local_c8;
    cVar7 = '\0';
    iVar1 = *(int *)(local_c8 + 1);
    uVar19 = 0;
    uVar20 = 0;
    pdVar6 = pdVar5 + (longlong)iVar1 * 2;
    local_98 = local_98 & 0xffffffffffffff00;
    uVar17 = 0;
    uVar18 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar14 = 0;
    while( true ) {
      if (*(int *)(puVar3 + 1) != iVar1) {
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pdVar5 == pdVar6) break;
      if (cVar7 == '\0') {
        uVar19 = *(undefined4 *)pdVar5;
        uVar20 = *(undefined4 *)((longlong)pdVar5 + 4);
        uVar17 = *(undefined4 *)(pdVar5 + 1);
        uVar18 = *(undefined4 *)((longlong)pdVar5 + 0xc);
        cVar7 = '\x01';
        pdVar5 = pdVar5 + 2;
        uVar15 = uVar17;
        uVar16 = uVar18;
        uVar13 = uVar19;
        uVar14 = uVar20;
      }
      else {
        dVar12 = *pdVar5;
        dVar11 = pdVar5[1];
        uVar8 = SUB84(dVar12,0);
        uVar9 = (int)((ulonglong)dVar12 >> 0x20);
        if ((double)CONCAT44(uVar14,uVar13) <= dVar12) {
          uVar8 = uVar13;
          uVar9 = uVar14;
        }
        if (dVar12 <= (double)CONCAT44(uVar20,uVar19)) {
          dVar12 = (double)CONCAT44(uVar20,uVar19);
        }
        pdVar5 = pdVar5 + 2;
        dVar10 = dVar11;
        if ((double)CONCAT44(uVar16,uVar15) <= dVar11) {
          dVar10 = (double)CONCAT44(uVar16,uVar15);
        }
        if (dVar11 <= (double)CONCAT44(uVar18,uVar17)) {
          dVar11 = (double)CONCAT44(uVar18,uVar17);
        }
        uVar19 = SUB84(dVar12,0);
        uVar20 = (undefined4)((ulonglong)dVar12 >> 0x20);
        uVar17 = SUB84(dVar11,0);
        uVar18 = (undefined4)((ulonglong)dVar11 >> 0x20);
        uVar15 = SUB84(dVar10,0);
        uVar16 = (int)((ulonglong)dVar10 >> 0x20);
        uVar13 = uVar8;
        uVar14 = uVar9;
      }
    }
    local_98 = CONCAT71(local_98._1_7_,cVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined4 *)param_3 = uVar13;
  *(undefined4 *)((longlong)param_3 + 4) = uVar14;
  *(undefined4 *)((longlong)param_3 + 8) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar19;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar20;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar18;
  *(ulonglong *)((longlong)param_3 + 0x20) = local_98;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  return;
}

// execGetPolygonTangent @ 14cecf000

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonTangent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double *pdVar2;
  int iVar3;
  FProperty *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uchar *puVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  uchar local_res10 [8];
  int local_res18 [2];
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar9 = pTStack_40;
  iVar12 = local_res18[0];
  puVar15 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_48 == (longlong *)0x0) || ((int)local_48[1] == 0)) {
    *puVar15 = '\x01';
    dVar17 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    dVar18 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    *puVar15 = '\0';
    iVar3 = (int)local_48[1];
    iVar12 = iVar12 % iVar3;
    lVar5 = *local_48;
    iVar16 = iVar12 + iVar3;
    if (-1 < iVar12) {
      iVar16 = iVar12;
    }
    if (iVar3 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar13 = (iVar16 + 1) % iVar3;
    uVar14 = (iVar3 + -1 + iVar16) % iVar3;
    uVar11 = 0;
    if ((int)uVar13 < iVar3) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pdVar2 = (double *)(lVar5 + (longlong)(int)uVar13 * 0x10);
    dVar17 = *pdVar2;
    dVar8 = pdVar2[1];
    uVar11 = 0;
    if ((int)uVar14 < iVar3) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pdVar2 = (double *)(lVar5 + (longlong)(int)uVar14 * 0x10);
    dVar17 = dVar17 - *pdVar2;
    dVar8 = dVar8 - pdVar2[1];
    dVar18 = SQRT(dVar8 * dVar8 + dVar17 * dVar17);
    if (dVar18 <= 0.0) {
      dVar17 = 0.0;
      dVar18 = 0.0;
    }
    else {
      dVar18 = __real_3ff0000000000000 / dVar18;
      dVar17 = dVar18 * dVar17;
      dVar18 = dVar18 * dVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  auVar7._8_4_ = SUB84(dVar18,0);
  auVar7._0_8_ = dVar17;
  auVar7._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execGetPolygonVertex @ 14cecf630

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonVertex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined4 *puVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  int iVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  uint uVar10;
  uchar *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uchar local_res10 [8];
  int local_res18 [2];
  longlong *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  local_38 = (longlong *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar8 = pTStack_30;
  plVar7 = local_38;
  iVar6 = local_res18[0];
  puVar11 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_38 == (longlong *)0x0) || ((int)local_38[1] == 0)) {
    *puVar11 = '\x01';
    uVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
    uVar14 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
    uVar15 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
    uVar16 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    *puVar11 = '\0';
    iVar3 = (int)local_38[1];
    uVar10 = iVar6 % iVar3;
    uVar12 = uVar10 + iVar3;
    if (-1 < (int)uVar10) {
      uVar12 = uVar10;
    }
    uVar10 = 0;
    if ((int)uVar12 < iVar3) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar2 = (undefined4 *)(*plVar7 + (longlong)(int)uVar12 * 0x10);
    uVar13 = *puVar2;
    uVar14 = puVar2[1];
    uVar15 = puVar2[2];
    uVar16 = puVar2[3];
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  *(undefined4 *)param_3 = uVar13;
  *(undefined4 *)((longlong)param_3 + 4) = uVar14;
  *(undefined4 *)((longlong)param_3 + 8) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execGetPolygonVertexCount @ 14cecfa60

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonVertexCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  longlong local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = 0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  uVar2 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_18 != 0) {
    uVar2 = *(undefined4 *)(local_18 + 8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  *(undefined4 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  return;
}

// execSetPolygonVertex @ 14ced8a10

void __cdecl
UGeometryScriptLibrary_SimplePolygonFunctions::execSetPolygonVertex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined8 *puVar2;
  int iVar3;
  FProperty *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uchar *puVar10;
  uint uVar11;
  longlong *plVar12;
  uchar local_res10 [8];
  int local_res20 [2];
  longlong local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  plVar12 = &local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar12 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar7 = local_res20[0];
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar5 = (TReferenceControllerBase<1> *)plVar12[1];
  plVar12 = (longlong *)*plVar12;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((plVar12 == (longlong *)0x0) || ((int)plVar12[1] == 0)) {
    *puVar10 = '\x01';
  }
  else {
    *puVar10 = '\0';
    iVar3 = (int)plVar12[1];
    uVar9 = iVar7 % iVar3;
    uVar11 = uVar9 + iVar3;
    if (-1 < (int)uVar9) {
      uVar11 = uVar9;
    }
    uVar9 = 0;
    if ((int)uVar11 < iVar3) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar2 = (undefined8 *)(*plVar12 + (longlong)(int)uVar11 * 0x10);
    *puVar2 = local_38;
    puVar2[1] = uStack_30;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

