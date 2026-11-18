// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 50

// StaticClass @ 14cea2c00

UClass * __cdecl UGeometryScriptLibrary_PolyPathFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_PolyPathFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_PolyPathFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_PolyPathFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_PolyPathFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_PolyPathFunctions @ 14ceae750

UGeometryScriptLibrary_PolyPathFunctions * __thiscall
UGeometryScriptLibrary_PolyPathFunctions::UGeometryScriptLibrary_PolyPathFunctions
          (UGeometryScriptLibrary_PolyPathFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_PolyPathFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_PolyPathFunctions @ 14ceae780

UGeometryScriptLibrary_PolyPathFunctions * __thiscall
UGeometryScriptLibrary_PolyPathFunctions::UGeometryScriptLibrary_PolyPathFunctions
          (UGeometryScriptLibrary_PolyPathFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_PolyPathFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_PolyPathFunctions @ 14ceaeb70

void __thiscall
UGeometryScriptLibrary_PolyPathFunctions::~UGeometryScriptLibrary_PolyPathFunctions
          (UGeometryScriptLibrary_PolyPathFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_PolyPathFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ceb0c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStackY_e8 [32];
  double local_98 [2];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  USplineComponent::GetTransformAtTime
            (*(USplineComponent **)this,&local_88,param_1,
             (uint)*(byte *)(*(longlong *)((longlong)this + 0x18) + 9),
             *(bool *)((longlong)this + 0x29),*(bool *)((longlong)this + 0x28));
  UE::Math::TTransform<double>::Multiply
            (&local_88,*(TTransform<double> **)((longlong)this + 0x20),&local_88);
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  if (((TTransform<double> *)pFVar2->Data <= &local_88) &&
     (&local_88 < (TTransform<double> *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
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
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  lVar7 = (longlong)iVar6 * 0x60;
  *(double *)(pFVar3 + lVar7) = local_88.Rotation.XY.m128d_f64[0];
  *(double *)(pFVar3 + lVar7 + 8) = local_88.Rotation.XY.m128d_f64[1];
  *(double *)(pFVar3 + lVar7 + 0x10) = local_88.Rotation.ZW.m128d_f64[0];
  *(double *)(pFVar3 + lVar7 + 0x10 + 8) = local_88.Rotation.ZW.m128d_f64[1];
  *(double *)(pFVar3 + lVar7 + 0x20) = local_88.Translation.XY.m128d_f64[0];
  *(double *)(pFVar3 + lVar7 + 0x20 + 8) = local_88.Translation.XY.m128d_f64[1];
  *(double *)(pFVar3 + lVar7 + 0x30) = local_88.Translation.ZW.m128d_f64[0];
  *(double *)(pFVar3 + lVar7 + 0x30 + 8) = local_88.Translation.ZW.m128d_f64[1];
  *(double *)(pFVar3 + lVar7 + 0x40) = local_88.Scale3D.XY.m128d_f64[0];
  *(double *)(pFVar3 + lVar7 + 0x40 + 8) = local_88.Scale3D.XY.m128d_f64[1];
  *(double *)(pFVar3 + lVar7 + 0x50) = local_88.Scale3D.ZW.m128d_f64[0];
  *(double *)(pFVar3 + lVar7 + 0x50 + 8) = local_88.Scale3D.ZW.m128d_f64[1];
  pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
  local_98[0] = (double)param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_98) &&
     ((FScriptContainerElement *)local_98 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(double *)(pFVar2->Data + (longlong)iVar6 * 8) = local_98[0];
  return;
}

// operator() @ 14ceb2f80

void __thiscall
`UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath'::__l10::<lambda_1>::operator()
          (void *this,TVector<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  
  plVar3 = *(longlong **)this;
  if (*plVar3 == 0) {
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
  pFVar4 = (ForAnyElementType *)*plVar3;
  if ((pFVar4->Data <= param_1) &&
     (param_1 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 0x18)) {
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
  iVar9 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,pFVar4,piVar1);
  }
  *(int *)&pFVar4[1].Data = iVar9 + 1;
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  pFVar5 = pFVar4->Data;
  pFVar2 = pFVar5 + (longlong)iVar9 * 0x18;
  *(double *)pFVar2 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar7;
  *(double *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  return;
}

// Conv_ArrayOfVector2DToGeometryScriptPolyPath @ 14ceb5080

FGeometryScriptPolyPath * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayOfVector2DToGeometryScriptPolyPath
          (FGeometryScriptPolyPath *__return_storage_ptr__,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  (__return_storage_ptr__->Path).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->bClosedLoop = false;
  ConvertArrayOfVector2DToPolyPath(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Conv_ArrayToGeometryScriptPolyPath @ 14ceb5130

FGeometryScriptPolyPath * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayToGeometryScriptPolyPath
          (FGeometryScriptPolyPath *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGeometryScriptPolyPath *pFVar3;
  
  (__return_storage_ptr__->Path).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(__return_storage_ptr__,0);
  if ((__return_storage_ptr__->Path).Object ==
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGeometryScriptPolyPath *)(*pcVar1)();
      return pFVar3;
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            ((__return_storage_ptr__->Path).Object,param_1);
  return __return_storage_ptr__;
}

// Conv_GeometryScriptPolyPathToArray @ 14ceb5330

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArray
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometryScriptPolyPath *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  piVar3 = &__return_storage_ptr__->ArrayMax;
  *piVar3 = 0;
  pTVar1 = (param_1->Path).SharedReferenceCount.ReferenceController;
  pTVar2 = (param_1->Path).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->ArrayNum = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&__return_storage_ptr__->AllocatorInstance,0,piVar3);
  }
  if (pTVar2 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
    Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_GeometryScriptPolyPathToArrayOfVector2D @ 14ceb53d0

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArrayOfVector2D
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometryScriptPolyPath *param_1)

{
  FGeometryScriptPolyPath local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_28.Path.Object = (param_1->Path).Object;
  local_28.Path.SharedReferenceCount.ReferenceController =
       (param_1->Path).SharedReferenceCount.ReferenceController;
  if (local_28.Path.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_28.Path.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.Path.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.bClosedLoop = param_1->bClosedLoop;
  ConvertPolyPathToArrayOfVector2D(&local_28,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConvertArrayOfVector2DToPolyPath @ 14ceb5650

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayOfVector2DToPolyPath
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptPolyPath *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  FGeometryScriptPolyPath::Reset(param_2,0);
  if ((param_2->Path).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar2 = param_1->ArrayNum;
  pTVar4 = (param_2->Path).Object;
  if (-1 < (int)uVar2) {
    if (pTVar4->ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar2,&pTVar4->AllocatorInstance,pTVar4->ArrayNum,&pTVar4->ArrayMax);
    }
    iVar3 = param_1->ArrayNum;
    pFVar12 = (param_1->AllocatorInstance).Data;
    pFVar11 = pFVar12 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar11) break;
      if ((param_2->Path).Object ==
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pTVar4 = (param_2->Path).Object;
      iVar9 = pTVar4->ArrayNum;
      if (iVar9 == pTVar4->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
      }
      lVar10 = (longlong)iVar9;
      pTVar4->ArrayNum = iVar9 + 1;
      uVar1 = *(undefined8 *)(pFVar12 + 8);
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      uVar6 = *(undefined8 *)pFVar12;
      pFVar12 = pFVar12 + 0x10;
      *(undefined8 *)(pFVar5 + lVar10 * 0x18) = uVar6;
      *(undefined8 *)(pFVar5 + lVar10 * 0x18 + 8) = uVar1;
      *(undefined8 *)(pFVar5 + lVar10 * 0x18 + 0x10) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// ConvertArrayToPolyPath @ 14ceb57c0

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayToPolyPath
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptPolyPath *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  FGeometryScriptPolyPath::Reset(param_2,0);
  if ((param_2->Path).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>((param_2->Path).Object,param_1);
  return;
}

// ConvertPolyPathToArray @ 14ceb5f30

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArray
          (FGeometryScriptPolyPath *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pTVar1 = (param_1->Path).Object;
  if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
    Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(param_2,pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return;
}

// ConvertPolyPathToArrayOfVector2D @ 14ceb5fa0

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArrayOfVector2D
          (FGeometryScriptPolyPath *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  pTVar6 = (param_1->Path).Object;
  if (pTVar6 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar4 = pTVar6->ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar4,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    if (((param_1->Path).Object ==
         (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar6 = (param_1->Path).Object;
    iVar5 = pTVar6->ArrayNum;
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    pFVar3 = pFVar12 + (longlong)iVar5 * 0x18;
    while( true ) {
      if (pTVar6->ArrayNum != iVar5) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar3) break;
      iVar11 = param_2->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar11 + 1;
      pFVar2 = pFVar12 + 8;
      uVar7 = *(undefined8 *)pFVar12;
      pFVar12 = pFVar12 + 0x18;
      pFVar8 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar8 + (longlong)iVar11 * 0x10 + 8) = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar8 + (longlong)iVar11 * 0x10) = uVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return;
}

// ConvertSplineToPolyPath @ 14ceb6100

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath
          (USplineComponent *param_1,FGeometryScriptPolyPath *param_2,
          FGeometryScriptSplineSamplingOptions *param_3)

{
  EGeometryScriptSampleSpacing EVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FGeometryScriptPolyPath *local_res20;
  TArray<double,TSizedDefaultAllocator<32>_> local_68;
  code *local_58;
  undefined1 *local_50;
  code *local_48;
  FGeometryScriptPolyPath **local_40;
  FGeometryScriptSplineSamplingOptions local_38;
  
  FGeometryScriptPolyPath::Reset(param_2,0);
  if (param_1 != (USplineComponent *)0x0) {
    bVar5 = USplineComponent::IsClosedLoop(param_1);
    if ((bVar5) && (param_3->RangeMethod == FullSpline)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    EVar1 = param_3->SampleSpacing;
    param_2->bClosedLoop = bVar5;
    pTVar2 = (param_2->Path).Object;
    if (EVar1 == ErrorTolerance) {
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      if (pTVar2 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_38.NumSamples = param_3->NumSamples;
      local_38.ErrorTolerance = param_3->ErrorTolerance;
      local_38.SampleSpacing = param_3->SampleSpacing;
      local_38.CoordinateSpace.Value = (param_3->CoordinateSpace).Value;
      local_38.RangeMethod = param_3->RangeMethod;
      local_38._11_1_ = param_3->field_0xb;
      local_38.RangeStart = param_3->RangeStart;
      local_38.RangeEnd = param_3->RangeEnd;
      UE::Local::SplinePathHelpers::ErrorBasedSampleInRange
                (param_1,&local_38,(param_2->Path).Object,&local_68);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
        return;
      }
    }
    else {
      uVar4 = param_3->NumSamples;
      if (param_3->NumSamples < 2) {
        uVar4 = 2;
      }
      if (pTVar2 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar2 = (param_2->Path).Object;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if (pTVar2->ArrayMax < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar4,&pTVar2->AllocatorInstance,pTVar2->ArrayNum,&pTVar2->ArrayMax);
      }
      local_50 = local_res8;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath'::__l10::<lambda_2>,void,float>
                 ::Call;
      local_40 = &local_res20;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath'::__l10::<lambda_1>,void,UE::Math::TVector<double>_const_&>
                 ::Call;
      local_res20 = param_2;
      UE::Local::SplinePathHelpers::IterateSamplesInRange
                (param_1,param_3,true,
                 (TFunctionRef<void___cdecl(UE::Math::TVector<double>_const_&)> *)&local_48,false,
                 (TFunctionRef<void___cdecl(float)> *)&local_58);
    }
  }
  return;
}

// CreateArcPath2D @ 14ceb7060

FGeometryScriptPolyPath * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath2D
          (FGeometryScriptPolyPath *__return_storage_ptr__,TVector2<double> *param_1,float param_2,
          int param_3,float param_4,float param_5)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FGeometryScriptPolyPath *pFVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  TTransform<double> local_78;
  
  (__return_storage_ptr__->Path).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(__return_storage_ptr__,0);
  local_78.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_78.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->bClosedLoop = false;
  local_78.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78.Translation.ZW.m128d_f64[0] = 0.0;
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pTVar5 = PolyPathInternal::CreateArcPoints
                     (&local_88,&local_78,param_2,param_3,param_4,param_5,true);
  if ((__return_storage_ptr__->Path).Object ==
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGeometryScriptPolyPath *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar1 = (__return_storage_ptr__->Path).Object;
  if (pTVar1 != pTVar5) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar1->ArrayNum = pTVar5->ArrayNum;
    pTVar1->ArrayMax = pTVar5->ArrayMax;
    pTVar5->ArrayNum = 0;
    pTVar5->ArrayMax = 0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateArcPath3D @ 14ceb71c0

FGeometryScriptPolyPath * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath3D
          (FGeometryScriptPolyPath *__return_storage_ptr__,TTransform<double> *param_1,float param_2
          ,int param_3,float param_4,float param_5)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FGeometryScriptPolyPath *pFVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  TTransform<double> local_78;
  
  (__return_storage_ptr__->Path).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(__return_storage_ptr__,0);
  local_78.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  local_78.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
  local_78.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  local_78.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
  local_78.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  local_78.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
  local_78.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  local_78.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
  local_78.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  local_78.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
  local_78.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  local_78.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
  __return_storage_ptr__->bClosedLoop = false;
  pTVar5 = PolyPathInternal::CreateArcPoints
                     (&local_88,&local_78,param_2,param_3,param_4,param_5,true);
  if ((__return_storage_ptr__->Path).Object ==
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGeometryScriptPolyPath *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar1 = (__return_storage_ptr__->Path).Object;
  if (pTVar1 != pTVar5) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar1->ArrayNum = pTVar5->ArrayNum;
    pTVar1->ArrayMax = pTVar5->ArrayMax;
    pTVar5->ArrayNum = 0;
    pTVar5->ArrayMax = 0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateCirclePath2D @ 14ceb75e0

FGeometryScriptPolyPath * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath2D
          (FGeometryScriptPolyPath *__return_storage_ptr__,TVector2<double> *param_1,float param_2,
          int param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FGeometryScriptPolyPath *pFVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  TTransform<double> local_78;
  
  (__return_storage_ptr__->Path).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(__return_storage_ptr__,0);
  local_78.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_78.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->bClosedLoop = true;
  local_78.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78.Translation.ZW.m128d_f64[0] = 0.0;
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pTVar5 = PolyPathInternal::CreateArcPoints
                     (&local_88,&local_78,param_2,param_3,0.0,__real_43b40000,false);
  if ((__return_storage_ptr__->Path).Object ==
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGeometryScriptPolyPath *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar1 = (__return_storage_ptr__->Path).Object;
  if (pTVar1 != pTVar5) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar1->ArrayNum = pTVar5->ArrayNum;
    pTVar1->ArrayMax = pTVar5->ArrayMax;
    pTVar5->ArrayNum = 0;
    pTVar5->ArrayMax = 0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateCirclePath3D @ 14ceb7730

FGeometryScriptPolyPath * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath3D
          (FGeometryScriptPolyPath *__return_storage_ptr__,TTransform<double> *param_1,float param_2
          ,int param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  FGeometryScriptPolyPath *pFVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  TTransform<double> local_78;
  
  (__return_storage_ptr__->Path).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(__return_storage_ptr__,0);
  fVar4 = __real_43b40000;
  local_78.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  local_78.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
  local_78.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  local_78.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
  local_78.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  local_78.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
  local_78.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  local_78.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
  local_78.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  local_78.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
  local_78.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  local_78.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
  __return_storage_ptr__->bClosedLoop = true;
  pTVar6 = PolyPathInternal::CreateArcPoints(&local_88,&local_78,param_2,param_3,0.0,fVar4,false);
  if ((__return_storage_ptr__->Path).Object ==
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGeometryScriptPolyPath *)(*pcVar3)();
      return pFVar7;
    }
  }
  pTVar1 = (__return_storage_ptr__->Path).Object;
  if (pTVar1 != pTVar6) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar1->ArrayNum = pTVar6->ArrayNum;
    pTVar1->ArrayMax = pTVar6->ArrayMax;
    pTVar6->ArrayNum = 0;
    pTVar6->ArrayMax = 0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FlattenTo2DOnAxis @ 14ceb9ef0

FGeometryScriptPolyPath * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::FlattenTo2DOnAxis
          (FGeometryScriptPolyPath *__return_storage_ptr__,FGeometryScriptPolyPath *param_1,
          EGeometryScriptAxis param_2)

{
  FSharedReferencer<1> *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FGeometryScriptPolyPath *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Path).Object =
       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(__return_storage_ptr__,0);
  pFVar1 = &(param_1->Path).SharedReferenceCount;
  if ((param_1->Path).Object != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    __return_storage_ptr__->bClosedLoop = param_1->bClosedLoop;
    pTVar4 = pFVar1->ReferenceController;
    pTVar5 = (param_1->Path).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->Path).Object = pTVar5;
    (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if ((__return_storage_ptr__->Path).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FGeometryScriptPolyPath *)(*pcVar6)();
        return pFVar9;
      }
    }
    pTVar5 = (__return_storage_ptr__->Path).Object;
    iVar3 = pTVar5->ArrayNum;
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    pFVar2 = pFVar11 + (longlong)iVar3 * 0x18;
    while( true ) {
      if (pTVar5->ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar2) break;
      lVar10 = 0;
      if (param_2 == X) {
        lVar10 = 8;
      }
      *(undefined8 *)pFVar11 = *(undefined8 *)(pFVar11 + lVar10);
      lVar10 = 8;
      if (param_2 != Z) {
        lVar10 = 0x10;
      }
      *(undefined8 *)(pFVar11 + 8) = *(undefined8 *)(pFVar11 + lVar10);
      *(undefined8 *)(pFVar11 + 0x10) = 0;
      pFVar11 = pFVar11 + 0x18;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return __return_storage_ptr__;
}

// GetNearestVertexIndex @ 14cebad00

int __cdecl
UGeometryScriptLibrary_PolyPathFunctions::GetNearestVertexIndex
          (FGeometryScriptPolyPath *param_1,TVector<double> *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  double dVar14;
  undefined4 uVar15;
  
  pTVar1 = (param_1->Path).Object;
  if (pTVar1 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Path).SharedReferenceCount.ReferenceController);
    return -1;
  }
  iVar5 = pTVar1->ArrayNum;
  lVar8 = (longlong)iVar5;
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar13 = (undefined4)__real_7fefffffffffffff;
  uVar15 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar7 = 0;
  uVar6 = 0xffffffff;
  if (0 < iVar5) {
    pFVar10 = pFVar10 + 0x10;
    uVar9 = 0xffffffff;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar5) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      dVar14 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar10 + -8);
      dVar12 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar10 + -0x10);
      dVar11 = (param_2->field0_0x0)._s_0.Z - *(double *)pFVar10;
      dVar11 = dVar14 * dVar14 + dVar12 * dVar12 + dVar11 * dVar11;
      bVar4 = (double)CONCAT44(uVar15,uVar13) == dVar11;
      bVar2 = (double)CONCAT44(uVar15,uVar13) < dVar11;
      if ((double)CONCAT44(uVar15,uVar13) <= dVar11) {
        dVar11 = (double)CONCAT44(uVar15,uVar13);
      }
      uVar6 = uVar7;
      if (bVar2 || bVar4) {
        uVar6 = uVar9;
      }
      uVar7 = uVar7 + 1;
      pFVar10 = pFVar10 + 0x18;
      uVar13 = SUB84(dVar11,0);
      uVar15 = (undefined4)((ulonglong)dVar11 >> 0x20);
      lVar8 = lVar8 + -1;
      uVar9 = uVar6;
    } while (lVar8 != 0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return uVar6;
}

// GetPolyPathArcLength @ 14cebb5b0

double __cdecl
UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathArcLength(FGeometryScriptPolyPath *param_1)

{
  bool bVar1;
  int iVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  double dVar6;
  TArrayView<UE::Math::TVector<double>_const_,int> local_28 [2];
  
  pTVar3 = (param_1->Path).Object;
  if (pTVar3 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Path).SharedReferenceCount.ReferenceController);
    return 0.0;
  }
  local_28[0].DataPtr = (TVector<double> *)(pTVar3->AllocatorInstance).Data;
  bVar1 = param_1->bClosedLoop;
  iVar2 = pTVar3->ArrayNum;
  if (iVar2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      dVar6 = (double)(*pcVar4)();
      return dVar6;
    }
  }
  local_28[0].ArrayNum = iVar2;
  dVar6 = UE::Geometry::CurveUtil::ArcLength<double,UE::Math::TVector<double>_>(local_28,bVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return dVar6;
}

// GetPolyPathLastIndex @ 14cebb660

int __cdecl
UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathLastIndex(FGeometryScriptPolyPath *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  
  pTVar1 = (param_1->Path).Object;
  iVar3 = 0;
  if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar2 = pTVar1->ArrayNum + -1;
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return iVar3;
}

// GetPolyPathNumVertices @ 14cebb6a0

int __cdecl
UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathNumVertices(FGeometryScriptPolyPath *param_1)

{
  int iVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = (param_1->Path).Object;
  if (pTVar2 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar2->ArrayNum;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Path).SharedReferenceCount.ReferenceController);
    return iVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return 0;
}

// GetPolyPathTangent @ 14cebb6e0

TVector<double> * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathTangent
          (TVector<double> *__return_storage_ptr__,FGeometryScriptPolyPath *param_1,int param_2,
          bool *param_3)

{
  int iVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_38;
  
  *param_3 = false;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pTVar2 = (param_1->Path).Object;
  if (((pTVar2 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
      (-1 < param_2)) && (param_2 < pTVar2->ArrayNum)) {
    *param_3 = true;
    bVar9 = param_1->bClosedLoop;
    if ((param_1->Path).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar5)();
        return pTVar10;
      }
    }
    pTVar2 = (param_1->Path).Object;
    iVar1 = pTVar2->ArrayNum;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (iVar1 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector<double> *)(*pcVar5)();
        return pTVar10;
      }
    }
    uVar13 = param_2 + 1;
    if (bVar9 == false) {
      uVar14 = param_2 - 1;
      if ((int)(iVar1 - 1U) < (int)uVar13) {
        uVar13 = iVar1 - 1U;
      }
      if ((int)uVar14 < 0) {
        uVar14 = 0;
      }
      uVar12 = 0;
      if ((int)uVar13 < iVar1) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
      }
      local_38 = *(double *)(pFVar3 + (longlong)(int)uVar13 * 0x18 + 0x10);
      dVar16 = *(double *)(pFVar3 + (longlong)(int)uVar13 * 0x18);
      dVar6 = *(double *)(pFVar3 + (longlong)(int)uVar13 * 0x18 + 8);
      uVar13 = 0;
      if ((int)uVar14 < iVar1) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
      }
      dVar17 = local_38 - *(double *)(pFVar3 + (longlong)(int)uVar14 * 0x18 + 0x10);
      dVar16 = dVar16 - *(double *)(pFVar3 + (longlong)(int)uVar14 * 0x18);
      dVar6 = dVar6 - *(double *)(pFVar3 + (longlong)(int)uVar14 * 0x18 + 8);
      dVar15 = SQRT(dVar6 * dVar6 + dVar16 * dVar16 + dVar17 * dVar17);
      if (dVar15 <= 0.0) {
        local_50 = 0.0;
        local_60 = 0.0;
        dStack_58 = 0.0;
      }
      else {
        dVar15 = __real_3ff0000000000000 / dVar15;
        local_60 = dVar15 * dVar16;
        dStack_58 = dVar15 * dVar6;
        local_50 = dVar15 * dVar17;
      }
      pdVar11 = &local_60;
    }
    else {
      uVar13 = (int)uVar13 % iVar1;
      uVar12 = (param_2 + -1 + iVar1) % iVar1;
      uVar14 = 0;
      if ((int)uVar13 < iVar1) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
      }
      local_38 = *(double *)(pFVar3 + (longlong)(int)uVar13 * 0x18 + 0x10);
      dVar16 = *(double *)(pFVar3 + (longlong)(int)uVar13 * 0x18);
      dVar6 = *(double *)(pFVar3 + (longlong)(int)uVar13 * 0x18 + 8);
      uVar13 = 0;
      if ((int)uVar12 < iVar1) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TVector<double> *)(*pcVar5)();
          return pTVar10;
        }
      }
      dVar17 = local_38 - *(double *)(pFVar3 + (longlong)(int)uVar12 * 0x18 + 0x10);
      dVar16 = dVar16 - *(double *)(pFVar3 + (longlong)(int)uVar12 * 0x18);
      dVar6 = dVar6 - *(double *)(pFVar3 + (longlong)(int)uVar12 * 0x18 + 8);
      dVar15 = SQRT(dVar6 * dVar6 + dVar16 * dVar16 + dVar17 * dVar17);
      if (dVar15 <= 0.0) {
        local_68 = 0.0;
        local_78 = 0.0;
        dStack_70 = 0.0;
        pdVar11 = &local_78;
      }
      else {
        pdVar11 = &local_78;
        dVar15 = __real_3ff0000000000000 / dVar15;
        local_78 = dVar15 * dVar16;
        dStack_70 = dVar15 * dVar6;
        local_68 = dVar15 * dVar17;
      }
    }
    dVar16 = pdVar11[1];
    pTVar4 = (param_1->Path).SharedReferenceCount.ReferenceController;
    dVar6 = pdVar11[2];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar16;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPolyPathVertex @ 14cebbae0

TVector<double> * __cdecl
UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathVertex
          (TVector<double> *__return_storage_ptr__,FGeometryScriptPolyPath *param_1,int param_2,
          bool *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  
  *param_3 = false;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pTVar3 = (param_1->Path).Object;
  if (((pTVar3 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) &&
      (-1 < param_2)) && (param_2 < pTVar3->ArrayNum)) {
    *param_3 = true;
    if ((param_1->Path).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar6)();
        return pTVar11;
      }
    }
    pTVar3 = (param_1->Path).Object;
    uVar10 = 0;
    if (param_2 < pTVar3->ArrayNum) {
      uVar10 = (uint)~param_2 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar6)();
        return pTVar11;
      }
    }
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    pFVar1 = pFVar4 + (longlong)param_2 * 0x18;
    dVar7 = *(double *)(pFVar1 + 8);
    dVar2 = *(double *)(pFVar4 + (longlong)param_2 * 0x18 + 0x10);
    pTVar5 = (param_1->Path).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Path).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cebcfb0

UClass * __cdecl UGeometryScriptLibrary_PolyPathFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_PolyPathFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_PolyPathFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_PolyPathFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_PolyPathFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions.InnerSingleton;
}

// SampleSplineToTransforms @ 14cec1590

bool __cdecl
UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms
          (USplineComponent *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3,
          FGeometryScriptSplineSamplingOptions *param_4,TTransform<double> *param_5,bool param_6)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  ulong64 uVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  float fVar11;
  undefined1 local_f8;
  undefined1 local_f7 [7];
  TArray<double,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e0;
  USplineComponent **local_d0;
  code *local_c8;
  undefined8 **local_c0;
  code *local_b8;
  undefined1 *local_b0;
  USplineComponent *local_a8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_a0;
  TArray<double,TSizedDefaultAllocator<32>_> *local_98;
  FGeometryScriptSplineSamplingOptions *local_90;
  TTransform<double> *local_88;
  bool local_80;
  undefined1 local_7f;
  FGeometryScriptSplineSamplingOptions local_78 [2];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&param_2->AllocatorInstance,0,piVar1);
  }
  piVar2 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_3->AllocatorInstance,0,piVar2);
  }
  bVar10 = param_4->SampleSpacing == UniformDistance;
  if (param_4->SampleSpacing == ErrorTolerance) {
    bVar10 = param_4->RangeMethod != TimeRange_VariableSpeed;
  }
  if (param_1 != (USplineComponent *)0x0) {
    local_88 = param_5;
    local_80 = param_6;
    local_a8 = param_1;
    local_a0 = param_2;
    local_98 = param_3;
    local_90 = param_4;
    local_7f = bVar10;
    USplineComponent::IsClosedLoop(param_1);
    if (param_4->SampleSpacing == ErrorTolerance) {
      local_78[0].NumSamples = param_4->NumSamples;
      local_78[0].ErrorTolerance = param_4->ErrorTolerance;
      local_78[0].SampleSpacing = param_4->SampleSpacing;
      local_78[0].CoordinateSpace.Value = (param_4->CoordinateSpace).Value;
      local_78[0].RangeMethod = param_4->RangeMethod;
      local_78[0]._11_1_ = param_4->field_0xb;
      local_78[0].RangeStart = param_4->RangeStart;
      local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.ArrayNum = 0;
      local_f0.ArrayMax = 0;
      local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.ArrayNum = 0;
      local_e0.ArrayMax = 0;
      local_78[0].RangeEnd = param_4->RangeEnd;
      UE::Local::SplinePathHelpers::ErrorBasedSampleInRange(param_1,local_78,&local_e0,&local_f0);
      uVar7 = local_f0._8_8_ & 0xffffffff;
      if (local_f0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar7);
      }
      if (*piVar1 < local_f0.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,local_f0.ArrayNum,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1)
        ;
        uVar7 = local_f0._8_8_ & 0xffffffff;
      }
      iVar6 = (int)uVar7;
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar7);
      }
      if (*piVar2 < iVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar6,&param_3->AllocatorInstance,param_3->ArrayNum,piVar2);
        uVar7 = local_f0._8_8_ & 0xffffffff;
      }
      iVar6 = (int)uVar7;
      pFVar3 = local_f0.AllocatorInstance.Data + (longlong)iVar6 * 8;
      FVar9.Data = local_f0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar7 != iVar6) {
          `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_f8);
        }
        if (FVar9.Data == pFVar3) break;
        dVar5 = *(double *)FVar9.Data;
        if (bVar10 == false) {
          fVar11 = USplineComponent::GetTimeAtDistanceAlongSpline(param_1,(float)dVar5);
        }
        else {
          fVar4 = param_1->Duration;
          fVar11 = USplineComponent::GetSplineLength(param_1);
          fVar11 = ((float)dVar5 * fVar4) / fVar11;
        }
        `UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms'::__l2::<lambda_1>::
        operator()(&local_a8,fVar11);
        uVar7 = local_f0._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 8;
      }
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
    }
    else {
      uVar8 = param_4->NumSamples;
      if ((int)uVar8 < 2) {
        uVar8 = 2;
      }
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (param_2->ArrayMax < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax)
        ;
      }
      if (*piVar2 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar2);
      }
      local_d0 = &local_a8;
      local_c0 = &local_d0;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms'::__l17::<lambda_3>,void,float>
                 ::Call;
      local_b0 = local_f7;
      local_b8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms'::__l17::<lambda_2>,void,UE::Math::TVector<double>_const_&>
                 ::Call;
      UE::Local::SplinePathHelpers::IterateSamplesInRange
                (param_1,param_4,false,
                 (TFunctionRef<void___cdecl(UE::Math::TVector<double>_const_&)> *)&local_b8,true,
                 (TFunctionRef<void___cdecl(float)> *)&local_c8);
    }
  }
  return bVar10;
}

// StaticRegisterNativesUGeometryScriptLibrary_PolyPathFunctions @ 14cec2780

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::
StaticRegisterNativesUGeometryScriptLibrary_PolyPathFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x15;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_ArrayOfVector2DToGeometryScriptPolyPath @ 14cec63a0

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execConv_ArrayOfVector2DToGeometryScriptPolyPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_38;
  FGeometryScriptPolyPath local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.bClosedLoop = false;
  pTVar2 = &local_38;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_28.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConvertArrayOfVector2DToPolyPath(pTVar2,&local_28);
  if (param_3 != &local_28) {
    *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)param_3 =
         local_28.Path.Object;
    local_28.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_28.Path.SharedReferenceCount);
  }
  *(bool *)((longlong)param_3 + 0x10) = local_28.bClosedLoop;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Path.SharedReferenceCount.ReferenceController);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execConv_ArrayToGeometryScriptPolyPath @ 14cec65e0

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execConv_ArrayToGeometryScriptPolyPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  bool bVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  FGeometryScriptPolyPath local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.bClosedLoop = false;
  pTVar4 = &local_38;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_28.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptPolyPath::Reset(&local_28,0);
  this = local_28.Path.Object;
  if (local_28.Path.Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(this,pTVar4);
  if (param_3 != &local_28) {
    *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)param_3 = this;
    local_28.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_28.Path.SharedReferenceCount);
  }
  *(bool *)((longlong)param_3 + 0x10) = local_28.bClosedLoop;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Path.SharedReferenceCount.ReferenceController);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execConv_GeometryScriptPolyPathToArray @ 14cec6970

/* WARNING: Removing unreachable block (ram,0x00014cec6a19) */
/* WARNING: Removing unreachable block (ram,0x00014cec6a1e) */

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execConv_GeometryScriptPolyPathToArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  ForAnyElementType *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  ForAnyElementType local_48;
  int local_40 [2];
  ForAnyElementType *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined1 local_28;
  
  local_38 = (ForAnyElementType *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar6 = pTStack_30;
  pFVar5 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTStack_30->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_38 != (ForAnyElementType *)0x0) {
    if ((&local_48 == local_38) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = *(int *)&pFVar5[1].Data;
    if (iVar2 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar2,&local_48,local_40,local_40 + 1);
      memcpy(local_48.Data + (longlong)iVar8 * 0x18,pFVar5->Data,(longlong)iVar2 * 0x18);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data;
    *(int *)((longlong)param_3 + 8) = local_40[0];
    *(int *)((longlong)param_3 + 0xc) = local_40[1];
    local_40[0] = 0;
    local_40[1] = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execConv_GeometryScriptPolyPathToArrayOfVector2D @ 14cec6b60

/* WARNING: Removing unreachable block (ram,0x00014cec6bff) */
/* WARNING: Removing unreachable block (ram,0x00014cec6c06) */

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execConv_GeometryScriptPolyPathToArrayOfVector2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  FProperty *pFVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 local_res10 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined1 local_38;
  
  local_38 = 0;
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar8 = pTStack_40;
  plVar7 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  uVar10 = 0;
  if (local_48 != (longlong *)0x0) {
    uVar3 = *(uint *)(local_48 + 1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3,&local_58,0,(int *)((longlong)&local_50 + 4));
      uVar10 = local_50 & 0xffffffff;
    }
    lVar6 = plVar7[1];
    puVar11 = (undefined8 *)*plVar7;
    puVar2 = puVar11 + (longlong)(int)lVar6 * 3;
    while( true ) {
      iVar9 = (int)uVar10;
      if ((int)plVar7[1] != (int)lVar6) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        iVar9 = (int)local_50;
      }
      if (puVar11 == puVar2) break;
      if (iVar9 == local_50._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar9 + 1U);
      puVar1 = puVar11 + 1;
      uVar5 = *puVar11;
      puVar11 = puVar11 + 3;
      *(undefined8 *)(local_58.Data + (longlong)iVar9 * 0x10 + 8) = *puVar1;
      *(undefined8 *)(local_58.Data + (longlong)iVar9 * 0x10) = uVar5;
      uVar10 = (ulonglong)(iVar9 + 1U);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_50;
    *(int *)((longlong)param_3 + 0xc) = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execConvertArrayOfVector2DToPolyPath @ 14cec7100

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execConvertArrayOfVector2DToPolyPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  FGeometryScriptPolyPath *pFVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_38;
  FGeometryScriptPolyPath local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar1 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  local_28.bClosedLoop = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar4 = &local_38;
  if (pTVar1 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FGeometryScriptPolyPath *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptPolyPath *)0x0) {
    pFVar3 = (FGeometryScriptPolyPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConvertArrayOfVector2DToPolyPath(pTVar4,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Path.SharedReferenceCount.ReferenceController);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execConvertArrayToPolyPath @ 14cec7210

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execConvertArrayToPolyPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  FGeometryScriptPolyPath *this;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  FGeometryScriptPolyPath local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar1 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  local_28.bClosedLoop = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_38;
  if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FGeometryScriptPolyPath *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptPolyPath *)0x0) {
    this = (FGeometryScriptPolyPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptPolyPath::Reset(this,0);
  if ((this->Path).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>((this->Path).Object,pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Path.SharedReferenceCount.ReferenceController);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execConvertPolyPathToArray @ 14cec7750

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execConvertPolyPathToArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_28 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar3 = pTStack_20;
  pTVar2 = local_28;
  this = &local_38;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ArrayNum = 0;
  if (this->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&this->AllocatorInstance,0,&this->ArrayMax);
  }
  if (pTVar2 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
    Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(this,pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execConvertPolyPathToArrayOfVector2D @ 14cec78b0

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execConvertPolyPathToArrayOfVector2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  FProperty *pFVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  int iVar11;
  undefined8 *puVar12;
  ForAnyElementType *pFVar13;
  undefined1 local_res10 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined1 local_38;
  
  local_38 = 0;
  local_48 = (longlong *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar10 = pTStack_40;
  plVar9 = local_48;
  pFVar13 = &local_58;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar13 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar11 = *(int *)((longlong)&pFVar13[1].Data + 4);
  piVar1 = (int *)((longlong)&pFVar13[1].Data + 4);
  *(undefined4 *)&pFVar13[1].Data = 0;
  if (iVar11 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,pFVar13,0,piVar1);
  }
  if (plVar9 != (longlong *)0x0) {
    uVar4 = *(uint *)(plVar9 + 1);
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar4,pFVar13,*(int *)&pFVar13[1].Data,piVar1);
    }
    lVar8 = plVar9[1];
    puVar12 = (undefined8 *)*plVar9;
    puVar3 = puVar12 + (longlong)(int)lVar8 * 3;
    while( true ) {
      if ((int)plVar9[1] != (int)lVar8) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar12 == puVar3) break;
      iVar11 = *(int *)&pFVar13[1].Data;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,pFVar13,piVar1);
      }
      *(int *)&pFVar13[1].Data = iVar11 + 1;
      puVar2 = puVar12 + 1;
      uVar6 = *puVar12;
      puVar12 = puVar12 + 3;
      pFVar7 = pFVar13->Data;
      *(undefined8 *)(pFVar7 + (longlong)iVar11 * 0x10 + 8) = *puVar2;
      *(undefined8 *)(pFVar7 + (longlong)iVar11 * 0x10) = uVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execConvertSplineToPolyPath @ 14cec7ac0

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execConvertSplineToPolyPath
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  USplineComponent *this;
  undefined2 uVar7;
  char cVar8;
  float fVar9;
  bool bVar10;
  FGeometryScriptPolyPath *this_00;
  undefined1 local_res10 [16];
  USplineComponent *local_res20;
  uint local_e8;
  undefined4 uStack_e4;
  undefined2 uStack_e0;
  char cStack_de;
  undefined1 uStack_dd;
  undefined4 uStack_dc;
  float local_d8;
  TArray<double,TSizedDefaultAllocator<32>_> local_d0;
  FGeometryScriptPolyPath *local_c0;
  undefined1 local_b8 [16];
  float local_a8;
  FGeometryScriptPolyPath local_98;
  code *local_80;
  undefined1 *local_78;
  code *local_70;
  FGeometryScriptPolyPath **local_68;
  undefined1 local_58 [16];
  float local_48;
  
  local_res20 = (USplineComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_98.bClosedLoop = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_98.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_98.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_e8 = 10;
  uStack_e4 = 0x3f800000;
  this_00 = &local_98;
  if ((FGeometryScriptPolyPath *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptPolyPath *)0x0) {
    this_00 = (FGeometryScriptPolyPath *)param_2->MostRecentPropertyAddress;
  }
  uStack_e0 = 0;
  cStack_de = '\0';
  uStack_dc = 0;
  local_d8 = 1.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  fVar9 = local_d8;
  cVar8 = cStack_de;
  uVar7 = uStack_e0;
  uVar5 = local_e8;
  this = local_res20;
  auVar6._4_4_ = uStack_e4;
  auVar6._0_4_ = local_e8;
  auVar6._8_2_ = uStack_e0;
  auVar6[10] = cStack_de;
  auVar6[0xb] = uStack_dd;
  auVar6._12_4_ = uStack_dc;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8 = local_d8;
  local_b8 = auVar6;
  FGeometryScriptPolyPath::Reset(this_00,0);
  if (this != (USplineComponent *)0x0) {
    bVar10 = USplineComponent::IsClosedLoop(this);
    if ((bVar10) && (cVar8 == '\0')) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    this_00->bClosedLoop = bVar10;
    pTVar3 = (this_00->Path).Object;
    if ((char)uVar7 == '\x02') {
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      if (pTVar3 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_48 = fVar9;
      local_58 = auVar6;
      UE::Local::SplinePathHelpers::ErrorBasedSampleInRange
                (this,(FGeometryScriptSplineSamplingOptions *)local_58,(this_00->Path).Object,
                 &local_d0);
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
    }
    else {
      if ((int)uVar5 < 2) {
        uVar5 = 2;
      }
      if (pTVar3 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar3 = (this_00->Path).Object;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if (pTVar3->ArrayMax < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar5,&pTVar3->AllocatorInstance,pTVar3->ArrayNum,&pTVar3->ArrayMax);
      }
      local_78 = local_res10;
      local_80 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath'::__l10::<lambda_2>,void,float>
                 ::Call;
      local_68 = &local_c0;
      local_70 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath'::__l10::<lambda_1>,void,UE::Math::TVector<double>_const_&>
                 ::Call;
      local_c0 = this_00;
      UE::Local::SplinePathHelpers::IterateSamplesInRange
                (this,(FGeometryScriptSplineSamplingOptions *)local_b8,true,
                 (TFunctionRef<void___cdecl(UE::Math::TVector<double>_const_&)> *)&local_70,false,
                 (TFunctionRef<void___cdecl(float)> *)&local_80);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.Path.SharedReferenceCount.ReferenceController);
  return;
}

// execCreateArcPath2D @ 14cec9120

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execCreateArcPath2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar10;
  float local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  float local_108 [2];
  FGeometryScriptPolyPath local_100;
  double local_e8;
  double dStack_e0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_d8;
  TTransform<double> local_c8;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_108[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
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
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar7 = local_108[0];
  iVar6 = local_res20[0];
  fVar5 = local_res18[0];
  fVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_100.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_100.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_100.bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(&local_100,0);
  local_100.bClosedLoop = false;
  local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_c8.Translation.XY.m128d_f64[0] = local_e8;
  local_c8.Translation.XY.m128d_f64[1] = dStack_e0;
  local_c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  pTVar10 = PolyPathInternal::CreateArcPoints(&local_d8,&local_c8,fVar7,iVar6,fVar5,fVar4,true);
  pTVar8 = local_100.Path.Object;
  if (local_100.Path.Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar8 != pTVar10) {
    pFVar2 = (pTVar8->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar8->ArrayNum = pTVar10->ArrayNum;
    pTVar8->ArrayMax = pTVar10->ArrayMax;
    pTVar10->ArrayNum = 0;
    pTVar10->ArrayMax = 0;
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (param_3 != &local_100) {
    *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)param_3 = pTVar8;
    local_100.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_100.Path.SharedReferenceCount)
    ;
  }
  *(bool *)((longlong)param_3 + 0x10) = local_100.bClosedLoop;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.Path.SharedReferenceCount.ReferenceController);
  return;
}

// execCreateArcPath3D @ 14cec9410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execCreateArcPath3D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar22;
  undefined1 auStackY_1f8 [32];
  float local_1b8;
  float local_1b4;
  int local_1b0;
  float local_1ac;
  FGeometryScriptPolyPath local_1a8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_190;
  TTransform<double> local_178;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_1ac = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1ac,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1ac);
  }
  local_1b0 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1b4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b4);
  }
  local_1b8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  dVar20 = dStack_c0;
  dVar19 = local_c8;
  dVar16 = dStack_e0;
  dVar15 = local_e8;
  dVar12 = dStack_100;
  dVar11 = local_108;
  dVar10 = dStack_110;
  dVar9 = local_118;
  fVar7 = local_1ac;
  iVar6 = local_1b0;
  fVar5 = local_1b4;
  fVar4 = local_1b8;
  uVar13 = local_f8._0_8_;
  uVar14 = local_f8._8_8_;
  uVar17 = local_d8._0_8_;
  uVar18 = local_d8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1a8.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_1a8.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1a8.bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(&local_1a8,0);
  local_1a8.bClosedLoop = false;
  local_178.Rotation.XY.m128d_f64[0] = dVar9;
  local_178.Rotation.XY.m128d_f64[1] = dVar10;
  local_178.Rotation.ZW.m128d_f64[0] = dVar11;
  local_178.Rotation.ZW.m128d_f64[1] = dVar12;
  local_178.Translation.XY.m128d_f64[0] = (double)uVar13;
  local_178.Translation.XY.m128d_f64[1] = (double)uVar14;
  local_178.Translation.ZW.m128d_f64[0] = dVar15;
  local_178.Translation.ZW.m128d_f64[1] = dVar16;
  local_178.Scale3D.XY.m128d_f64[0] = (double)uVar17;
  local_178.Scale3D.XY.m128d_f64[1] = (double)uVar18;
  local_178.Scale3D.ZW.m128d_f64[0] = dVar19;
  local_178.Scale3D.ZW.m128d_f64[1] = dVar20;
  pTVar22 = PolyPathInternal::CreateArcPoints(&local_190,&local_178,fVar7,iVar6,fVar5,fVar4,true);
  pTVar8 = local_1a8.Path.Object;
  if (local_1a8.Path.Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar21) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar8 != pTVar22) {
    pFVar2 = (pTVar8->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar22->AllocatorInstance).Data;
    (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar8->ArrayNum = pTVar22->ArrayNum;
    pTVar8->ArrayMax = pTVar22->ArrayMax;
    pTVar22->ArrayNum = 0;
    pTVar22->ArrayMax = 0;
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  if (param_3 != &local_1a8) {
    *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)param_3 = pTVar8;
    local_1a8.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_1a8.Path.SharedReferenceCount)
    ;
  }
  *(bool *)((longlong)param_3 + 0x10) = local_1a8.bClosedLoop;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.Path.SharedReferenceCount.ReferenceController);
  return;
}

// execCreateCirclePath2D @ 14cec97b0

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execCreateCirclePath2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  float fVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  int local_res10 [2];
  float local_res18 [2];
  FGeometryScriptPolyPath local_e8;
  double local_c8;
  double dStack_c0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b8;
  TTransform<double> local_a8;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar5 = local_res18[0];
  iVar4 = local_res10[0];
  local_e8.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_e8.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(&local_e8,0);
  local_e8.bClosedLoop = true;
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[0] = local_c8;
  local_a8.Translation.XY.m128d_f64[1] = dStack_c0;
  local_a8.Translation.ZW.m128d_f64[0] = 0.0;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pTVar8 = PolyPathInternal::CreateArcPoints
                     (&local_b8,&local_a8,fVar5,iVar4,0.0,__real_43b40000,false);
  pTVar6 = local_e8.Path.Object;
  if (local_e8.Path.Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar6 != pTVar8) {
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar6->ArrayNum = pTVar8->ArrayNum;
    pTVar6->ArrayMax = pTVar8->ArrayMax;
    pTVar8->ArrayNum = 0;
    pTVar8->ArrayMax = 0;
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (param_3 != &local_e8) {
    *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)param_3 = pTVar6;
    local_e8.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_e8.Path.SharedReferenceCount);
  }
  *(bool *)((longlong)param_3 + 0x10) = local_e8.bClosedLoop;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.Path.SharedReferenceCount.ReferenceController);
  return;
}

// execCreateCirclePath3D @ 14cec9a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execCreateCirclePath3D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  float fVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined1 auStackY_1d8 [32];
  int local_198;
  float local_194;
  FGeometryScriptPolyPath local_190;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_178;
  TTransform<double> local_168;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_194 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_194,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_194);
  }
  local_198 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  fVar5 = local_194;
  iVar4 = local_198;
  uVar7 = local_108._0_8_;
  uVar8 = local_108._8_8_;
  uVar9 = local_f8._0_8_;
  uVar10 = local_f8._8_8_;
  uVar11 = local_e8._0_8_;
  uVar12 = local_e8._8_8_;
  uVar13 = local_d8._0_8_;
  uVar14 = local_d8._8_8_;
  uVar15 = local_c8._0_8_;
  uVar16 = local_c8._8_8_;
  uVar17 = local_b8._0_8_;
  uVar18 = local_b8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_190.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_190.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_190.bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(&local_190,0);
  local_190.bClosedLoop = true;
  local_168.Rotation.XY.m128d_f64[0] = (double)uVar7;
  local_168.Rotation.XY.m128d_f64[1] = (double)uVar8;
  local_168.Rotation.ZW.m128d_f64[0] = (double)uVar9;
  local_168.Rotation.ZW.m128d_f64[1] = (double)uVar10;
  local_168.Translation.XY.m128d_f64[0] = (double)uVar11;
  local_168.Translation.XY.m128d_f64[1] = (double)uVar12;
  local_168.Translation.ZW.m128d_f64[0] = (double)uVar13;
  local_168.Translation.ZW.m128d_f64[1] = (double)uVar14;
  local_168.Scale3D.XY.m128d_f64[0] = (double)uVar15;
  local_168.Scale3D.XY.m128d_f64[1] = (double)uVar16;
  local_168.Scale3D.ZW.m128d_f64[0] = (double)uVar17;
  local_168.Scale3D.ZW.m128d_f64[1] = (double)uVar18;
  pTVar20 = PolyPathInternal::CreateArcPoints
                      (&local_178,&local_168,fVar5,iVar4,0.0,__real_43b40000,false);
  pTVar6 = local_190.Path.Object;
  if (local_190.Path.Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar19) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar6 != pTVar20) {
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar20->AllocatorInstance).Data;
    (pTVar20->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar6->ArrayNum = pTVar20->ArrayNum;
    pTVar6->ArrayMax = pTVar20->ArrayMax;
    pTVar20->ArrayNum = 0;
    pTVar20->ArrayMax = 0;
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  if (param_3 != &local_190) {
    *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)param_3 = pTVar6;
    local_190.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_190.Path.SharedReferenceCount)
    ;
  }
  *(bool *)((longlong)param_3 + 0x10) = local_190.bClosedLoop;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.Path.SharedReferenceCount.ReferenceController);
  return;
}

// execFlattenTo2DOnAxis @ 14cecb560

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execFlattenTo2DOnAxis
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  char cVar4;
  FSharedReferencer<1> FVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined1 uVar8;
  longlong lVar9;
  atomic<int> *paVar10;
  FScriptContainerElement *pFVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  char local_res10 [8];
  undefined1 local_res18 [16];
  FGeometryScriptPolyPath local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  undefined1 local_40;
  
  local_50 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_48 = (TReferenceControllerBase<1> *)0x0;
  local_40 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar8 = local_40;
  pTVar7 = pTStack_48;
  pTVar6 = local_50;
  cVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_48 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar10 = &pTStack_48->SharedReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_68.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_68.Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_68.bClosedLoop = false;
  FGeometryScriptPolyPath::Reset(&local_68,0);
  FVar5.ReferenceController = local_68.Path.SharedReferenceCount.ReferenceController;
  pTVar12 = local_68.Path.Object;
  if (pTVar6 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_68.bClosedLoop = (bool)uVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_68.Path.SharedReferenceCount.ReferenceController = pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    iVar2 = pTVar6->ArrayNum;
    pFVar11 = (pTVar6->AllocatorInstance).Data;
    pFVar1 = pFVar11 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (pTVar6->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      pTVar12 = pTVar6;
      if (pFVar11 == pFVar1) break;
      lVar9 = 0;
      if (cVar4 == '\0') {
        lVar9 = 8;
      }
      *(undefined8 *)pFVar11 = *(undefined8 *)(pFVar11 + lVar9);
      lVar9 = 8;
      if (cVar4 != '\x02') {
        lVar9 = 0x10;
      }
      *(undefined8 *)(pFVar11 + 8) = *(undefined8 *)(pFVar11 + lVar9);
      *(undefined8 *)(pFVar11 + 0x10) = 0;
      pFVar11 = pFVar11 + 0x18;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (param_3 != &local_68) {
    *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)param_3 = pTVar12;
    local_68.Path.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&local_68.Path.SharedReferenceCount);
  }
  *(bool *)((longlong)param_3 + 0x10) = local_68.bClosedLoop;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Path.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  return;
}

// execGetNearestVertexIndex @ 14cecc960

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execGetNearestVertexIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  double *pdVar15;
  undefined4 uVar16;
  double dVar17;
  undefined4 uVar18;
  longlong *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined1 local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  
  local_a8 = 0;
  local_b8 = (longlong *)0x0;
  pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar6 = pTStack_b0;
  local_90 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a0 = local_88;
  dStack_98 = dStack_80;
  if (pTStack_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_b0->SharedReferenceCount = (atomic<int>)((int)pTStack_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_b8 == (longlong *)0x0) {
    uVar11 = 0xffffffff;
  }
  else {
    iVar1 = (int)local_b8[1];
    lVar13 = (longlong)iVar1;
    lVar3 = *local_b8;
    if ((iVar1 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar9 = local_90;
    dVar8 = dStack_98;
    dVar7 = local_a0;
    uVar16 = (undefined4)__real_7fefffffffffffff;
    uVar18 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar12 = 0;
    uVar11 = 0xffffffff;
    if (0 < iVar1) {
      pdVar15 = (double *)(lVar3 + 0x10);
      uVar14 = 0xffffffff;
      do {
        uVar11 = 0;
        if ((int)uVar12 < iVar1) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar17 = (dVar8 - pdVar15[-1]) * (dVar8 - pdVar15[-1]) +
                 (dVar7 - pdVar15[-2]) * (dVar7 - pdVar15[-2]) +
                 (dVar9 - *pdVar15) * (dVar9 - *pdVar15);
        bVar10 = (double)CONCAT44(uVar18,uVar16) == dVar17;
        bVar4 = (double)CONCAT44(uVar18,uVar16) < dVar17;
        if ((double)CONCAT44(uVar18,uVar16) <= dVar17) {
          dVar17 = (double)CONCAT44(uVar18,uVar16);
        }
        uVar11 = uVar12;
        if (bVar4 || bVar10) {
          uVar11 = uVar14;
        }
        uVar12 = uVar12 + 1;
        pdVar15 = pdVar15 + 3;
        uVar16 = SUB84(dVar17,0);
        uVar18 = (undefined4)((ulonglong)dVar17 >> 0x20);
        lVar13 = lVar13 + -1;
        uVar14 = uVar11;
      } while (lVar13 != 0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(uint *)param_3 = uVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  return;
}

// execGetPolyPathArcLength @ 14cecd560

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathArcLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  double dVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  TArrayView<UE::Math::TVector<double>_const_,int> local_48;
  undefined8 *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  bool local_28;
  
  local_38 = (undefined8 *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = false;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  bVar6 = local_28;
  pTVar5 = pTStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_38 == (undefined8 *)0x0) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    local_48.DataPtr = (TVector<double> *)*local_38;
    iVar1 = *(int *)(local_38 + 1);
    if (iVar1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_48.ArrayNum = iVar1;
    dVar4 = UE::Geometry::CurveUtil::ArcLength<double,UE::Math::TVector<double>_>(&local_48,bVar6);
    uVar8 = SUB84(dVar4,0);
    uVar9 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(ulonglong *)param_3 = CONCAT44(uVar9,uVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execGetPolyPathLastIndex @ 14cecd690

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathLastIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  longlong local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar3 = 0;
  if ((local_28 != 0) && (iVar2 = *(int *)(local_28 + 8) + -1, 0 < iVar2)) {
    iVar3 = iVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  *(int *)param_3 = iVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execGetPolyPathNumVertices @ 14cecd750

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathNumVertices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  longlong local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  uVar2 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_28 != 0) {
    uVar2 = *(undefined4 *)(local_28 + 8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  *(undefined4 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execGetPolyPathTangent @ 14cecd810

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathTangent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined4 *puVar2;
  double *pdVar3;
  int iVar4;
  FProperty *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  TReferenceControllerBase<1> *pTVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uchar *puVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uchar local_res10 [8];
  int local_res18 [4];
  longlong *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  char local_98;
  double local_80;
  
  local_a8 = (longlong *)0x0;
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  local_98 = '\0';
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar15 = local_98;
  pTVar14 = pTStack_a0;
  iVar13 = local_res18[0];
  puVar20 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar20 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_a0->SharedReferenceCount = (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  *puVar20 = '\0';
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (((local_a8 != (longlong *)0x0) && (-1 < iVar13)) && (iVar13 < (int)local_a8[1])) {
    *puVar20 = '\x01';
    lVar6 = *local_a8;
    iVar4 = (int)local_a8[1];
    if ((iVar4 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar18 = iVar13 + 1;
    uVar21 = 0;
    if (cVar15 == '\0') {
      if ((int)(iVar4 - 1U) < (int)uVar18) {
        uVar18 = iVar4 - 1U;
      }
      uVar19 = iVar13 - 1U;
      if ((int)(iVar13 - 1U) < 0) {
        uVar19 = 0;
      }
      uVar17 = uVar21;
      if ((int)uVar18 < iVar4) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_80 = *(double *)(lVar6 + 0x10 + (longlong)(int)uVar18 * 0x18);
      puVar2 = (undefined4 *)(lVar6 + (longlong)(int)uVar18 * 0x18);
      uVar25 = *puVar2;
      uVar26 = puVar2[1];
      uVar27 = puVar2[2];
      uVar28 = puVar2[3];
      if ((int)uVar19 < iVar4) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      uVar18 = (int)uVar18 % iVar4;
      uVar19 = (iVar13 + -1 + iVar4) % iVar4;
      uVar17 = 0;
      if ((int)uVar18 < iVar4) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_80 = *(double *)(lVar6 + 0x10 + (longlong)(int)uVar18 * 0x18);
      puVar2 = (undefined4 *)(lVar6 + (longlong)(int)uVar18 * 0x18);
      uVar25 = *puVar2;
      uVar26 = puVar2[1];
      uVar27 = puVar2[2];
      uVar28 = puVar2[3];
      if ((int)uVar19 < iVar4) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pdVar3 = (double *)(lVar6 + (longlong)(int)uVar19 * 0x18);
    dVar23 = local_80 - *(double *)(lVar6 + 0x10 + (longlong)(int)uVar19 * 0x18);
    dVar22 = (double)CONCAT44(uVar26,uVar25) - *pdVar3;
    dVar9 = (double)CONCAT44(uVar28,uVar27) - pdVar3[1];
    dVar24 = SQRT(dVar9 * dVar9 + dVar22 * dVar22 + dVar23 * dVar23);
    if (dVar24 <= 0.0) {
      uVar10 = 0.0;
      uVar11 = 0.0;
      uVar12 = 0.0;
    }
    else {
      dVar24 = __real_3ff0000000000000 / dVar24;
      uVar10 = dVar24 * dVar22;
      uVar11 = dVar24 * dVar9;
      uVar12 = dVar24 * dVar23;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  auVar8._8_4_ = (int)uVar11;
  auVar8._0_8_ = uVar10;
  auVar8._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar8;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  return;
}

// execGetPolyPathVertex @ 14cecdc00

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathVertex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  FProperty *pFVar4;
  code *pcVar5;
  uint uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  uchar *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uchar local_res10 [8];
  uint local_res18 [4];
  longlong *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58;
  
  local_68 = (longlong *)0x0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  local_58 = 0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
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
  pTVar8 = pTStack_60;
  plVar7 = local_68;
  uVar6 = local_res18[0];
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar11 = (longlong)(int)local_res18[0];
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  *puVar10 = '\0';
  if (((local_68 == (longlong *)0x0) || ((int)uVar6 < 0)) || ((int)local_68[1] <= (int)uVar6)) {
    uVar17 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar18 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    *puVar10 = '\x01';
    uVar12 = 0;
    if ((int)uVar6 < (int)local_68[1]) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if (uVar12 == 0) {
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
    puVar2 = (undefined4 *)(*plVar7 + lVar11 * 0x18);
    uVar3 = *(undefined8 *)(*plVar7 + 0x10 + lVar11 * 0x18);
    uVar17 = (undefined4)uVar3;
    uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
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
  *(ulonglong *)((longlong)param_3 + 0x10) = CONCAT44(uVar18,uVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// execSampleSplineToTransforms @ 14ced5080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_PolyPathFunctions::execSampleSplineToTransforms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 auStackY_198 [32];
  int local_168 [2];
  int local_160;
  float fStack_15c;
  undefined2 uStack_158;
  undefined1 uStack_156;
  undefined1 uStack_155;
  float fStack_154;
  float local_150;
  USplineComponent *local_148;
  TArray<double,TSizedDefaultAllocator<32>_> local_140;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_130;
  FGeometryScriptSplineSamplingOptions local_118;
  TTransform<double> local_f8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148 = (USplineComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  pTVar4 = &local_130;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_160 = 10;
  fStack_15c = 1.0;
  pTVar3 = &local_140;
  if ((TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  uStack_158 = 0;
  uStack_156 = 0;
  fStack_154 = 0.0;
  local_150 = 1.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
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
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_168[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_f8.Rotation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_f8.Rotation.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_f8.Translation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_f8.Translation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_f8.Rotation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_118.RangeEnd = local_150;
  local_f8.Scale3D.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_f8.Scale3D.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_118.ErrorTolerance = fStack_15c;
  local_118.NumSamples = local_160;
  local_118.RangeMethod = uStack_156;
  local_118.SampleSpacing = (undefined1)uStack_158;
  local_118.CoordinateSpace.Value = uStack_158._1_1_;
  local_118._11_1_ = uStack_155;
  local_118.RangeStart = fStack_154;
  local_f8.Translation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_f8.Translation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)local_48._8_8_;
  bVar2 = SampleSplineToTransforms(local_148,pTVar4,pTVar3,&local_118,&local_f8,local_168[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  return;
}

